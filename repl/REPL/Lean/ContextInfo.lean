import Lean

namespace Lean.Elab.ContextInfo

/-- Pretty print an expression in the given `ContextInfo` with the given `LocalContext`. -/
def ppExpr (ctx : ContextInfo) (lctx : LocalContext) (e : Expr) : IO Format :=
  ctx.runMetaM lctx (do Meta.ppExpr (← instantiateMVars e))

end Lean.Elab.ContextInfo
