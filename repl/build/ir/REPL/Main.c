// Lean compiler output
// Module: REPL.Main
// Imports: Init REPL.JSON REPL.Frontend REPL.InfoTree REPL.Util.Path REPL.Util.TermUnsafe REPL.Lean.ContextInfo REPL.Lean.Environment REPL.InfoTree REPL.Snapshots
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_join___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_unpickleProofSnapshot___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_runCommand___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_recordProofSnapshot___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* _lean_main(lean_object*, lean_object*);
static lean_object* l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__1;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_REPL_ProofSnapshot_ppGoals(lean_object*, lean_object*);
lean_object* l_REPL_CommandSnapshot_pickle(lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_REPL_runCommand___spec__2___closed__3;
lean_object* l_Lean_Json_mkObj(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_sorries___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse(lean_object*);
LEAN_EXPORT lean_object* l_REPL_unpickleCommandSnapshot___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_parse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_tactics___at_REPL_runCommand___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot___at_REPL_unpickleCommandSnapshot___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_repl_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_REPL_ppTactic___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_REPL_tactics___spec__1(lean_object*, lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_unpickleProofSnapshot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2(lean_object*);
lean_object* l_EStateM_instMonadEStateM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___at_REPL_unpickleProofSnapshot___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_REPL_ProofSnapshot_pickle(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_ppGoals___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_sorries(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
static lean_object* l_REPL_State_cmdStates___default___closed__1;
lean_object* l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__5(lean_object*, lean_object*);
lean_object* l___private_REPL_JSON_0__REPL_fromJsonPickleProofState____x40_REPL_JSON___hyg_3092_(lean_object*);
static lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__3;
lean_object* l___private_REPL_JSON_0__REPL_fromJsonProofStep____x40_REPL_JSON___hyg_353_(lean_object*);
LEAN_EXPORT lean_object* l_REPL_unpickleCommandSnapshot(lean_object*, lean_object*, lean_object*);
static lean_object* l_repl_loop___lambda__1___closed__5;
LEAN_EXPORT lean_object* l_REPL_tactics(lean_object*);
lean_object* l_IO_println___at_Lean_instEval___spec__1(lean_object*, lean_object*);
static lean_object* l_repl_loop___lambda__1___closed__3;
lean_object* l_Lean_initSearchPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToJsonSum___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_ppExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_REPL_ProofSnapshot_pickle___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findSysroot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_State_proofStates___default;
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___at_repl_loop___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_REPL_runCommand___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedString;
lean_object* l_Lean_Elab_InfoTree_sorries(lean_object*);
lean_object* l_REPL_Message_of(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToJsonSum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_runCommand___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_REPL_JSON_0__REPL_fromJsonCommand____x40_REPL_JSON___hyg_112_(lean_object*);
static lean_object* l_main___closed__1;
LEAN_EXPORT lean_object* l_REPL_recordProofSnapshot___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_REPL_JSON_0__REPL_fromJsonUnpickleEnvironment____x40_REPL_JSON___hyg_2958_(lean_object*);
static lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__4;
LEAN_EXPORT lean_object* l_REPL_runCommand___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_REPL_ProofSnapshot_runString(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2;
lean_object* l_instInhabited___rarg(lean_object*, lean_object*);
static lean_object* l_repl___closed__1;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_runCommand___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_runCommand___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_stdin(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_recordProofSnapshot___at_REPL_unpickleProofSnapshot___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_repl_loop___lambda__1___closed__6;
lean_object* l_Lean_Elab_InfoTree_tactics(lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_sorries___at_REPL_runCommand___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonadStateT___rarg(lean_object*);
lean_object* l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_REPL_ppTactic___closed__4;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_repl_loop___lambda__1___closed__4;
static lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__1;
static lean_object* l_REPL_ppTactic___closed__3;
static lean_object* l_REPL_ppTactic___closed__6;
extern lean_object* l_Std_Format_defWidth;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_REPL_createProofStepReponse___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_REPL_Sorry_of(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot(lean_object*);
lean_object* l_REPL_ProofSnapshot_create(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_REPL_CommandSnapshot_pickle___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_REPL_JSON_0__REPL_toJsonError____x40_REPL_JSON___hyg_2633_(lean_object*);
static lean_object* l_REPL_ppTactic___lambda__1___closed__2;
lean_object* l_REPL_ProofSnapshot_newMessages(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_ppTactic___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_REPL_Tactic_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_repl_loop___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot(lean_object*);
LEAN_EXPORT lean_object* l_REPL_ppTactic___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___at_repl_loop___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_REPL_ProofSnapshot_create___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_REPL_CommandSnapshot_unpickle_unsafe____x40_REPL_Snapshots___hyg_425_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_REPL_sorries___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_REPL_sorries___spec__2(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_REPL_runCommand___spec__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_getLines___closed__1;
static lean_object* l_REPL_runCommand___closed__2;
LEAN_EXPORT lean_object* l_REPL_ppTactic(lean_object*, lean_object*, lean_object*);
static lean_object* l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__2;
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l_REPL_ppTactic___closed__2;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_REPL_runProofStep___closed__2;
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___at_repl_loop___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_object* l_panic___at_REPL_runCommand___spec__2___closed__1;
LEAN_EXPORT lean_object* l_repl_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_runProofStep(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_runCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l___private_REPL_JSON_0__REPL_fromJsonPickleEnvironment____x40_REPL_JSON___hyg_2803_(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Lean_PrettyPrinter_ppTactic(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__3(lean_object*, lean_object*);
static lean_object* l_panic___at_REPL_runCommand___spec__2___closed__2;
lean_object* l_REPL_ProofSnapshot_unpickle_unsafe____x40_REPL_Snapshots___hyg_2299_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_runCommand___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_REPL_ppTactic___closed__5;
lean_object* l_Lean_Elab_ContextInfo_ppGoals(lean_object*, lean_object*, lean_object*);
lean_object* l___private_REPL_JSON_0__REPL_fromJsonUnpickleProofState____x40_REPL_JSON___hyg_3245_(lean_object*);
LEAN_EXPORT lean_object* l_panic___at_REPL_sorries___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_REPL_ppTactic___closed__1;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_REPL_runCommand___closed__1;
lean_object* l_List_redLength___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_repl(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__2;
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___at_repl_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_tactics___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_REPL_sorries___spec__1___rarg___closed__1;
lean_object* l_Lean_Json_parse(lean_object*);
LEAN_EXPORT lean_object* l_getLines(lean_object*);
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
static lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_REPL_ppTactic___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_REPL_runProofStep___closed__1;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_repl_loop___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_REPL_recordProofSnapshot(lean_object*);
LEAN_EXPORT lean_object* l_REPL_State_cmdStates___default;
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
static lean_object* l_REPL_ppTactic___closed__7;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_ParseImportsFast_0__Lean_toJsonPrintImportResult____x40_Lean_Elab_ParseImportsFast___hyg_1710____spec__3(size_t, size_t, lean_object*);
static lean_object* _init_l_REPL_State_cmdStates___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_REPL_State_cmdStates___default() {
_start:
{
lean_object* x_1; 
x_1 = l_REPL_State_cmdStates___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_REPL_State_proofStates___default() {
_start:
{
lean_object* x_1; 
x_1 = l_REPL_State_cmdStates___default___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_1);
x_6 = lean_apply_2(x_2, lean_box(0), x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_apply_2(x_2, lean_box(0), x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_array_get_size(x_8);
lean_dec(x_8);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_array_push(x_11, x_1);
lean_ctor_set(x_7, 0, x_12);
x_13 = lean_box(0);
lean_ctor_set(x_4, 0, x_13);
lean_inc(x_2);
x_14 = lean_apply_2(x_2, lean_box(0), x_4);
x_15 = lean_alloc_closure((void*)(l_REPL_recordCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_15, 0, x_9);
lean_closure_set(x_15, 1, x_2);
x_16 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
x_19 = lean_array_push(x_17, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_box(0);
lean_ctor_set(x_4, 1, x_20);
lean_ctor_set(x_4, 0, x_21);
lean_inc(x_2);
x_22 = lean_apply_2(x_2, lean_box(0), x_4);
x_23 = lean_alloc_closure((void*)(l_REPL_recordCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_23, 0, x_9);
lean_closure_set(x_23, 1, x_2);
x_24 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_22, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_4, 0);
x_26 = lean_ctor_get(x_4, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_4);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_array_get_size(x_27);
lean_dec(x_27);
x_29 = lean_ctor_get(x_26, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_31 = x_26;
} else {
 lean_dec_ref(x_26);
 x_31 = lean_box(0);
}
x_32 = lean_array_push(x_29, x_1);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
lean_inc(x_2);
x_36 = lean_apply_2(x_2, lean_box(0), x_35);
x_37 = lean_alloc_closure((void*)(l_REPL_recordCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_37, 0, x_28);
lean_closure_set(x_37, 1, x_2);
x_38 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_36, x_37);
return x_38;
}
}
}
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_3);
lean_inc(x_6);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_REPL_recordCommandSnapshot___rarg___lambda__2), 4, 3);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_4);
x_10 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_REPL_recordCommandSnapshot___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_REPL_recordProofSnapshot___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_array_get_size(x_8);
lean_dec(x_8);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_7, 1);
x_12 = lean_array_push(x_11, x_1);
lean_ctor_set(x_7, 1, x_12);
x_13 = lean_box(0);
lean_ctor_set(x_4, 0, x_13);
lean_inc(x_2);
x_14 = lean_apply_2(x_2, lean_box(0), x_4);
x_15 = lean_alloc_closure((void*)(l_REPL_recordCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_15, 0, x_9);
lean_closure_set(x_15, 1, x_2);
x_16 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
x_19 = lean_array_push(x_18, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_box(0);
lean_ctor_set(x_4, 1, x_20);
lean_ctor_set(x_4, 0, x_21);
lean_inc(x_2);
x_22 = lean_apply_2(x_2, lean_box(0), x_4);
x_23 = lean_alloc_closure((void*)(l_REPL_recordCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_23, 0, x_9);
lean_closure_set(x_23, 1, x_2);
x_24 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_22, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_4, 0);
x_26 = lean_ctor_get(x_4, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_4);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_array_get_size(x_27);
lean_dec(x_27);
x_29 = lean_ctor_get(x_26, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_31 = x_26;
} else {
 lean_dec_ref(x_26);
 x_31 = lean_box(0);
}
x_32 = lean_array_push(x_30, x_1);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
lean_inc(x_2);
x_36 = lean_apply_2(x_2, lean_box(0), x_35);
x_37 = lean_alloc_closure((void*)(l_REPL_recordCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_37, 0, x_28);
lean_closure_set(x_37, 1, x_2);
x_38 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_36, x_37);
return x_38;
}
}
}
LEAN_EXPORT lean_object* l_REPL_recordProofSnapshot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_3);
lean_inc(x_6);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_REPL_recordProofSnapshot___rarg___lambda__1), 4, 3);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_4);
x_10 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_REPL_recordProofSnapshot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_REPL_recordProofSnapshot___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_panic___at_REPL_sorries___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_String_instInhabitedString;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_REPL_sorries___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_StateT_instMonadStateT___rarg(x_1);
x_5 = l_panic___at_REPL_sorries___spec__1___rarg___closed__1;
x_6 = l_instInhabited___rarg(x_4, x_5);
x_7 = lean_panic_fn(x_6, x_2);
x_8 = lean_apply_1(x_7, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_panic___at_REPL_sorries___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_panic___at_REPL_sorries___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_REPL_sorries___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Elab_InfoTree_sorries(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_Elab_InfoTree_sorries(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_1);
x_9 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg(x_2, x_3, x_4, x_8, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_REPL_Sorry_of(x_1, x_2, x_3, x_7);
lean_ctor_set(x_5, 0, x_8);
x_9 = lean_apply_2(x_4, lean_box(0), x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = l_REPL_Sorry_of(x_1, x_2, x_3, x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = lean_apply_2(x_4, lean_box(0), x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_ctor_set(x_2, 0, x_5);
x_8 = lean_apply_2(x_7, lean_box(0), x_2);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_10);
x_15 = lean_apply_2(x_13, lean_box(0), x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_REPL_Sorry_of(x_1, x_2, x_3, x_7);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_ctor_set(x_5, 0, x_8);
x_11 = lean_apply_2(x_10, lean_box(0), x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_5);
x_14 = l_REPL_Sorry_of(x_1, x_2, x_3, x_12);
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_13);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_dec(x_10);
x_11 = lean_box(0);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_5, 1, x_6);
lean_ctor_set(x_5, 0, x_11);
lean_inc(x_13);
x_14 = lean_apply_2(x_13, lean_box(0), x_5);
x_15 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_15, 0, x_9);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_13);
x_16 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_5, 0);
lean_inc(x_17);
lean_dec(x_5);
x_18 = lean_box(0);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_6);
lean_inc(x_20);
x_22 = lean_apply_2(x_20, lean_box(0), x_21);
x_23 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_23, 0, x_17);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_3);
lean_closure_set(x_23, 3, x_20);
x_24 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_22, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_5, 0);
lean_inc(x_25);
lean_dec(x_5);
x_26 = lean_ctor_get(x_7, 0);
lean_inc(x_26);
lean_dec(x_7);
lean_inc(x_1);
x_27 = l_REPL_recordProofSnapshot___rarg(x_1, x_26, x_6);
lean_inc(x_1);
x_28 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__3), 2, 1);
lean_closure_set(x_28, 0, x_1);
lean_inc(x_4);
x_29 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_27, x_28);
x_30 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__4___boxed), 5, 4);
lean_closure_set(x_30, 0, x_25);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_1);
x_31 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_29, x_30);
return x_31;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_2);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = l_Std_Format_defWidth;
x_10 = lean_format_pretty(x_1, x_9);
x_11 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = lean_string_append(x_12, x_11);
x_14 = l_String_trim(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_5, 1, x_15);
lean_ctor_set(x_5, 0, x_14);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_8);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
x_20 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__7), 2, 1);
lean_closure_set(x_20, 0, x_3);
x_21 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_19, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_22 = lean_ctor_get(x_5, 0);
x_23 = lean_ctor_get(x_5, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_5);
x_24 = l_Std_Format_defWidth;
x_25 = lean_format_pretty(x_1, x_24);
x_26 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_27 = lean_string_append(x_26, x_25);
lean_dec(x_25);
x_28 = lean_string_append(x_27, x_26);
x_29 = l_String_trim(x_28);
lean_dec(x_28);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_22);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_ctor_get(x_2, 0);
lean_inc(x_32);
lean_dec(x_2);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_23);
x_35 = lean_apply_2(x_33, lean_box(0), x_34);
x_36 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__7), 2, 1);
lean_closure_set(x_36, 0, x_3);
x_37 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_35, x_36);
return x_37;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = lean_alloc_closure((void*)(l_REPL_ProofSnapshot_create___boxed), 5, 4);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_11);
lean_closure_set(x_12, 2, x_2);
lean_closure_set(x_12, 3, x_3);
x_13 = lean_apply_2(x_4, lean_box(0), x_12);
lean_inc(x_5);
x_14 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_14, 0, x_5);
lean_closure_set(x_14, 1, x_10);
lean_inc(x_6);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
lean_inc(x_6);
x_16 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8), 5, 4);
lean_closure_set(x_16, 0, x_9);
lean_closure_set(x_16, 1, x_5);
lean_closure_set(x_16, 2, x_7);
lean_closure_set(x_16, 3, x_6);
x_17 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_15, x_16);
return x_17;
}
}
static lean_object* _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("⊢ ", 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = l_Std_Format_defWidth;
x_10 = lean_format_pretty(x_1, x_9);
x_11 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_14 = lean_string_append(x_12, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_5, 1, x_15);
lean_ctor_set(x_5, 0, x_14);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_8);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
x_20 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__7), 2, 1);
lean_closure_set(x_20, 0, x_3);
x_21 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_19, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_22 = lean_ctor_get(x_5, 0);
x_23 = lean_ctor_get(x_5, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_5);
x_24 = l_Std_Format_defWidth;
x_25 = lean_format_pretty(x_1, x_24);
x_26 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1;
x_27 = lean_string_append(x_26, x_25);
lean_dec(x_25);
x_28 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_29 = lean_string_append(x_27, x_28);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_22);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_ctor_get(x_2, 0);
lean_inc(x_32);
lean_dec(x_2);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_23);
x_35 = lean_apply_2(x_33, lean_box(0), x_34);
x_36 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__7), 2, 1);
lean_closure_set(x_36, 0, x_3);
x_37 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_35, x_36);
return x_37;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_closure((void*)(l_REPL_ProofSnapshot_create___boxed), 5, 4);
lean_closure_set(x_14, 0, x_3);
lean_closure_set(x_14, 1, x_11);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_13);
x_15 = lean_apply_2(x_4, lean_box(0), x_14);
lean_inc(x_5);
x_16 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_16, 0, x_5);
lean_closure_set(x_16, 1, x_10);
lean_inc(x_6);
x_17 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_15, x_16);
lean_inc(x_6);
x_18 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10), 5, 4);
lean_closure_set(x_18, 0, x_9);
lean_closure_set(x_18, 1, x_5);
lean_closure_set(x_18, 2, x_7);
lean_closure_set(x_18, 3, x_6);
x_19 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
}
static lean_object* _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("REPL.Main", 9);
return x_1;
}
}
static lean_object* _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("REPL.sorries", 12);
return x_1;
}
}
static lean_object* _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unreachable code has been reached", 33);
return x_1;
}
}
static lean_object* _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__1;
x_2 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__2;
x_3 = lean_unsigned_to_nat(106u);
x_4 = lean_unsigned_to_nat(24u);
x_5 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_6 = l_List_reverse___rarg(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_5);
x_10 = lean_apply_2(x_8, lean_box(0), x_9);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__1), 5, 4);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_2);
lean_closure_set(x_15, 3, x_13);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
lean_inc(x_14);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__5), 6, 4);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_20);
lean_closure_set(x_22, 2, x_21);
lean_closure_set(x_22, 3, x_14);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_box(0);
lean_ctor_set(x_3, 1, x_24);
lean_ctor_set(x_3, 0, x_23);
lean_inc(x_3);
lean_inc(x_18);
x_25 = lean_alloc_closure((void*)(l_Lean_Elab_ContextInfo_ppGoals___boxed), 3, 2);
lean_closure_set(x_25, 0, x_18);
lean_closure_set(x_25, 1, x_3);
lean_inc(x_2);
x_26 = lean_apply_2(x_2, lean_box(0), x_25);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_27, 0, x_1);
lean_closure_set(x_27, 1, x_5);
lean_inc(x_14);
x_28 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_26, x_27);
lean_inc(x_14);
x_29 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__9), 8, 7);
lean_closure_set(x_29, 0, x_18);
lean_closure_set(x_29, 1, x_3);
lean_closure_set(x_29, 2, x_24);
lean_closure_set(x_29, 3, x_2);
lean_closure_set(x_29, 4, x_1);
lean_closure_set(x_29, 5, x_14);
lean_closure_set(x_29, 6, x_22);
lean_inc(x_14);
x_30 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_28, x_29);
x_31 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_30, x_15);
return x_31;
}
else
{
lean_object* x_32; 
lean_free_object(x_3);
x_32 = lean_ctor_get(x_19, 1);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_2);
x_33 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__4;
x_34 = l_panic___at_REPL_sorries___spec__1___rarg(x_1, x_33, x_5);
x_35 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__7), 2, 1);
lean_closure_set(x_35, 0, x_22);
lean_inc(x_14);
x_36 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_34, x_35);
x_37 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_36, x_15);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_38 = lean_ctor_get(x_19, 0);
lean_inc(x_38);
lean_dec(x_19);
x_39 = lean_ctor_get(x_32, 0);
lean_inc(x_39);
lean_dec(x_32);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_18);
x_40 = lean_alloc_closure((void*)(l_Lean_Elab_ContextInfo_ppExpr___boxed), 4, 3);
lean_closure_set(x_40, 0, x_18);
lean_closure_set(x_40, 1, x_38);
lean_closure_set(x_40, 2, x_39);
lean_inc(x_2);
x_41 = lean_apply_2(x_2, lean_box(0), x_40);
lean_inc(x_1);
x_42 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_42, 0, x_1);
lean_closure_set(x_42, 1, x_5);
lean_inc(x_14);
x_43 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_41, x_42);
lean_inc(x_14);
x_44 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__11), 8, 7);
lean_closure_set(x_44, 0, x_38);
lean_closure_set(x_44, 1, x_39);
lean_closure_set(x_44, 2, x_18);
lean_closure_set(x_44, 3, x_2);
lean_closure_set(x_44, 4, x_1);
lean_closure_set(x_44, 5, x_14);
lean_closure_set(x_44, 6, x_22);
lean_inc(x_14);
x_45 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_43, x_44);
x_46 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_45, x_15);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_47 = lean_ctor_get(x_3, 0);
x_48 = lean_ctor_get(x_3, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_3);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_inc(x_2);
lean_inc(x_1);
x_50 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__1), 5, 4);
lean_closure_set(x_50, 0, x_4);
lean_closure_set(x_50, 1, x_1);
lean_closure_set(x_50, 2, x_2);
lean_closure_set(x_50, 3, x_48);
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_47, 0);
lean_inc(x_53);
lean_dec(x_47);
x_54 = lean_ctor_get(x_51, 0);
lean_inc(x_54);
lean_dec(x_51);
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
lean_inc(x_49);
lean_inc(x_1);
x_57 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__5), 6, 4);
lean_closure_set(x_57, 0, x_1);
lean_closure_set(x_57, 1, x_55);
lean_closure_set(x_57, 2, x_56);
lean_closure_set(x_57, 3, x_49);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_58 = lean_ctor_get(x_54, 0);
lean_inc(x_58);
lean_dec(x_54);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
lean_inc(x_60);
lean_inc(x_53);
x_61 = lean_alloc_closure((void*)(l_Lean_Elab_ContextInfo_ppGoals___boxed), 3, 2);
lean_closure_set(x_61, 0, x_53);
lean_closure_set(x_61, 1, x_60);
lean_inc(x_2);
x_62 = lean_apply_2(x_2, lean_box(0), x_61);
lean_inc(x_1);
x_63 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_63, 0, x_1);
lean_closure_set(x_63, 1, x_5);
lean_inc(x_49);
x_64 = lean_apply_4(x_49, lean_box(0), lean_box(0), x_62, x_63);
lean_inc(x_49);
x_65 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__9), 8, 7);
lean_closure_set(x_65, 0, x_53);
lean_closure_set(x_65, 1, x_60);
lean_closure_set(x_65, 2, x_59);
lean_closure_set(x_65, 3, x_2);
lean_closure_set(x_65, 4, x_1);
lean_closure_set(x_65, 5, x_49);
lean_closure_set(x_65, 6, x_57);
lean_inc(x_49);
x_66 = lean_apply_4(x_49, lean_box(0), lean_box(0), x_64, x_65);
x_67 = lean_apply_4(x_49, lean_box(0), lean_box(0), x_66, x_50);
return x_67;
}
else
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_54, 1);
lean_inc(x_68);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_2);
x_69 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__4;
x_70 = l_panic___at_REPL_sorries___spec__1___rarg(x_1, x_69, x_5);
x_71 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__7), 2, 1);
lean_closure_set(x_71, 0, x_57);
lean_inc(x_49);
x_72 = lean_apply_4(x_49, lean_box(0), lean_box(0), x_70, x_71);
x_73 = lean_apply_4(x_49, lean_box(0), lean_box(0), x_72, x_50);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_74 = lean_ctor_get(x_54, 0);
lean_inc(x_74);
lean_dec(x_54);
x_75 = lean_ctor_get(x_68, 0);
lean_inc(x_75);
lean_dec(x_68);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_53);
x_76 = lean_alloc_closure((void*)(l_Lean_Elab_ContextInfo_ppExpr___boxed), 4, 3);
lean_closure_set(x_76, 0, x_53);
lean_closure_set(x_76, 1, x_74);
lean_closure_set(x_76, 2, x_75);
lean_inc(x_2);
x_77 = lean_apply_2(x_2, lean_box(0), x_76);
lean_inc(x_1);
x_78 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_78, 0, x_1);
lean_closure_set(x_78, 1, x_5);
lean_inc(x_49);
x_79 = lean_apply_4(x_49, lean_box(0), lean_box(0), x_77, x_78);
lean_inc(x_49);
x_80 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__11), 8, 7);
lean_closure_set(x_80, 0, x_74);
lean_closure_set(x_80, 1, x_75);
lean_closure_set(x_80, 2, x_53);
lean_closure_set(x_80, 3, x_2);
lean_closure_set(x_80, 4, x_1);
lean_closure_set(x_80, 5, x_49);
lean_closure_set(x_80, 6, x_57);
lean_inc(x_49);
x_81 = lean_apply_4(x_49, lean_box(0), lean_box(0), x_79, x_80);
x_82 = lean_apply_4(x_49, lean_box(0), lean_box(0), x_81, x_50);
return x_82;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_REPL_sorries___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_box(0);
x_6 = l_List_mapTR_loop___at_REPL_sorries___spec__2(x_3, x_5);
x_7 = l_List_join___rarg(x_6);
x_8 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg(x_1, x_2, x_7, x_5, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_REPL_sorries(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_REPL_sorries___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
static lean_object* _init_l_REPL_ppTactic___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("<failed to pretty print>", 24);
return x_1;
}
}
static lean_object* _init_l_REPL_ppTactic___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_REPL_ppTactic___lambda__1___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_REPL_ppTactic___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_ppTactic(x_1, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
x_10 = l_REPL_ppTactic___lambda__1___closed__2;
lean_ctor_set_tag(x_7, 0);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_REPL_ppTactic___lambda__1___closed__2;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
}
static lean_object* _init_l_REPL_ppTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_REPL_ppTactic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_REPL_ppTactic___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_REPL_ppTactic___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_REPL_ppTactic___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_REPL_ppTactic___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_REPL_ppTactic___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_REPL_ppTactic___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_REPL_ppTactic___closed__6() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_REPL_ppTactic___closed__5;
x_3 = l_REPL_ppTactic___closed__4;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set_usize(x_5, 4, x_1);
return x_5;
}
}
static lean_object* _init_l_REPL_ppTactic___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_REPL_ppTactic___closed__3;
x_2 = l_REPL_ppTactic___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_REPL_ppTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_REPL_ppTactic___lambda__1___boxed), 6, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_REPL_ppTactic___closed__7;
x_6 = l_Lean_Elab_ContextInfo_runMetaM___rarg(x_1, x_5, x_4, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_REPL_ppTactic___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_REPL_ppTactic___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_REPL_ppTactic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_REPL_ppTactic(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_REPL_tactics___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Elab_InfoTree_tactics(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_Elab_InfoTree_tactics(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_1);
x_9 = l_List_mapM_loop___at_REPL_tactics___spec__2___rarg(x_2, x_3, x_4, x_8, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_REPL_Tactic_of(x_1, x_2, x_3, x_4, x_8);
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_ctor_set(x_6, 0, x_9);
x_12 = lean_apply_2(x_11, lean_box(0), x_6);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_6, 0);
x_14 = lean_ctor_get(x_6, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_6);
x_15 = l_REPL_Tactic_of(x_1, x_2, x_3, x_4, x_13);
x_16 = lean_ctor_get(x_5, 0);
lean_inc(x_16);
lean_dec(x_5);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_14);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Std_Format_defWidth;
x_11 = lean_format_pretty(x_8, x_10);
lean_inc(x_1);
x_12 = l_REPL_recordProofSnapshot___rarg(x_1, x_2, x_9);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__3), 2, 1);
lean_closure_set(x_13, 0, x_1);
lean_inc(x_3);
x_14 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_12, x_13);
x_15 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_11);
lean_closure_set(x_15, 2, x_5);
lean_closure_set(x_15, 3, x_6);
lean_closure_set(x_15, 4, x_1);
x_16 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Std_Format_defWidth;
x_13 = lean_format_pretty(x_10, x_12);
x_14 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = lean_string_append(x_15, x_14);
x_17 = l_String_trim(x_16);
lean_dec(x_16);
x_18 = lean_alloc_closure((void*)(l_REPL_ppTactic___boxed), 3, 2);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_2);
x_19 = lean_apply_2(x_3, lean_box(0), x_18);
lean_inc(x_4);
x_20 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_20, 0, x_4);
lean_closure_set(x_20, 1, x_11);
lean_inc(x_5);
x_21 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_19, x_20);
lean_inc(x_5);
x_22 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__3), 7, 6);
lean_closure_set(x_22, 0, x_4);
lean_closure_set(x_22, 1, x_6);
lean_closure_set(x_22, 2, x_5);
lean_closure_set(x_22, 3, x_17);
lean_closure_set(x_22, 4, x_7);
lean_closure_set(x_22, 5, x_8);
x_23 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_21, x_22);
return x_23;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_ContextInfo_ppGoals___boxed), 3, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
lean_inc(x_4);
x_14 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_11);
lean_inc(x_5);
x_15 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_13, x_14);
lean_inc(x_5);
x_16 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__4), 9, 8);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_6);
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_4);
lean_closure_set(x_16, 4, x_5);
lean_closure_set(x_16, 5, x_10);
lean_closure_set(x_16, 6, x_7);
lean_closure_set(x_16, 7, x_8);
x_17 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_15, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_6 = l_List_reverse___rarg(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_5);
x_10 = lean_apply_2(x_8, lean_box(0), x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_2);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_12);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_box(0);
x_24 = lean_box(0);
lean_inc(x_20);
lean_inc(x_18);
x_25 = lean_alloc_closure((void*)(l_REPL_ProofSnapshot_create___boxed), 5, 4);
lean_closure_set(x_25, 0, x_18);
lean_closure_set(x_25, 1, x_23);
lean_closure_set(x_25, 2, x_20);
lean_closure_set(x_25, 3, x_24);
lean_inc(x_2);
x_26 = lean_apply_2(x_2, lean_box(0), x_25);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_27, 0, x_1);
lean_closure_set(x_27, 1, x_5);
lean_inc(x_13);
x_28 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_26, x_27);
lean_inc(x_13);
x_29 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__5), 9, 8);
lean_closure_set(x_29, 0, x_18);
lean_closure_set(x_29, 1, x_20);
lean_closure_set(x_29, 2, x_2);
lean_closure_set(x_29, 3, x_1);
lean_closure_set(x_29, 4, x_13);
lean_closure_set(x_29, 5, x_19);
lean_closure_set(x_29, 6, x_21);
lean_closure_set(x_29, 7, x_22);
lean_inc(x_13);
x_30 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_28, x_29);
x_31 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_30, x_14);
return x_31;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_tactics___spec__2___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_REPL_tactics___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_box(0);
x_6 = l_List_mapTR_loop___at_REPL_tactics___spec__1(x_3, x_5);
x_7 = l_List_join___rarg(x_6);
x_8 = l_List_mapM_loop___at_REPL_tactics___spec__2___rarg(x_1, x_2, x_7, x_5, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_REPL_tactics(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_REPL_tactics___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_mapM_loop___at_REPL_tactics___spec__2___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_1);
x_9 = l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1___rarg(x_2, x_3, x_4, x_8, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_6 = l_List_reverse___rarg(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_5);
x_10 = lean_apply_2(x_8, lean_box(0), x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_REPL_Message_of), 2, 1);
lean_closure_set(x_14, 0, x_11);
lean_inc(x_2);
x_15 = lean_apply_2(x_2, lean_box(0), x_14);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_5);
lean_inc(x_13);
x_17 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_15, x_16);
x_18 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1___rarg___lambda__1), 5, 4);
lean_closure_set(x_18, 0, x_4);
lean_closure_set(x_18, 1, x_1);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_12);
x_19 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_REPL_createProofStepReponse___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Std_Format_defWidth;
x_8 = lean_format_pretty(x_5, x_7);
x_9 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_string_append(x_10, x_9);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_11);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_15 = l_Std_Format_defWidth;
x_16 = lean_format_pretty(x_13, x_15);
x_17 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
x_19 = lean_string_append(x_18, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_2);
x_1 = x_14;
x_2 = x_20;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_List_mapTR_loop___at_REPL_createProofStepReponse___spec__2(x_7, x_1);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 2, x_3);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_ctor_set(x_5, 0, x_9);
x_12 = lean_apply_2(x_11, lean_box(0), x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_5);
x_15 = l_List_mapTR_loop___at_REPL_createProofStepReponse___spec__2(x_13, x_1);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_3);
x_17 = lean_ctor_get(x_4, 0);
lean_inc(x_17);
lean_dec(x_4);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_14);
x_20 = lean_apply_2(x_18, lean_box(0), x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_closure((void*)(l_REPL_ProofSnapshot_ppGoals), 2, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_apply_2(x_2, lean_box(0), x_10);
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__6), 3, 2);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_9);
lean_inc(x_4);
x_13 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_11, x_12);
x_14 = lean_alloc_closure((void*)(l_REPL_createProofStepReponse___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_5);
lean_closure_set(x_14, 1, x_8);
lean_closure_set(x_14, 2, x_6);
lean_closure_set(x_14, 3, x_3);
x_15 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_REPL_recordProofSnapshot___rarg(x_1, x_2, x_8);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_REPL_createProofStepReponse___rarg___lambda__2), 7, 6);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_1);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_7);
x_11 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_6 = l_REPL_ProofSnapshot_newMessages(x_3, x_4);
x_7 = lean_box(0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_List_mapM_loop___at_REPL_createProofStepReponse___spec__1___rarg(x_1, x_2, x_6, x_7, x_5);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_REPL_createProofStepReponse___rarg___lambda__3), 6, 5);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_8);
lean_closure_set(x_10, 4, x_7);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_REPL_createProofStepReponse___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
x_5 = lean_apply_2(x_2, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_dec(x_4);
x_5 = lean_box(0);
lean_ctor_set(x_2, 0, x_5);
x_6 = lean_apply_2(x_1, lean_box(0), x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = lean_apply_2(x_1, lean_box(0), x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 2, x_6);
lean_ctor_set(x_7, 3, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_3, 0, x_8);
x_9 = lean_apply_2(x_2, lean_box(0), x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_11);
lean_ctor_set(x_12, 3, x_11);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
x_15 = lean_apply_2(x_2, lean_box(0), x_14);
return x_15;
}
}
}
static lean_object* _init_l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Unknown environment.", 20);
return x_1;
}
}
static lean_object* _init_l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_array_get_size(x_9);
x_13 = lean_nat_dec_lt(x_10, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_14 = l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2;
lean_ctor_set(x_5, 0, x_14);
x_15 = lean_apply_2(x_2, lean_box(0), x_5);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_5);
x_16 = lean_array_fget(x_9, x_10);
lean_dec(x_9);
x_17 = lean_alloc_closure((void*)(l_REPL_CommandSnapshot_pickle___boxed), 3, 2);
lean_closure_set(x_17, 0, x_16);
lean_closure_set(x_17, 1, x_11);
x_18 = lean_apply_2(x_3, lean_box(0), x_17);
lean_inc(x_2);
x_19 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_19, 0, x_8);
lean_closure_set(x_19, 1, x_2);
lean_inc(x_4);
x_20 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_18, x_19);
lean_inc(x_2);
x_21 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__2), 2, 1);
lean_closure_set(x_21, 0, x_2);
lean_inc(x_4);
x_22 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_20, x_21);
x_23 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__3), 3, 2);
lean_closure_set(x_23, 0, x_10);
lean_closure_set(x_23, 1, x_2);
x_24 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_22, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_5, 0);
x_26 = lean_ctor_get(x_5, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_5);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_array_get_size(x_27);
x_31 = lean_nat_dec_lt(x_28, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_4);
lean_dec(x_3);
x_32 = l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2;
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_26);
x_34 = lean_apply_2(x_2, lean_box(0), x_33);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_35 = lean_array_fget(x_27, x_28);
lean_dec(x_27);
x_36 = lean_alloc_closure((void*)(l_REPL_CommandSnapshot_pickle___boxed), 3, 2);
lean_closure_set(x_36, 0, x_35);
lean_closure_set(x_36, 1, x_29);
x_37 = lean_apply_2(x_3, lean_box(0), x_36);
lean_inc(x_2);
x_38 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_38, 0, x_26);
lean_closure_set(x_38, 1, x_2);
lean_inc(x_4);
x_39 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_37, x_38);
lean_inc(x_2);
x_40 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__2), 2, 1);
lean_closure_set(x_40, 0, x_2);
lean_inc(x_4);
x_41 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_39, x_40);
x_42 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__3), 3, 2);
lean_closure_set(x_42, 0, x_28);
lean_closure_set(x_42, 1, x_2);
x_43 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_41, x_42);
return x_43;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_4);
lean_inc(x_7);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
lean_inc(x_5);
x_10 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__4), 5, 4);
lean_closure_set(x_10, 0, x_3);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_5);
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_REPL_recordCommandSnapshot___at_REPL_unpickleCommandSnapshot___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_array_get_size(x_5);
x_7 = lean_array_push(x_5, x_1);
lean_ctor_set(x_2, 0, x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = lean_array_get_size(x_10);
x_13 = lean_array_push(x_10, x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_REPL_unpickleCommandSnapshot(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_REPL_CommandSnapshot_unpickle_unsafe____x40_REPL_Snapshots___hyg_425_(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_REPL_recordCommandSnapshot___at_REPL_unpickleCommandSnapshot___spec__1(x_7, x_2, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_14, 2, x_13);
lean_ctor_set(x_14, 3, x_13);
lean_ctor_set(x_10, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_18, 2, x_17);
lean_ctor_set(x_18, 3, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_8, 0, x_19);
return x_8;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 x_24 = x_20;
} else {
 lean_dec_ref(x_20);
 x_24 = lean_box(0);
}
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_25);
lean_ctor_set(x_26, 3, x_25);
if (lean_is_scalar(x_24)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_24;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_21);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_4);
if (x_29 == 0)
{
return x_4;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_4, 0);
x_31 = lean_ctor_get(x_4, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_4);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_unpickleCommandSnapshot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_REPL_unpickleCommandSnapshot(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_2, 0, x_5);
x_6 = lean_apply_2(x_1, lean_box(0), x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = lean_apply_2(x_1, lean_box(0), x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_box(0);
x_9 = l_REPL_createProofStepReponse___rarg(x_1, x_2, x_3, x_8, x_7);
x_10 = lean_alloc_closure((void*)(l_REPL_pickleProofSnapshot___rarg___lambda__1), 2, 1);
lean_closure_set(x_10, 0, x_4);
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
static lean_object* _init_l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Unknown proof State.", 20);
return x_1;
}
}
static lean_object* _init_l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_10);
x_13 = lean_nat_dec_lt(x_11, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__2;
lean_ctor_set(x_6, 0, x_14);
x_15 = lean_apply_2(x_2, lean_box(0), x_6);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_6);
x_16 = lean_array_fget(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
lean_inc(x_16);
x_18 = lean_alloc_closure((void*)(l_REPL_ProofSnapshot_pickle___boxed), 3, 2);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_17);
lean_inc(x_3);
x_19 = lean_apply_2(x_3, lean_box(0), x_18);
lean_inc(x_2);
x_20 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_20, 0, x_9);
lean_closure_set(x_20, 1, x_2);
lean_inc(x_4);
x_21 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_19, x_20);
lean_inc(x_2);
x_22 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__2), 2, 1);
lean_closure_set(x_22, 0, x_2);
lean_inc(x_4);
x_23 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_21, x_22);
lean_inc(x_4);
x_24 = lean_alloc_closure((void*)(l_REPL_pickleProofSnapshot___rarg___lambda__2), 6, 5);
lean_closure_set(x_24, 0, x_5);
lean_closure_set(x_24, 1, x_3);
lean_closure_set(x_24, 2, x_16);
lean_closure_set(x_24, 3, x_2);
lean_closure_set(x_24, 4, x_4);
x_25 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_23, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_ctor_get(x_6, 0);
x_27 = lean_ctor_get(x_6, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_6);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
x_30 = lean_array_get_size(x_28);
x_31 = lean_nat_dec_lt(x_29, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_32 = l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__2;
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
x_34 = lean_apply_2(x_2, lean_box(0), x_33);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_35 = lean_array_fget(x_28, x_29);
lean_dec(x_29);
lean_dec(x_28);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
lean_dec(x_1);
lean_inc(x_35);
x_37 = lean_alloc_closure((void*)(l_REPL_ProofSnapshot_pickle___boxed), 3, 2);
lean_closure_set(x_37, 0, x_35);
lean_closure_set(x_37, 1, x_36);
lean_inc(x_3);
x_38 = lean_apply_2(x_3, lean_box(0), x_37);
lean_inc(x_2);
x_39 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__1), 3, 2);
lean_closure_set(x_39, 0, x_27);
lean_closure_set(x_39, 1, x_2);
lean_inc(x_4);
x_40 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_38, x_39);
lean_inc(x_2);
x_41 = lean_alloc_closure((void*)(l_REPL_pickleCommandSnapshot___rarg___lambda__2), 2, 1);
lean_closure_set(x_41, 0, x_2);
lean_inc(x_4);
x_42 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_40, x_41);
lean_inc(x_4);
x_43 = lean_alloc_closure((void*)(l_REPL_pickleProofSnapshot___rarg___lambda__2), 6, 5);
lean_closure_set(x_43, 0, x_5);
lean_closure_set(x_43, 1, x_3);
lean_closure_set(x_43, 2, x_35);
lean_closure_set(x_43, 3, x_2);
lean_closure_set(x_43, 4, x_4);
x_44 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_42, x_43);
return x_44;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_4);
lean_inc(x_7);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
lean_inc(x_5);
x_10 = lean_alloc_closure((void*)(l_REPL_pickleProofSnapshot___rarg___lambda__3), 6, 5);
lean_closure_set(x_10, 0, x_3);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_5);
lean_closure_set(x_10, 4, x_1);
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_REPL_pickleProofSnapshot___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_unpickleProofSnapshot___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_List_reverse___rarg(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = l_REPL_Message_of(x_9, x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_12);
{
lean_object* _tmp_0 = x_10;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_3 = x_13;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_4 = _tmp_3;
}
goto _start;
}
else
{
uint8_t x_15; 
lean_free_object(x_1);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_21 = l_REPL_Message_of(x_19, x_4);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_2);
x_1 = x_20;
x_2 = x_24;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_20);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_21, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 x_28 = x_21;
} else {
 lean_dec_ref(x_21);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(1, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_recordProofSnapshot___at_REPL_unpickleProofSnapshot___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_array_push(x_5, x_1);
lean_ctor_set(x_2, 1, x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = lean_array_get_size(x_11);
x_13 = lean_array_push(x_11, x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_REPL_createProofStepReponse___at_REPL_unpickleProofSnapshot___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = l_REPL_ProofSnapshot_newMessages(x_1, x_2);
x_6 = lean_box(0);
x_7 = l_List_mapM_loop___at_REPL_unpickleProofSnapshot___spec__2(x_5, x_6, x_3, x_4);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_1);
x_12 = l_REPL_recordProofSnapshot___at_REPL_unpickleProofSnapshot___spec__3(x_1, x_11, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
x_18 = l_REPL_ProofSnapshot_ppGoals(x_1, x_14);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = l_List_mapTR_loop___at_REPL_createProofStepReponse___spec__2(x_20, x_6);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_10);
lean_ctor_set(x_13, 0, x_22);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = l_List_mapTR_loop___at_REPL_createProofStepReponse___spec__2(x_23, x_6);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_16);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_10);
lean_ctor_set(x_13, 0, x_26);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_13);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_free_object(x_13);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_10);
x_28 = !lean_is_exclusive(x_18);
if (x_28 == 0)
{
return x_18;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_18, 0);
x_30 = lean_ctor_get(x_18, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_18);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_13, 0);
x_33 = lean_ctor_get(x_13, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_13);
x_34 = l_REPL_ProofSnapshot_ppGoals(x_1, x_14);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_37 = x_34;
} else {
 lean_dec_ref(x_34);
 x_37 = lean_box(0);
}
x_38 = l_List_mapTR_loop___at_REPL_createProofStepReponse___spec__2(x_35, x_6);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_10);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_33);
if (lean_is_scalar(x_37)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_37;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_36);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_10);
x_42 = lean_ctor_get(x_34, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_34, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_44 = x_34;
} else {
 lean_dec_ref(x_34);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_7);
if (x_46 == 0)
{
return x_7;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_7, 0);
x_48 = lean_ctor_get(x_7, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_7);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_unpickleProofSnapshot(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_REPL_ProofSnapshot_unpickle_unsafe____x40_REPL_Snapshots___hyg_2299_(x_1, x_3);
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_box(0);
x_9 = l_REPL_createProofStepReponse___at_REPL_unpickleProofSnapshot___spec__1(x_7, x_8, x_2, x_6);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
static lean_object* _init_l_panic___at_REPL_runCommand___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_panic___at_REPL_runCommand___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_REPL_runCommand___spec__2___closed__1;
x_2 = l_StateT_instMonadStateT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_REPL_runCommand___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at_REPL_runCommand___spec__2___closed__2;
x_2 = l_panic___at_REPL_sorries___spec__1___rarg___closed__1;
x_3 = l_instInhabited___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_REPL_runCommand___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_panic___at_REPL_runCommand___spec__2___closed__3;
x_5 = lean_panic_fn(x_4, x_1);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_dec(x_9);
x_10 = lean_box(0);
x_11 = l_REPL_Sorry_of(x_8, x_1, x_2, x_10);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_11);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_box(0);
x_15 = l_REPL_Sorry_of(x_13, x_1, x_2, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_5);
return x_17;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
lean_dec(x_3);
x_19 = !lean_is_exclusive(x_6);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_6, 0);
x_21 = l_REPL_recordProofSnapshot___at_REPL_unpickleProofSnapshot___spec__3(x_20, x_4, x_5);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_ctor_set(x_6, 0, x_25);
x_26 = l_REPL_Sorry_of(x_18, x_1, x_2, x_6);
lean_ctor_set(x_23, 0, x_26);
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_23, 0);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_23);
lean_ctor_set(x_6, 0, x_27);
x_29 = l_REPL_Sorry_of(x_18, x_1, x_2, x_6);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_21, 0, x_30);
return x_21;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_21, 0);
x_32 = lean_ctor_get(x_21, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_21);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_35 = x_31;
} else {
 lean_dec_ref(x_31);
 x_35 = lean_box(0);
}
lean_ctor_set(x_6, 0, x_33);
x_36 = l_REPL_Sorry_of(x_18, x_1, x_2, x_6);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_32);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_39 = lean_ctor_get(x_6, 0);
lean_inc(x_39);
lean_dec(x_6);
x_40 = l_REPL_recordProofSnapshot___at_REPL_unpickleProofSnapshot___spec__3(x_39, x_4, x_5);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_43 = x_40;
} else {
 lean_dec_ref(x_40);
 x_43 = lean_box(0);
}
x_44 = lean_ctor_get(x_41, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_46 = x_41;
} else {
 lean_dec_ref(x_41);
 x_46 = lean_box(0);
}
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_44);
x_48 = l_REPL_Sorry_of(x_18, x_1, x_2, x_47);
if (lean_is_scalar(x_46)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_46;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
if (lean_is_scalar(x_43)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_43;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_42);
return x_50;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_runCommand___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_List_reverse___rarg(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_10 = x_1;
} else {
 lean_dec_ref(x_1);
 x_10 = lean_box(0);
}
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_8, 0);
lean_inc(x_21);
lean_dec(x_8);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_19, 0);
x_24 = lean_ctor_get(x_19, 1);
x_25 = lean_ctor_get(x_20, 0);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
lean_inc(x_27);
x_28 = l_Lean_Elab_ContextInfo_ppGoals(x_21, x_27, x_4);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_box(0);
x_32 = l_REPL_ProofSnapshot_create(x_21, x_31, x_27, x_26, x_30);
lean_dec(x_21);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Std_Format_defWidth;
x_36 = lean_format_pretty(x_29, x_35);
x_37 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_38 = lean_string_append(x_37, x_36);
lean_dec(x_36);
x_39 = lean_string_append(x_38, x_37);
x_40 = l_String_trim(x_39);
lean_dec(x_39);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_33);
lean_ctor_set(x_19, 1, x_41);
lean_ctor_set(x_19, 0, x_40);
x_42 = l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1(x_23, x_24, x_19, x_3, x_34);
lean_dec(x_24);
lean_dec(x_23);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_11 = x_43;
x_12 = x_44;
goto block_17;
}
else
{
uint8_t x_45; 
lean_dec(x_29);
lean_free_object(x_19);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_32);
if (x_45 == 0)
{
return x_32;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_32, 0);
x_47 = lean_ctor_get(x_32, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_32);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_27);
lean_free_object(x_19);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_28);
if (x_49 == 0)
{
return x_28;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_28, 0);
x_51 = lean_ctor_get(x_28, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_28);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_19, 0);
x_54 = lean_ctor_get(x_19, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_19);
x_55 = lean_ctor_get(x_20, 0);
lean_inc(x_55);
lean_dec(x_20);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
lean_inc(x_57);
x_58 = l_Lean_Elab_ContextInfo_ppGoals(x_21, x_57, x_4);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_box(0);
x_62 = l_REPL_ProofSnapshot_create(x_21, x_61, x_57, x_56, x_60);
lean_dec(x_21);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = l_Std_Format_defWidth;
x_66 = lean_format_pretty(x_59, x_65);
x_67 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_68 = lean_string_append(x_67, x_66);
lean_dec(x_66);
x_69 = lean_string_append(x_68, x_67);
x_70 = l_String_trim(x_69);
lean_dec(x_69);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_63);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1(x_53, x_54, x_72, x_3, x_64);
lean_dec(x_54);
lean_dec(x_53);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_11 = x_74;
x_12 = x_75;
goto block_17;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_59);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_76 = lean_ctor_get(x_62, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_62, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_78 = x_62;
} else {
 lean_dec_ref(x_62);
 x_78 = lean_box(0);
}
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_57);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_80 = lean_ctor_get(x_58, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_58, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_82 = x_58;
} else {
 lean_dec_ref(x_58);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
else
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_20, 1);
lean_inc(x_84);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_20);
lean_dec(x_8);
x_85 = lean_ctor_get(x_19, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_19, 1);
lean_inc(x_86);
lean_dec(x_19);
x_87 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__4;
x_88 = l_panic___at_REPL_runCommand___spec__2(x_87, x_3, x_4);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = lean_ctor_get(x_89, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
lean_dec(x_89);
x_93 = l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1(x_85, x_86, x_91, x_92, x_90);
lean_dec(x_86);
lean_dec(x_85);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_11 = x_94;
x_12 = x_95;
goto block_17;
}
else
{
uint8_t x_96; 
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_96 = !lean_is_exclusive(x_88);
if (x_96 == 0)
{
return x_88;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_88, 0);
x_98 = lean_ctor_get(x_88, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_88);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
lean_object* x_100; uint8_t x_101; 
x_100 = lean_ctor_get(x_8, 0);
lean_inc(x_100);
lean_dec(x_8);
x_101 = !lean_is_exclusive(x_19);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_102 = lean_ctor_get(x_19, 0);
x_103 = lean_ctor_get(x_19, 1);
x_104 = lean_ctor_get(x_20, 0);
lean_inc(x_104);
lean_dec(x_20);
x_105 = !lean_is_exclusive(x_84);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_84, 0);
lean_inc(x_106);
lean_inc(x_104);
x_107 = l_Lean_Elab_ContextInfo_ppExpr(x_100, x_104, x_106, x_4);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
lean_ctor_set(x_84, 0, x_104);
x_110 = lean_box(0);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_110);
x_112 = l_REPL_ProofSnapshot_create(x_100, x_84, x_110, x_111, x_109);
lean_dec(x_100);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = l_Std_Format_defWidth;
x_116 = lean_format_pretty(x_108, x_115);
x_117 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1;
x_118 = lean_string_append(x_117, x_116);
lean_dec(x_116);
x_119 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_120 = lean_string_append(x_118, x_119);
x_121 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_121, 0, x_113);
lean_ctor_set(x_19, 1, x_121);
lean_ctor_set(x_19, 0, x_120);
x_122 = l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1(x_102, x_103, x_19, x_3, x_114);
lean_dec(x_103);
lean_dec(x_102);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_11 = x_123;
x_12 = x_124;
goto block_17;
}
else
{
uint8_t x_125; 
lean_dec(x_108);
lean_free_object(x_19);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_125 = !lean_is_exclusive(x_112);
if (x_125 == 0)
{
return x_112;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_112, 0);
x_127 = lean_ctor_get(x_112, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_112);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
else
{
uint8_t x_129; 
lean_free_object(x_84);
lean_dec(x_106);
lean_dec(x_104);
lean_free_object(x_19);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_100);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_129 = !lean_is_exclusive(x_107);
if (x_129 == 0)
{
return x_107;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_107, 0);
x_131 = lean_ctor_get(x_107, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_107);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
else
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_84, 0);
lean_inc(x_133);
lean_dec(x_84);
lean_inc(x_133);
lean_inc(x_104);
x_134 = l_Lean_Elab_ContextInfo_ppExpr(x_100, x_104, x_133, x_4);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
lean_dec(x_134);
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_104);
x_138 = lean_box(0);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_133);
lean_ctor_set(x_139, 1, x_138);
x_140 = l_REPL_ProofSnapshot_create(x_100, x_137, x_138, x_139, x_136);
lean_dec(x_100);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_143 = l_Std_Format_defWidth;
x_144 = lean_format_pretty(x_135, x_143);
x_145 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1;
x_146 = lean_string_append(x_145, x_144);
lean_dec(x_144);
x_147 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_148 = lean_string_append(x_146, x_147);
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_141);
lean_ctor_set(x_19, 1, x_149);
lean_ctor_set(x_19, 0, x_148);
x_150 = l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1(x_102, x_103, x_19, x_3, x_142);
lean_dec(x_103);
lean_dec(x_102);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
x_11 = x_151;
x_12 = x_152;
goto block_17;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_135);
lean_free_object(x_19);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_153 = lean_ctor_get(x_140, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_140, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_155 = x_140;
} else {
 lean_dec_ref(x_140);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_133);
lean_dec(x_104);
lean_free_object(x_19);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_100);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_157 = lean_ctor_get(x_134, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_134, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_159 = x_134;
} else {
 lean_dec_ref(x_134);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_161 = lean_ctor_get(x_19, 0);
x_162 = lean_ctor_get(x_19, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_19);
x_163 = lean_ctor_get(x_20, 0);
lean_inc(x_163);
lean_dec(x_20);
x_164 = lean_ctor_get(x_84, 0);
lean_inc(x_164);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 x_165 = x_84;
} else {
 lean_dec_ref(x_84);
 x_165 = lean_box(0);
}
lean_inc(x_164);
lean_inc(x_163);
x_166 = l_Lean_Elab_ContextInfo_ppExpr(x_100, x_163, x_164, x_4);
if (lean_obj_tag(x_166) == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_166, 1);
lean_inc(x_168);
lean_dec(x_166);
if (lean_is_scalar(x_165)) {
 x_169 = lean_alloc_ctor(1, 1, 0);
} else {
 x_169 = x_165;
}
lean_ctor_set(x_169, 0, x_163);
x_170 = lean_box(0);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_164);
lean_ctor_set(x_171, 1, x_170);
x_172 = l_REPL_ProofSnapshot_create(x_100, x_169, x_170, x_171, x_168);
lean_dec(x_100);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = l_Std_Format_defWidth;
x_176 = lean_format_pretty(x_167, x_175);
x_177 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1;
x_178 = lean_string_append(x_177, x_176);
lean_dec(x_176);
x_179 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_180 = lean_string_append(x_178, x_179);
x_181 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_181, 0, x_173);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
x_183 = l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1(x_161, x_162, x_182, x_3, x_174);
lean_dec(x_162);
lean_dec(x_161);
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
lean_dec(x_183);
x_11 = x_184;
x_12 = x_185;
goto block_17;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_162);
lean_dec(x_161);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_186 = lean_ctor_get(x_172, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_172, 1);
lean_inc(x_187);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_188 = x_172;
} else {
 lean_dec_ref(x_172);
 x_188 = lean_box(0);
}
if (lean_is_scalar(x_188)) {
 x_189 = lean_alloc_ctor(1, 2, 0);
} else {
 x_189 = x_188;
}
lean_ctor_set(x_189, 0, x_186);
lean_ctor_set(x_189, 1, x_187);
return x_189;
}
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
lean_dec(x_165);
lean_dec(x_164);
lean_dec(x_163);
lean_dec(x_162);
lean_dec(x_161);
lean_dec(x_100);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_190 = lean_ctor_get(x_166, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_166, 1);
lean_inc(x_191);
if (lean_is_exclusive(x_166)) {
 lean_ctor_release(x_166, 0);
 lean_ctor_release(x_166, 1);
 x_192 = x_166;
} else {
 lean_dec_ref(x_166);
 x_192 = lean_box(0);
}
if (lean_is_scalar(x_192)) {
 x_193 = lean_alloc_ctor(1, 2, 0);
} else {
 x_193 = x_192;
}
lean_ctor_set(x_193, 0, x_190);
lean_ctor_set(x_193, 1, x_191);
return x_193;
}
}
}
}
block_17:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
if (lean_is_scalar(x_10)) {
 x_15 = lean_alloc_ctor(1, 2, 0);
} else {
 x_15 = x_10;
}
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_2);
x_1 = x_9;
x_2 = x_15;
x_3 = x_14;
x_4 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_sorries___at_REPL_runCommand___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_box(0);
x_5 = l_List_mapTR_loop___at_REPL_sorries___spec__2(x_1, x_4);
x_6 = l_List_join___rarg(x_5);
x_7 = l_List_mapM_loop___at_REPL_runCommand___spec__3(x_6, x_4, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_runCommand___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_List_reverse___rarg(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_1, 1);
x_14 = lean_ctor_get(x_1, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_box(0);
x_21 = lean_box(0);
lean_inc(x_17);
x_22 = l_REPL_ProofSnapshot_create(x_15, x_20, x_17, x_21, x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_ContextInfo_ppGoals(x_15, x_17, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Std_Format_defWidth;
x_29 = lean_format_pretty(x_26, x_28);
x_30 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_31 = lean_string_append(x_30, x_29);
lean_dec(x_29);
x_32 = lean_string_append(x_31, x_30);
x_33 = l_String_trim(x_32);
lean_dec(x_32);
x_34 = l_REPL_ppTactic(x_15, x_16, x_27);
lean_dec(x_15);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_format_pretty(x_35, x_28);
x_38 = l_REPL_recordProofSnapshot___at_REPL_unpickleProofSnapshot___spec__3(x_23, x_3, x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_41);
x_44 = l_REPL_Tactic_of(x_33, x_37, x_18, x_19, x_43);
lean_dec(x_19);
lean_dec(x_18);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_44);
{
lean_object* _tmp_0 = x_13;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_2 = x_42;
lean_object* _tmp_3 = x_40;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
else
{
uint8_t x_46; 
lean_dec(x_33);
lean_dec(x_23);
lean_dec(x_19);
lean_dec(x_18);
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_2);
x_46 = !lean_is_exclusive(x_34);
if (x_46 == 0)
{
return x_34;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_34, 0);
x_48 = lean_ctor_get(x_34, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_34);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_23);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_25);
if (x_50 == 0)
{
return x_25;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_25, 0);
x_52 = lean_ctor_get(x_25, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_25);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_22);
if (x_54 == 0)
{
return x_22;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_22, 0);
x_56 = lean_ctor_get(x_22, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_22);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_58 = lean_ctor_get(x_1, 1);
lean_inc(x_58);
lean_dec(x_1);
x_59 = lean_ctor_get(x_8, 0);
lean_inc(x_59);
lean_dec(x_8);
x_60 = lean_ctor_get(x_9, 0);
lean_inc(x_60);
lean_dec(x_9);
x_61 = lean_ctor_get(x_10, 0);
lean_inc(x_61);
lean_dec(x_10);
x_62 = lean_ctor_get(x_11, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_11, 1);
lean_inc(x_63);
lean_dec(x_11);
x_64 = lean_box(0);
x_65 = lean_box(0);
lean_inc(x_61);
x_66 = l_REPL_ProofSnapshot_create(x_59, x_64, x_61, x_65, x_4);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = l_Lean_Elab_ContextInfo_ppGoals(x_59, x_61, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = l_Std_Format_defWidth;
x_73 = lean_format_pretty(x_70, x_72);
x_74 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_75 = lean_string_append(x_74, x_73);
lean_dec(x_73);
x_76 = lean_string_append(x_75, x_74);
x_77 = l_String_trim(x_76);
lean_dec(x_76);
x_78 = l_REPL_ppTactic(x_59, x_60, x_71);
lean_dec(x_59);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_format_pretty(x_79, x_72);
x_82 = l_REPL_recordProofSnapshot___at_REPL_unpickleProofSnapshot___spec__3(x_67, x_3, x_80);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_ctor_get(x_83, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
lean_dec(x_83);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_85);
x_88 = l_REPL_Tactic_of(x_77, x_81, x_62, x_63, x_87);
lean_dec(x_63);
lean_dec(x_62);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_2);
x_1 = x_58;
x_2 = x_89;
x_3 = x_86;
x_4 = x_84;
goto _start;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_77);
lean_dec(x_67);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_58);
lean_dec(x_3);
lean_dec(x_2);
x_91 = lean_ctor_get(x_78, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_78, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_93 = x_78;
} else {
 lean_dec_ref(x_78);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_67);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_3);
lean_dec(x_2);
x_95 = lean_ctor_get(x_69, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_69, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_97 = x_69;
} else {
 lean_dec_ref(x_69);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_3);
lean_dec(x_2);
x_99 = lean_ctor_get(x_66, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_66, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_101 = x_66;
} else {
 lean_dec_ref(x_66);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(1, 2, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_tactics___at_REPL_runCommand___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_box(0);
x_5 = l_List_mapTR_loop___at_REPL_tactics___spec__1(x_1, x_4);
x_6 = l_List_join___rarg(x_5);
x_7 = l_List_mapM_loop___at_REPL_runCommand___spec__5(x_6, x_4, x_2, x_3);
return x_7;
}
}
static lean_object* _init_l_REPL_runCommand___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_2 = l_REPL_State_cmdStates___default___closed__1;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_REPL_runCommand___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_9 = lean_box(0);
x_10 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_11 = l_REPL_runCommand___lambda__1___closed__1;
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_firstFrontendMacroScope;
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_12);
lean_ctor_set(x_15, 3, x_12);
lean_ctor_set(x_15, 4, x_2);
lean_ctor_set(x_15, 5, x_13);
lean_ctor_set(x_15, 6, x_14);
lean_ctor_set(x_15, 7, x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_3);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_REPL_recordCommandSnapshot___at_REPL_unpickleCommandSnapshot___spec__1(x_16, x_7, x_8);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_4);
lean_ctor_set(x_22, 2, x_5);
lean_ctor_set(x_22, 3, x_6);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_19, 0, x_23);
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_19, 0);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_19);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_4);
lean_ctor_set(x_26, 2, x_5);
lean_ctor_set(x_26, 3, x_6);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
lean_ctor_set(x_17, 0, x_28);
return x_17;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_29 = lean_ctor_get(x_17, 0);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_17);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_33 = x_29;
} else {
 lean_dec_ref(x_29);
 x_33 = lean_box(0);
}
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_4);
lean_ctor_set(x_34, 2, x_5);
lean_ctor_set(x_34, 3, x_6);
x_35 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_35, 0, x_34);
if (lean_is_scalar(x_33)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_33;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_30);
return x_37;
}
}
else
{
lean_object* x_38; uint8_t x_39; 
lean_dec(x_2);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
lean_ctor_set(x_38, 0, x_3);
x_41 = l_REPL_recordCommandSnapshot___at_REPL_unpickleCommandSnapshot___spec__1(x_38, x_7, x_8);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_4);
lean_ctor_set(x_46, 2, x_5);
lean_ctor_set(x_46, 3, x_6);
x_47 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_43, 0, x_47);
return x_41;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_ctor_get(x_43, 0);
x_49 = lean_ctor_get(x_43, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_43);
x_50 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_4);
lean_ctor_set(x_50, 2, x_5);
lean_ctor_set(x_50, 3, x_6);
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
lean_ctor_set(x_41, 0, x_52);
return x_41;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_53 = lean_ctor_get(x_41, 0);
x_54 = lean_ctor_get(x_41, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_41);
x_55 = lean_ctor_get(x_53, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_57 = x_53;
} else {
 lean_dec_ref(x_53);
 x_57 = lean_box(0);
}
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_4);
lean_ctor_set(x_58, 2, x_5);
lean_ctor_set(x_58, 3, x_6);
x_59 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_59, 0, x_58);
if (lean_is_scalar(x_57)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_57;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_56);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_54);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_62 = lean_ctor_get(x_38, 1);
lean_inc(x_62);
lean_dec(x_38);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_3);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_REPL_recordCommandSnapshot___at_REPL_unpickleCommandSnapshot___spec__1(x_63, x_7, x_8);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_67 = x_64;
} else {
 lean_dec_ref(x_64);
 x_67 = lean_box(0);
}
x_68 = lean_ctor_get(x_65, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_65, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_70 = x_65;
} else {
 lean_dec_ref(x_65);
 x_70 = lean_box(0);
}
x_71 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_4);
lean_ctor_set(x_71, 2, x_5);
lean_ctor_set(x_71, 3, x_6);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
if (lean_is_scalar(x_70)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_70;
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_69);
if (lean_is_scalar(x_67)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_67;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_66);
return x_74;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_runCommand___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_box(0);
x_11 = l_List_mapM_loop___at_REPL_unpickleProofSnapshot___spec__2(x_8, x_10, x_4, x_5);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
lean_inc(x_9);
x_16 = l_REPL_sorries___at_REPL_runCommand___spec__1(x_9, x_15, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 2);
lean_inc(x_18);
lean_dec(x_2);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_9);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = l_REPL_runCommand___lambda__1(x_1, x_10, x_7, x_14, x_20, x_10, x_21, x_19);
return x_22;
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_9);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_dec(x_16);
x_26 = lean_ctor_get(x_17, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_dec(x_17);
x_28 = l_REPL_runCommand___lambda__1(x_1, x_10, x_7, x_14, x_26, x_10, x_27, x_25);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_16, 1);
lean_inc(x_29);
lean_dec(x_16);
x_30 = lean_ctor_get(x_17, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_dec(x_17);
x_32 = l_REPL_tactics___at_REPL_runCommand___spec__4(x_9, x_31, x_29);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = l_REPL_runCommand___lambda__1(x_1, x_10, x_7, x_14, x_30, x_35, x_36, x_34);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_30);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_32);
if (x_38 == 0)
{
return x_32;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_32, 0);
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_32);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_16);
if (x_42 == 0)
{
return x_16;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_16, 0);
x_44 = lean_ctor_get(x_16, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_16);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_runCommand___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_box(0);
x_8 = lean_box(0);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; 
x_9 = l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432_(x_6, x_8, x_7, x_8, x_5);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_REPL_runCommand___lambda__2(x_1, x_2, x_10, x_4, x_11);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_io_error_to_string(x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
lean_ctor_set_tag(x_9, 0);
lean_ctor_set(x_9, 0, x_17);
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_io_error_to_string(x_18);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_4);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432_(x_6, x_26, x_7, x_8, x_5);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_REPL_runCommand___lambda__2(x_1, x_2, x_28, x_4, x_29);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = lean_io_error_to_string(x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_4);
lean_ctor_set_tag(x_27, 0);
lean_ctor_set(x_27, 0, x_35);
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
x_38 = lean_io_error_to_string(x_36);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_4);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_37);
return x_41;
}
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_runCommand___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = l_REPL_runCommand___lambda__3(x_7, x_1, x_8, x_3, x_4);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_2, 0);
lean_dec(x_12);
x_13 = l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2;
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_4);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_15 = l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
}
}
}
static lean_object* _init_l_REPL_runCommand___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_REPL_runCommand___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_REPL_runCommand(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_REPL_runCommand___closed__1;
x_6 = l_REPL_runCommand___lambda__4(x_1, x_5, x_2, x_3);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_array_get_size(x_9);
x_11 = lean_nat_dec_lt(x_8, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_free_object(x_4);
lean_dec(x_8);
x_12 = l_REPL_runCommand___closed__2;
x_13 = l_REPL_runCommand___lambda__4(x_1, x_12, x_2, x_3);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_array_fget(x_9, x_8);
lean_dec(x_8);
lean_dec(x_9);
lean_ctor_set(x_4, 0, x_14);
x_15 = 0;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_4);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_REPL_runCommand___lambda__4(x_1, x_17, x_2, x_3);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_4, 0);
lean_inc(x_19);
lean_dec(x_4);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
x_21 = lean_array_get_size(x_20);
x_22 = lean_nat_dec_lt(x_19, x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_19);
x_23 = l_REPL_runCommand___closed__2;
x_24 = l_REPL_runCommand___lambda__4(x_1, x_23, x_2, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_array_fget(x_20, x_19);
lean_dec(x_19);
lean_dec(x_20);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_REPL_runCommand___lambda__4(x_1, x_29, x_2, x_3);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_mapM_loop___at_REPL_runCommand___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_REPL_runProofStep___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Unknown proof state.", 20);
return x_1;
}
}
static lean_object* _init_l_REPL_runProofStep___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_REPL_runProofStep___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_REPL_runProofStep(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_8 = l_REPL_runProofStep___closed__2;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_array_fget(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
lean_inc(x_11);
x_13 = l_REPL_ProofSnapshot_runString(x_11, x_12, x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_11);
lean_inc(x_2);
x_17 = l_REPL_createProofStepReponse___at_REPL_unpickleProofSnapshot___spec__1(x_14, x_16, x_2, x_15);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_19, 0, x_22);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_19, 0);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_17, 0, x_26);
return x_17;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_17, 0);
x_28 = lean_ctor_get(x_17, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_17);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_31 = x_27;
} else {
 lean_dec_ref(x_27);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_29);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_28);
return x_34;
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_17);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_17, 0);
x_37 = lean_io_error_to_string(x_36);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_2);
lean_ctor_set_tag(x_17, 0);
lean_ctor_set(x_17, 0, x_39);
return x_17;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_17, 0);
x_41 = lean_ctor_get(x_17, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_17);
x_42 = lean_io_error_to_string(x_40);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_2);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_41);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_11);
x_46 = !lean_is_exclusive(x_13);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_13, 0);
x_48 = lean_io_error_to_string(x_47);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_2);
lean_ctor_set_tag(x_13, 0);
lean_ctor_set(x_13, 0, x_50);
return x_13;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_51 = lean_ctor_get(x_13, 0);
x_52 = lean_ctor_get(x_13, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_13);
x_53 = lean_io_error_to_string(x_51);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_2);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_52);
return x_56;
}
}
}
}
}
static lean_object* _init_l_getLines___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\n", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_getLines(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_get_stdin(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 3);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_apply_1(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_11 = lean_string_dec_eq(x_8, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_getLines___closed__1;
x_13 = lean_string_dec_eq(x_8, x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_free_object(x_6);
x_14 = l_getLines(x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_string_append(x_8, x_16);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_string_append(x_8, x_18);
lean_dec(x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_8);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_12);
return x_6;
}
}
else
{
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_6, 0);
x_27 = lean_ctor_get(x_6, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_6);
x_28 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_29 = lean_string_dec_eq(x_26, x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = l_getLines___closed__1;
x_31 = lean_string_dec_eq(x_26, x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_getLines(x_27);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_35 = x_32;
} else {
 lean_dec_ref(x_32);
 x_35 = lean_box(0);
}
x_36 = lean_string_append(x_26, x_33);
lean_dec(x_33);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_26);
x_38 = lean_ctor_get(x_32, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_40 = x_32;
} else {
 lean_dec_ref(x_32);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
lean_object* x_42; 
lean_dec(x_26);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_30);
lean_ctor_set(x_42, 1, x_27);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_26);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_28);
lean_ctor_set(x_43, 1, x_27);
return x_43;
}
}
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_6);
if (x_44 == 0)
{
return x_6;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_6, 0);
x_46 = lean_ctor_get(x_6, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_6);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
LEAN_EXPORT lean_object* l_instToJsonSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_instToJsonSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instToJsonSum___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_parse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_parse(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l___private_REPL_JSON_0__REPL_toJsonError____x40_REPL_JSON___hyg_2633_(x_4);
x_6 = lean_unsigned_to_nat(80u);
x_7 = l_Lean_Json_pretty(x_5, x_6);
x_8 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l___private_REPL_JSON_0__REPL_fromJsonProofStep____x40_REPL_JSON___hyg_353_(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_dec(x_11);
x_12 = l___private_REPL_JSON_0__REPL_fromJsonPickleEnvironment____x40_REPL_JSON___hyg_2803_(x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_12);
x_13 = l___private_REPL_JSON_0__REPL_fromJsonUnpickleEnvironment____x40_REPL_JSON___hyg_2958_(x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec(x_13);
x_14 = l___private_REPL_JSON_0__REPL_fromJsonPickleProofState____x40_REPL_JSON___hyg_3092_(x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_dec(x_14);
x_15 = l___private_REPL_JSON_0__REPL_fromJsonUnpickleProofState____x40_REPL_JSON___hyg_3245_(x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_dec(x_15);
x_16 = l___private_REPL_JSON_0__REPL_fromJsonCommand____x40_REPL_JSON___hyg_112_(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l___private_REPL_JSON_0__REPL_toJsonError____x40_REPL_JSON___hyg_2633_(x_17);
x_19 = lean_unsigned_to_nat(80u);
x_20 = l_Lean_Json_pretty(x_18, x_19);
x_21 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_2);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_2);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_10);
x_26 = lean_ctor_get(x_15, 0);
lean_inc(x_26);
lean_dec(x_15);
x_27 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_2);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_10);
x_29 = lean_ctor_get(x_14, 0);
lean_inc(x_29);
lean_dec(x_14);
x_30 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_2);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_10);
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
lean_dec(x_13);
x_33 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_2);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_10);
x_35 = lean_ctor_get(x_12, 0);
lean_inc(x_35);
lean_dec(x_12);
x_36 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_2);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_10);
x_38 = lean_ctor_get(x_11, 0);
lean_inc(x_38);
lean_dec(x_11);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_2);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___at_repl_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_9 = l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_fget(x_4, x_5);
lean_dec(x_4);
x_13 = l_REPL_CommandSnapshot_pickle(x_12, x_6, x_3);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_inc(x_5);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_5);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_16);
lean_ctor_set(x_17, 3, x_16);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_2);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_box(0);
lean_inc(x_5);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_5);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_21);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___at_repl_loop___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_8 = l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__2;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_array_fget(x_4, x_5);
lean_dec(x_4);
x_12 = lean_ctor_get(x_1, 1);
x_13 = l_REPL_ProofSnapshot_pickle(x_11, x_12, x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_box(0);
x_16 = l_REPL_createProofStepReponse___at_REPL_unpickleProofSnapshot___spec__1(x_11, x_15, x_2, x_14);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_18, 0, x_21);
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_16, 0, x_25);
return x_16;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_30 = x_26;
} else {
 lean_dec_ref(x_26);
 x_30 = lean_box(0);
}
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_28);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_16);
if (x_34 == 0)
{
return x_16;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_16, 0);
x_36 = lean_ctor_get(x_16, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_16);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_11);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_13);
if (x_38 == 0)
{
return x_13;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_13, 0);
x_40 = lean_ctor_get(x_13, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_13);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
static lean_object* _init_l_repl_loop___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("env", 3);
return x_1;
}
}
static lean_object* _init_l_repl_loop___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("messages", 8);
return x_1;
}
}
static lean_object* _init_l_repl_loop___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("sorries", 7);
return x_1;
}
}
static lean_object* _init_l_repl_loop___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tactics", 7);
return x_1;
}
}
static lean_object* _init_l_repl_loop___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("proofState", 10);
return x_1;
}
}
static lean_object* _init_l_repl_loop___lambda__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("goals", 5);
return x_1;
}
}
LEAN_EXPORT lean_object* l_repl_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = l_parse(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_REPL_runCommand(x_8, x_3, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_14 = lean_ctor_get(x_10, 1);
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = l_Lean_JsonNumber_fromNat(x_17);
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = l_repl_loop___lambda__1___closed__1;
lean_ctor_set(x_10, 1, x_19);
lean_ctor_set(x_10, 0, x_20);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
x_24 = l_repl_loop___lambda__1___closed__2;
x_25 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_24, x_23);
x_26 = lean_ctor_get(x_16, 2);
lean_inc(x_26);
x_27 = l_repl_loop___lambda__1___closed__3;
x_28 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__3(x_27, x_26);
x_29 = lean_ctor_get(x_16, 3);
lean_inc(x_29);
lean_dec(x_16);
x_30 = l_repl_loop___lambda__1___closed__4;
x_31 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__5(x_30, x_29);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_21);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_25);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_22);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_List_join___rarg(x_35);
x_37 = l_Lean_Json_mkObj(x_36);
x_38 = lean_unsigned_to_nat(80u);
x_39 = l_Lean_Json_pretty(x_37, x_38);
x_40 = l_IO_println___at_Lean_instEval___spec__1(x_39, x_12);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_43 = l_IO_println___at_Lean_instEval___spec__1(x_42, x_41);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = l_repl_loop(x_14, x_44);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_14);
x_46 = !lean_is_exclusive(x_43);
if (x_46 == 0)
{
return x_43;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_43, 0);
x_48 = lean_ctor_get(x_43, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_43);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_14);
x_50 = !lean_is_exclusive(x_40);
if (x_50 == 0)
{
return x_40;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_40, 0);
x_52 = lean_ctor_get(x_40, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_40);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_54 = lean_ctor_get(x_10, 1);
lean_inc(x_54);
lean_dec(x_10);
x_55 = lean_ctor_get(x_11, 0);
lean_inc(x_55);
lean_dec(x_11);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = l_Lean_JsonNumber_fromNat(x_56);
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = l_repl_loop___lambda__1___closed__1;
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_ctor_get(x_55, 1);
lean_inc(x_63);
x_64 = l_repl_loop___lambda__1___closed__2;
x_65 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_64, x_63);
x_66 = lean_ctor_get(x_55, 2);
lean_inc(x_66);
x_67 = l_repl_loop___lambda__1___closed__3;
x_68 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__3(x_67, x_66);
x_69 = lean_ctor_get(x_55, 3);
lean_inc(x_69);
lean_dec(x_55);
x_70 = l_repl_loop___lambda__1___closed__4;
x_71 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__5(x_70, x_69);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_61);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_65);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_62);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_List_join___rarg(x_75);
x_77 = l_Lean_Json_mkObj(x_76);
x_78 = lean_unsigned_to_nat(80u);
x_79 = l_Lean_Json_pretty(x_77, x_78);
x_80 = l_IO_println___at_Lean_instEval___spec__1(x_79, x_12);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_83 = l_IO_println___at_Lean_instEval___spec__1(x_82, x_81);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = l_repl_loop(x_54, x_84);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_54);
x_86 = lean_ctor_get(x_83, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_83, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_88 = x_83;
} else {
 lean_dec_ref(x_83);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_54);
x_90 = lean_ctor_get(x_80, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_80, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_92 = x_80;
} else {
 lean_dec_ref(x_80);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_94 = lean_ctor_get(x_9, 1);
lean_inc(x_94);
lean_dec(x_9);
x_95 = lean_ctor_get(x_10, 1);
lean_inc(x_95);
lean_dec(x_10);
x_96 = lean_ctor_get(x_11, 0);
lean_inc(x_96);
lean_dec(x_11);
x_97 = l___private_REPL_JSON_0__REPL_toJsonError____x40_REPL_JSON___hyg_2633_(x_96);
x_98 = lean_unsigned_to_nat(80u);
x_99 = l_Lean_Json_pretty(x_97, x_98);
x_100 = l_IO_println___at_Lean_instEval___spec__1(x_99, x_94);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_102 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_103 = l_IO_println___at_Lean_instEval___spec__1(x_102, x_101);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
x_105 = l_repl_loop(x_95, x_104);
return x_105;
}
else
{
uint8_t x_106; 
lean_dec(x_95);
x_106 = !lean_is_exclusive(x_103);
if (x_106 == 0)
{
return x_103;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_103, 0);
x_108 = lean_ctor_get(x_103, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_103);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
else
{
uint8_t x_110; 
lean_dec(x_95);
x_110 = !lean_is_exclusive(x_100);
if (x_110 == 0)
{
return x_100;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_100, 0);
x_112 = lean_ctor_get(x_100, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_100);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
else
{
uint8_t x_114; 
x_114 = !lean_is_exclusive(x_9);
if (x_114 == 0)
{
return x_9;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_9, 0);
x_116 = lean_ctor_get(x_9, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_9);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
case 1:
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_118 = lean_ctor_get(x_5, 1);
lean_inc(x_118);
lean_dec(x_5);
x_119 = lean_ctor_get(x_6, 0);
lean_inc(x_119);
lean_dec(x_6);
x_120 = l_REPL_runProofStep(x_119, x_3, x_118);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; uint8_t x_124; 
x_123 = lean_ctor_get(x_120, 1);
lean_inc(x_123);
lean_dec(x_120);
x_124 = !lean_is_exclusive(x_121);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; size_t x_139; size_t x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_125 = lean_ctor_get(x_121, 1);
x_126 = lean_ctor_get(x_121, 0);
lean_dec(x_126);
x_127 = lean_ctor_get(x_122, 0);
lean_inc(x_127);
lean_dec(x_122);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = l_Lean_JsonNumber_fromNat(x_128);
x_130 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_130, 0, x_129);
x_131 = l_repl_loop___lambda__1___closed__5;
lean_ctor_set(x_121, 1, x_130);
lean_ctor_set(x_121, 0, x_131);
x_132 = lean_box(0);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_121);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_ctor_get(x_127, 1);
lean_inc(x_134);
x_135 = l_List_redLength___rarg(x_134);
x_136 = lean_mk_empty_array_with_capacity(x_135);
lean_dec(x_135);
x_137 = l_List_toArrayAux___rarg(x_134, x_136);
x_138 = lean_array_get_size(x_137);
x_139 = lean_usize_of_nat(x_138);
lean_dec(x_138);
x_140 = 0;
x_141 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_ParseImportsFast_0__Lean_toJsonPrintImportResult____x40_Lean_Elab_ParseImportsFast___hyg_1710____spec__3(x_139, x_140, x_137);
x_142 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_142, 0, x_141);
x_143 = l_repl_loop___lambda__1___closed__6;
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_142);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_132);
x_146 = lean_ctor_get(x_127, 2);
lean_inc(x_146);
lean_dec(x_127);
x_147 = l_repl_loop___lambda__1___closed__2;
x_148 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_147, x_146);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_132);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_145);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_133);
lean_ctor_set(x_151, 1, x_150);
x_152 = l_List_join___rarg(x_151);
x_153 = l_Lean_Json_mkObj(x_152);
x_154 = lean_unsigned_to_nat(80u);
x_155 = l_Lean_Json_pretty(x_153, x_154);
x_156 = l_IO_println___at_Lean_instEval___spec__1(x_155, x_123);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_156, 1);
lean_inc(x_157);
lean_dec(x_156);
x_158 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_159 = l_IO_println___at_Lean_instEval___spec__1(x_158, x_157);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_159, 1);
lean_inc(x_160);
lean_dec(x_159);
x_161 = l_repl_loop(x_125, x_160);
return x_161;
}
else
{
uint8_t x_162; 
lean_dec(x_125);
x_162 = !lean_is_exclusive(x_159);
if (x_162 == 0)
{
return x_159;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_159, 0);
x_164 = lean_ctor_get(x_159, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_159);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
else
{
uint8_t x_166; 
lean_dec(x_125);
x_166 = !lean_is_exclusive(x_156);
if (x_166 == 0)
{
return x_156;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_156, 0);
x_168 = lean_ctor_get(x_156, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_156);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; size_t x_184; size_t x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_170 = lean_ctor_get(x_121, 1);
lean_inc(x_170);
lean_dec(x_121);
x_171 = lean_ctor_get(x_122, 0);
lean_inc(x_171);
lean_dec(x_122);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = l_Lean_JsonNumber_fromNat(x_172);
x_174 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_174, 0, x_173);
x_175 = l_repl_loop___lambda__1___closed__5;
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_174);
x_177 = lean_box(0);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_ctor_get(x_171, 1);
lean_inc(x_179);
x_180 = l_List_redLength___rarg(x_179);
x_181 = lean_mk_empty_array_with_capacity(x_180);
lean_dec(x_180);
x_182 = l_List_toArrayAux___rarg(x_179, x_181);
x_183 = lean_array_get_size(x_182);
x_184 = lean_usize_of_nat(x_183);
lean_dec(x_183);
x_185 = 0;
x_186 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_ParseImportsFast_0__Lean_toJsonPrintImportResult____x40_Lean_Elab_ParseImportsFast___hyg_1710____spec__3(x_184, x_185, x_182);
x_187 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_187, 0, x_186);
x_188 = l_repl_loop___lambda__1___closed__6;
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_187);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_177);
x_191 = lean_ctor_get(x_171, 2);
lean_inc(x_191);
lean_dec(x_171);
x_192 = l_repl_loop___lambda__1___closed__2;
x_193 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_192, x_191);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_177);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_190);
lean_ctor_set(x_195, 1, x_194);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_178);
lean_ctor_set(x_196, 1, x_195);
x_197 = l_List_join___rarg(x_196);
x_198 = l_Lean_Json_mkObj(x_197);
x_199 = lean_unsigned_to_nat(80u);
x_200 = l_Lean_Json_pretty(x_198, x_199);
x_201 = l_IO_println___at_Lean_instEval___spec__1(x_200, x_123);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_202 = lean_ctor_get(x_201, 1);
lean_inc(x_202);
lean_dec(x_201);
x_203 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_204 = l_IO_println___at_Lean_instEval___spec__1(x_203, x_202);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; lean_object* x_206; 
x_205 = lean_ctor_get(x_204, 1);
lean_inc(x_205);
lean_dec(x_204);
x_206 = l_repl_loop(x_170, x_205);
return x_206;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_170);
x_207 = lean_ctor_get(x_204, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_204, 1);
lean_inc(x_208);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 lean_ctor_release(x_204, 1);
 x_209 = x_204;
} else {
 lean_dec_ref(x_204);
 x_209 = lean_box(0);
}
if (lean_is_scalar(x_209)) {
 x_210 = lean_alloc_ctor(1, 2, 0);
} else {
 x_210 = x_209;
}
lean_ctor_set(x_210, 0, x_207);
lean_ctor_set(x_210, 1, x_208);
return x_210;
}
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_170);
x_211 = lean_ctor_get(x_201, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_201, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 x_213 = x_201;
} else {
 lean_dec_ref(x_201);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(1, 2, 0);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_211);
lean_ctor_set(x_214, 1, x_212);
return x_214;
}
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_215 = lean_ctor_get(x_120, 1);
lean_inc(x_215);
lean_dec(x_120);
x_216 = lean_ctor_get(x_121, 1);
lean_inc(x_216);
lean_dec(x_121);
x_217 = lean_ctor_get(x_122, 0);
lean_inc(x_217);
lean_dec(x_122);
x_218 = l___private_REPL_JSON_0__REPL_toJsonError____x40_REPL_JSON___hyg_2633_(x_217);
x_219 = lean_unsigned_to_nat(80u);
x_220 = l_Lean_Json_pretty(x_218, x_219);
x_221 = l_IO_println___at_Lean_instEval___spec__1(x_220, x_215);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_221, 1);
lean_inc(x_222);
lean_dec(x_221);
x_223 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_224 = l_IO_println___at_Lean_instEval___spec__1(x_223, x_222);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; 
x_225 = lean_ctor_get(x_224, 1);
lean_inc(x_225);
lean_dec(x_224);
x_226 = l_repl_loop(x_216, x_225);
return x_226;
}
else
{
uint8_t x_227; 
lean_dec(x_216);
x_227 = !lean_is_exclusive(x_224);
if (x_227 == 0)
{
return x_224;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_228 = lean_ctor_get(x_224, 0);
x_229 = lean_ctor_get(x_224, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_224);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_228);
lean_ctor_set(x_230, 1, x_229);
return x_230;
}
}
}
else
{
uint8_t x_231; 
lean_dec(x_216);
x_231 = !lean_is_exclusive(x_221);
if (x_231 == 0)
{
return x_221;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_232 = lean_ctor_get(x_221, 0);
x_233 = lean_ctor_get(x_221, 1);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_221);
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_232);
lean_ctor_set(x_234, 1, x_233);
return x_234;
}
}
}
}
case 2:
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_235 = lean_ctor_get(x_5, 1);
lean_inc(x_235);
lean_dec(x_5);
x_236 = lean_ctor_get(x_6, 0);
lean_inc(x_236);
lean_dec(x_6);
x_237 = l_REPL_pickleCommandSnapshot___at_repl_loop___spec__1(x_236, x_3, x_235);
lean_dec(x_236);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; 
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
if (lean_obj_tag(x_239) == 0)
{
lean_object* x_240; uint8_t x_241; 
x_240 = lean_ctor_get(x_237, 1);
lean_inc(x_240);
lean_dec(x_237);
x_241 = !lean_is_exclusive(x_238);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_242 = lean_ctor_get(x_238, 1);
x_243 = lean_ctor_get(x_238, 0);
lean_dec(x_243);
x_244 = lean_ctor_get(x_239, 0);
lean_inc(x_244);
lean_dec(x_239);
x_245 = lean_ctor_get(x_244, 0);
lean_inc(x_245);
x_246 = l_Lean_JsonNumber_fromNat(x_245);
x_247 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_247, 0, x_246);
x_248 = l_repl_loop___lambda__1___closed__1;
lean_ctor_set(x_238, 1, x_247);
lean_ctor_set(x_238, 0, x_248);
x_249 = lean_box(0);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_238);
lean_ctor_set(x_250, 1, x_249);
x_251 = lean_ctor_get(x_244, 1);
lean_inc(x_251);
x_252 = l_repl_loop___lambda__1___closed__2;
x_253 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_252, x_251);
x_254 = lean_ctor_get(x_244, 2);
lean_inc(x_254);
x_255 = l_repl_loop___lambda__1___closed__3;
x_256 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__3(x_255, x_254);
x_257 = lean_ctor_get(x_244, 3);
lean_inc(x_257);
lean_dec(x_244);
x_258 = l_repl_loop___lambda__1___closed__4;
x_259 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__5(x_258, x_257);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_249);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_256);
lean_ctor_set(x_261, 1, x_260);
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_253);
lean_ctor_set(x_262, 1, x_261);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_250);
lean_ctor_set(x_263, 1, x_262);
x_264 = l_List_join___rarg(x_263);
x_265 = l_Lean_Json_mkObj(x_264);
x_266 = lean_unsigned_to_nat(80u);
x_267 = l_Lean_Json_pretty(x_265, x_266);
x_268 = l_IO_println___at_Lean_instEval___spec__1(x_267, x_240);
if (lean_obj_tag(x_268) == 0)
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; 
x_269 = lean_ctor_get(x_268, 1);
lean_inc(x_269);
lean_dec(x_268);
x_270 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_271 = l_IO_println___at_Lean_instEval___spec__1(x_270, x_269);
if (lean_obj_tag(x_271) == 0)
{
lean_object* x_272; lean_object* x_273; 
x_272 = lean_ctor_get(x_271, 1);
lean_inc(x_272);
lean_dec(x_271);
x_273 = l_repl_loop(x_242, x_272);
return x_273;
}
else
{
uint8_t x_274; 
lean_dec(x_242);
x_274 = !lean_is_exclusive(x_271);
if (x_274 == 0)
{
return x_271;
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_275 = lean_ctor_get(x_271, 0);
x_276 = lean_ctor_get(x_271, 1);
lean_inc(x_276);
lean_inc(x_275);
lean_dec(x_271);
x_277 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_277, 0, x_275);
lean_ctor_set(x_277, 1, x_276);
return x_277;
}
}
}
else
{
uint8_t x_278; 
lean_dec(x_242);
x_278 = !lean_is_exclusive(x_268);
if (x_278 == 0)
{
return x_268;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_279 = lean_ctor_get(x_268, 0);
x_280 = lean_ctor_get(x_268, 1);
lean_inc(x_280);
lean_inc(x_279);
lean_dec(x_268);
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_279);
lean_ctor_set(x_281, 1, x_280);
return x_281;
}
}
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_282 = lean_ctor_get(x_238, 1);
lean_inc(x_282);
lean_dec(x_238);
x_283 = lean_ctor_get(x_239, 0);
lean_inc(x_283);
lean_dec(x_239);
x_284 = lean_ctor_get(x_283, 0);
lean_inc(x_284);
x_285 = l_Lean_JsonNumber_fromNat(x_284);
x_286 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_286, 0, x_285);
x_287 = l_repl_loop___lambda__1___closed__1;
x_288 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_288, 0, x_287);
lean_ctor_set(x_288, 1, x_286);
x_289 = lean_box(0);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_288);
lean_ctor_set(x_290, 1, x_289);
x_291 = lean_ctor_get(x_283, 1);
lean_inc(x_291);
x_292 = l_repl_loop___lambda__1___closed__2;
x_293 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_292, x_291);
x_294 = lean_ctor_get(x_283, 2);
lean_inc(x_294);
x_295 = l_repl_loop___lambda__1___closed__3;
x_296 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__3(x_295, x_294);
x_297 = lean_ctor_get(x_283, 3);
lean_inc(x_297);
lean_dec(x_283);
x_298 = l_repl_loop___lambda__1___closed__4;
x_299 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__5(x_298, x_297);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_299);
lean_ctor_set(x_300, 1, x_289);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_296);
lean_ctor_set(x_301, 1, x_300);
x_302 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_302, 0, x_293);
lean_ctor_set(x_302, 1, x_301);
x_303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_303, 0, x_290);
lean_ctor_set(x_303, 1, x_302);
x_304 = l_List_join___rarg(x_303);
x_305 = l_Lean_Json_mkObj(x_304);
x_306 = lean_unsigned_to_nat(80u);
x_307 = l_Lean_Json_pretty(x_305, x_306);
x_308 = l_IO_println___at_Lean_instEval___spec__1(x_307, x_240);
if (lean_obj_tag(x_308) == 0)
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_309 = lean_ctor_get(x_308, 1);
lean_inc(x_309);
lean_dec(x_308);
x_310 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_311 = l_IO_println___at_Lean_instEval___spec__1(x_310, x_309);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_312; lean_object* x_313; 
x_312 = lean_ctor_get(x_311, 1);
lean_inc(x_312);
lean_dec(x_311);
x_313 = l_repl_loop(x_282, x_312);
return x_313;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
lean_dec(x_282);
x_314 = lean_ctor_get(x_311, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_311, 1);
lean_inc(x_315);
if (lean_is_exclusive(x_311)) {
 lean_ctor_release(x_311, 0);
 lean_ctor_release(x_311, 1);
 x_316 = x_311;
} else {
 lean_dec_ref(x_311);
 x_316 = lean_box(0);
}
if (lean_is_scalar(x_316)) {
 x_317 = lean_alloc_ctor(1, 2, 0);
} else {
 x_317 = x_316;
}
lean_ctor_set(x_317, 0, x_314);
lean_ctor_set(x_317, 1, x_315);
return x_317;
}
}
else
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
lean_dec(x_282);
x_318 = lean_ctor_get(x_308, 0);
lean_inc(x_318);
x_319 = lean_ctor_get(x_308, 1);
lean_inc(x_319);
if (lean_is_exclusive(x_308)) {
 lean_ctor_release(x_308, 0);
 lean_ctor_release(x_308, 1);
 x_320 = x_308;
} else {
 lean_dec_ref(x_308);
 x_320 = lean_box(0);
}
if (lean_is_scalar(x_320)) {
 x_321 = lean_alloc_ctor(1, 2, 0);
} else {
 x_321 = x_320;
}
lean_ctor_set(x_321, 0, x_318);
lean_ctor_set(x_321, 1, x_319);
return x_321;
}
}
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
x_322 = lean_ctor_get(x_237, 1);
lean_inc(x_322);
lean_dec(x_237);
x_323 = lean_ctor_get(x_238, 1);
lean_inc(x_323);
lean_dec(x_238);
x_324 = lean_ctor_get(x_239, 0);
lean_inc(x_324);
lean_dec(x_239);
x_325 = l___private_REPL_JSON_0__REPL_toJsonError____x40_REPL_JSON___hyg_2633_(x_324);
x_326 = lean_unsigned_to_nat(80u);
x_327 = l_Lean_Json_pretty(x_325, x_326);
x_328 = l_IO_println___at_Lean_instEval___spec__1(x_327, x_322);
if (lean_obj_tag(x_328) == 0)
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_329 = lean_ctor_get(x_328, 1);
lean_inc(x_329);
lean_dec(x_328);
x_330 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_331 = l_IO_println___at_Lean_instEval___spec__1(x_330, x_329);
if (lean_obj_tag(x_331) == 0)
{
lean_object* x_332; lean_object* x_333; 
x_332 = lean_ctor_get(x_331, 1);
lean_inc(x_332);
lean_dec(x_331);
x_333 = l_repl_loop(x_323, x_332);
return x_333;
}
else
{
uint8_t x_334; 
lean_dec(x_323);
x_334 = !lean_is_exclusive(x_331);
if (x_334 == 0)
{
return x_331;
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_335 = lean_ctor_get(x_331, 0);
x_336 = lean_ctor_get(x_331, 1);
lean_inc(x_336);
lean_inc(x_335);
lean_dec(x_331);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_335);
lean_ctor_set(x_337, 1, x_336);
return x_337;
}
}
}
else
{
uint8_t x_338; 
lean_dec(x_323);
x_338 = !lean_is_exclusive(x_328);
if (x_338 == 0)
{
return x_328;
}
else
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; 
x_339 = lean_ctor_get(x_328, 0);
x_340 = lean_ctor_get(x_328, 1);
lean_inc(x_340);
lean_inc(x_339);
lean_dec(x_328);
x_341 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_341, 0, x_339);
lean_ctor_set(x_341, 1, x_340);
return x_341;
}
}
}
}
else
{
uint8_t x_342; 
x_342 = !lean_is_exclusive(x_237);
if (x_342 == 0)
{
return x_237;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_343 = lean_ctor_get(x_237, 0);
x_344 = lean_ctor_get(x_237, 1);
lean_inc(x_344);
lean_inc(x_343);
lean_dec(x_237);
x_345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_345, 0, x_343);
lean_ctor_set(x_345, 1, x_344);
return x_345;
}
}
}
case 3:
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_346 = lean_ctor_get(x_5, 1);
lean_inc(x_346);
lean_dec(x_5);
x_347 = lean_ctor_get(x_6, 0);
lean_inc(x_347);
lean_dec(x_6);
x_348 = l_REPL_unpickleCommandSnapshot(x_347, x_3, x_346);
lean_dec(x_347);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; lean_object* x_350; uint8_t x_351; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
lean_dec(x_348);
x_351 = !lean_is_exclusive(x_349);
if (x_351 == 0)
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_352 = lean_ctor_get(x_349, 0);
x_353 = lean_ctor_get(x_349, 1);
x_354 = lean_ctor_get(x_352, 0);
lean_inc(x_354);
x_355 = l_Lean_JsonNumber_fromNat(x_354);
x_356 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_356, 0, x_355);
x_357 = l_repl_loop___lambda__1___closed__1;
lean_ctor_set(x_349, 1, x_356);
lean_ctor_set(x_349, 0, x_357);
x_358 = lean_box(0);
x_359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_359, 0, x_349);
lean_ctor_set(x_359, 1, x_358);
x_360 = lean_ctor_get(x_352, 1);
lean_inc(x_360);
x_361 = l_repl_loop___lambda__1___closed__2;
x_362 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_361, x_360);
x_363 = lean_ctor_get(x_352, 2);
lean_inc(x_363);
x_364 = l_repl_loop___lambda__1___closed__3;
x_365 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__3(x_364, x_363);
x_366 = lean_ctor_get(x_352, 3);
lean_inc(x_366);
lean_dec(x_352);
x_367 = l_repl_loop___lambda__1___closed__4;
x_368 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__5(x_367, x_366);
x_369 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_369, 0, x_368);
lean_ctor_set(x_369, 1, x_358);
x_370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_370, 0, x_365);
lean_ctor_set(x_370, 1, x_369);
x_371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_371, 0, x_362);
lean_ctor_set(x_371, 1, x_370);
x_372 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_372, 0, x_359);
lean_ctor_set(x_372, 1, x_371);
x_373 = l_List_join___rarg(x_372);
x_374 = l_Lean_Json_mkObj(x_373);
x_375 = lean_unsigned_to_nat(80u);
x_376 = l_Lean_Json_pretty(x_374, x_375);
x_377 = l_IO_println___at_Lean_instEval___spec__1(x_376, x_350);
if (lean_obj_tag(x_377) == 0)
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; 
x_378 = lean_ctor_get(x_377, 1);
lean_inc(x_378);
lean_dec(x_377);
x_379 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_380 = l_IO_println___at_Lean_instEval___spec__1(x_379, x_378);
if (lean_obj_tag(x_380) == 0)
{
lean_object* x_381; lean_object* x_382; 
x_381 = lean_ctor_get(x_380, 1);
lean_inc(x_381);
lean_dec(x_380);
x_382 = l_repl_loop(x_353, x_381);
return x_382;
}
else
{
uint8_t x_383; 
lean_dec(x_353);
x_383 = !lean_is_exclusive(x_380);
if (x_383 == 0)
{
return x_380;
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_384 = lean_ctor_get(x_380, 0);
x_385 = lean_ctor_get(x_380, 1);
lean_inc(x_385);
lean_inc(x_384);
lean_dec(x_380);
x_386 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_386, 0, x_384);
lean_ctor_set(x_386, 1, x_385);
return x_386;
}
}
}
else
{
uint8_t x_387; 
lean_dec(x_353);
x_387 = !lean_is_exclusive(x_377);
if (x_387 == 0)
{
return x_377;
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_388 = lean_ctor_get(x_377, 0);
x_389 = lean_ctor_get(x_377, 1);
lean_inc(x_389);
lean_inc(x_388);
lean_dec(x_377);
x_390 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_390, 0, x_388);
lean_ctor_set(x_390, 1, x_389);
return x_390;
}
}
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; 
x_391 = lean_ctor_get(x_349, 0);
x_392 = lean_ctor_get(x_349, 1);
lean_inc(x_392);
lean_inc(x_391);
lean_dec(x_349);
x_393 = lean_ctor_get(x_391, 0);
lean_inc(x_393);
x_394 = l_Lean_JsonNumber_fromNat(x_393);
x_395 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_395, 0, x_394);
x_396 = l_repl_loop___lambda__1___closed__1;
x_397 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_397, 0, x_396);
lean_ctor_set(x_397, 1, x_395);
x_398 = lean_box(0);
x_399 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_399, 0, x_397);
lean_ctor_set(x_399, 1, x_398);
x_400 = lean_ctor_get(x_391, 1);
lean_inc(x_400);
x_401 = l_repl_loop___lambda__1___closed__2;
x_402 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_401, x_400);
x_403 = lean_ctor_get(x_391, 2);
lean_inc(x_403);
x_404 = l_repl_loop___lambda__1___closed__3;
x_405 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__3(x_404, x_403);
x_406 = lean_ctor_get(x_391, 3);
lean_inc(x_406);
lean_dec(x_391);
x_407 = l_repl_loop___lambda__1___closed__4;
x_408 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__5(x_407, x_406);
x_409 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_409, 0, x_408);
lean_ctor_set(x_409, 1, x_398);
x_410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_410, 0, x_405);
lean_ctor_set(x_410, 1, x_409);
x_411 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_411, 0, x_402);
lean_ctor_set(x_411, 1, x_410);
x_412 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_412, 0, x_399);
lean_ctor_set(x_412, 1, x_411);
x_413 = l_List_join___rarg(x_412);
x_414 = l_Lean_Json_mkObj(x_413);
x_415 = lean_unsigned_to_nat(80u);
x_416 = l_Lean_Json_pretty(x_414, x_415);
x_417 = l_IO_println___at_Lean_instEval___spec__1(x_416, x_350);
if (lean_obj_tag(x_417) == 0)
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; 
x_418 = lean_ctor_get(x_417, 1);
lean_inc(x_418);
lean_dec(x_417);
x_419 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_420 = l_IO_println___at_Lean_instEval___spec__1(x_419, x_418);
if (lean_obj_tag(x_420) == 0)
{
lean_object* x_421; lean_object* x_422; 
x_421 = lean_ctor_get(x_420, 1);
lean_inc(x_421);
lean_dec(x_420);
x_422 = l_repl_loop(x_392, x_421);
return x_422;
}
else
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; 
lean_dec(x_392);
x_423 = lean_ctor_get(x_420, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_420, 1);
lean_inc(x_424);
if (lean_is_exclusive(x_420)) {
 lean_ctor_release(x_420, 0);
 lean_ctor_release(x_420, 1);
 x_425 = x_420;
} else {
 lean_dec_ref(x_420);
 x_425 = lean_box(0);
}
if (lean_is_scalar(x_425)) {
 x_426 = lean_alloc_ctor(1, 2, 0);
} else {
 x_426 = x_425;
}
lean_ctor_set(x_426, 0, x_423);
lean_ctor_set(x_426, 1, x_424);
return x_426;
}
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; 
lean_dec(x_392);
x_427 = lean_ctor_get(x_417, 0);
lean_inc(x_427);
x_428 = lean_ctor_get(x_417, 1);
lean_inc(x_428);
if (lean_is_exclusive(x_417)) {
 lean_ctor_release(x_417, 0);
 lean_ctor_release(x_417, 1);
 x_429 = x_417;
} else {
 lean_dec_ref(x_417);
 x_429 = lean_box(0);
}
if (lean_is_scalar(x_429)) {
 x_430 = lean_alloc_ctor(1, 2, 0);
} else {
 x_430 = x_429;
}
lean_ctor_set(x_430, 0, x_427);
lean_ctor_set(x_430, 1, x_428);
return x_430;
}
}
}
else
{
uint8_t x_431; 
x_431 = !lean_is_exclusive(x_348);
if (x_431 == 0)
{
return x_348;
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; 
x_432 = lean_ctor_get(x_348, 0);
x_433 = lean_ctor_get(x_348, 1);
lean_inc(x_433);
lean_inc(x_432);
lean_dec(x_348);
x_434 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_434, 0, x_432);
lean_ctor_set(x_434, 1, x_433);
return x_434;
}
}
}
case 4:
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; 
x_435 = lean_ctor_get(x_5, 1);
lean_inc(x_435);
lean_dec(x_5);
x_436 = lean_ctor_get(x_6, 0);
lean_inc(x_436);
lean_dec(x_6);
x_437 = l_REPL_pickleProofSnapshot___at_repl_loop___spec__2(x_436, x_3, x_435);
lean_dec(x_436);
if (lean_obj_tag(x_437) == 0)
{
lean_object* x_438; lean_object* x_439; 
x_438 = lean_ctor_get(x_437, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_438, 0);
lean_inc(x_439);
if (lean_obj_tag(x_439) == 0)
{
lean_object* x_440; uint8_t x_441; 
x_440 = lean_ctor_get(x_437, 1);
lean_inc(x_440);
lean_dec(x_437);
x_441 = !lean_is_exclusive(x_438);
if (x_441 == 0)
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; size_t x_456; size_t x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; 
x_442 = lean_ctor_get(x_438, 1);
x_443 = lean_ctor_get(x_438, 0);
lean_dec(x_443);
x_444 = lean_ctor_get(x_439, 0);
lean_inc(x_444);
lean_dec(x_439);
x_445 = lean_ctor_get(x_444, 0);
lean_inc(x_445);
x_446 = l_Lean_JsonNumber_fromNat(x_445);
x_447 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_447, 0, x_446);
x_448 = l_repl_loop___lambda__1___closed__5;
lean_ctor_set(x_438, 1, x_447);
lean_ctor_set(x_438, 0, x_448);
x_449 = lean_box(0);
x_450 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_450, 0, x_438);
lean_ctor_set(x_450, 1, x_449);
x_451 = lean_ctor_get(x_444, 1);
lean_inc(x_451);
x_452 = l_List_redLength___rarg(x_451);
x_453 = lean_mk_empty_array_with_capacity(x_452);
lean_dec(x_452);
x_454 = l_List_toArrayAux___rarg(x_451, x_453);
x_455 = lean_array_get_size(x_454);
x_456 = lean_usize_of_nat(x_455);
lean_dec(x_455);
x_457 = 0;
x_458 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_ParseImportsFast_0__Lean_toJsonPrintImportResult____x40_Lean_Elab_ParseImportsFast___hyg_1710____spec__3(x_456, x_457, x_454);
x_459 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_459, 0, x_458);
x_460 = l_repl_loop___lambda__1___closed__6;
x_461 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_461, 0, x_460);
lean_ctor_set(x_461, 1, x_459);
x_462 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_462, 0, x_461);
lean_ctor_set(x_462, 1, x_449);
x_463 = lean_ctor_get(x_444, 2);
lean_inc(x_463);
lean_dec(x_444);
x_464 = l_repl_loop___lambda__1___closed__2;
x_465 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_464, x_463);
x_466 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_466, 0, x_465);
lean_ctor_set(x_466, 1, x_449);
x_467 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_467, 0, x_462);
lean_ctor_set(x_467, 1, x_466);
x_468 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_468, 0, x_450);
lean_ctor_set(x_468, 1, x_467);
x_469 = l_List_join___rarg(x_468);
x_470 = l_Lean_Json_mkObj(x_469);
x_471 = lean_unsigned_to_nat(80u);
x_472 = l_Lean_Json_pretty(x_470, x_471);
x_473 = l_IO_println___at_Lean_instEval___spec__1(x_472, x_440);
if (lean_obj_tag(x_473) == 0)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_474 = lean_ctor_get(x_473, 1);
lean_inc(x_474);
lean_dec(x_473);
x_475 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_476 = l_IO_println___at_Lean_instEval___spec__1(x_475, x_474);
if (lean_obj_tag(x_476) == 0)
{
lean_object* x_477; lean_object* x_478; 
x_477 = lean_ctor_get(x_476, 1);
lean_inc(x_477);
lean_dec(x_476);
x_478 = l_repl_loop(x_442, x_477);
return x_478;
}
else
{
uint8_t x_479; 
lean_dec(x_442);
x_479 = !lean_is_exclusive(x_476);
if (x_479 == 0)
{
return x_476;
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; 
x_480 = lean_ctor_get(x_476, 0);
x_481 = lean_ctor_get(x_476, 1);
lean_inc(x_481);
lean_inc(x_480);
lean_dec(x_476);
x_482 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_482, 0, x_480);
lean_ctor_set(x_482, 1, x_481);
return x_482;
}
}
}
else
{
uint8_t x_483; 
lean_dec(x_442);
x_483 = !lean_is_exclusive(x_473);
if (x_483 == 0)
{
return x_473;
}
else
{
lean_object* x_484; lean_object* x_485; lean_object* x_486; 
x_484 = lean_ctor_get(x_473, 0);
x_485 = lean_ctor_get(x_473, 1);
lean_inc(x_485);
lean_inc(x_484);
lean_dec(x_473);
x_486 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_486, 0, x_484);
lean_ctor_set(x_486, 1, x_485);
return x_486;
}
}
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; size_t x_501; size_t x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; 
x_487 = lean_ctor_get(x_438, 1);
lean_inc(x_487);
lean_dec(x_438);
x_488 = lean_ctor_get(x_439, 0);
lean_inc(x_488);
lean_dec(x_439);
x_489 = lean_ctor_get(x_488, 0);
lean_inc(x_489);
x_490 = l_Lean_JsonNumber_fromNat(x_489);
x_491 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_491, 0, x_490);
x_492 = l_repl_loop___lambda__1___closed__5;
x_493 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_493, 0, x_492);
lean_ctor_set(x_493, 1, x_491);
x_494 = lean_box(0);
x_495 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_495, 0, x_493);
lean_ctor_set(x_495, 1, x_494);
x_496 = lean_ctor_get(x_488, 1);
lean_inc(x_496);
x_497 = l_List_redLength___rarg(x_496);
x_498 = lean_mk_empty_array_with_capacity(x_497);
lean_dec(x_497);
x_499 = l_List_toArrayAux___rarg(x_496, x_498);
x_500 = lean_array_get_size(x_499);
x_501 = lean_usize_of_nat(x_500);
lean_dec(x_500);
x_502 = 0;
x_503 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_ParseImportsFast_0__Lean_toJsonPrintImportResult____x40_Lean_Elab_ParseImportsFast___hyg_1710____spec__3(x_501, x_502, x_499);
x_504 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_504, 0, x_503);
x_505 = l_repl_loop___lambda__1___closed__6;
x_506 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_506, 0, x_505);
lean_ctor_set(x_506, 1, x_504);
x_507 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_507, 0, x_506);
lean_ctor_set(x_507, 1, x_494);
x_508 = lean_ctor_get(x_488, 2);
lean_inc(x_508);
lean_dec(x_488);
x_509 = l_repl_loop___lambda__1___closed__2;
x_510 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_509, x_508);
x_511 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_511, 0, x_510);
lean_ctor_set(x_511, 1, x_494);
x_512 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_512, 0, x_507);
lean_ctor_set(x_512, 1, x_511);
x_513 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_513, 0, x_495);
lean_ctor_set(x_513, 1, x_512);
x_514 = l_List_join___rarg(x_513);
x_515 = l_Lean_Json_mkObj(x_514);
x_516 = lean_unsigned_to_nat(80u);
x_517 = l_Lean_Json_pretty(x_515, x_516);
x_518 = l_IO_println___at_Lean_instEval___spec__1(x_517, x_440);
if (lean_obj_tag(x_518) == 0)
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; 
x_519 = lean_ctor_get(x_518, 1);
lean_inc(x_519);
lean_dec(x_518);
x_520 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_521 = l_IO_println___at_Lean_instEval___spec__1(x_520, x_519);
if (lean_obj_tag(x_521) == 0)
{
lean_object* x_522; lean_object* x_523; 
x_522 = lean_ctor_get(x_521, 1);
lean_inc(x_522);
lean_dec(x_521);
x_523 = l_repl_loop(x_487, x_522);
return x_523;
}
else
{
lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; 
lean_dec(x_487);
x_524 = lean_ctor_get(x_521, 0);
lean_inc(x_524);
x_525 = lean_ctor_get(x_521, 1);
lean_inc(x_525);
if (lean_is_exclusive(x_521)) {
 lean_ctor_release(x_521, 0);
 lean_ctor_release(x_521, 1);
 x_526 = x_521;
} else {
 lean_dec_ref(x_521);
 x_526 = lean_box(0);
}
if (lean_is_scalar(x_526)) {
 x_527 = lean_alloc_ctor(1, 2, 0);
} else {
 x_527 = x_526;
}
lean_ctor_set(x_527, 0, x_524);
lean_ctor_set(x_527, 1, x_525);
return x_527;
}
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; 
lean_dec(x_487);
x_528 = lean_ctor_get(x_518, 0);
lean_inc(x_528);
x_529 = lean_ctor_get(x_518, 1);
lean_inc(x_529);
if (lean_is_exclusive(x_518)) {
 lean_ctor_release(x_518, 0);
 lean_ctor_release(x_518, 1);
 x_530 = x_518;
} else {
 lean_dec_ref(x_518);
 x_530 = lean_box(0);
}
if (lean_is_scalar(x_530)) {
 x_531 = lean_alloc_ctor(1, 2, 0);
} else {
 x_531 = x_530;
}
lean_ctor_set(x_531, 0, x_528);
lean_ctor_set(x_531, 1, x_529);
return x_531;
}
}
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; 
x_532 = lean_ctor_get(x_437, 1);
lean_inc(x_532);
lean_dec(x_437);
x_533 = lean_ctor_get(x_438, 1);
lean_inc(x_533);
lean_dec(x_438);
x_534 = lean_ctor_get(x_439, 0);
lean_inc(x_534);
lean_dec(x_439);
x_535 = l___private_REPL_JSON_0__REPL_toJsonError____x40_REPL_JSON___hyg_2633_(x_534);
x_536 = lean_unsigned_to_nat(80u);
x_537 = l_Lean_Json_pretty(x_535, x_536);
x_538 = l_IO_println___at_Lean_instEval___spec__1(x_537, x_532);
if (lean_obj_tag(x_538) == 0)
{
lean_object* x_539; lean_object* x_540; lean_object* x_541; 
x_539 = lean_ctor_get(x_538, 1);
lean_inc(x_539);
lean_dec(x_538);
x_540 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_541 = l_IO_println___at_Lean_instEval___spec__1(x_540, x_539);
if (lean_obj_tag(x_541) == 0)
{
lean_object* x_542; lean_object* x_543; 
x_542 = lean_ctor_get(x_541, 1);
lean_inc(x_542);
lean_dec(x_541);
x_543 = l_repl_loop(x_533, x_542);
return x_543;
}
else
{
uint8_t x_544; 
lean_dec(x_533);
x_544 = !lean_is_exclusive(x_541);
if (x_544 == 0)
{
return x_541;
}
else
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; 
x_545 = lean_ctor_get(x_541, 0);
x_546 = lean_ctor_get(x_541, 1);
lean_inc(x_546);
lean_inc(x_545);
lean_dec(x_541);
x_547 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_547, 0, x_545);
lean_ctor_set(x_547, 1, x_546);
return x_547;
}
}
}
else
{
uint8_t x_548; 
lean_dec(x_533);
x_548 = !lean_is_exclusive(x_538);
if (x_548 == 0)
{
return x_538;
}
else
{
lean_object* x_549; lean_object* x_550; lean_object* x_551; 
x_549 = lean_ctor_get(x_538, 0);
x_550 = lean_ctor_get(x_538, 1);
lean_inc(x_550);
lean_inc(x_549);
lean_dec(x_538);
x_551 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_551, 0, x_549);
lean_ctor_set(x_551, 1, x_550);
return x_551;
}
}
}
}
else
{
uint8_t x_552; 
x_552 = !lean_is_exclusive(x_437);
if (x_552 == 0)
{
return x_437;
}
else
{
lean_object* x_553; lean_object* x_554; lean_object* x_555; 
x_553 = lean_ctor_get(x_437, 0);
x_554 = lean_ctor_get(x_437, 1);
lean_inc(x_554);
lean_inc(x_553);
lean_dec(x_437);
x_555 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_555, 0, x_553);
lean_ctor_set(x_555, 1, x_554);
return x_555;
}
}
}
default: 
{
lean_object* x_556; lean_object* x_557; lean_object* x_558; 
x_556 = lean_ctor_get(x_5, 1);
lean_inc(x_556);
lean_dec(x_5);
x_557 = lean_ctor_get(x_6, 0);
lean_inc(x_557);
lean_dec(x_6);
x_558 = l_REPL_unpickleProofSnapshot(x_557, x_3, x_556);
if (lean_obj_tag(x_558) == 0)
{
lean_object* x_559; lean_object* x_560; uint8_t x_561; 
x_559 = lean_ctor_get(x_558, 0);
lean_inc(x_559);
x_560 = lean_ctor_get(x_558, 1);
lean_inc(x_560);
lean_dec(x_558);
x_561 = !lean_is_exclusive(x_559);
if (x_561 == 0)
{
lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; size_t x_575; size_t x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; 
x_562 = lean_ctor_get(x_559, 0);
x_563 = lean_ctor_get(x_559, 1);
x_564 = lean_ctor_get(x_562, 0);
lean_inc(x_564);
x_565 = l_Lean_JsonNumber_fromNat(x_564);
x_566 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_566, 0, x_565);
x_567 = l_repl_loop___lambda__1___closed__5;
lean_ctor_set(x_559, 1, x_566);
lean_ctor_set(x_559, 0, x_567);
x_568 = lean_box(0);
x_569 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_569, 0, x_559);
lean_ctor_set(x_569, 1, x_568);
x_570 = lean_ctor_get(x_562, 1);
lean_inc(x_570);
x_571 = l_List_redLength___rarg(x_570);
x_572 = lean_mk_empty_array_with_capacity(x_571);
lean_dec(x_571);
x_573 = l_List_toArrayAux___rarg(x_570, x_572);
x_574 = lean_array_get_size(x_573);
x_575 = lean_usize_of_nat(x_574);
lean_dec(x_574);
x_576 = 0;
x_577 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_ParseImportsFast_0__Lean_toJsonPrintImportResult____x40_Lean_Elab_ParseImportsFast___hyg_1710____spec__3(x_575, x_576, x_573);
x_578 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_578, 0, x_577);
x_579 = l_repl_loop___lambda__1___closed__6;
x_580 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_580, 0, x_579);
lean_ctor_set(x_580, 1, x_578);
x_581 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_581, 0, x_580);
lean_ctor_set(x_581, 1, x_568);
x_582 = lean_ctor_get(x_562, 2);
lean_inc(x_582);
lean_dec(x_562);
x_583 = l_repl_loop___lambda__1___closed__2;
x_584 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_583, x_582);
x_585 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_585, 0, x_584);
lean_ctor_set(x_585, 1, x_568);
x_586 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_586, 0, x_581);
lean_ctor_set(x_586, 1, x_585);
x_587 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_587, 0, x_569);
lean_ctor_set(x_587, 1, x_586);
x_588 = l_List_join___rarg(x_587);
x_589 = l_Lean_Json_mkObj(x_588);
x_590 = lean_unsigned_to_nat(80u);
x_591 = l_Lean_Json_pretty(x_589, x_590);
x_592 = l_IO_println___at_Lean_instEval___spec__1(x_591, x_560);
if (lean_obj_tag(x_592) == 0)
{
lean_object* x_593; lean_object* x_594; lean_object* x_595; 
x_593 = lean_ctor_get(x_592, 1);
lean_inc(x_593);
lean_dec(x_592);
x_594 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_595 = l_IO_println___at_Lean_instEval___spec__1(x_594, x_593);
if (lean_obj_tag(x_595) == 0)
{
lean_object* x_596; lean_object* x_597; 
x_596 = lean_ctor_get(x_595, 1);
lean_inc(x_596);
lean_dec(x_595);
x_597 = l_repl_loop(x_563, x_596);
return x_597;
}
else
{
uint8_t x_598; 
lean_dec(x_563);
x_598 = !lean_is_exclusive(x_595);
if (x_598 == 0)
{
return x_595;
}
else
{
lean_object* x_599; lean_object* x_600; lean_object* x_601; 
x_599 = lean_ctor_get(x_595, 0);
x_600 = lean_ctor_get(x_595, 1);
lean_inc(x_600);
lean_inc(x_599);
lean_dec(x_595);
x_601 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_601, 0, x_599);
lean_ctor_set(x_601, 1, x_600);
return x_601;
}
}
}
else
{
uint8_t x_602; 
lean_dec(x_563);
x_602 = !lean_is_exclusive(x_592);
if (x_602 == 0)
{
return x_592;
}
else
{
lean_object* x_603; lean_object* x_604; lean_object* x_605; 
x_603 = lean_ctor_get(x_592, 0);
x_604 = lean_ctor_get(x_592, 1);
lean_inc(x_604);
lean_inc(x_603);
lean_dec(x_592);
x_605 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_605, 0, x_603);
lean_ctor_set(x_605, 1, x_604);
return x_605;
}
}
}
else
{
lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; size_t x_620; size_t x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; 
x_606 = lean_ctor_get(x_559, 0);
x_607 = lean_ctor_get(x_559, 1);
lean_inc(x_607);
lean_inc(x_606);
lean_dec(x_559);
x_608 = lean_ctor_get(x_606, 0);
lean_inc(x_608);
x_609 = l_Lean_JsonNumber_fromNat(x_608);
x_610 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_610, 0, x_609);
x_611 = l_repl_loop___lambda__1___closed__5;
x_612 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_612, 0, x_611);
lean_ctor_set(x_612, 1, x_610);
x_613 = lean_box(0);
x_614 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_614, 0, x_612);
lean_ctor_set(x_614, 1, x_613);
x_615 = lean_ctor_get(x_606, 1);
lean_inc(x_615);
x_616 = l_List_redLength___rarg(x_615);
x_617 = lean_mk_empty_array_with_capacity(x_616);
lean_dec(x_616);
x_618 = l_List_toArrayAux___rarg(x_615, x_617);
x_619 = lean_array_get_size(x_618);
x_620 = lean_usize_of_nat(x_619);
lean_dec(x_619);
x_621 = 0;
x_622 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_ParseImportsFast_0__Lean_toJsonPrintImportResult____x40_Lean_Elab_ParseImportsFast___hyg_1710____spec__3(x_620, x_621, x_618);
x_623 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_623, 0, x_622);
x_624 = l_repl_loop___lambda__1___closed__6;
x_625 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_625, 0, x_624);
lean_ctor_set(x_625, 1, x_623);
x_626 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_626, 0, x_625);
lean_ctor_set(x_626, 1, x_613);
x_627 = lean_ctor_get(x_606, 2);
lean_inc(x_627);
lean_dec(x_606);
x_628 = l_repl_loop___lambda__1___closed__2;
x_629 = l_REPL_Json_nonemptyList___at_REPL_instToJsonCommandResponse___spec__1(x_628, x_627);
x_630 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_630, 0, x_629);
lean_ctor_set(x_630, 1, x_613);
x_631 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_631, 0, x_626);
lean_ctor_set(x_631, 1, x_630);
x_632 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_632, 0, x_614);
lean_ctor_set(x_632, 1, x_631);
x_633 = l_List_join___rarg(x_632);
x_634 = l_Lean_Json_mkObj(x_633);
x_635 = lean_unsigned_to_nat(80u);
x_636 = l_Lean_Json_pretty(x_634, x_635);
x_637 = l_IO_println___at_Lean_instEval___spec__1(x_636, x_560);
if (lean_obj_tag(x_637) == 0)
{
lean_object* x_638; lean_object* x_639; lean_object* x_640; 
x_638 = lean_ctor_get(x_637, 1);
lean_inc(x_638);
lean_dec(x_637);
x_639 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_640 = l_IO_println___at_Lean_instEval___spec__1(x_639, x_638);
if (lean_obj_tag(x_640) == 0)
{
lean_object* x_641; lean_object* x_642; 
x_641 = lean_ctor_get(x_640, 1);
lean_inc(x_641);
lean_dec(x_640);
x_642 = l_repl_loop(x_607, x_641);
return x_642;
}
else
{
lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; 
lean_dec(x_607);
x_643 = lean_ctor_get(x_640, 0);
lean_inc(x_643);
x_644 = lean_ctor_get(x_640, 1);
lean_inc(x_644);
if (lean_is_exclusive(x_640)) {
 lean_ctor_release(x_640, 0);
 lean_ctor_release(x_640, 1);
 x_645 = x_640;
} else {
 lean_dec_ref(x_640);
 x_645 = lean_box(0);
}
if (lean_is_scalar(x_645)) {
 x_646 = lean_alloc_ctor(1, 2, 0);
} else {
 x_646 = x_645;
}
lean_ctor_set(x_646, 0, x_643);
lean_ctor_set(x_646, 1, x_644);
return x_646;
}
}
else
{
lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; 
lean_dec(x_607);
x_647 = lean_ctor_get(x_637, 0);
lean_inc(x_647);
x_648 = lean_ctor_get(x_637, 1);
lean_inc(x_648);
if (lean_is_exclusive(x_637)) {
 lean_ctor_release(x_637, 0);
 lean_ctor_release(x_637, 1);
 x_649 = x_637;
} else {
 lean_dec_ref(x_637);
 x_649 = lean_box(0);
}
if (lean_is_scalar(x_649)) {
 x_650 = lean_alloc_ctor(1, 2, 0);
} else {
 x_650 = x_649;
}
lean_ctor_set(x_650, 0, x_647);
lean_ctor_set(x_650, 1, x_648);
return x_650;
}
}
}
else
{
uint8_t x_651; 
x_651 = !lean_is_exclusive(x_558);
if (x_651 == 0)
{
return x_558;
}
else
{
lean_object* x_652; lean_object* x_653; lean_object* x_654; 
x_652 = lean_ctor_get(x_558, 0);
x_653 = lean_ctor_get(x_558, 1);
lean_inc(x_653);
lean_inc(x_652);
lean_dec(x_558);
x_654 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_654, 0, x_652);
lean_ctor_set(x_654, 1, x_653);
return x_654;
}
}
}
}
}
else
{
uint8_t x_655; 
lean_dec(x_3);
x_655 = !lean_is_exclusive(x_5);
if (x_655 == 0)
{
return x_5;
}
else
{
lean_object* x_656; lean_object* x_657; lean_object* x_658; 
x_656 = lean_ctor_get(x_5, 0);
x_657 = lean_ctor_get(x_5, 1);
lean_inc(x_657);
lean_inc(x_656);
lean_dec(x_5);
x_658 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_658, 0, x_656);
lean_ctor_set(x_658, 1, x_657);
return x_658;
}
}
}
}
LEAN_EXPORT lean_object* l_repl_loop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_getLines(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_8 = lean_string_dec_eq(x_5, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_free_object(x_3);
x_9 = lean_box(0);
x_10 = l_repl_loop___lambda__1(x_5, x_9, x_1, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_1);
lean_ctor_set(x_3, 0, x_12);
return x_3;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_15 = l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1;
x_16 = lean_string_dec_eq(x_13, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = l_repl_loop___lambda__1(x_13, x_17, x_1, x_14);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_1);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_14);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_3);
if (x_22 == 0)
{
return x_3;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_3, 0);
x_24 = lean_ctor_get(x_3, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_3);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_REPL_pickleCommandSnapshot___at_repl_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_REPL_pickleCommandSnapshot___at_repl_loop___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_REPL_pickleProofSnapshot___at_repl_loop___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_REPL_pickleProofSnapshot___at_repl_loop___spec__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_repl___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_REPL_State_cmdStates___default___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_repl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_repl___closed__1;
x_3 = l_repl_loop(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
static lean_object* _init_l_main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("lean", 4);
return x_1;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_dec(x_1);
x_3 = l_main___closed__1;
x_4 = l_Lean_findSysroot(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_box(0);
x_8 = l_Lean_initSearchPath(x_5, x_7, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_repl(x_9);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_4);
if (x_15 == 0)
{
return x_4;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_JSON(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_Frontend(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_InfoTree(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_Util_Path(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_Util_TermUnsafe(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_Lean_ContextInfo(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_Lean_Environment(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_InfoTree(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_Snapshots(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_REPL_Main(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_JSON(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_Frontend(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_InfoTree(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_Util_Path(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_Util_TermUnsafe(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_Lean_ContextInfo(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_Lean_Environment(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_InfoTree(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_Snapshots(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_REPL_State_cmdStates___default___closed__1 = _init_l_REPL_State_cmdStates___default___closed__1();
lean_mark_persistent(l_REPL_State_cmdStates___default___closed__1);
l_REPL_State_cmdStates___default = _init_l_REPL_State_cmdStates___default();
lean_mark_persistent(l_REPL_State_cmdStates___default);
l_REPL_State_proofStates___default = _init_l_REPL_State_proofStates___default();
lean_mark_persistent(l_REPL_State_proofStates___default);
l_panic___at_REPL_sorries___spec__1___rarg___closed__1 = _init_l_panic___at_REPL_sorries___spec__1___rarg___closed__1();
lean_mark_persistent(l_panic___at_REPL_sorries___spec__1___rarg___closed__1);
l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1 = _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1();
lean_mark_persistent(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__8___closed__1);
l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1 = _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1();
lean_mark_persistent(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___lambda__10___closed__1);
l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__1 = _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__1();
lean_mark_persistent(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__1);
l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__2 = _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__2();
lean_mark_persistent(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__2);
l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__3 = _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__3();
lean_mark_persistent(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__3);
l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__4 = _init_l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__4();
lean_mark_persistent(l_List_mapM_loop___at_REPL_sorries___spec__3___rarg___closed__4);
l_REPL_ppTactic___lambda__1___closed__1 = _init_l_REPL_ppTactic___lambda__1___closed__1();
lean_mark_persistent(l_REPL_ppTactic___lambda__1___closed__1);
l_REPL_ppTactic___lambda__1___closed__2 = _init_l_REPL_ppTactic___lambda__1___closed__2();
lean_mark_persistent(l_REPL_ppTactic___lambda__1___closed__2);
l_REPL_ppTactic___closed__1 = _init_l_REPL_ppTactic___closed__1();
lean_mark_persistent(l_REPL_ppTactic___closed__1);
l_REPL_ppTactic___closed__2 = _init_l_REPL_ppTactic___closed__2();
lean_mark_persistent(l_REPL_ppTactic___closed__2);
l_REPL_ppTactic___closed__3 = _init_l_REPL_ppTactic___closed__3();
lean_mark_persistent(l_REPL_ppTactic___closed__3);
l_REPL_ppTactic___closed__4 = _init_l_REPL_ppTactic___closed__4();
lean_mark_persistent(l_REPL_ppTactic___closed__4);
l_REPL_ppTactic___closed__5 = _init_l_REPL_ppTactic___closed__5();
lean_mark_persistent(l_REPL_ppTactic___closed__5);
l_REPL_ppTactic___closed__6 = _init_l_REPL_ppTactic___closed__6();
lean_mark_persistent(l_REPL_ppTactic___closed__6);
l_REPL_ppTactic___closed__7 = _init_l_REPL_ppTactic___closed__7();
lean_mark_persistent(l_REPL_ppTactic___closed__7);
l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__1 = _init_l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__1();
lean_mark_persistent(l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__1);
l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2 = _init_l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2();
lean_mark_persistent(l_REPL_pickleCommandSnapshot___rarg___lambda__4___closed__2);
l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__1 = _init_l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__1();
lean_mark_persistent(l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__1);
l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__2 = _init_l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__2();
lean_mark_persistent(l_REPL_pickleProofSnapshot___rarg___lambda__3___closed__2);
l_panic___at_REPL_runCommand___spec__2___closed__1 = _init_l_panic___at_REPL_runCommand___spec__2___closed__1();
lean_mark_persistent(l_panic___at_REPL_runCommand___spec__2___closed__1);
l_panic___at_REPL_runCommand___spec__2___closed__2 = _init_l_panic___at_REPL_runCommand___spec__2___closed__2();
lean_mark_persistent(l_panic___at_REPL_runCommand___spec__2___closed__2);
l_panic___at_REPL_runCommand___spec__2___closed__3 = _init_l_panic___at_REPL_runCommand___spec__2___closed__3();
lean_mark_persistent(l_panic___at_REPL_runCommand___spec__2___closed__3);
l_REPL_runCommand___lambda__1___closed__1 = _init_l_REPL_runCommand___lambda__1___closed__1();
lean_mark_persistent(l_REPL_runCommand___lambda__1___closed__1);
l_REPL_runCommand___closed__1 = _init_l_REPL_runCommand___closed__1();
lean_mark_persistent(l_REPL_runCommand___closed__1);
l_REPL_runCommand___closed__2 = _init_l_REPL_runCommand___closed__2();
lean_mark_persistent(l_REPL_runCommand___closed__2);
l_REPL_runProofStep___closed__1 = _init_l_REPL_runProofStep___closed__1();
lean_mark_persistent(l_REPL_runProofStep___closed__1);
l_REPL_runProofStep___closed__2 = _init_l_REPL_runProofStep___closed__2();
lean_mark_persistent(l_REPL_runProofStep___closed__2);
l_getLines___closed__1 = _init_l_getLines___closed__1();
lean_mark_persistent(l_getLines___closed__1);
l_repl_loop___lambda__1___closed__1 = _init_l_repl_loop___lambda__1___closed__1();
lean_mark_persistent(l_repl_loop___lambda__1___closed__1);
l_repl_loop___lambda__1___closed__2 = _init_l_repl_loop___lambda__1___closed__2();
lean_mark_persistent(l_repl_loop___lambda__1___closed__2);
l_repl_loop___lambda__1___closed__3 = _init_l_repl_loop___lambda__1___closed__3();
lean_mark_persistent(l_repl_loop___lambda__1___closed__3);
l_repl_loop___lambda__1___closed__4 = _init_l_repl_loop___lambda__1___closed__4();
lean_mark_persistent(l_repl_loop___lambda__1___closed__4);
l_repl_loop___lambda__1___closed__5 = _init_l_repl_loop___lambda__1___closed__5();
lean_mark_persistent(l_repl_loop___lambda__1___closed__5);
l_repl_loop___lambda__1___closed__6 = _init_l_repl_loop___lambda__1___closed__6();
lean_mark_persistent(l_repl_loop___lambda__1___closed__6);
l_repl___closed__1 = _init_l_repl___closed__1();
lean_mark_persistent(l_repl___closed__1);
l_main___closed__1 = _init_l_main___closed__1();
lean_mark_persistent(l_main___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
void lean_initialize();

  #if defined(WIN32) || defined(_WIN32)
  #include <windows.h>
  #endif

  int main(int argc, char ** argv) {
  #if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  #endif
  lean_object* in; lean_object* res;
lean_initialize();
lean_set_panic_messages(false);
res = initialize_REPL_Main(1 /* builtin */, lean_io_mk_world());
lean_set_panic_messages(true);
lean_io_mark_end_initialization();
if (lean_io_result_is_ok(res)) {
lean_dec_ref(res);
lean_init_task_manager();
in = lean_box(0);
int i = argc;
while (i > 1) {
 lean_object* n;
 i--;
 n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
 in = n;
}
res = _lean_main(in, lean_io_mk_world());
}
lean_finalize_task_manager();
if (lean_io_result_is_ok(res)) {
  int ret = 0;
  lean_dec_ref(res);
  return ret;
} else {
  lean_io_result_show_error(res);
  lean_dec_ref(res);
  return 1;
}
}
#ifdef __cplusplus
}
#endif
