// Lean compiler output
// Module: REPL.Lean.Environment
// Imports: Init REPL.Util.Pickle Lean.Replay
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Environment_pickle___closed__1;
static lean_object* l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1___closed__1;
lean_object* l_Lean_HashMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Environment_pickle___closed__4;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1(lean_object*);
lean_object* l_Lean_Environment_replay(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_unpickle(lean_object*, lean_object*);
static lean_object* l_Lean_Environment_pickle___closed__2;
lean_object* l_unpickle___rarg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_MetavarContext_getExprAssignmentDomain___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159_(lean_object*, lean_object*);
static lean_object* l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3___closed__1;
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_pickle(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_unpickle___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkHashMapImp___rarg(lean_object*);
static lean_object* l_Lean_Environment_pickle___closed__3;
LEAN_EXPORT lean_object* l_Lean_Environment_pickle___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_import_modules(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____boxed(lean_object*, lean_object*);
lean_object* lean_save_module_data(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Environment_pickle___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_pickle___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Environment", 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_pickle___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("pickle", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_pickle___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Environment_pickle___closed__1;
x_2 = l_Lean_Environment_pickle___closed__2;
x_3 = l_Lean_Environment_pickle___closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_pickle(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 4);
x_5 = lean_ctor_get(x_4, 1);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_inc(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_Lean_Environment_pickle___closed__4;
x_10 = lean_save_module_data(x_2, x_9, x_8, x_3);
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_pickle___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Environment_pickle(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_MetavarContext_getExprAssignmentDomain___spec__2___rarg(x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1___lambda__1), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1___closed__1;
x_4 = l_Lean_PersistentHashMap_foldlM___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Lean_HashMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(x_1, x_5, x_6);
x_1 = x_7;
x_2 = x_4;
goto _start;
}
}
}
static lean_object* _init_l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3___closed__1;
x_3 = l_List_foldl___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__4(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_unpickle___rarg(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint32_t x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_box(0);
x_12 = 0;
x_13 = lean_import_modules(x_9, x_11, x_12, x_6);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1(x_10);
x_17 = l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3(x_16);
x_18 = l_Lean_Environment_replay(x_17, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_5, 1, x_7);
lean_ctor_set(x_5, 0, x_20);
lean_ctor_set(x_18, 0, x_5);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_18);
lean_ctor_set(x_5, 1, x_7);
lean_ctor_set(x_5, 0, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_5);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_free_object(x_5);
lean_dec(x_7);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_free_object(x_5);
lean_dec(x_10);
lean_dec(x_7);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint32_t x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_5, 0);
x_33 = lean_ctor_get(x_5, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_5);
x_34 = lean_box(0);
x_35 = 0;
x_36 = lean_import_modules(x_32, x_34, x_35, x_6);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1(x_33);
x_40 = l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3(x_39);
x_41 = l_Lean_Environment_replay(x_40, x_37, x_38);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_44 = x_41;
} else {
 lean_dec_ref(x_41);
 x_44 = lean_box(0);
}
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_7);
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_44;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_7);
x_47 = lean_ctor_get(x_41, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_33);
lean_dec(x_7);
x_51 = lean_ctor_get(x_36, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_36, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_53 = x_36;
} else {
 lean_dec_ref(x_36);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
else
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_3);
if (x_55 == 0)
{
return x_3;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_3, 0);
x_57 = lean_ctor_get(x_3, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_3);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159_(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_unpickle(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159_(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_unpickle___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Environment_unpickle(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_Util_Pickle(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Replay(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_REPL_Lean_Environment(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_Util_Pickle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Replay(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Environment_pickle___closed__1 = _init_l_Lean_Environment_pickle___closed__1();
lean_mark_persistent(l_Lean_Environment_pickle___closed__1);
l_Lean_Environment_pickle___closed__2 = _init_l_Lean_Environment_pickle___closed__2();
lean_mark_persistent(l_Lean_Environment_pickle___closed__2);
l_Lean_Environment_pickle___closed__3 = _init_l_Lean_Environment_pickle___closed__3();
lean_mark_persistent(l_Lean_Environment_pickle___closed__3);
l_Lean_Environment_pickle___closed__4 = _init_l_Lean_Environment_pickle___closed__4();
lean_mark_persistent(l_Lean_Environment_pickle___closed__4);
l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1___closed__1 = _init_l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1___closed__1();
lean_mark_persistent(l_Lean_PersistentHashMap_toList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__1___closed__1);
l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3___closed__1 = _init_l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3___closed__1();
lean_mark_persistent(l_Lean_HashMap_ofList___at_Lean_Environment_unpickle_unsafe____x40_REPL_Lean_Environment___hyg_159____spec__3___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
