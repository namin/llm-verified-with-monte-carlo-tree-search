/-
Copyright (c) 2023 Scott Morrison. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Scott Morrison
-/
import Lean

/-!
Additional functions to deal with `InfoTree`.
-/

open Lean Elab Meta

namespace Lean.Syntax

/-- Check if a `Syntax` is an explicit invocation of the `sorry` tactic. -/
def isSorryTactic (stx : Syntax) : Bool :=
  s!"{stx}" = "(Tactic.tacticSorry \"sorry\")"

/-- Check if a `Syntax` is an explicit `sorry` term. -/
def isSorryTerm (stx : Syntax) : Bool :=
  s!"{stx}" = "(Term.sorry \"sorry\")"

end Lean.Syntax

namespace Lean.Elab

/-- Extract the range of a `Syntax` expressed as lines and columns. -/
-- Extracted from the private declaration `Lean.Elab.formatStxRange`,
-- in `Lean.Elab.InfoTree.Main`.
def stxRange (fileMap : FileMap) (stx : Syntax) : Position × Position :=
  let pos    := stx.getPos?.getD 0
  let endPos := stx.getTailPos?.getD pos
  (fileMap.toPosition pos, fileMap.toPosition endPos)

end Lean.Elab

namespace Lean.Elab.Info

/-- The type of a `Lean.Elab.Info`, as a string. -/
def kind : Info → String
  | .ofTacticInfo         _ => "TacticInfo"
  | .ofTermInfo           _ => "TermInfo"
  | .ofCommandInfo        _ => "CommmandInfo"
  | .ofMacroExpansionInfo _ => "MacroExpansionInfo"
  | .ofOptionInfo         _ => "OptionInfo"
  | .ofFieldInfo          _ => "FieldInfo"
  | .ofCompletionInfo     _ => "CompletionInfo"
  | .ofUserWidgetInfo     _ => "UserWidgetInfo"
  | .ofCustomInfo         _ => "CustomInfo"
  | .ofFVarAliasInfo      _ => "FVarAliasInfo"
  | .ofFieldRedeclInfo    _ => "FieldRedeclInfo"

/-- The `Syntax` for a `Lean.Elab.Info`, if there is one. -/
def stx? : Info → Option Syntax
  | .ofTacticInfo         info => info.stx
  | .ofTermInfo           info => info.stx
  | .ofCommandInfo        info => info.stx
  | .ofMacroExpansionInfo info => info.stx
  | .ofOptionInfo         info => info.stx
  | .ofFieldInfo          info => info.stx
  | .ofCompletionInfo     info => info.stx
  | .ofUserWidgetInfo     info => info.stx
  | .ofCustomInfo         info => info.stx
  | .ofFVarAliasInfo      _    => none
  | .ofFieldRedeclInfo    info => info.stx

/-- Is the `Syntax` for this `Lean.Elab.Info` original, or synthetic? -/
def isOriginal (i : Info) : Bool :=
  match i.stx? with
  | none => true   -- Somewhat unclear what to do with `FVarAliasInfo`, so be conservative.
  | some stx => match stx.getHeadInfo with
    | .original .. => true
    | _ => false

end Lean.Elab.Info
namespace Lean.Elab.TacticInfo

/-- Find the name for the outermost `Syntax` in this `TacticInfo`. -/
def name? (t : TacticInfo) : Option Name :=
  match t.stx with
  | Syntax.node _ n _ => some n
  | _ => none

/-- Decide whether a tactic is "substantive",
or is merely a tactic combinator (e.g. `by`, `;`, multiline tactics, parenthesized tactics). -/
def isSubstantive (t : TacticInfo) : Bool :=
  match t.name? with
  | none => false
  | some `null => false
  | some ``cdot => false
  | some ``cdotTk => false
  | some ``Lean.Parser.Term.byTactic => false
  | some ``Lean.Parser.Tactic.tacticSeq => false
  | some ``Lean.Parser.Tactic.tacticSeq1Indented => false
  | some ``Lean.Parser.Tactic.«tactic_<;>_» => false
  | some ``Lean.Parser.Tactic.paren => false
  | _ => true

end Lean.Elab.TacticInfo

namespace Lean.Elab.InfoTree

/--
Keep `.node` nodes and `.hole` nodes satisfying predicates.

Returns a `List InfoTree`, although in most situations this will be a singleton.
-/
partial def filter (p : Info → Bool) (m : MVarId → Bool := fun _ => false) :
    InfoTree → List InfoTree
  | .context ctx tree => tree.filter p m |>.map (.context ctx)
  | .node info children =>
    if p info then
      [.node info (children.toList.map (filter p m)).join.toPArray']
    else
      (children.toList.map (filter p m)).join
  | .hole mvar => if m mvar then [.hole mvar] else []

/-- Discard all nodes besides `.context` nodes and `TacticInfo` nodes. -/
partial def retainTacticInfo (tree : InfoTree) : List InfoTree :=
  tree.filter fun | .ofTacticInfo _ => true | _ => false

/-- Retain only nodes with "original" syntax. -/
partial def retainOriginal (tree : InfoTree) : List InfoTree :=
  tree.filter Info.isOriginal

/-- Discard all TacticInfo nodes that are tactic combinators or structuring tactics. -/
-- There is considerable grey area here: what to do with `classical`?
partial def retainSubstantive (tree : InfoTree) : List InfoTree :=
  tree.filter fun | .ofTacticInfo i => i.isSubstantive | _ => true

/-- Analogue of `Lean.Elab.InfoTree.findInfo?`, but that returns all results. -/
partial def findAllInfo (t : InfoTree) (ctx : Option ContextInfo) (p : Info → Bool) :
    List (Info × Option ContextInfo) :=
  match t with
  | context ctx t => t.findAllInfo ctx p
  | node i ts  => (if p i then [(i, ctx)] else []) ++ ts.toList.bind (fun t => t.findAllInfo ctx p)
  | _ => []

/-- Return all `TacticInfo` nodes in an `InfoTree` with "original" syntax,
each equipped with its relevant `ContextInfo`. -/
def findTacticNodes (t : InfoTree) : List (TacticInfo × ContextInfo) :=
  let infos := t.findAllInfo none fun i => match i with
  | .ofTacticInfo i' => i.isOriginal && i'.isSubstantive
  | _ => false
  infos.filterMap fun p => match p with
  | (.ofTacticInfo i, some ctx) => (i, ctx)
  | _ => none

/-- Return all `TacticInfo` nodes in an `InfoTree`
corresponding to explicit invocations of the `sorry` tactic,
each equipped with its relevant `ContextInfo`. -/
def findSorryTacticNodes (t : InfoTree) : List (TacticInfo × ContextInfo) :=
  let infos := t.findAllInfo none fun i => match i with
  | .ofTacticInfo i => i.stx.isSorryTactic
  | _ => false
  infos.filterMap fun p => match p with
  | (.ofTacticInfo i, some ctx) => (i, ctx)
  | _ => none

/-- Return all `TermInfo` nodes in an `InfoTree`
corresponding to explicit `sorry` terms,
each equipped with its relevant `ContextInfo`. -/
def findSorryTermNodes (t : InfoTree) : List (TermInfo × ContextInfo) :=
  let infos := t.findAllInfo none fun i => match i with
  | .ofTermInfo i => i.stx.isSorryTerm
  | _ => false
  infos.filterMap fun p => match p with
  | (.ofTermInfo i, some ctx) => (i, ctx)
  | _ => none

inductive SorryType
| tactic : MVarId → SorryType
| term : LocalContext → Option Expr → SorryType

/--
Finds all appearances of `sorry` in an `InfoTree`, reporting
* the `ContextInfo` at that point,
* the `MVarId` for a goal that was closed by `sorry`,
  or the `Option Expr` expected type for a term supplied by `sorry`
* and the start and end positions of the `sorry` in the file.
-/
def sorries (t : InfoTree) : List (ContextInfo × SorryType × Position × Position) :=
  (t.findSorryTacticNodes.map fun ⟨i, ctx⟩ =>
    ({ ctx with mctx := i.mctxBefore }, .tactic i.goalsBefore.head!, stxRange ctx.fileMap i.stx)) ++
  (t.findSorryTermNodes.map fun ⟨i, ctx⟩ =>
    (ctx, .term i.lctx i.expectedType?, stxRange ctx.fileMap i.stx))

def tactics (t : InfoTree) : List (ContextInfo × Syntax × List MVarId × Position × Position) :=
  (t.findTacticNodes.map fun ⟨i, ctx⟩ =>
    ({ ctx with mctx := i.mctxBefore }, i.stx, i.goalsBefore, stxRange ctx.fileMap i.stx))


end Lean.Elab.InfoTree
