// Lean compiler output
// Module: REPL.Frontend
// Imports: Init Lean.Elab.Frontend REPL.Util.TermUnsafe
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
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__3;
static lean_object* l_Lean_Elab_IO_processCommandsWithInfoTrees___closed__1;
lean_object* l_Lean_Elab_Command_mkState(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_processHeader(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at_Lean_Elab_IO_processCommandsWithInfoTrees___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsWithInfoTrees___lambda__1(lean_object*);
lean_object* l_Lean_initSearchPath(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findSysroot(lean_object*, lean_object*);
lean_object* lean_enable_initializer_execution(lean_object*);
lean_object* l_Lean_Parser_mkInputContext(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsWithInfoTrees(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_IO_processCommands(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsWithInfoTrees___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at_Lean_Elab_IO_processCommandsWithInfoTrees___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseHeader(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processInput(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at_Lean_Elab_IO_processCommandsWithInfoTrees___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_apply_1(x_2, x_6);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = lean_apply_1(x_2, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8_t x_12; 
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at_Lean_Elab_IO_processCommandsWithInfoTrees___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Functor_mapRev___at_Lean_Elab_IO_processCommandsWithInfoTrees___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsWithInfoTrees___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_IO_processCommandsWithInfoTrees___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_IO_processCommandsWithInfoTrees___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsWithInfoTrees(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_3, 7);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 1;
lean_ctor_set_uint8(x_6, sizeof(void*)*2, x_8);
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_IO_processCommands), 4, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
x_10 = l_Lean_Elab_IO_processCommandsWithInfoTrees___closed__1;
x_11 = l_Functor_mapRev___at_Lean_Elab_IO_processCommandsWithInfoTrees___spec__1___rarg(x_9, x_10, x_4);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = l_Lean_PersistentArray_toList___rarg(x_14);
x_16 = lean_ctor_get(x_13, 7);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_PersistentArray_toList___rarg(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_11, 0, x_20);
return x_11;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_11, 0);
x_22 = lean_ctor_get(x_11, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_11);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
x_24 = l_Lean_PersistentArray_toList___rarg(x_23);
x_25 = lean_ctor_get(x_21, 7);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_PersistentArray_toList___rarg(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_24);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_21);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_22);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_11);
if (x_31 == 0)
{
return x_11;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_11, 0);
x_33 = lean_ctor_get(x_11, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_11);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_6, 0);
x_36 = lean_ctor_get(x_6, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_6);
x_37 = 1;
x_38 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2, x_37);
lean_ctor_set(x_3, 7, x_38);
x_39 = lean_alloc_closure((void*)(l_Lean_Elab_IO_processCommands), 4, 3);
lean_closure_set(x_39, 0, x_1);
lean_closure_set(x_39, 1, x_2);
lean_closure_set(x_39, 2, x_3);
x_40 = l_Lean_Elab_IO_processCommandsWithInfoTrees___closed__1;
x_41 = l_Functor_mapRev___at_Lean_Elab_IO_processCommandsWithInfoTrees___spec__1___rarg(x_39, x_40, x_4);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
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
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
x_46 = l_Lean_PersistentArray_toList___rarg(x_45);
x_47 = lean_ctor_get(x_42, 7);
lean_inc(x_47);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Lean_PersistentArray_toList___rarg(x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_42);
lean_ctor_set(x_51, 1, x_50);
if (lean_is_scalar(x_44)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_44;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_43);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_41, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_41, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_55 = x_41;
} else {
 lean_dec_ref(x_41);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(1, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_57 = lean_ctor_get(x_3, 7);
x_58 = lean_ctor_get(x_3, 0);
x_59 = lean_ctor_get(x_3, 1);
x_60 = lean_ctor_get(x_3, 2);
x_61 = lean_ctor_get(x_3, 3);
x_62 = lean_ctor_get(x_3, 4);
x_63 = lean_ctor_get(x_3, 5);
x_64 = lean_ctor_get(x_3, 6);
x_65 = lean_ctor_get(x_3, 8);
lean_inc(x_65);
lean_inc(x_57);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_3);
x_66 = lean_ctor_get(x_57, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_57, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_68 = x_57;
} else {
 lean_dec_ref(x_57);
 x_68 = lean_box(0);
}
x_69 = 1;
if (lean_is_scalar(x_68)) {
 x_70 = lean_alloc_ctor(0, 2, 1);
} else {
 x_70 = x_68;
}
lean_ctor_set(x_70, 0, x_66);
lean_ctor_set(x_70, 1, x_67);
lean_ctor_set_uint8(x_70, sizeof(void*)*2, x_69);
x_71 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_71, 0, x_58);
lean_ctor_set(x_71, 1, x_59);
lean_ctor_set(x_71, 2, x_60);
lean_ctor_set(x_71, 3, x_61);
lean_ctor_set(x_71, 4, x_62);
lean_ctor_set(x_71, 5, x_63);
lean_ctor_set(x_71, 6, x_64);
lean_ctor_set(x_71, 7, x_70);
lean_ctor_set(x_71, 8, x_65);
x_72 = lean_alloc_closure((void*)(l_Lean_Elab_IO_processCommands), 4, 3);
lean_closure_set(x_72, 0, x_1);
lean_closure_set(x_72, 1, x_2);
lean_closure_set(x_72, 2, x_71);
x_73 = l_Lean_Elab_IO_processCommandsWithInfoTrees___closed__1;
x_74 = l_Functor_mapRev___at_Lean_Elab_IO_processCommandsWithInfoTrees___spec__1___rarg(x_72, x_73, x_4);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
 x_77 = lean_box(0);
}
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
x_79 = l_Lean_PersistentArray_toList___rarg(x_78);
x_80 = lean_ctor_get(x_75, 7);
lean_inc(x_80);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = l_Lean_PersistentArray_toList___rarg(x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_79);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_75);
lean_ctor_set(x_84, 1, x_83);
if (lean_is_scalar(x_77)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_77;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_76);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_74, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_74, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_88 = x_74;
} else {
 lean_dec_ref(x_74);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsWithInfoTrees___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_IO_processCommandsWithInfoTrees___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_Elab_IO_processCommandsWithInfoTrees(x_1, x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("lean", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("<input>", 7);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__1;
x_7 = l_Lean_findSysroot(x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_box(0);
x_11 = l_Lean_initSearchPath(x_8, x_10, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_enable_initializer_execution(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_51; 
x_51 = l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__3;
x_15 = x_51;
goto block_50;
}
else
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_4, 0);
lean_inc(x_52);
lean_dec(x_4);
x_15 = x_52;
goto block_50;
}
block_50:
{
lean_object* x_16; 
x_16 = l_Lean_Parser_mkInputContext(x_1, x_15);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_17; 
lean_inc(x_16);
x_17 = l_Lean_Parser_parseHeader(x_16, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint32_t x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = 0;
lean_inc(x_3);
x_25 = l_Lean_Elab_processHeader(x_21, x_3, x_23, x_16, x_24, x_20);
lean_dec(x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_26, 0);
x_30 = lean_ctor_get(x_26, 1);
x_31 = l_Lean_Elab_Command_mkState(x_29, x_30, x_3);
lean_ctor_set(x_26, 1, x_31);
lean_ctor_set(x_26, 0, x_22);
x_32 = l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____lambda__1(x_16, x_26, x_27);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
x_35 = l_Lean_Elab_Command_mkState(x_33, x_34, x_3);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_22);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____lambda__1(x_16, x_36, x_27);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_25);
if (x_38 == 0)
{
return x_25;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_25, 0);
x_40 = lean_ctor_get(x_25, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_25);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_16);
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_17);
if (x_42 == 0)
{
return x_17;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_17, 0);
x_44 = lean_ctor_get(x_17, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_17);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_3);
x_46 = lean_ctor_get(x_2, 0);
lean_inc(x_46);
lean_dec(x_2);
x_47 = l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__2;
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____lambda__1(x_16, x_48, x_14);
return x_49;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_11);
if (x_53 == 0)
{
return x_11;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_11, 0);
x_55 = lean_ctor_get(x_11, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_11);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_7);
if (x_57 == 0)
{
return x_7;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_7, 0);
x_59 = lean_ctor_get(x_7, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_7);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processInput(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432_(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Frontend(uint8_t builtin, lean_object*);
lean_object* initialize_REPL_Util_TermUnsafe(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_REPL_Frontend(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Frontend(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_REPL_Util_TermUnsafe(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_IO_processCommandsWithInfoTrees___closed__1 = _init_l_Lean_Elab_IO_processCommandsWithInfoTrees___closed__1();
lean_mark_persistent(l_Lean_Elab_IO_processCommandsWithInfoTrees___closed__1);
l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__1 = _init_l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__1();
lean_mark_persistent(l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__1);
l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__2 = _init_l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__2();
lean_mark_persistent(l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__2);
l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__3 = _init_l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__3();
lean_mark_persistent(l_Lean_Elab_IO_processInput_unsafe____x40_REPL_Frontend___hyg_432____closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
