/-
Copyright (c) 2023 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Scott Morrison
-/
import Lean.Replay
import REPL.Util.Pickle

open Lean Elab

namespace REPL

/--
Bundled structure for the `State` and `Context` objects
for the `CommandElabM` monad.
-/
structure CommandSnapshot where
  cmdState     : Command.State
  cmdContext   : Command.Context

namespace CommandSnapshot

open Lean.Elab.Command in
/-- A copy of `Command.State` with the `Environment`, caches, and logging omitted. -/
structure CompactableCommandSnapshot where
  -- env         : Environment
  scopes         : List Scope := [{ header := "" }]
  nextMacroScope : Nat     := firstFrontendMacroScope + 1
  maxRecDepth    : Nat
  nextInstIdx    : Nat := 1 -- for generating anonymous instance names
  ngen           : NameGenerator  := {}
  -- infoState   : InfoState := {}
  -- traceState  : TraceState := {}
  -- messages    : MessageLog := {}

open System (FilePath)

/--
Pickle a `CommandSnapshot`, discarding closures and non-essential caches.

When pickling the `Environment`, we do so relative to its imports.
-/
def pickle (p : CommandSnapshot) (path : FilePath) : IO Unit := do
  let env := p.cmdState.env
  let p' := { p with cmdState := { p.cmdState with env := ← mkEmptyEnvironment }}
  _root_.pickle path
    (env.header.imports,
     env.constants.map₂,
     ({ p'.cmdState with } : CompactableCommandSnapshot),
     p'.cmdContext)

/--
Unpickle a `CommandSnapshot`.
-/
def unpickle (path : FilePath) : IO (CommandSnapshot × CompactedRegion) := unsafe do
  let ((imports, map₂, cmdState, cmdContext), region) ←
    _root_.unpickle (Array Import × PHashMap Name ConstantInfo × CompactableCommandSnapshot ×
      Command.Context) path
  let env ← (← importModules imports {} 0).replay (HashMap.ofList map₂.toList)
  let p' :=
  { cmdState := { cmdState with env }
    cmdContext }
  return (p', region)

end CommandSnapshot

/--
Bundled structure for the `State` and `Context` objects
for the `CoreM`, `MetaM`, `TermElabM`, and `TacticM` monads.
-/
structure ProofSnapshot where
  coreState     : Core.State
  coreContext   : Core.Context
  metaState     : Meta.State
  metaContext   : Meta.Context
  termState     : Term.State
  termContext   : Term.Context
  tacticState   : Tactic.State
  tacticContext : Tactic.Context

namespace ProofSnapshot

open Lean Elab Tactic

/-- New messages in a `ProofSnapshot`, relative to an optional previous `ProofSnapshot`. -/
def newMessages (new : ProofSnapshot) (old? : Option ProofSnapshot := none) : List Lean.Message :=
  match old? with
  | none => new.coreState.messages.msgs.toList
  | some old => new.coreState.messages.msgs.toList.drop (old.coreState.messages.msgs.size)

/-- Run a `CoreM` monadic function in the current `ProofSnapshot`, updating the `Core.State`. -/
def runCoreM (p : ProofSnapshot) (t : CoreM α) : IO (α × ProofSnapshot) := do
  let (a, coreState) ← (Lean.Core.CoreM.toIO · p.coreContext p.coreState) do t
  return (a, { p with coreState })

/-- Run a `MetaM` monadic function in the current `ProofSnapshot`, updating the `Meta.State`. -/
def runMetaM (p : ProofSnapshot) (t : MetaM α) : IO (α × ProofSnapshot) := do
  let ((a, metaState), p') ←
    p.runCoreM (Lean.Meta.MetaM.run (ctx := p.metaContext) (s := p.metaState) do t)
  return (a, { p' with metaState })

/-- Run a `TermElabM` monadic function in the current `ProofSnapshot`, updating the `Term.State`. -/
def runTermElabM (p : ProofSnapshot) (t : TermElabM α) : IO (α × ProofSnapshot) := do
  let ((a, termState), p') ← p.runMetaM (Lean.Elab.Term.TermElabM.run (s := p.termState) do t)
  return (a, { p' with termState })

/-- Run a `TacticM` monadic function in the current `ProofSnapshot`, updating the `Tactic.State`. -/
def runTacticM (p : ProofSnapshot) (t : TacticM α) : IO (α × ProofSnapshot) := do
  let ((a, tacticState), p') ← p.runTermElabM (t p.tacticContext |>.run p.tacticState)
  return (a, { p' with tacticState })

/--
Run a `TacticM` monadic function in the current `ProofSnapshot`, updating the `Tactic.State`,
and discarding the return value.
-/
def runTacticM' (p : ProofSnapshot) (t : TacticM α) : IO ProofSnapshot :=
  Prod.snd <$> p.runTacticM t

/--
Evaluate a `Syntax` into a `TacticM` tactic, and run it in the current `ProofSnapshot`.
-/
def runSyntax (p : ProofSnapshot) (t : Syntax) : IO ProofSnapshot :=
  Prod.snd <$> p.runTacticM (evalTactic t)

/--
Parse a string into a `Syntax`, evaluate it as a `TacticM` tactic,
and run it in the current `ProofSnapshot`.
-/
def runString (p : ProofSnapshot) (t : String) : IO ProofSnapshot :=
  match Parser.runParserCategory p.coreState.env `tactic t with
  | .error e => throw (IO.userError e)
  | .ok stx => p.runSyntax stx

/-- Pretty print the current goals in the `ProofSnapshot`. -/
def ppGoals (p : ProofSnapshot) : IO (List Format) :=
  Prod.fst <$> p.runTacticM do (← getGoals).mapM (Meta.ppGoal ·)

/--
Construct a `ProofSnapshot` from a `ContextInfo` and optional `LocalContext`, and a list of goals.

For convenience, we also allow a list of `Expr`s, and these are appended to the goals
as fresh metavariables with the given types.
-/
def create (ctx : ContextInfo) (lctx? : Option LocalContext)
    (goals : List MVarId) (types : List Expr := []) : IO ProofSnapshot := do
  ctx.runMetaM (lctx?.getD {}) do
    let goals := goals ++ (← types.mapM fun t => Expr.mvarId! <$> Meta.mkFreshExprMVar (some t))
    pure <|
    { coreState := ← getThe Core.State
      coreContext := ← readThe Core.Context
      metaState := ← getThe Meta.State
      metaContext := ← readThe Meta.Context
      termState := {}
      termContext := {}
      tacticState := { goals }
      tacticContext := { elaborator := .anonymous } }

open Lean.Core in
/-- A copy of `Core.State` with the `Environment`, caches, and logging omitted. -/
structure CompactableCoreState where
  -- env             : Environment
  nextMacroScope  : MacroScope     := firstFrontendMacroScope + 1
  ngen            : NameGenerator  := {}
  -- traceState      : TraceState     := {}
  -- cache           : Core.Cache     := {}
  -- messages        : MessageLog     := {}
  -- infoState       : Elab.InfoState := {}

open Lean.Meta in
/-- A copy of `Meta.Context` with closures omitted. -/
structure CompactableMetaContext where
  config            : Config               := {}
  lctx              : LocalContext         := {}
  localInstances    : LocalInstances       := #[]
  defEqCtx?         : Option DefEqContext  := none
  synthPendingDepth : Nat                  := 0
  -- canUnfold?        : Option (Config → ConstantInfo → CoreM Bool) := none

/-- A copy of `Term.Context` with closures and a cache omitted. -/
structure CompactableTermContext where
  declName? : Option Name := none
  auxDeclToFullName : FVarIdMap Name  := {}
  macroStack        : MacroStack      := []
  mayPostpone : Bool := true
  errToSorry : Bool := true
  autoBoundImplicit  : Bool            := false
  autoBoundImplicits : PArray Expr := {}
  -- autoBoundImplicitForbidden : Name → Bool := fun _ => false
  sectionVars        : NameMap Name    := {}
  sectionFVars       : NameMap Expr    := {}
  implicitLambda     : Bool            := true
  isNoncomputableSection : Bool        := false
  ignoreTCFailures : Bool := false
  inPattern        : Bool := false
  -- tacticCache?     : Option (IO.Ref Tactic.Cache) := none
  saveRecAppSyntax : Bool := true
  holesAsSyntheticOpaque : Bool := false

open System (FilePath)

/--
Pickle a `ProofSnapshot`, discarding closures and non-essential caches.

When pickling the `Environment`, we do so relative to its imports.
-/
def pickle (p : ProofSnapshot) (path : FilePath) : IO Unit := do
  let env := p.coreState.env
  let p' := { p with coreState := { p.coreState with env := ← mkEmptyEnvironment }}
  _root_.pickle path
    (env.header.imports,
     env.constants.map₂,
     ({ p'.coreState with } : CompactableCoreState),
     p'.coreContext,
     p'.metaState,
     ({ p'.metaContext with } : CompactableMetaContext),
     p'.termState,
     ({ p'.termContext with } : CompactableTermContext),
     p'.tacticState,
     p'.tacticContext)

/--
Unpickle a `ProofSnapshot`.
-/
def unpickle (path : FilePath) : IO (ProofSnapshot × CompactedRegion) := unsafe do
  let ((imports, map₂, coreState, coreContext, metaState, metaContext, termState, termContext,
    tacticState, tacticContext), region) ←
    _root_.unpickle (Array Import × PHashMap Name ConstantInfo × CompactableCoreState ×
      Core.Context × Meta.State × CompactableMetaContext × Term.State × CompactableTermContext ×
      Tactic.State × Tactic.Context) path
  let env ← (← importModules imports {} 0).replay (HashMap.ofList map₂.toList)
  let p' :=
  { coreState := { coreState with env }
    coreContext
    metaState
    metaContext := { metaContext with }
    termState
    termContext := { termContext with }
    tacticState
    tacticContext }
  return (p', region)

end ProofSnapshot
