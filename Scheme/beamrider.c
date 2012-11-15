/* Generated from beamrider.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-11-15 00:39
   Version 4.8.0 (rev 0db1908)
   macosx-unix-clang-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: beamrider.scm -output-file beamrider.c -emit-external-prototypes-first -local -optimize-level 0 -debug-level 2 -scrutinize
   used units: library eval tcp srfi_2d18 srfi_2d4
*/

#include "chicken.h"

C_externexport  void  update_world(float t0);

C_externexport  void  start_server(int t0);

C_externexport  void  set_orientation(int t0);

C_externexport  void  scene_setup(int t0,int t1);

C_externexport  void  render_scene();

#include <OpenGLES/ES1/gl.h>

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externimport void C_ccall C_tcp_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d18_toplevel)
C_externimport void C_ccall C_srfi_2d18_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externimport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[558];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,18),40,100,105,115,112,108,97,121,45,103,108,45,101,114,114,111,114,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,12),40,103,108,71,101,116,69,114,114,111,114,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,46),40,103,108,67,108,101,97,114,67,111,108,111,114,32,97,53,50,54,53,50,57,32,97,53,50,53,53,51,48,32,97,53,50,52,53,51,49,32,97,53,50,51,53,51,50,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,17),40,103,108,67,108,101,97,114,32,97,53,51,53,53,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,18),40,103,108,69,110,97,98,108,101,32,97,53,52,49,53,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,103,108,66,108,101,110,100,70,117,110,99,32,97,53,52,56,53,53,49,32,97,53,52,55,53,53,50,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,38),40,103,108,84,114,97,110,115,108,97,116,101,102,32,97,53,53,55,53,54,48,32,97,53,53,54,53,54,49,32,97,53,53,53,53,54,50,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,43),40,103,108,82,111,116,97,116,101,102,32,97,53,54,56,53,55,49,32,97,53,54,55,53,55,50,32,97,53,54,54,53,55,51,32,97,53,54,53,53,55,52,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,34),40,103,108,83,99,97,108,101,102,32,97,53,55,57,53,56,50,32,97,53,55,56,53,56,51,32,97,53,55,55,53,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,31),40,103,108,71,101,110,84,101,120,116,117,114,101,115,32,97,53,56,56,53,57,50,32,97,53,56,55,53,57,51,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,31),40,103,108,66,105,110,100,84,101,120,116,117,114,101,32,97,53,57,56,54,48,49,32,97,53,57,55,54,48,50,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,86),40,103,108,84,101,120,73,109,97,103,101,50,68,32,97,54,49,51,54,49,55,32,97,54,49,50,54,49,56,32,97,54,49,49,54,49,57,32,97,54,49,48,54,50,48,32,97,54,48,57,54,50,49,32,97,54,48,56,54,50,50,32,97,54,48,55,54,50,51,32,97,54,48,54,54,50,52,32,97,54,48,53,54,50,53,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,41),40,103,108,84,101,120,80,97,114,97,109,101,116,101,114,105,32,97,54,51,49,54,51,52,32,97,54,51,48,54,51,53,32,97,54,50,57,54,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,35),40,103,108,84,101,120,69,110,118,105,32,97,54,52,49,54,52,52,32,97,54,52,48,54,52,53,32,97,54,51,57,54,52,54,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,49),40,103,108,86,101,114,116,101,120,80,111,105,110,116,101,114,32,97,54,53,50,54,53,54,32,97,54,53,49,54,53,55,32,97,54,53,48,54,53,56,32,97,54,52,57,54,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,48),40,103,108,67,111,108,111,114,80,111,105,110,116,101,114,32,97,54,54,54,54,55,48,32,97,54,54,53,54,55,49,32,97,54,54,52,54,55,50,32,97,54,54,51,54,55,51,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,41),40,103,108,78,111,114,109,97,108,80,111,105,110,116,101,114,32,97,54,55,57,54,56,51,32,97,54,55,56,54,56,52,32,97,54,55,55,54,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,51),40,103,108,84,101,120,67,111,111,114,100,80,111,105,110,116,101,114,32,97,54,57,50,54,57,54,32,97,54,57,49,54,57,55,32,97,54,57,48,54,57,56,32,97,54,56,57,54,57,57,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,29),40,103,108,69,110,97,98,108,101,67,108,105,101,110,116,83,116,97,116,101,32,97,55,48,51,55,48,54,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,30),40,103,108,68,105,115,97,98,108,101,67,108,105,101,110,116,83,116,97,116,101,32,97,55,48,57,55,49,50,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,38),40,103,108,68,114,97,119,65,114,114,97,121,115,32,97,55,49,55,55,50,48,32,97,55,49,54,55,50,49,32,97,55,49,53,55,50,50,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,48),40,103,108,68,114,97,119,69,108,101,109,101,110,116,115,32,97,55,50,56,55,51,50,32,97,55,50,55,55,51,51,32,97,55,50,54,55,51,52,32,97,55,50,53,55,51,53,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,58),40,103,108,79,114,116,104,111,102,32,97,55,52,52,55,52,55,32,97,55,52,51,55,52,56,32,97,55,52,50,55,52,57,32,97,55,52,49,55,53,48,32,97,55,52,48,55,53,49,32,97,55,51,57,55,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,22),40,103,108,77,97,116,114,105,120,77,111,100,101,32,97,55,53,53,55,53,56,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,23),40,103,108,77,117,108,116,77,97,116,114,105,120,102,32,97,55,54,49,55,54,53,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,23),40,103,108,76,111,97,100,77,97,116,114,105,120,102,32,97,55,54,57,55,55,51,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,43),40,103,108,67,111,108,111,114,52,102,32,97,55,56,48,55,56,51,32,97,55,55,57,55,56,52,32,97,55,55,56,55,56,53,32,97,55,55,55,55,56,54,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,16),40,103,108,76,111,97,100,73,100,101,110,116,105,116,121,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,60),40,103,108,70,114,117,115,116,117,109,102,32,97,55,57,56,56,48,49,32,97,55,57,55,56,48,50,32,97,55,57,54,56,48,51,32,97,55,57,53,56,48,52,32,97,55,57,52,56,48,53,32,97,55,57,51,56,48,54,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,20),40,103,108,67,117,108,108,70,97,99,101,32,97,56,48,57,56,49,50,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,103,108,68,105,115,97,98,108,101,32,97,56,49,53,56,49,56,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,21),40,103,108,68,101,112,116,104,77,97,115,107,32,97,56,50,49,56,50,52,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,24),40,103,108,70,111,103,102,32,97,56,50,56,56,51,49,32,97,56,50,55,56,51,50,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,25),40,103,108,70,111,103,102,118,32,97,56,51,54,56,52,48,32,97,56,51,53,56,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,24),40,103,108,70,111,103,120,32,97,56,52,54,56,52,57,32,97,56,52,53,56,53,48,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,25),40,103,108,70,111,103,120,118,32,97,56,53,52,56,53,56,32,97,56,53,51,56,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,34),40,103,108,76,105,103,104,116,102,32,97,56,54,53,56,54,56,32,97,56,54,52,56,54,57,32,97,56,54,51,56,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,35),40,103,108,76,105,103,104,116,102,118,32,97,56,55,53,56,55,57,32,97,56,55,52,56,56,48,32,97,56,55,51,56,56,49,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,37),40,103,108,77,97,116,101,114,105,97,108,102,32,97,56,56,55,56,57,48,32,97,56,56,54,56,57,49,32,97,56,56,53,56,57,50,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,38),40,103,108,77,97,116,101,114,105,97,108,102,118,32,97,56,57,55,57,48,49,32,97,56,57,54,57,48,50,32,97,56,57,53,57,48,51,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,22),40,103,108,83,104,97,100,101,77,111,100,101,108,32,97,57,48,55,57,49,48,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,31),40,103,108,76,105,103,104,116,77,111,100,101,108,102,32,97,57,49,52,57,49,55,32,97,57,49,51,57,49,56,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,32),40,103,108,76,105,103,104,116,77,111,100,101,108,102,118,32,97,57,50,50,57,50,54,32,97,57,50,49,57,50,55,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,22),40,103,108,67,108,101,97,114,68,101,112,116,104,32,97,57,51,49,57,51,52,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,103,108,72,105,110,116,32,97,57,51,56,57,52,49,32,97,57,51,55,57,52,50,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,21),40,103,108,76,105,110,101,87,105,100,116,104,32,97,57,52,53,57,52,56,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,13),40,103,108,80,111,112,77,97,116,114,105,120,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,14),40,103,108,80,117,115,104,77,97,116,114,105,120,41,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,44),40,103,108,86,105,101,119,112,111,114,116,32,97,57,54,50,57,54,53,32,97,57,54,49,57,54,54,32,97,57,54,48,57,54,55,32,97,57,53,57,57,54,56,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,14),40,114,101,110,100,101,114,95,115,99,101,110,101,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,34),40,115,99,101,110,101,95,115,101,116,117,112,32,119,105,100,116,104,49,52,50,49,32,104,101,105,103,104,116,49,52,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,33),40,115,101,116,95,111,114,105,101,110,116,97,116,105,111,110,32,111,114,105,101,110,116,97,116,105,111,110,49,52,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,23),40,115,116,97,114,116,95,115,101,114,118,101,114,32,112,111,114,116,49,52,51,51,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,24),40,117,112,100,97,116,101,95,119,111,114,108,100,32,100,101,108,116,97,49,52,51,56,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,9),40,109,121,45,114,101,112,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,47),40,109,121,45,101,120,99,101,112,116,105,111,110,45,104,97,110,100,108,101,114,32,101,120,99,101,112,116,105,111,110,49,52,53,56,32,114,101,116,117,114,110,49,52,53,57,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,53,48,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,57,53,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,22),40,102,95,51,48,57,48,32,101,120,118,97,114,49,52,56,49,49,52,57,53,41,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,52,56,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,54,51,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,23),40,102,95,51,49,53,56,32,46,32,97,114,103,115,49,52,56,57,49,53,48,57,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,52,51,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,18),40,102,95,51,48,56,53,32,107,49,52,56,56,49,52,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,14),40,98,97,99,107,45,116,111,45,114,101,112,108,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,54,54,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,54,49,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,55),40,102,95,51,48,53,53,32,105,110,112,117,116,45,112,111,114,116,49,52,55,50,49,52,55,51,49,52,55,54,32,111,117,116,112,117,116,45,112,111,114,116,49,52,55,52,49,52,55,53,49,52,55,55,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,8),40,97,99,99,101,112,116,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,50,55,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,54,56,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,28),40,115,116,97,114,116,45,115,101,114,118,101,114,32,46,32,116,109,112,49,52,54,55,49,52,54,56,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,30),40,109,97,107,101,45,112,111,105,110,116,32,120,49,53,50,57,32,121,49,53,51,48,32,122,49,53,51,49,41,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,14),40,112,111,105,110,116,63,32,120,49,53,51,51,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,45,120,45,115,101,116,33,32,120,49,53,51,53,32,118,97,108,49,53,51,54,41,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,15),40,112,111,105,110,116,45,120,32,120,49,53,51,57,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,45,121,45,115,101,116,33,32,120,49,53,52,51,32,118,97,108,49,53,52,52,41,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,15),40,112,111,105,110,116,45,121,32,120,49,53,52,55,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,45,122,45,115,101,116,33,32,120,49,53,53,49,32,118,97,108,49,53,53,50,41,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,15),40,112,111,105,110,116,45,122,32,120,49,53,53,53,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,67),40,109,97,107,101,45,103,114,105,100,32,115,105,122,101,49,53,54,54,32,100,105,118,105,115,105,111,110,115,49,53,54,55,32,103,101,111,109,101,116,114,121,49,53,54,56,32,110,117,109,98,101,114,45,118,101,114,116,101,120,101,115,49,53,54,57,41,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,13),40,103,114,105,100,63,32,120,49,53,55,49,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,30),40,103,114,105,100,45,115,105,122,101,45,115,101,116,33,32,120,49,53,55,51,32,118,97,108,49,53,55,52,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,17),40,103,114,105,100,45,115,105,122,101,32,120,49,53,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,35),40,103,114,105,100,45,100,105,118,105,115,105,111,110,115,45,115,101,116,33,32,120,49,53,56,49,32,118,97,108,49,53,56,50,41,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,22),40,103,114,105,100,45,100,105,118,105,115,105,111,110,115,32,120,49,53,56,53,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,34),40,103,114,105,100,45,103,101,111,109,101,116,114,121,45,115,101,116,33,32,120,49,53,56,57,32,118,97,108,49,53,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,21),40,103,114,105,100,45,103,101,111,109,101,116,114,121,32,120,49,53,57,51,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,41),40,103,114,105,100,45,110,117,109,98,101,114,45,118,101,114,116,101,120,101,115,45,115,101,116,33,32,120,49,53,57,55,32,118,97,108,49,53,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,28),40,103,114,105,100,45,110,117,109,98,101,114,45,118,101,114,116,101,120,101,115,32,120,49,54,48,49,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,56),40,109,97,107,101,45,112,101,114,115,112,101,99,116,105,118,101,32,102,111,118,49,54,52,55,32,97,115,112,101,99,116,49,54,52,56,32,122,110,101,97,114,49,54,52,57,32,122,102,97,114,49,54,53,48,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,23),40,112,111,105,110,116,45,62,108,105,115,116,32,112,111,105,110,116,49,54,53,54,41,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,53),40,109,97,107,101,45,108,105,110,101,32,120,49,49,54,53,56,32,121,49,49,54,53,57,32,122,49,49,54,54,48,32,120,50,49,54,54,49,32,121,50,49,54,54,50,32,122,50,49,54,54,51,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,18),40,108,105,110,101,45,62,108,105,115,116,32,108,49,54,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,105,49,54,55,52,32,97,99,117,109,49,54,55,53,41,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,43),40,109,97,107,101,45,103,114,105,100,45,103,101,111,109,101,116,114,121,32,115,105,100,101,49,54,54,57,32,100,105,118,105,115,105,111,110,115,49,54,55,48,41,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,34),40,115,101,116,117,112,45,115,99,101,110,101,32,119,105,100,116,104,49,54,55,56,32,104,101,105,103,104,116,49,54,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,25),40,117,112,100,97,116,101,45,119,111,114,108,100,33,32,100,101,108,116,97,49,54,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,39),40,115,101,116,45,100,101,118,105,99,101,45,111,114,105,101,110,116,97,116,105,111,110,33,32,100,105,114,101,99,116,105,111,110,49,55,48,49,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,14),40,114,101,110,100,101,114,45,115,99,101,110,101,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,38),40,103,101,110,101,114,97,116,101,45,103,114,105,100,32,115,105,100,101,49,55,50,53,32,100,105,118,105,115,105,111,110,115,49,55,50,54,41,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k2945 */
static C_word C_fcall stub963(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub963(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
glViewport(t0,t1,t2,t3);
return C_r;}

/* from glPushMatrix in k1950 in k1948 in k1946 in k1944 in k1942 */
static C_word C_fcall stub955(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub955(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
glPushMatrix();
return C_r;}

/* from glPopMatrix in k1950 in k1948 in k1946 in k1944 in k1942 */
static C_word C_fcall stub951(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub951(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
glPopMatrix();
return C_r;}

/* from k2921 */
static C_word C_fcall stub946(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub946(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float t0=(float )C_c_double(C_a0);
glLineWidth(t0);
return C_r;}

/* from k2914 */
static C_word C_fcall stub939(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub939(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
glHint(t0,t1);
return C_r;}

/* from k2904 */
static C_word C_fcall stub932(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub932(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float t0=(float )C_c_double(C_a0);
glClearDepthf(t0);
return C_r;}

/* from k2893 */
static C_word C_fcall stub923(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub923(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
float *t1=(float *)C_c_pointer_or_null(C_a1);
glLightModelfv(t0,t1);
return C_r;}

/* from k2883 */
static C_word C_fcall stub915(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub915(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
float t1=(float )C_c_double(C_a1);
glLightModelf(t0,t1);
return C_r;}

/* from k2873 */
static C_word C_fcall stub908(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub908(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
glShadeModel(t0);
return C_r;}

/* from k2862 */
static C_word C_fcall stub898(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub898(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
float *t2=(float *)C_c_pointer_or_null(C_a2);
glMaterialfv(t0,t1,t2);
return C_r;}

/* from k2849 */
static C_word C_fcall stub888(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub888(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
float t2=(float )C_c_double(C_a2);
glMaterialf(t0,t1,t2);
return C_r;}

/* from k2832 */
static C_word C_fcall stub876(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub876(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
float *t2=(float *)C_c_pointer_or_null(C_a2);
glLightfv(t0,t1,t2);
return C_r;}

/* from k2819 */
static C_word C_fcall stub866(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub866(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
float t2=(float )C_c_double(C_a2);
glLightf(t0,t1,t2);
return C_r;}

/* from k2802 */
static C_word C_fcall stub855(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub855(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_or_null(C_a1);
glFogxv(t0,t1);
return C_r;}

/* from k2792 */
static C_word C_fcall stub847(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub847(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
glFogx(t0,t1);
return C_r;}

/* from k2778 */
static C_word C_fcall stub837(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub837(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
float *t1=(float *)C_c_pointer_or_null(C_a1);
glFogfv(t0,t1);
return C_r;}

/* from k2768 */
static C_word C_fcall stub829(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub829(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
float t1=(float )C_c_double(C_a1);
glFogf(t0,t1);
return C_r;}

/* from k2758 */
static C_word C_fcall stub822(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub822(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
glDepthMask(t0);
return C_r;}

/* from k2751 */
static C_word C_fcall stub816(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub816(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
glDisable(t0);
return C_r;}

/* from k2744 */
static C_word C_fcall stub810(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub810(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
glCullFace(t0);
return C_r;}

/* from k2737 */
static C_word C_fcall stub799(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub799(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float t0=(float )C_c_double(C_a0);
float t1=(float )C_c_double(C_a1);
float t2=(float )C_c_double(C_a2);
float t3=(float )C_c_double(C_a3);
float t4=(float )C_c_double(C_a4);
float t5=(float )C_c_double(C_a5);
glFrustumf(t0,t1,t2,t3,t4,t5);
return C_r;}

/* from glLoadIdentity in k1950 in k1948 in k1946 in k1944 in k1942 */
static C_word C_fcall stub789(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub789(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
glLoadIdentity();
return C_r;}

/* from k2711 */
static C_word C_fcall stub781(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub781(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float t0=(float )C_c_double(C_a0);
float t1=(float )C_c_double(C_a1);
float t2=(float )C_c_double(C_a2);
float t3=(float )C_c_double(C_a3);
glColor4f(t0,t1,t2,t3);
return C_r;}

/* from k2691 */
static C_word C_fcall stub770(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub770(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float *t0=(float *)C_c_pointer_or_null(C_a0);
glLoadMatrixf(t0);
return C_r;}

/* from k2680 */
static C_word C_fcall stub762(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub762(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float *t0=(float *)C_c_pointer_or_null(C_a0);
glMultMatrixf(t0);
return C_r;}

/* from k2673 */
static C_word C_fcall stub756(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub756(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
glMatrixMode(t0);
return C_r;}

/* from k2666 */
static C_word C_fcall stub745(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub745(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float t0=(float )C_c_double(C_a0);
float t1=(float )C_c_double(C_a1);
float t2=(float )C_c_double(C_a2);
float t3=(float )C_c_double(C_a3);
float t4=(float )C_c_double(C_a4);
float t5=(float )C_c_double(C_a5);
glOrthof(t0,t1,t2,t3,t4,t5);
return C_r;}

/* from k2640 */
static C_word C_fcall stub729(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub729(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
unsigned int t2=(unsigned int )C_unfix(C_a2);
void *t3=(void *)C_c_pointer_or_null(C_a3);
glDrawElements(t0,t1,t2,t3);
return C_r;}

/* from k2624 */
static C_word C_fcall stub718(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub718(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
glDrawArrays(t0,t1,t2);
return C_r;}

/* from k2611 */
static C_word C_fcall stub710(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub710(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
glDisableClientState(t0);
return C_r;}

/* from k2604 */
static C_word C_fcall stub704(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub704(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
glEnableClientState(t0);
return C_r;}

/* from k2593 */
static C_word C_fcall stub693(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub693(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
void *t3=(void *)C_c_pointer_or_null(C_a3);
glTexCoordPointer(t0,t1,t2,t3);
return C_r;}

/* from k2573 */
static C_word C_fcall stub680(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub680(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
void *t2=(void *)C_c_pointer_or_null(C_a2);
glNormalPointer(t0,t1,t2);
return C_r;}

/* from k2556 */
static C_word C_fcall stub667(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub667(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
unsigned char * t3=(unsigned char * )C_c_u8vector_or_null(C_a3);
glColorPointer(t0,t1,t2,t3);
return C_r;}

/* from k2536 */
static C_word C_fcall stub653(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub653(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
float * t3=(float * )C_c_f32vector_or_null(C_a3);
glVertexPointer(t0,t1,t2,t3);
return C_r;}

/* from k2520 */
static C_word C_fcall stub642(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub642(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
glTexEnvi(t0,t1,t2);
return C_r;}

/* from k2507 */
static C_word C_fcall stub632(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub632(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
glTexParameteri(t0,t1,t2);
return C_r;}

/* from k2490 */
static C_word C_fcall stub614(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7,C_word C_a8) C_regparm;
C_regparm static C_word C_fcall stub614(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7,C_word C_a8){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
unsigned int t2=(unsigned int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_unfix(C_a5);
unsigned int t6=(unsigned int )C_unfix(C_a6);
unsigned int t7=(unsigned int )C_unfix(C_a7);
void *t8=(void *)C_c_pointer_or_null(C_a8);
glTexImage2D(t0,t1,t2,t3,t4,t5,t6,t7,t8);
return C_r;}

/* from k2459 */
static C_word C_fcall stub599(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub599(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
glBindTexture(t0,t1);
return C_r;}

/* from k2445 */
static C_word C_fcall stub589(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub589(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
unsigned int *t1=(unsigned int *)C_c_pointer_or_null(C_a1);
glGenTextures(t0,t1);
return C_r;}

/* from k2435 */
static C_word C_fcall stub580(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub580(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float t0=(float )C_c_double(C_a0);
float t1=(float )C_c_double(C_a1);
float t2=(float )C_c_double(C_a2);
glScalef(t0,t1,t2);
return C_r;}

/* from k2422 */
static C_word C_fcall stub569(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub569(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float t0=(float )C_c_double(C_a0);
float t1=(float )C_c_double(C_a1);
float t2=(float )C_c_double(C_a2);
float t3=(float )C_c_double(C_a3);
glRotatef(t0,t1,t2,t3);
return C_r;}

/* from k2406 */
static C_word C_fcall stub558(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub558(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float t0=(float )C_c_double(C_a0);
float t1=(float )C_c_double(C_a1);
float t2=(float )C_c_double(C_a2);
glTranslatef(t0,t1,t2);
return C_r;}

/* from k2393 */
static C_word C_fcall stub549(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub549(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
unsigned int t1=(unsigned int )C_unfix(C_a1);
glBlendFunc(t0,t1);
return C_r;}

/* from k2383 */
static C_word C_fcall stub542(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub542(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
glEnable(t0);
return C_r;}

/* from k2376 */
static C_word C_fcall stub536(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub536(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_unfix(C_a0);
glClear(t0);
return C_r;}

/* from k2369 */
static C_word C_fcall stub527(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub527(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
float t0=(float )C_c_double(C_a0);
float t1=(float )C_c_double(C_a1);
float t2=(float )C_c_double(C_a2);
float t3=(float )C_c_double(C_a3);
glClearColor(t0,t1,t2,t3);
return C_r;}

/* from glGetError in k1950 in k1948 in k1946 in k1944 in k1942 */
static C_word C_fcall stub519(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub519(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)glGetError());
return C_r;}

C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3637)
static void C_ccall f_3637(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2386)
static void C_ccall f_2386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3661)
static void C_ccall f_3661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_fcall f_3035(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3245)
static void C_ccall f_3245(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2809)
static void C_ccall f_2809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3221)
static void C_ccall f_3221(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3331)
static void C_ccall f_3331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3230)
static void C_ccall f_3230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3419)
static void C_fcall f_3419(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3508)
static void C_ccall f_3508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3194)
static void C_ccall f_3194(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3542)
static void C_fcall f_3542(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3163)
static void C_ccall f_3163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1945)
static void C_ccall f_1945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3556)
static void C_ccall f_3556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3173)
static void C_ccall f_3173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_ccall f_1959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3565)
static void C_ccall f_3565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3483)
static void C_ccall f_3483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3520)
static void C_ccall f_3520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;

/* from update_world */
 void  update_world(float t0){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_flonum(&a,t0);
C_save(x);C_callback_wrapper((void *)f_2980,1);}

/* from start_server */
 void  start_server(int t0){
C_word x,s=0,*a=C_stack_pointer;
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t0);
C_save(x);C_callback_wrapper((void *)f_2973,1);}

/* from set_orientation */
 void  set_orientation(int t0){
C_word x,s=0,*a=C_stack_pointer;
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t0);
C_save(x);C_callback_wrapper((void *)f_2966,1);}

/* from scene_setup */
 void  scene_setup(int t0,int t1){
C_word x,s=0,*a=C_stack_pointer;
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t0);
C_save(x);
x=C_fix((C_word)t1);
C_save(x);C_callback_wrapper((void *)f_2959,2);}

/* from render_scene */
 void  render_scene(){
C_word x,s=0,*a=C_stack_pointer;
C_callback_adjust_stack(a,s);C_callback_wrapper((void *)f_2953,0);}

C_noret_decl(trf_3035)
static void C_fcall trf_3035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3035(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3035(t0,t1);}

C_noret_decl(trf_3419)
static void C_fcall trf_3419(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3419(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3419(t0,t1,t2,t3);}

C_noret_decl(trf_3542)
static void C_fcall trf_3542(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3542(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3542(t0,t1);}

C_noret_decl(tr11)
static void C_fcall tr11(C_proc11 k) C_regparm C_noret;
C_regparm static void C_fcall tr11(C_proc11 k){
C_word t10=C_pick(0);
C_word t9=C_pick(1);
C_word t8=C_pick(2);
C_word t7=C_pick(3);
C_word t6=C_pick(4);
C_word t5=C_pick(5);
C_word t4=C_pick(6);
C_word t3=C_pick(7);
C_word t2=C_pick(8);
C_word t1=C_pick(9);
C_word t0=C_pick(10);
C_adjust_stack(-11);
(k)(11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}

C_noret_decl(tr8)
static void C_fcall tr8(C_proc8 k) C_regparm C_noret;
C_regparm static void C_fcall tr8(C_proc8 k){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
(k)(8,t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr2r)
static void C_fcall tr2r(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2r(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n*3);
t2=C_restore_rest(a,n);
(k)(t0,t1,t2);}

/* glCullFace in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2740(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2740,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub810(C_SCHEME_UNDEFINED,t3));}

/* glDisable in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2747,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub816(C_SCHEME_UNDEFINED,t3));}

/* k3640 in generate-grid in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3650,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:116: f32vector-length");
((C_proc3)C_fast_retrieve_symbol_proc(lf[552]))(3,*((C_word*)lf[552]+1),t3,t1);}

/* k3646 in k3640 in generate-grid in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:116: make-grid");
t2=C_fast_retrieve(lf[495]);
f_3239(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3649 in k3640 in generate-grid in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:116: /");
((C_proc4)C_fast_retrieve_symbol_proc(lf[512]))(4,*((C_word*)lf[512]+1),((C_word*)t0)[2],t1,C_fix(3));}

/* k3655 in k3652 in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3661,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#implicit-exit-handler");
((C_proc2)C_fast_retrieve_symbol_proc(lf[553]))(2,*((C_word*)lf[553]+1),t3);}

/* k3652 in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3654,2,t0,t1);}
t2=C_mutate((C_word*)lf[496]+1 /* (set! grid ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:121: return-to-host");
((C_proc2)C_fast_retrieve_symbol_proc(lf[554]))(2,*((C_word*)lf[554]+1),t3);}

/* k3657 in k3655 in k3652 in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k3618 in k3616 in k3614 in k3612 in k3610 in k3608 in k3606 in k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:105: glPopMatrix");
t2=*((C_word*)lf[436]+1);
f_2924(2,t2,((C_word*)t0)[2]);}

/* k3625 in k3614 in k3612 in k3610 in k3608 in k3606 in k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:112: glDrawArrays");
t2=*((C_word*)lf[410]+1);
f_2614(5,t2,((C_word*)t0)[2],*((C_word*)lf[27]+1),C_fix(0),t1);}

/* k3628 in k3610 in k3608 in k3606 in k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:110: glTranslatef");
t2=*((C_word*)lf[394]+1);
f_2396(5,t2,((C_word*)t0)[2],lf[532],lf[548],t1);}

/* k3631 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:106: glVertexPointer");
t2=*((C_word*)lf[402]+1);
f_2523(6,t2,((C_word*)t0)[2],C_fix(3),*((C_word*)lf[211]+1),C_fix(0),t1);}

/* k2994 in k2992 in my-repl in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("remote-repl.scm:12: print");
((C_proc3)C_fast_retrieve_symbol_proc(lf[459]))(3,*((C_word*)lf[459]+1),((C_word*)t0)[2],t1);}

/* k3634 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:104: glClear");
t2=*((C_word*)lf[391]+1);
f_2372(3,t2,((C_word*)t0)[2],t1);}

/* k2992 in my-repl in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3001,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("remote-repl.scm:11: read");
((C_proc2)C_fast_retrieve_symbol_proc(lf[461]))(2,*((C_word*)lf[461]+1),t3);}

/* generate-grid in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3637(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3637,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3641,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:115: make-grid-geometry");
t5=C_fast_retrieve(lf[519]);
f_3408(4,t5,t4,t2,t3);}

/* f_3095 */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3095,2,t0,t1);}
t2=C_i_structurep(((C_word*)t0)[2],lf[466]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3132,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:34: memv");
((C_proc4)C_fast_retrieve_symbol_proc(lf[470]))(4,*((C_word*)lf[470]+1),t5,lf[471],t3);}
else{
t5=t4;
f_3104(2,t5,C_SCHEME_FALSE);}}

/* f_3090 */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3090,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3095,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li57),tmp=(C_word)a,a+=7,tmp);
C_trace("remote-repl.scm:34: k1488");
t4=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* glTranslatef in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2396,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_flonum_argumentp(t2);
t6=C_i_foreign_flonum_argumentp(t3);
t7=C_i_foreign_flonum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub558(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k3070 in k3068 */
static void C_ccall f_3071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3071,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3076(2,t5,((C_word*)t0)[4]);}

/* back-to-repl in k3070 in k3068 */
static void C_ccall f_3076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3080,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp);
C_trace("remote-repl.scm:34: call-with-current-continuation");
((C_proc3)C_fast_retrieve_symbol_proc(lf[475]))(3,*((C_word*)lf[475]+1),t2,t3);}

/* glBlendFunc in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2386,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub549(C_SCHEME_UNDEFINED,t4,t5));}

/* render_scene in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2953,2,t0,t1);}
C_trace("externals.scm:2: render-scene");
t2=C_fast_retrieve(lf[449]);
f_3597(2,t2,t1);}

/* scene_setup in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2959,4,t0,t1,t2,t3);}
C_trace("externals.scm:5: setup-scene");
t4=C_fast_retrieve(lf[451]);
f_3494(4,t4,t1,t2,t3);}

/* k3079 in back-to-repl in k3070 in k3068 */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("remote-repl.scm:34: g1492");
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_3085 in back-to-repl in k3070 in k3068 */
static void C_ccall f_3085(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3085,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3143,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp);
C_trace("remote-repl.scm:34: with-exception-handler");
((C_proc4)C_fast_retrieve_symbol_proc(lf[474]))(4,*((C_word*)lf[474]+1),t1,t3,t4);}

/* update_world in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2980,3,t0,t1,t2);}
C_trace("externals.scm:14: update-world!");
t3=C_fast_retrieve(lf[457]);
f_3536(3,t3,t1,t2);}

/* k3608 in k3606 in k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:109: glTranslatef");
t3=*((C_word*)lf[394]+1);
f_2396(5,t3,t2,lf[532],lf[532],C_fast_retrieve(lf[506]));}

/* k3606 in k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:108: glColor4f");
t3=*((C_word*)lf[416]+1);
f_2698(6,t3,t2,lf[532],lf[532],lf[533],lf[533]);}

/* k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:107: glPushMatrix");
t3=*((C_word*)lf[437]+1);
f_2928(2,t3,t2);}

/* k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3632,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:106: grid-geometry");
t4=C_fast_retrieve(lf[503]);
f_3296(3,t4,t3,C_fast_retrieve(lf[496]));}

/* k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3603,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:105: glPushMatrix");
t3=*((C_word*)lf[437]+1);
f_2928(2,t3,t2);}

/* k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2987,2,t0,t1);}
t2=C_mutate((C_word*)lf[458]+1 /* (set! my-repl ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2989,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[463]+1 /* (set! my-exception-handler ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3003,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[455]+1 /* (set! start-server ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3014,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:7: debug-mode");
((C_proc3)C_fast_retrieve_symbol_proc(lf[555]))(3,*((C_word*)lf[555]+1),t5,C_fast_retrieve(lf[556]));}

/* my-repl in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2993,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("remote-repl.scm:10: display");
((C_proc3)C_fast_retrieve_symbol_proc(lf[2]))(3,*((C_word*)lf[2]+1),t2,lf[462]);}

/* start_server in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2973,3,t0,t1,t2);}
C_trace("externals.scm:11: start-server");
t3=C_fast_retrieve(lf[455]);
f_3014(3,t3,t1,t2);}

/* k3616 in k3614 in k3612 in k3610 in k3608 in k3606 in k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3617,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:107: glPopMatrix");
t3=*((C_word*)lf[436]+1);
f_2924(2,t3,t2);}

/* k3614 in k3612 in k3610 in k3608 in k3606 in k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3626,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:112: grid-number-vertexes");
t4=C_fast_retrieve(lf[505]);
f_3314(3,t4,t3,C_fast_retrieve(lf[496]));}

/* k3612 in k3610 in k3608 in k3606 in k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:111: glRotatef");
t3=*((C_word*)lf[395]+1);
f_2409(6,t3,t2,lf[547],lf[533],lf[532],lf[532]);}

/* k3610 in k3608 in k3606 in k3604 in k3602 in k3600 in render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3629,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:110: -");
((C_proc3)C_fast_retrieve_symbol_proc(lf[509]))(3,*((C_word*)lf[509]+1),t3,lf[549]);}

/* glGetError in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2352,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub519(C_SCHEME_UNDEFINED));}

/* glClearColor in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2356,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_foreign_flonum_argumentp(t2);
t7=C_i_foreign_flonum_argumentp(t3);
t8=C_i_foreign_flonum_argumentp(t4);
t9=C_i_foreign_flonum_argumentp(t5);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub527(C_SCHEME_UNDEFINED,t6,t7,t8,t9));}

/* glClear in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2372,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub536(C_SCHEME_UNDEFINED,t3));}

/* glEnable in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2379,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub542(C_SCHEME_UNDEFINED,t3));}

/* k3017 in start-server in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3020,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:20: print");
((C_proc4)C_fast_retrieve_symbol_proc(lf[459]))(4,*((C_word*)lf[459]+1),t2,lf[482],t1);}

/* start-server in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_3014r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3014r(t0,t1,t2);}}

static void C_ccall f_3014r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3168,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
C_trace("remote-repl.scm:19: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[483]+1)))(5,*((C_word*)lf[483]+1),t3,lf[484],t2,t4);}

/* k3021 in k3019 in k3017 in start-server in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3022,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:22: thread-start!");
((C_proc3)C_fast_retrieve_symbol_proc(lf[481]))(3,*((C_word*)lf[481]+1),((C_word*)t0)[3],t2);}

/* k3019 in k3017 in start-server in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:21: print");
((C_proc2)C_fast_retrieve_symbol_proc(lf[459]))(2,*((C_word*)lf[459]+1),t2);}

/* f_3027 in k3021 in k3019 in k3017 in start-server in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("remote-repl.scm:24: tcp-listen");
((C_proc3)C_fast_retrieve_symbol_proc(lf[480]))(3,*((C_word*)lf[480]+1),t2,((C_word*)t0)[2]);}

/* grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3296(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3296,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[496]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(3)));}

/* my-exception-handler in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3003,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3007,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:15: print-error-message");
((C_proc3)C_fast_retrieve_symbol_proc(lf[464]))(3,*((C_word*)lf[464]+1),t4,t2);}

/* k3006 in my-exception-handler in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3007,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:16: print");
((C_proc2)C_fast_retrieve_symbol_proc(lf[459]))(2,*((C_word*)lf[459]+1),t2);}

/* k3008 in k3006 in my-exception-handler in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("remote-repl.scm:17: return");
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}

/* k3000 in k2992 in my-repl in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("remote-repl.scm:11: eval");
((C_proc3)C_fast_retrieve_symbol_proc(lf[460]))(3,*((C_word*)lf[460]+1),((C_word*)t0)[2],t1);}

/* f_3050 in k3043 in accept in k3029 */
static void C_ccall f_3050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3050,2,t0,t1);}
C_trace("remote-repl.scm:27: tcp-accept");
((C_proc3)C_fast_retrieve_symbol_proc(lf[465]))(3,*((C_word*)lf[465]+1),t1,((C_word*)t0)[2]);}

/* f_3055 in k3043 in accept in k3029 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3055,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp);
C_trace("remote-repl.scm:28: with-output-to-port");
((C_proc4)C_fast_retrieve_symbol_proc(lf[478]))(4,*((C_word*)lf[478]+1),t1,t3,t4);}

/* glMaterialf in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2839,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=C_i_foreign_flonum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub888(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* glColor4f in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2698,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_foreign_flonum_argumentp(t2);
t7=C_i_foreign_flonum_argumentp(t3);
t8=C_i_foreign_flonum_argumentp(t4);
t9=C_i_foreign_flonum_argumentp(t5);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub781(C_SCHEME_UNDEFINED,t6,t7,t8,t9));}

/* f_3061 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
C_trace("remote-repl.scm:30: with-input-from-port");
((C_proc4)C_fast_retrieve_symbol_proc(lf[477]))(4,*((C_word*)lf[477]+1),t1,((C_word*)t0)[4],t2);}

/* f_3066 */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("remote-repl.scm:32: print");
((C_proc3)C_fast_retrieve_symbol_proc(lf[459]))(3,*((C_word*)lf[459]+1),t2,lf[476]);}

/* k3068 */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("remote-repl.scm:33: print");
((C_proc2)C_fast_retrieve_symbol_proc(lf[459]))(2,*((C_word*)lf[459]+1),t2);}

/* k3659 in k3655 in k3652 in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* glColorPointer in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2543,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_foreign_fixnum_argumentp(t2);
t7=C_i_foreign_fixnum_argumentp(t3);
t8=C_i_foreign_fixnum_argumentp(t4);
t9=(C_truep(t5)?C_i_foreign_struct_wrapper_argumentp(lf[405],t5):C_SCHEME_FALSE);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub667(C_SCHEME_UNDEFINED,t6,t7,t8,t9));}

/* k3029 */
static void C_ccall f_3030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3030,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3035,a[2]=t3,a[3]=t1,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3035(t5,((C_word*)t0)[2]);}

/* glLightfv in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2822,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub876(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k3038 in accept in k3029 */
static void C_ccall f_3039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("remote-repl.scm:45: accept");
t2=((C_word*)((C_word*)t0)[2])[1];
f_3035(t2,((C_word*)t0)[3]);}

/* accept in k3029 */
static void C_fcall f_3035(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3035,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3045,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("remote-repl.scm:26: tcp-accept-ready?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[479]))(3,*((C_word*)lf[479]+1),t3,((C_word*)t0)[3]);}

/* grid-geometry-set! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3287,4,t0,t1,t2,t3);}
t4=C_i_check_structure(t2,lf[496]);
C_trace("beamrider.scm:13: ##sys#block-set!");
t5=*((C_word*)lf[489]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* glMaterialfv in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2852(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2852,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub898(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k3043 in accept in k3029 */
static void C_ccall f_3045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3045,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[2],a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
C_trace("remote-repl.scm:27: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}
else{
t2=((C_word*)t0)[4];
f_3039(2,t2,C_SCHEME_UNDEFINED);}}

/* grid-size-set! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3251,4,t0,t1,t2,t3);}
t4=C_i_check_structure(t2,lf[496]);
C_trace("beamrider.scm:13: ##sys#block-set!");
t5=*((C_word*)lf[489]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* glMatrixMode in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2669,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub756(C_SCHEME_UNDEFINED,t3));}

/* grid-size in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3260,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[496]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* grid-divisions-set! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3269(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3269,4,t0,t1,t2,t3);}
t4=C_i_check_structure(t2,lf[496]);
C_trace("beamrider.scm:13: ##sys#block-set!");
t5=*((C_word*)lf[489]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* grid-number-vertexes-set! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3305,4,t0,t1,t2,t3);}
t4=C_i_check_structure(t2,lf[496]);
C_trace("beamrider.scm:13: ##sys#block-set!");
t5=*((C_word*)lf[489]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(4),t3);}

/* grid-number-vertexes in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3314(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3314,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[496]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(4)));}

/* glLoadMatrixf in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2687,3,t0,t1,t2);}
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub770(C_SCHEME_UNDEFINED,t3));}

/* k1964 in k1956 in display-gl-error in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_1965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("gl.scm:13: display");
((C_proc3)C_fast_retrieve_symbol_proc(lf[2]))(3,*((C_word*)lf[2]+1),((C_word*)t0)[2],t1);}

/* grid? in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3245(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3245,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[496]));}

/* point-y in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3212(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3212,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[486]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(2)));}

/* glLightf in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2809,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=C_i_foreign_flonum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub866(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* point-z-set! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3221(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3221,4,t0,t1,t2,t3);}
t4=C_i_check_structure(t2,lf[486]);
C_trace("beamrider.scm:11: ##sys#block-set!");
t5=*((C_word*)lf[489]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* make-perspective in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3325,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3329,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("beamrider.scm:26: /");
((C_proc4)C_fast_retrieve_symbol_proc(lf[512]))(4,*((C_word*)lf[512]+1),t6,*((C_word*)lf[446]+1),C_fix(180));}

/* k3328 in make-perspective in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3347,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3350,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:27: /");
((C_proc4)C_fast_retrieve_symbol_proc(lf[512]))(4,*((C_word*)lf[512]+1),t4,((C_word*)t0)[6],C_fix(2));}

/* grid-divisions in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3278,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[496]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(2)));}

/* k3332 in k3330 in k3328 in make-perspective in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("beamrider.scm:29: *");
((C_proc4)C_fast_retrieve_symbol_proc(lf[510]))(4,*((C_word*)lf[510]+1),t2,t1,((C_word*)t0)[5]);}

/* k3330 in k3328 in make-perspective in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("beamrider.scm:28: *");
((C_proc4)C_fast_retrieve_symbol_proc(lf[510]))(4,*((C_word*)lf[510]+1),t2,((C_word*)t0)[3],t1);}

/* k3334 in k3332 in k3330 in k3328 in make-perspective in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3341,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("beamrider.scm:30: -");
((C_proc3)C_fast_retrieve_symbol_proc(lf[509]))(3,*((C_word*)lf[509]+1),t2,t1);}

/* point-y-set! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3203(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3203,4,t0,t1,t2,t3);}
t4=C_i_check_structure(t2,lf[486]);
C_trace("beamrider.scm:11: ##sys#block-set!");
t5=*((C_word*)lf[489]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* k3361 in k3358 in point->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:33: point-z");
t3=C_fast_retrieve(lf[494]);
f_3230(3,t3,t2,((C_word*)t0)[4]);}

/* k3340 in k3334 in k3332 in k3330 in k3328 in make-perspective in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("beamrider.scm:30: -");
((C_proc3)C_fast_retrieve_symbol_proc(lf[509]))(3,*((C_word*)lf[509]+1),t2,((C_word*)t0)[4]);}

/* make-line in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=8) C_bad_argc_2(c,8,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_3367,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3374,a[2]=t1,a[3]=t5,a[4]=t6,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
C_trace("beamrider.scm:36: make-point");
t9=C_fast_retrieve(lf[485]);
f_3173(5,t9,t8,t2,t3,t4);}

/* k3343 in k3340 in k3334 in k3332 in k3330 in k3328 in make-perspective in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:30: glFrustumf");
t2=*((C_word*)lf[418]+1);
f_2718(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k3364 in k3361 in k3358 in point->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:33: list");
((C_proc5)C_fast_retrieve_symbol_proc(lf[514]))(5,*((C_word*)lf[514]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3346 in k3328 in make-perspective in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:27: tan");
((C_proc3)C_fast_retrieve_symbol_proc(lf[511]))(3,*((C_word*)lf[511]+1),((C_word*)t0)[2],t1);}

/* k3349 in k3328 in make-perspective in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:27: *");
((C_proc4)C_fast_retrieve_symbol_proc(lf[510]))(4,*((C_word*)lf[510]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* line->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3379(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3379,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3383,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:39: car");
((C_proc3)C_fast_retrieve_symbol_proc(lf[518]))(3,*((C_word*)lf[518]+1),t3,t2);}

/* point->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3352,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3359,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:33: point-x");
t4=C_fast_retrieve(lf[490]);
f_3194(3,t4,t3,t2);}

/* k3376 in k3373 in make-line in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:36: list");
((C_proc4)C_fast_retrieve_symbol_proc(lf[514]))(4,*((C_word*)lf[514]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3373 in make-line in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:36: make-point");
t3=C_fast_retrieve(lf[485]);
f_3173(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3358 in point->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:33: point-y");
t3=C_fast_retrieve(lf[492]);
f_3212(3,t3,t2,((C_word*)t0)[3]);}

/* k3382 in line->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:40: cadr");
((C_proc3)C_fast_retrieve_symbol_proc(lf[517]))(3,*((C_word*)lf[517]+1),t2,((C_word*)t0)[3]);}

/* k3384 in k3382 in line->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3391,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:41: point-x");
t3=C_fast_retrieve(lf[490]);
f_3194(3,t3,t2,((C_word*)t0)[3]);}

/* point-z in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3230(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3230,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[486]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(3)));}

/* make-grid in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word ab[6],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3239,6,t0,t1,t2,t3,t4,t5);}
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record5(&a,5,lf[496],t2,t3,t4,t5));}

/* k3390 in k3384 in k3382 in line->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3394,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("beamrider.scm:41: point-y");
t3=C_fast_retrieve(lf[492]);
f_3212(3,t3,t2,((C_word*)t0)[4]);}

/* k3396 in k3393 in k3390 in k3384 in k3382 in line->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3397,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("beamrider.scm:42: point-x");
t3=C_fast_retrieve(lf[490]);
f_3194(3,t3,t2,((C_word*)t0)[5]);}

/* k3393 in k3390 in k3384 in k3382 in line->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("beamrider.scm:41: point-z");
t3=C_fast_retrieve(lf[494]);
f_3230(3,t3,t2,((C_word*)t0)[5]);}

/* glTexImage2D in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
if(c!=11) C_bad_argc_2(c,11,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr11,(void*)f_2462,11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
t11=C_i_foreign_fixnum_argumentp(t2);
t12=C_i_foreign_fixnum_argumentp(t3);
t13=C_i_foreign_fixnum_argumentp(t4);
t14=C_i_foreign_fixnum_argumentp(t5);
t15=C_i_foreign_fixnum_argumentp(t6);
t16=C_i_foreign_fixnum_argumentp(t7);
t17=C_i_foreign_fixnum_argumentp(t8);
t18=C_i_foreign_fixnum_argumentp(t9);
t19=(C_truep(t10)?C_i_foreign_pointer_argumentp(t10):C_SCHEME_FALSE);
t20=t1;
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,stub614(C_SCHEME_UNDEFINED,t11,t12,t13,t14,t15,t16,t17,t18,t19));}

/* glTexParameteri in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2497,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub632(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_fcall f_3419(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3419,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3426,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
C_trace("beamrider.scm:48: <");
((C_proc4)C_fast_retrieve_symbol_proc(lf[523]))(4,*((C_word*)lf[523]+1),t4,t2,C_fix(0));}

/* k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3414,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:46: /");
((C_proc4)C_fast_retrieve_symbol_proc(lf[512]))(4,*((C_word*)lf[512]+1),t2,((C_word*)t0)[4],C_fix(2));}

/* k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3414,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3419,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3419(t5,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* glGenTextures in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2438,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub589(C_SCHEME_UNDEFINED,t4,t5));}

/* glScalef in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2425,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_flonum_argumentp(t2);
t6=C_i_foreign_flonum_argumentp(t3);
t7=C_i_foreign_flonum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub580(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(5546)){
C_save(t1);
C_rereclaim2(5546*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,558);
lf[0]=C_h_intern(&lf[0],16,"display-gl-error");
lf[1]=C_h_intern(&lf[1],7,"newline");
lf[2]=C_h_intern(&lf[2],7,"display");
lf[3]=C_h_intern(&lf[3],10,"glGetError");
lf[4]=C_decode_literal(C_heaptop,"\376B\000\000\007ERROR: ");
lf[5]=C_h_intern(&lf[5],20,"GL_VERSION_ES_CM_1_0");
lf[6]=C_h_intern(&lf[6],20,"GL_VERSION_ES_CL_1_0");
lf[7]=C_h_intern(&lf[7],20,"GL_VERSION_ES_CM_1_1");
lf[8]=C_h_intern(&lf[8],20,"GL_VERSION_ES_CL_1_1");
lf[9]=C_h_intern(&lf[9],18,"GL_OES_VERSION_1_0");
lf[10]=C_h_intern(&lf[10],18,"GL_OES_VERSION_1_1");
lf[11]=C_h_intern(&lf[11],23,"GL_OES_byte_coordinates");
lf[12]=C_h_intern(&lf[12],34,"GL_OES_compressed_paletted_texture");
lf[13]=C_h_intern(&lf[13],19,"GL_OES_draw_texture");
lf[14]=C_h_intern(&lf[14],18,"GL_OES_fixed_point");
lf[15]=C_h_intern(&lf[15],17,"GL_OES_matrix_get");
lf[16]=C_h_intern(&lf[16],21,"GL_OES_matrix_palette");
lf[17]=C_h_intern(&lf[17],23,"GL_OES_point_size_array");
lf[18]=C_h_intern(&lf[18],19,"GL_OES_point_sprite");
lf[19]=C_h_intern(&lf[19],18,"GL_OES_read_format");
lf[20]=C_h_intern(&lf[20],23,"GL_OES_single_precision");
lf[21]=C_h_intern(&lf[21],19,"GL_DEPTH_BUFFER_BIT");
lf[22]=C_h_intern(&lf[22],21,"GL_STENCIL_BUFFER_BIT");
lf[23]=C_h_intern(&lf[23],19,"GL_COLOR_BUFFER_BIT");
lf[24]=C_h_intern(&lf[24],8,"GL_FALSE");
lf[25]=C_h_intern(&lf[25],7,"GL_TRUE");
lf[26]=C_h_intern(&lf[26],9,"GL_POINTS");
lf[27]=C_h_intern(&lf[27],8,"GL_LINES");
lf[28]=C_h_intern(&lf[28],12,"GL_LINE_LOOP");
lf[29]=C_h_intern(&lf[29],13,"GL_LINE_STRIP");
lf[30]=C_h_intern(&lf[30],12,"GL_TRIANGLES");
lf[31]=C_h_intern(&lf[31],17,"GL_TRIANGLE_STRIP");
lf[32]=C_h_intern(&lf[32],15,"GL_TRIANGLE_FAN");
lf[33]=C_h_intern(&lf[33],8,"GL_NEVER");
lf[34]=C_h_intern(&lf[34],7,"GL_LESS");
lf[35]=C_h_intern(&lf[35],8,"GL_EQUAL");
lf[36]=C_h_intern(&lf[36],9,"GL_LEQUAL");
lf[37]=C_h_intern(&lf[37],10,"GL_GREATER");
lf[38]=C_h_intern(&lf[38],11,"GL_NOTEQUAL");
lf[39]=C_h_intern(&lf[39],9,"GL_GEQUAL");
lf[40]=C_h_intern(&lf[40],9,"GL_ALWAYS");
lf[41]=C_h_intern(&lf[41],7,"GL_ZERO");
lf[42]=C_h_intern(&lf[42],6,"GL_ONE");
lf[43]=C_h_intern(&lf[43],12,"GL_SRC_COLOR");
lf[44]=C_h_intern(&lf[44],22,"GL_ONE_MINUS_SRC_COLOR");
lf[45]=C_h_intern(&lf[45],12,"GL_SRC_ALPHA");
lf[46]=C_h_intern(&lf[46],22,"GL_ONE_MINUS_SRC_ALPHA");
lf[47]=C_h_intern(&lf[47],12,"GL_DST_ALPHA");
lf[48]=C_h_intern(&lf[48],22,"GL_ONE_MINUS_DST_ALPHA");
lf[49]=C_h_intern(&lf[49],12,"GL_DST_COLOR");
lf[50]=C_h_intern(&lf[50],22,"GL_ONE_MINUS_DST_COLOR");
lf[51]=C_h_intern(&lf[51],21,"GL_SRC_ALPHA_SATURATE");
lf[52]=C_h_intern(&lf[52],14,"GL_CLIP_PLANE0");
lf[53]=C_h_intern(&lf[53],14,"GL_CLIP_PLANE1");
lf[54]=C_h_intern(&lf[54],14,"GL_CLIP_PLANE2");
lf[55]=C_h_intern(&lf[55],14,"GL_CLIP_PLANE3");
lf[56]=C_h_intern(&lf[56],14,"GL_CLIP_PLANE4");
lf[57]=C_h_intern(&lf[57],14,"GL_CLIP_PLANE5");
lf[58]=C_h_intern(&lf[58],8,"GL_FRONT");
lf[59]=C_h_intern(&lf[59],7,"GL_BACK");
lf[60]=C_h_intern(&lf[60],17,"GL_FRONT_AND_BACK");
lf[61]=C_h_intern(&lf[61],6,"GL_FOG");
lf[62]=C_h_intern(&lf[62],11,"GL_LIGHTING");
lf[63]=C_h_intern(&lf[63],13,"GL_TEXTURE_2D");
lf[64]=C_h_intern(&lf[64],12,"GL_CULL_FACE");
lf[65]=C_h_intern(&lf[65],13,"GL_ALPHA_TEST");
lf[66]=C_h_intern(&lf[66],8,"GL_BLEND");
lf[67]=C_h_intern(&lf[67],17,"GL_COLOR_LOGIC_OP");
lf[68]=C_h_intern(&lf[68],9,"GL_DITHER");
lf[69]=C_h_intern(&lf[69],15,"GL_STENCIL_TEST");
lf[70]=C_h_intern(&lf[70],13,"GL_DEPTH_TEST");
lf[71]=C_h_intern(&lf[71],15,"GL_POINT_SMOOTH");
lf[72]=C_h_intern(&lf[72],14,"GL_LINE_SMOOTH");
lf[73]=C_h_intern(&lf[73],17,"GL_COLOR_MATERIAL");
lf[74]=C_h_intern(&lf[74],12,"GL_NORMALIZE");
lf[75]=C_h_intern(&lf[75],17,"GL_RESCALE_NORMAL");
lf[76]=C_h_intern(&lf[76],15,"GL_VERTEX_ARRAY");
lf[77]=C_h_intern(&lf[77],15,"GL_NORMAL_ARRAY");
lf[78]=C_h_intern(&lf[78],14,"GL_COLOR_ARRAY");
lf[79]=C_h_intern(&lf[79],22,"GL_TEXTURE_COORD_ARRAY");
lf[80]=C_h_intern(&lf[80],14,"GL_MULTISAMPLE");
lf[81]=C_h_intern(&lf[81],27,"GL_SAMPLE_ALPHA_TO_COVERAGE");
lf[82]=C_h_intern(&lf[82],22,"GL_SAMPLE_ALPHA_TO_ONE");
lf[83]=C_h_intern(&lf[83],18,"GL_SAMPLE_COVERAGE");
lf[84]=C_h_intern(&lf[84],11,"GL_NO_ERROR");
lf[85]=C_h_intern(&lf[85],15,"GL_INVALID_ENUM");
lf[86]=C_h_intern(&lf[86],16,"GL_INVALID_VALUE");
lf[87]=C_h_intern(&lf[87],20,"GL_INVALID_OPERATION");
lf[88]=C_h_intern(&lf[88],17,"GL_STACK_OVERFLOW");
lf[89]=C_h_intern(&lf[89],18,"GL_STACK_UNDERFLOW");
lf[90]=C_h_intern(&lf[90],16,"GL_OUT_OF_MEMORY");
lf[91]=C_h_intern(&lf[91],6,"GL_EXP");
lf[92]=C_h_intern(&lf[92],7,"GL_EXP2");
lf[93]=C_h_intern(&lf[93],14,"GL_FOG_DENSITY");
lf[94]=C_h_intern(&lf[94],12,"GL_FOG_START");
lf[95]=C_h_intern(&lf[95],10,"GL_FOG_END");
lf[96]=C_h_intern(&lf[96],11,"GL_FOG_MODE");
lf[97]=C_h_intern(&lf[97],12,"GL_FOG_COLOR");
lf[98]=C_h_intern(&lf[98],5,"GL_CW");
lf[99]=C_h_intern(&lf[99],6,"GL_CCW");
lf[100]=C_h_intern(&lf[100],16,"GL_CURRENT_COLOR");
lf[101]=C_h_intern(&lf[101],17,"GL_CURRENT_NORMAL");
lf[102]=C_h_intern(&lf[102],25,"GL_CURRENT_TEXTURE_COORDS");
lf[103]=C_h_intern(&lf[103],13,"GL_POINT_SIZE");
lf[104]=C_h_intern(&lf[104],17,"GL_POINT_SIZE_MIN");
lf[105]=C_h_intern(&lf[105],17,"GL_POINT_SIZE_MAX");
lf[106]=C_h_intern(&lf[106],28,"GL_POINT_FADE_THRESHOLD_SIZE");
lf[107]=C_h_intern(&lf[107],29,"GL_POINT_DISTANCE_ATTENUATION");
lf[108]=C_h_intern(&lf[108],26,"GL_SMOOTH_POINT_SIZE_RANGE");
lf[109]=C_h_intern(&lf[109],13,"GL_LINE_WIDTH");
lf[110]=C_h_intern(&lf[110],26,"GL_SMOOTH_LINE_WIDTH_RANGE");
lf[111]=C_h_intern(&lf[111],27,"GL_ALIASED_POINT_SIZE_RANGE");
lf[112]=C_h_intern(&lf[112],27,"GL_ALIASED_LINE_WIDTH_RANGE");
lf[113]=C_h_intern(&lf[113],17,"GL_CULL_FACE_MODE");
lf[114]=C_h_intern(&lf[114],13,"GL_FRONT_FACE");
lf[115]=C_h_intern(&lf[115],14,"GL_SHADE_MODEL");
lf[116]=C_h_intern(&lf[116],14,"GL_DEPTH_RANGE");
lf[117]=C_h_intern(&lf[117],18,"GL_DEPTH_WRITEMASK");
lf[118]=C_h_intern(&lf[118],20,"GL_DEPTH_CLEAR_VALUE");
lf[119]=C_h_intern(&lf[119],13,"GL_DEPTH_FUNC");
lf[120]=C_h_intern(&lf[120],22,"GL_STENCIL_CLEAR_VALUE");
lf[121]=C_h_intern(&lf[121],15,"GL_STENCIL_FUNC");
lf[122]=C_h_intern(&lf[122],21,"GL_STENCIL_VALUE_MASK");
lf[123]=C_h_intern(&lf[123],15,"GL_STENCIL_FAIL");
lf[124]=C_h_intern(&lf[124],26,"GL_STENCIL_PASS_DEPTH_FAIL");
lf[125]=C_h_intern(&lf[125],26,"GL_STENCIL_PASS_DEPTH_PASS");
lf[126]=C_h_intern(&lf[126],14,"GL_STENCIL_REF");
lf[127]=C_h_intern(&lf[127],20,"GL_STENCIL_WRITEMASK");
lf[128]=C_h_intern(&lf[128],14,"GL_MATRIX_MODE");
lf[129]=C_h_intern(&lf[129],11,"GL_VIEWPORT");
lf[130]=C_h_intern(&lf[130],24,"GL_MODELVIEW_STACK_DEPTH");
lf[131]=C_h_intern(&lf[131],25,"GL_PROJECTION_STACK_DEPTH");
lf[132]=C_h_intern(&lf[132],22,"GL_TEXTURE_STACK_DEPTH");
lf[133]=C_h_intern(&lf[133],19,"GL_MODELVIEW_MATRIX");
lf[134]=C_h_intern(&lf[134],20,"GL_PROJECTION_MATRIX");
lf[135]=C_h_intern(&lf[135],17,"GL_TEXTURE_MATRIX");
lf[136]=C_h_intern(&lf[136],18,"GL_ALPHA_TEST_FUNC");
lf[137]=C_h_intern(&lf[137],17,"GL_ALPHA_TEST_REF");
lf[138]=C_h_intern(&lf[138],12,"GL_BLEND_DST");
lf[139]=C_h_intern(&lf[139],12,"GL_BLEND_SRC");
lf[140]=C_h_intern(&lf[140],16,"GL_LOGIC_OP_MODE");
lf[141]=C_h_intern(&lf[141],14,"GL_SCISSOR_BOX");
lf[142]=C_h_intern(&lf[142],15,"GL_SCISSOR_TEST");
lf[143]=C_h_intern(&lf[143],20,"GL_COLOR_CLEAR_VALUE");
lf[144]=C_h_intern(&lf[144],18,"GL_COLOR_WRITEMASK");
lf[145]=C_h_intern(&lf[145],13,"GL_MAX_LIGHTS");
lf[146]=C_h_intern(&lf[146],18,"GL_MAX_CLIP_PLANES");
lf[147]=C_h_intern(&lf[147],19,"GL_MAX_TEXTURE_SIZE");
lf[148]=C_h_intern(&lf[148],28,"GL_MAX_MODELVIEW_STACK_DEPTH");
lf[149]=C_h_intern(&lf[149],29,"GL_MAX_PROJECTION_STACK_DEPTH");
lf[150]=C_h_intern(&lf[150],26,"GL_MAX_TEXTURE_STACK_DEPTH");
lf[151]=C_h_intern(&lf[151],20,"GL_MAX_VIEWPORT_DIMS");
lf[152]=C_h_intern(&lf[152],20,"GL_MAX_TEXTURE_UNITS");
lf[153]=C_h_intern(&lf[153],16,"GL_SUBPIXEL_BITS");
lf[154]=C_h_intern(&lf[154],11,"GL_RED_BITS");
lf[155]=C_h_intern(&lf[155],13,"GL_GREEN_BITS");
lf[156]=C_h_intern(&lf[156],12,"GL_BLUE_BITS");
lf[157]=C_h_intern(&lf[157],13,"GL_ALPHA_BITS");
lf[158]=C_h_intern(&lf[158],13,"GL_DEPTH_BITS");
lf[159]=C_h_intern(&lf[159],15,"GL_STENCIL_BITS");
lf[160]=C_h_intern(&lf[160],23,"GL_POLYGON_OFFSET_UNITS");
lf[161]=C_h_intern(&lf[161],22,"GL_POLYGON_OFFSET_FILL");
lf[162]=C_h_intern(&lf[162],24,"GL_POLYGON_OFFSET_FACTOR");
lf[163]=C_h_intern(&lf[163],21,"GL_TEXTURE_BINDING_2D");
lf[164]=C_h_intern(&lf[164],20,"GL_VERTEX_ARRAY_SIZE");
lf[165]=C_h_intern(&lf[165],20,"GL_VERTEX_ARRAY_TYPE");
lf[166]=C_h_intern(&lf[166],22,"GL_VERTEX_ARRAY_STRIDE");
lf[167]=C_h_intern(&lf[167],20,"GL_NORMAL_ARRAY_TYPE");
lf[168]=C_h_intern(&lf[168],22,"GL_NORMAL_ARRAY_STRIDE");
lf[169]=C_h_intern(&lf[169],19,"GL_COLOR_ARRAY_SIZE");
lf[170]=C_h_intern(&lf[170],19,"GL_COLOR_ARRAY_TYPE");
lf[171]=C_h_intern(&lf[171],21,"GL_COLOR_ARRAY_STRIDE");
lf[172]=C_h_intern(&lf[172],27,"GL_TEXTURE_COORD_ARRAY_SIZE");
lf[173]=C_h_intern(&lf[173],27,"GL_TEXTURE_COORD_ARRAY_TYPE");
lf[174]=C_h_intern(&lf[174],29,"GL_TEXTURE_COORD_ARRAY_STRIDE");
lf[175]=C_h_intern(&lf[175],23,"GL_VERTEX_ARRAY_POINTER");
lf[176]=C_h_intern(&lf[176],23,"GL_NORMAL_ARRAY_POINTER");
lf[177]=C_h_intern(&lf[177],22,"GL_COLOR_ARRAY_POINTER");
lf[178]=C_h_intern(&lf[178],30,"GL_TEXTURE_COORD_ARRAY_POINTER");
lf[179]=C_h_intern(&lf[179],17,"GL_SAMPLE_BUFFERS");
lf[180]=C_h_intern(&lf[180],10,"GL_SAMPLES");
lf[181]=C_h_intern(&lf[181],24,"GL_SAMPLE_COVERAGE_VALUE");
lf[182]=C_h_intern(&lf[182],25,"GL_SAMPLE_COVERAGE_INVERT");
lf[183]=C_h_intern(&lf[183],37,"GL_IMPLEMENTATION_COLOR_READ_TYPE_OES");
lf[184]=C_h_intern(&lf[184],39,"GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES");
lf[185]=C_h_intern(&lf[185],33,"GL_NUM_COMPRESSED_TEXTURE_FORMATS");
lf[186]=C_h_intern(&lf[186],29,"GL_COMPRESSED_TEXTURE_FORMATS");
lf[187]=C_h_intern(&lf[187],12,"GL_DONT_CARE");
lf[188]=C_h_intern(&lf[188],10,"GL_FASTEST");
lf[189]=C_h_intern(&lf[189],9,"GL_NICEST");
lf[190]=C_h_intern(&lf[190],30,"GL_PERSPECTIVE_CORRECTION_HINT");
lf[191]=C_h_intern(&lf[191],20,"GL_POINT_SMOOTH_HINT");
lf[192]=C_h_intern(&lf[192],19,"GL_LINE_SMOOTH_HINT");
lf[193]=C_h_intern(&lf[193],11,"GL_FOG_HINT");
lf[194]=C_h_intern(&lf[194],23,"GL_GENERATE_MIPMAP_HINT");
lf[195]=C_h_intern(&lf[195],22,"GL_LIGHT_MODEL_AMBIENT");
lf[196]=C_h_intern(&lf[196],23,"GL_LIGHT_MODEL_TWO_SIDE");
lf[197]=C_h_intern(&lf[197],10,"GL_AMBIENT");
lf[198]=C_h_intern(&lf[198],10,"GL_DIFFUSE");
lf[199]=C_h_intern(&lf[199],11,"GL_SPECULAR");
lf[200]=C_h_intern(&lf[200],11,"GL_POSITION");
lf[201]=C_h_intern(&lf[201],17,"GL_SPOT_DIRECTION");
lf[202]=C_h_intern(&lf[202],16,"GL_SPOT_EXPONENT");
lf[203]=C_h_intern(&lf[203],14,"GL_SPOT_CUTOFF");
lf[204]=C_h_intern(&lf[204],23,"GL_CONSTANT_ATTENUATION");
lf[205]=C_h_intern(&lf[205],21,"GL_LINEAR_ATTENUATION");
lf[206]=C_h_intern(&lf[206],24,"GL_QUADRATIC_ATTENUATION");
lf[207]=C_h_intern(&lf[207],7,"GL_BYTE");
lf[208]=C_h_intern(&lf[208],16,"GL_UNSIGNED_BYTE");
lf[209]=C_h_intern(&lf[209],8,"GL_SHORT");
lf[210]=C_h_intern(&lf[210],17,"GL_UNSIGNED_SHORT");
lf[211]=C_h_intern(&lf[211],8,"GL_FLOAT");
lf[212]=C_h_intern(&lf[212],8,"GL_FIXED");
lf[213]=C_h_intern(&lf[213],8,"GL_CLEAR");
lf[214]=C_h_intern(&lf[214],6,"GL_AND");
lf[215]=C_h_intern(&lf[215],14,"GL_AND_REVERSE");
lf[216]=C_h_intern(&lf[216],7,"GL_COPY");
lf[217]=C_h_intern(&lf[217],15,"GL_AND_INVERTED");
lf[218]=C_h_intern(&lf[218],7,"GL_NOOP");
lf[219]=C_h_intern(&lf[219],6,"GL_XOR");
lf[220]=C_h_intern(&lf[220],5,"GL_OR");
lf[221]=C_h_intern(&lf[221],6,"GL_NOR");
lf[222]=C_h_intern(&lf[222],8,"GL_EQUIV");
lf[223]=C_h_intern(&lf[223],9,"GL_INVERT");
lf[224]=C_h_intern(&lf[224],13,"GL_OR_REVERSE");
lf[225]=C_h_intern(&lf[225],16,"GL_COPY_INVERTED");
lf[226]=C_h_intern(&lf[226],14,"GL_OR_INVERTED");
lf[227]=C_h_intern(&lf[227],7,"GL_NAND");
lf[228]=C_h_intern(&lf[228],6,"GL_SET");
lf[229]=C_h_intern(&lf[229],11,"GL_EMISSION");
lf[230]=C_h_intern(&lf[230],12,"GL_SHININESS");
lf[231]=C_h_intern(&lf[231],22,"GL_AMBIENT_AND_DIFFUSE");
lf[232]=C_h_intern(&lf[232],12,"GL_MODELVIEW");
lf[233]=C_h_intern(&lf[233],13,"GL_PROJECTION");
lf[234]=C_h_intern(&lf[234],10,"GL_TEXTURE");
lf[235]=C_h_intern(&lf[235],8,"GL_ALPHA");
lf[236]=C_h_intern(&lf[236],6,"GL_RGB");
lf[237]=C_h_intern(&lf[237],7,"GL_RGBA");
lf[238]=C_h_intern(&lf[238],12,"GL_LUMINANCE");
lf[239]=C_h_intern(&lf[239],18,"GL_LUMINANCE_ALPHA");
lf[240]=C_h_intern(&lf[240],19,"GL_UNPACK_ALIGNMENT");
lf[241]=C_h_intern(&lf[241],17,"GL_PACK_ALIGNMENT");
lf[242]=C_h_intern(&lf[242],25,"GL_UNSIGNED_SHORT_4_4_4_4");
lf[243]=C_h_intern(&lf[243],25,"GL_UNSIGNED_SHORT_5_5_5_1");
lf[244]=C_h_intern(&lf[244],23,"GL_UNSIGNED_SHORT_5_6_5");
lf[245]=C_h_intern(&lf[245],7,"GL_FLAT");
lf[246]=C_h_intern(&lf[246],9,"GL_SMOOTH");
lf[247]=C_h_intern(&lf[247],7,"GL_KEEP");
lf[248]=C_h_intern(&lf[248],10,"GL_REPLACE");
lf[249]=C_h_intern(&lf[249],7,"GL_INCR");
lf[250]=C_h_intern(&lf[250],7,"GL_DECR");
lf[251]=C_h_intern(&lf[251],9,"GL_VENDOR");
lf[252]=C_h_intern(&lf[252],11,"GL_RENDERER");
lf[253]=C_h_intern(&lf[253],10,"GL_VERSION");
lf[254]=C_h_intern(&lf[254],13,"GL_EXTENSIONS");
lf[255]=C_h_intern(&lf[255],11,"GL_MODULATE");
lf[256]=C_h_intern(&lf[256],8,"GL_DECAL");
lf[257]=C_h_intern(&lf[257],6,"GL_ADD");
lf[258]=C_h_intern(&lf[258],19,"GL_TEXTURE_ENV_MODE");
lf[259]=C_h_intern(&lf[259],20,"GL_TEXTURE_ENV_COLOR");
lf[260]=C_h_intern(&lf[260],14,"GL_TEXTURE_ENV");
lf[261]=C_h_intern(&lf[261],10,"GL_NEAREST");
lf[262]=C_h_intern(&lf[262],9,"GL_LINEAR");
lf[263]=C_h_intern(&lf[263],25,"GL_NEAREST_MIPMAP_NEAREST");
lf[264]=C_h_intern(&lf[264],24,"GL_LINEAR_MIPMAP_NEAREST");
lf[265]=C_h_intern(&lf[265],24,"GL_NEAREST_MIPMAP_LINEAR");
lf[266]=C_h_intern(&lf[266],23,"GL_LINEAR_MIPMAP_LINEAR");
lf[267]=C_h_intern(&lf[267],21,"GL_TEXTURE_MAG_FILTER");
lf[268]=C_h_intern(&lf[268],21,"GL_TEXTURE_MIN_FILTER");
lf[269]=C_h_intern(&lf[269],17,"GL_TEXTURE_WRAP_S");
lf[270]=C_h_intern(&lf[270],17,"GL_TEXTURE_WRAP_T");
lf[271]=C_h_intern(&lf[271],18,"GL_GENERATE_MIPMAP");
lf[272]=C_h_intern(&lf[272],11,"GL_TEXTURE0");
lf[273]=C_h_intern(&lf[273],11,"GL_TEXTURE1");
lf[274]=C_h_intern(&lf[274],11,"GL_TEXTURE2");
lf[275]=C_h_intern(&lf[275],11,"GL_TEXTURE3");
lf[276]=C_h_intern(&lf[276],11,"GL_TEXTURE4");
lf[277]=C_h_intern(&lf[277],11,"GL_TEXTURE5");
lf[278]=C_h_intern(&lf[278],11,"GL_TEXTURE6");
lf[279]=C_h_intern(&lf[279],11,"GL_TEXTURE7");
lf[280]=C_h_intern(&lf[280],11,"GL_TEXTURE8");
lf[281]=C_h_intern(&lf[281],11,"GL_TEXTURE9");
lf[282]=C_h_intern(&lf[282],12,"GL_TEXTURE10");
lf[283]=C_h_intern(&lf[283],12,"GL_TEXTURE11");
lf[284]=C_h_intern(&lf[284],12,"GL_TEXTURE12");
lf[285]=C_h_intern(&lf[285],12,"GL_TEXTURE13");
lf[286]=C_h_intern(&lf[286],12,"GL_TEXTURE14");
lf[287]=C_h_intern(&lf[287],12,"GL_TEXTURE15");
lf[288]=C_h_intern(&lf[288],12,"GL_TEXTURE16");
lf[289]=C_h_intern(&lf[289],12,"GL_TEXTURE17");
lf[290]=C_h_intern(&lf[290],12,"GL_TEXTURE18");
lf[291]=C_h_intern(&lf[291],12,"GL_TEXTURE19");
lf[292]=C_h_intern(&lf[292],12,"GL_TEXTURE20");
lf[293]=C_h_intern(&lf[293],12,"GL_TEXTURE21");
lf[294]=C_h_intern(&lf[294],12,"GL_TEXTURE22");
lf[295]=C_h_intern(&lf[295],12,"GL_TEXTURE23");
lf[296]=C_h_intern(&lf[296],12,"GL_TEXTURE24");
lf[297]=C_h_intern(&lf[297],12,"GL_TEXTURE25");
lf[298]=C_h_intern(&lf[298],12,"GL_TEXTURE26");
lf[299]=C_h_intern(&lf[299],12,"GL_TEXTURE27");
lf[300]=C_h_intern(&lf[300],12,"GL_TEXTURE28");
lf[301]=C_h_intern(&lf[301],12,"GL_TEXTURE29");
lf[302]=C_h_intern(&lf[302],12,"GL_TEXTURE30");
lf[303]=C_h_intern(&lf[303],12,"GL_TEXTURE31");
lf[304]=C_h_intern(&lf[304],17,"GL_ACTIVE_TEXTURE");
lf[305]=C_h_intern(&lf[305],24,"GL_CLIENT_ACTIVE_TEXTURE");
lf[306]=C_h_intern(&lf[306],9,"GL_REPEAT");
lf[307]=C_h_intern(&lf[307],16,"GL_CLAMP_TO_EDGE");
lf[308]=C_h_intern(&lf[308],20,"GL_PALETTE4_RGB8_OES");
lf[309]=C_h_intern(&lf[309],21,"GL_PALETTE4_RGBA8_OES");
lf[310]=C_h_intern(&lf[310],24,"GL_PALETTE4_R5_G6_B5_OES");
lf[311]=C_h_intern(&lf[311],21,"GL_PALETTE4_RGBA4_OES");
lf[312]=C_h_intern(&lf[312],23,"GL_PALETTE4_RGB5_A1_OES");
lf[313]=C_h_intern(&lf[313],20,"GL_PALETTE8_RGB8_OES");
lf[314]=C_h_intern(&lf[314],21,"GL_PALETTE8_RGBA8_OES");
lf[315]=C_h_intern(&lf[315],24,"GL_PALETTE8_R5_G6_B5_OES");
lf[316]=C_h_intern(&lf[316],21,"GL_PALETTE8_RGBA4_OES");
lf[317]=C_h_intern(&lf[317],23,"GL_PALETTE8_RGB5_A1_OES");
lf[318]=C_h_intern(&lf[318],9,"GL_LIGHT0");
lf[319]=C_h_intern(&lf[319],9,"GL_LIGHT1");
lf[320]=C_h_intern(&lf[320],9,"GL_LIGHT2");
lf[321]=C_h_intern(&lf[321],9,"GL_LIGHT3");
lf[322]=C_h_intern(&lf[322],9,"GL_LIGHT4");
lf[323]=C_h_intern(&lf[323],9,"GL_LIGHT5");
lf[324]=C_h_intern(&lf[324],9,"GL_LIGHT6");
lf[325]=C_h_intern(&lf[325],9,"GL_LIGHT7");
lf[326]=C_h_intern(&lf[326],15,"GL_ARRAY_BUFFER");
lf[327]=C_h_intern(&lf[327],23,"GL_ELEMENT_ARRAY_BUFFER");
lf[328]=C_h_intern(&lf[328],23,"GL_ARRAY_BUFFER_BINDING");
lf[329]=C_h_intern(&lf[329],31,"GL_ELEMENT_ARRAY_BUFFER_BINDING");
lf[330]=C_h_intern(&lf[330],30,"GL_VERTEX_ARRAY_BUFFER_BINDING");
lf[331]=C_h_intern(&lf[331],30,"GL_NORMAL_ARRAY_BUFFER_BINDING");
lf[332]=C_h_intern(&lf[332],29,"GL_COLOR_ARRAY_BUFFER_BINDING");
lf[333]=C_h_intern(&lf[333],37,"GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING");
lf[334]=C_h_intern(&lf[334],14,"GL_STATIC_DRAW");
lf[335]=C_h_intern(&lf[335],15,"GL_DYNAMIC_DRAW");
lf[336]=C_h_intern(&lf[336],14,"GL_BUFFER_SIZE");
lf[337]=C_h_intern(&lf[337],15,"GL_BUFFER_USAGE");
lf[338]=C_h_intern(&lf[338],11,"GL_SUBTRACT");
lf[339]=C_h_intern(&lf[339],10,"GL_COMBINE");
lf[340]=C_h_intern(&lf[340],14,"GL_COMBINE_RGB");
lf[341]=C_h_intern(&lf[341],16,"GL_COMBINE_ALPHA");
lf[342]=C_h_intern(&lf[342],12,"GL_RGB_SCALE");
lf[343]=C_h_intern(&lf[343],13,"GL_ADD_SIGNED");
lf[344]=C_h_intern(&lf[344],14,"GL_INTERPOLATE");
lf[345]=C_h_intern(&lf[345],11,"GL_CONSTANT");
lf[346]=C_h_intern(&lf[346],16,"GL_PRIMARY_COLOR");
lf[347]=C_h_intern(&lf[347],11,"GL_PREVIOUS");
lf[348]=C_h_intern(&lf[348],15,"GL_OPERAND0_RGB");
lf[349]=C_h_intern(&lf[349],15,"GL_OPERAND1_RGB");
lf[350]=C_h_intern(&lf[350],15,"GL_OPERAND2_RGB");
lf[351]=C_h_intern(&lf[351],17,"GL_OPERAND0_ALPHA");
lf[352]=C_h_intern(&lf[352],17,"GL_OPERAND1_ALPHA");
lf[353]=C_h_intern(&lf[353],17,"GL_OPERAND2_ALPHA");
lf[354]=C_h_intern(&lf[354],14,"GL_ALPHA_SCALE");
lf[355]=C_h_intern(&lf[355],11,"GL_SRC0_RGB");
lf[356]=C_h_intern(&lf[356],11,"GL_SRC1_RGB");
lf[357]=C_h_intern(&lf[357],11,"GL_SRC2_RGB");
lf[358]=C_h_intern(&lf[358],13,"GL_SRC0_ALPHA");
lf[359]=C_h_intern(&lf[359],13,"GL_SRC1_ALPHA");
lf[360]=C_h_intern(&lf[360],13,"GL_SRC2_ALPHA");
lf[361]=C_h_intern(&lf[361],11,"GL_DOT3_RGB");
lf[362]=C_h_intern(&lf[362],12,"GL_DOT3_RGBA");
lf[363]=C_h_intern(&lf[363],24,"GL_TEXTURE_CROP_RECT_OES");
lf[364]=C_h_intern(&lf[364],41,"GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES");
lf[365]=C_h_intern(&lf[365],42,"GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES");
lf[366]=C_h_intern(&lf[366],39,"GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES");
lf[367]=C_h_intern(&lf[367],23,"GL_MAX_VERTEX_UNITS_OES");
lf[368]=C_h_intern(&lf[368],27,"GL_MAX_PALETTE_MATRICES_OES");
lf[369]=C_h_intern(&lf[369],21,"GL_MATRIX_PALETTE_OES");
lf[370]=C_h_intern(&lf[370],25,"GL_MATRIX_INDEX_ARRAY_OES");
lf[371]=C_h_intern(&lf[371],19,"GL_WEIGHT_ARRAY_OES");
lf[372]=C_h_intern(&lf[372],29,"GL_CURRENT_PALETTE_MATRIX_OES");
lf[373]=C_h_intern(&lf[373],30,"GL_MATRIX_INDEX_ARRAY_SIZE_OES");
lf[374]=C_h_intern(&lf[374],30,"GL_MATRIX_INDEX_ARRAY_TYPE_OES");
lf[375]=C_h_intern(&lf[375],32,"GL_MATRIX_INDEX_ARRAY_STRIDE_OES");
lf[376]=C_h_intern(&lf[376],33,"GL_MATRIX_INDEX_ARRAY_POINTER_OES");
lf[377]=C_h_intern(&lf[377],40,"GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES");
lf[378]=C_h_intern(&lf[378],24,"GL_WEIGHT_ARRAY_SIZE_OES");
lf[379]=C_h_intern(&lf[379],24,"GL_WEIGHT_ARRAY_TYPE_OES");
lf[380]=C_h_intern(&lf[380],26,"GL_WEIGHT_ARRAY_STRIDE_OES");
lf[381]=C_h_intern(&lf[381],27,"GL_WEIGHT_ARRAY_POINTER_OES");
lf[382]=C_h_intern(&lf[382],34,"GL_WEIGHT_ARRAY_BUFFER_BINDING_OES");
lf[383]=C_h_intern(&lf[383],23,"GL_POINT_SIZE_ARRAY_OES");
lf[384]=C_h_intern(&lf[384],28,"GL_POINT_SIZE_ARRAY_TYPE_OES");
lf[385]=C_h_intern(&lf[385],30,"GL_POINT_SIZE_ARRAY_STRIDE_OES");
lf[386]=C_h_intern(&lf[386],31,"GL_POINT_SIZE_ARRAY_POINTER_OES");
lf[387]=C_h_intern(&lf[387],38,"GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES");
lf[388]=C_h_intern(&lf[388],19,"GL_POINT_SPRITE_OES");
lf[389]=C_h_intern(&lf[389],20,"GL_COORD_REPLACE_OES");
lf[390]=C_h_intern(&lf[390],12,"glClearColor");
lf[391]=C_h_intern(&lf[391],7,"glClear");
lf[392]=C_h_intern(&lf[392],8,"glEnable");
lf[393]=C_h_intern(&lf[393],11,"glBlendFunc");
lf[394]=C_h_intern(&lf[394],12,"glTranslatef");
lf[395]=C_h_intern(&lf[395],9,"glRotatef");
lf[396]=C_h_intern(&lf[396],8,"glScalef");
lf[397]=C_h_intern(&lf[397],13,"glGenTextures");
lf[398]=C_h_intern(&lf[398],13,"glBindTexture");
lf[399]=C_h_intern(&lf[399],12,"glTexImage2D");
lf[400]=C_h_intern(&lf[400],15,"glTexParameteri");
lf[401]=C_h_intern(&lf[401],9,"glTexEnvi");
lf[402]=C_h_intern(&lf[402],15,"glVertexPointer");
lf[403]=C_h_intern(&lf[403],9,"f32vector");
lf[404]=C_h_intern(&lf[404],14,"glColorPointer");
lf[405]=C_h_intern(&lf[405],8,"u8vector");
lf[406]=C_h_intern(&lf[406],15,"glNormalPointer");
lf[407]=C_h_intern(&lf[407],17,"glTexCoordPointer");
lf[408]=C_h_intern(&lf[408],19,"glEnableClientState");
lf[409]=C_h_intern(&lf[409],20,"glDisableClientState");
lf[410]=C_h_intern(&lf[410],12,"glDrawArrays");
lf[411]=C_h_intern(&lf[411],14,"glDrawElements");
lf[412]=C_h_intern(&lf[412],8,"glOrthof");
lf[413]=C_h_intern(&lf[413],12,"glMatrixMode");
lf[414]=C_h_intern(&lf[414],13,"glMultMatrixf");
lf[415]=C_h_intern(&lf[415],13,"glLoadMatrixf");
lf[416]=C_h_intern(&lf[416],9,"glColor4f");
lf[417]=C_h_intern(&lf[417],14,"glLoadIdentity");
lf[418]=C_h_intern(&lf[418],10,"glFrustumf");
lf[419]=C_h_intern(&lf[419],10,"glCullFace");
lf[420]=C_h_intern(&lf[420],9,"glDisable");
lf[421]=C_h_intern(&lf[421],11,"glDepthMask");
lf[422]=C_h_intern(&lf[422],6,"glFogf");
lf[423]=C_h_intern(&lf[423],7,"glFogfv");
lf[424]=C_h_intern(&lf[424],6,"glFogx");
lf[425]=C_h_intern(&lf[425],7,"glFogxv");
lf[426]=C_h_intern(&lf[426],8,"glLightf");
lf[427]=C_h_intern(&lf[427],9,"glLightfv");
lf[428]=C_h_intern(&lf[428],11,"glMaterialf");
lf[429]=C_h_intern(&lf[429],12,"glMaterialfv");
lf[430]=C_h_intern(&lf[430],12,"glShadeModel");
lf[431]=C_h_intern(&lf[431],13,"glLightModelf");
lf[432]=C_h_intern(&lf[432],14,"glLightModelfv");
lf[433]=C_h_intern(&lf[433],12,"glClearDepth");
lf[434]=C_h_intern(&lf[434],6,"glHint");
lf[435]=C_h_intern(&lf[435],11,"glLineWidth");
lf[436]=C_h_intern(&lf[436],11,"glPopMatrix");
lf[437]=C_h_intern(&lf[437],12,"glPushMatrix");
lf[438]=C_h_intern(&lf[438],10,"glViewport");
lf[439]=C_h_intern(&lf[439],11,"clear-color");
lf[440]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376U0.0\000\376\003\000\000\002\376U0.0\000\376\003\000\000\002\376U0.0\000\376\003\000\000\002\376\377\001\000\000\000\001\376\377\016");
lf[441]=C_h_intern(&lf[441],13,"field-of-view");
lf[442]=C_decode_literal(C_heaptop,"\376U45.0\000");
lf[443]=C_h_intern(&lf[443],5,"zNear");
lf[444]=C_decode_literal(C_heaptop,"\376U0.1000000000000000055511151231257827021181583404541015625\000");
lf[445]=C_h_intern(&lf[445],4,"zFar");
lf[446]=C_h_intern(&lf[446],2,"PI");
lf[447]=C_decode_literal(C_heaptop,"\376U3.141926535000000075825710155186243355274200439453125\000");
lf[448]=C_h_intern(&lf[448],12,"render_scene");
lf[449]=C_h_intern(&lf[449],12,"render-scene");
lf[450]=C_h_intern(&lf[450],11,"scene_setup");
lf[451]=C_h_intern(&lf[451],11,"setup-scene");
lf[452]=C_h_intern(&lf[452],15,"set_orientation");
lf[453]=C_h_intern(&lf[453],23,"set-device-orientation!");
lf[454]=C_h_intern(&lf[454],12,"start_server");
lf[455]=C_h_intern(&lf[455],12,"start-server");
lf[456]=C_h_intern(&lf[456],12,"update_world");
lf[457]=C_h_intern(&lf[457],13,"update-world!");
lf[458]=C_h_intern(&lf[458],7,"my-repl");
lf[459]=C_h_intern(&lf[459],5,"print");
lf[460]=C_h_intern(&lf[460],4,"eval");
lf[461]=C_h_intern(&lf[461],4,"read");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\014[iPhone] #; ");
lf[463]=C_h_intern(&lf[463],20,"my-exception-handler");
lf[464]=C_h_intern(&lf[464],19,"print-error-message");
lf[465]=C_h_intern(&lf[465],10,"tcp-accept");
lf[466]=C_h_intern(&lf[466],9,"condition");
lf[467]=C_decode_literal(C_heaptop,"\376B\000\000\022Connection closed.");
lf[468]=C_h_intern(&lf[468],9,"tcp-close");
lf[469]=C_h_intern(&lf[469],10,"\003syssignal");
lf[470]=C_h_intern(&lf[470],4,"memv");
lf[471]=C_h_intern(&lf[471],3,"exn");
lf[472]=C_h_intern(&lf[472],2,"io");
lf[473]=C_h_intern(&lf[473],13,"thread-yield!");
lf[474]=C_h_intern(&lf[474],22,"with-exception-handler");
lf[475]=C_h_intern(&lf[475],30,"call-with-current-continuation");
lf[476]=C_decode_literal(C_heaptop,"\376B\000\000\034Welcome to the Chicken Repl!");
lf[477]=C_h_intern(&lf[477],20,"with-input-from-port");
lf[478]=C_h_intern(&lf[478],19,"with-output-to-port");
lf[479]=C_h_intern(&lf[479],17,"tcp-accept-ready\077");
lf[480]=C_h_intern(&lf[480],10,"tcp-listen");
lf[481]=C_h_intern(&lf[481],13,"thread-start!");
lf[482]=C_decode_literal(C_heaptop,"\376B\000\000!Chicken server starting at port: ");
lf[483]=C_h_intern(&lf[483],15,"\003sysget-keyword");
lf[484]=C_h_intern(&lf[484],5,"\000port");
lf[485]=C_h_intern(&lf[485],10,"make-point");
lf[486]=C_h_intern(&lf[486],5,"point");
lf[487]=C_h_intern(&lf[487],6,"point\077");
lf[488]=C_h_intern(&lf[488],12,"point-x-set!");
lf[489]=C_h_intern(&lf[489],14,"\003sysblock-set!");
lf[490]=C_h_intern(&lf[490],7,"point-x");
lf[491]=C_h_intern(&lf[491],12,"point-y-set!");
lf[492]=C_h_intern(&lf[492],7,"point-y");
lf[493]=C_h_intern(&lf[493],12,"point-z-set!");
lf[494]=C_h_intern(&lf[494],7,"point-z");
lf[495]=C_h_intern(&lf[495],9,"make-grid");
lf[496]=C_h_intern(&lf[496],4,"grid");
lf[497]=C_h_intern(&lf[497],5,"grid\077");
lf[498]=C_h_intern(&lf[498],14,"grid-size-set!");
lf[499]=C_h_intern(&lf[499],9,"grid-size");
lf[500]=C_h_intern(&lf[500],19,"grid-divisions-set!");
lf[501]=C_h_intern(&lf[501],14,"grid-divisions");
lf[502]=C_h_intern(&lf[502],18,"grid-geometry-set!");
lf[503]=C_h_intern(&lf[503],13,"grid-geometry");
lf[504]=C_h_intern(&lf[504],25,"grid-number-vertexes-set!");
lf[505]=C_h_intern(&lf[505],20,"grid-number-vertexes");
lf[506]=C_h_intern(&lf[506],11,"grid-offset");
lf[507]=C_h_intern(&lf[507],10,"grid-speed");
lf[508]=C_h_intern(&lf[508],16,"make-perspective");
lf[509]=C_h_intern(&lf[509],1,"-");
lf[510]=C_h_intern(&lf[510],1,"\052");
lf[511]=C_h_intern(&lf[511],3,"tan");
lf[512]=C_h_intern(&lf[512],1,"/");
lf[513]=C_h_intern(&lf[513],11,"point->list");
lf[514]=C_h_intern(&lf[514],4,"list");
lf[515]=C_h_intern(&lf[515],9,"make-line");
lf[516]=C_h_intern(&lf[516],10,"line->list");
lf[517]=C_h_intern(&lf[517],4,"cadr");
lf[518]=C_h_intern(&lf[518],3,"car");
lf[519]=C_h_intern(&lf[519],18,"make-grid-geometry");
lf[520]=C_h_intern(&lf[520],15,"list->f32vector");
lf[521]=C_h_intern(&lf[521],6,"append");
lf[522]=C_h_intern(&lf[522],1,"+");
lf[523]=C_h_intern(&lf[523],1,"<");
lf[524]=C_decode_literal(C_heaptop,"\376U1.5\000");
lf[525]=C_decode_literal(C_heaptop,"\376U100.0\000");
lf[526]=C_h_intern(&lf[526],5,"apply");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\010Height: ");
lf[528]=C_decode_literal(C_heaptop,"\376B\000\000\007Width: ");
lf[529]=C_h_intern(&lf[529],2,">=");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\007Delta: ");
lf[531]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007UNKNOWN\376\377\001\000\000\000\000\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002UP\376\377\001\000\000\000\000\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004DOWN\376\377\001\000\000\000\264\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\004LEFT\376\377\001\377\377\377\246\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005RIGHT\376\377\001\000\000\000Z\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007FACE-UP\376\377\001\000\000\000"
"\000\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011FACE-DOWN\376\377\001\000\000\000\000\376\377\016");
lf[532]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[533]=C_decode_literal(C_heaptop,"\376U1.0\000");
lf[534]=C_h_intern(&lf[534],3,"cdr");
lf[535]=C_h_intern(&lf[535],5,"assoc");
lf[536]=C_h_intern(&lf[536],10,"vector-ref");
lf[537]=C_decode_literal(C_heaptop,"\376B\000\000\024Device orientation: ");
lf[538]=C_h_intern(&lf[538],14,"symbol->string");
lf[539]=C_h_intern(&lf[539],6,"vector");
lf[540]=C_h_intern(&lf[540],7,"UNKNOWN");
lf[541]=C_h_intern(&lf[541],2,"UP");
lf[542]=C_h_intern(&lf[542],4,"DOWN");
lf[543]=C_h_intern(&lf[543],4,"LEFT");
lf[544]=C_h_intern(&lf[544],5,"RIGHT");
lf[545]=C_h_intern(&lf[545],7,"FACE-UP");
lf[546]=C_h_intern(&lf[546],9,"FACE-DOWN");
lf[547]=C_decode_literal(C_heaptop,"\376U-85.0\000");
lf[548]=C_decode_literal(C_heaptop,"\376U-1.5\000");
lf[549]=C_decode_literal(C_heaptop,"\376U9.5\000");
lf[550]=C_h_intern(&lf[550],11,"bitwise-ior");
lf[551]=C_h_intern(&lf[551],13,"generate-grid");
lf[552]=C_h_intern(&lf[552],16,"f32vector-length");
lf[553]=C_h_intern(&lf[553],25,"\003sysimplicit-exit-handler");
lf[554]=C_h_intern(&lf[554],14,"return-to-host");
lf[555]=C_h_intern(&lf[555],10,"debug-mode");
lf[556]=C_h_intern(&lf[556],1,"t");
lf[557]=C_h_intern(&lf[557],16,"tcp-read-timeout");
C_register_lf2(lf,558,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1943,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3384 in k3382 in line->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:41: list");
((C_proc8)C_fast_retrieve_symbol_proc(lf[514]))(8,*((C_word*)lf[514]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3408,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3412,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:45: /");
((C_proc4)C_fast_retrieve_symbol_proc(lf[512]))(4,*((C_word*)lf[512]+1),t4,t2,t3);}

/* k3402 in k3399 in k3396 in k3393 in k3390 in k3384 in k3382 in line->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("beamrider.scm:42: point-z");
t3=C_fast_retrieve(lf[494]);
f_3230(3,t3,t2,((C_word*)t0)[7]);}

/* k3399 in k3396 in k3393 in k3390 in k3384 in k3382 in line->list in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("beamrider.scm:42: point-y");
t3=C_fast_retrieve(lf[492]);
f_3212(3,t3,t2,((C_word*)t0)[6]);}

/* glFogxv in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2795,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub855(C_SCHEME_UNDEFINED,t4,t5));}

/* glLineWidth in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2917,3,t0,t1,t2);}
t3=C_i_foreign_flonum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub946(C_SCHEME_UNDEFINED,t3));}

/* glRotatef in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2409,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_foreign_flonum_argumentp(t2);
t7=C_i_foreign_flonum_argumentp(t3);
t8=C_i_foreign_flonum_argumentp(t4);
t9=C_i_foreign_flonum_argumentp(t5);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub569(C_SCHEME_UNDEFINED,t6,t7,t8,t9));}

/* glViewport in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2932,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_foreign_fixnum_argumentp(t2);
t7=C_i_foreign_fixnum_argumentp(t3);
t8=C_i_foreign_fixnum_argumentp(t4);
t9=C_i_foreign_fixnum_argumentp(t5);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub963(C_SCHEME_UNDEFINED,t6,t7,t8,t9));}

/* glDepthMask in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2754(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2754,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub822(C_SCHEME_UNDEFINED,t3));}

/* set_orientation in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2966,3,t0,t1,t2);}
C_trace("externals.scm:8: set-device-orientation!");
t3=C_fast_retrieve(lf[453]);
f_3561(3,t3,t1,t2);}

/* glFogfv in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2771,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub837(C_SCHEME_UNDEFINED,t4,t5));}

/* glHint in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2907,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub939(C_SCHEME_UNDEFINED,t4,t5));}

/* glClearDepth in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2900,3,t0,t1,t2);}
t3=C_i_foreign_flonum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub932(C_SCHEME_UNDEFINED,t3));}

/* glFogf in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2761,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_flonum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub829(C_SCHEME_UNDEFINED,t4,t5));}

/* glPopMatrix in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2924,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub951(C_SCHEME_UNDEFINED));}

/* glPushMatrix in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2928,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub955(C_SCHEME_UNDEFINED));}

/* k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:76: glLoadIdentity");
t3=*((C_word*)lf[417]+1);
f_2714(2,t3,t2);}

/* k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:75: glMatrixMode");
t3=*((C_word*)lf[413]+1);
f_2669(3,t3,t2,*((C_word*)lf[233]+1));}

/* k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:74: glViewport");
t3=*((C_word*)lf[438]+1);
f_2932(6,t3,t2,C_fix(0),C_fix(0),((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:73: glClearDepth");
t3=*((C_word*)lf[433]+1);
f_2900(3,t3,t2,lf[525]);}

/* k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:72: apply");
((C_proc4)C_fast_retrieve_symbol_proc(lf[526]))(4,*((C_word*)lf[526]+1),t2,*((C_word*)lf[390]+1),*((C_word*)lf[439]+1));}

/* k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:81: glBlendFunc");
t3=*((C_word*)lf[393]+1);
f_2386(4,t3,t2,*((C_word*)lf[45]+1),*((C_word*)lf[46]+1));}

/* k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3516,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:80: glEnable");
t3=*((C_word*)lf[392]+1);
f_2379(3,t3,t2,*((C_word*)lf[66]+1));}

/* k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:79: glLoadIdentity");
t3=*((C_word*)lf[417]+1);
f_2714(2,t3,t2);}

/* k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:78: glMatrixMode");
t3=*((C_word*)lf[413]+1);
f_2669(3,t3,t2,*((C_word*)lf[232]+1));}

/* k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3534,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:77: /");
((C_proc4)C_fast_retrieve_symbol_proc(lf[512]))(4,*((C_word*)lf[512]+1),t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* point-x in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3194(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3194,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[486]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* glMultMatrixf in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2676,3,t0,t1,t2);}
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub762(C_SCHEME_UNDEFINED,t3));}

/* glDrawArrays in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2614,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub718(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k3449 in k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3453,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("beamrider.scm:62: -");
((C_proc3)C_fast_retrieve_symbol_proc(lf[509]))(3,*((C_word*)lf[509]+1),t2,((C_word*)t0)[3]);}

/* k3452 in k3449 in k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3459,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:64: *");
((C_proc4)C_fast_retrieve_symbol_proc(lf[510]))(4,*((C_word*)lf[510]+1),t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3455 in k3452 in k3449 in k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:61: make-line");
t2=C_fast_retrieve(lf[515]);
f_3367(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),t1,((C_word*)t0)[5],C_fix(0));}

/* k3458 in k3452 in k3449 in k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3462,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:64: -");
((C_proc3)C_fast_retrieve_symbol_proc(lf[509]))(3,*((C_word*)lf[509]+1),t2,((C_word*)t0)[3]);}

/* glDrawElements in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2627,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_foreign_fixnum_argumentp(t2);
t7=C_i_foreign_fixnum_argumentp(t3);
t8=C_i_foreign_fixnum_argumentp(t4);
t9=(C_truep(t5)?C_i_foreign_pointer_argumentp(t5):C_SCHEME_FALSE);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub729(C_SCHEME_UNDEFINED,t6,t7,t8,t9));}

/* k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3441,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3474,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace("beamrider.scm:54: -");
((C_proc3)C_fast_retrieve_symbol_proc(lf[509]))(3,*((C_word*)lf[509]+1),t5,((C_word*)t0)[5]);}

/* k3437 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:50: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_3419(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* glOrthof in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_2647,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=C_i_foreign_flonum_argumentp(t2);
t9=C_i_foreign_flonum_argumentp(t3);
t10=C_i_foreign_flonum_argumentp(t4);
t11=C_i_foreign_flonum_argumentp(t5);
t12=C_i_foreign_flonum_argumentp(t6);
t13=C_i_foreign_flonum_argumentp(t7);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,stub745(C_SCHEME_UNDEFINED,t8,t9,t10,t11,t12,t13));}

/* k3533 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:77: make-perspective");
t2=C_fast_retrieve(lf[508]);
f_3325(6,t2,((C_word*)t0)[2],*((C_word*)lf[441]+1),t1,*((C_word*)lf[443]+1),*((C_word*)lf[445]+1));}

/* update-world! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3536,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3540,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:89: print");
((C_proc4)C_fast_retrieve_symbol_proc(lf[459]))(4,*((C_word*)lf[459]+1),t3,lf[530],t2);}

/* k3150 */
static void C_ccall f_3151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:38: thread-yield!");
((C_proc2)C_fast_retrieve_symbol_proc(lf[473]))(2,*((C_word*)lf[473]+1),t2);}

/* k3152 in k3150 */
static void C_ccall f_3153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("remote-repl.scm:39: back-to-repl");
t2=((C_word*)((C_word*)t0)[2])[1];
f_3076(2,t2,((C_word*)t0)[3]);}

/* f_3158 */
static void C_ccall f_3158(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3158r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3158r(t0,t1,t2);}}

static void C_ccall f_3158r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3163,a[2]=t2,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:34: k1488");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3447,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3450,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3465,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:61: *");
((C_proc4)C_fast_retrieve_symbol_proc(lf[510]))(4,*((C_word*)lf[510]+1),t5,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3443 in k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:51: append");
((C_proc5)C_fast_retrieve_symbol_proc(lf[521]))(5,*((C_word*)lf[521]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3446 in k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:60: line->list");
t2=C_fast_retrieve(lf[516]);
f_3379(3,t2,((C_word*)t0)[2],t1);}

/* k3541 in k3539 in update-world! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_fcall f_3542(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k3539 in update-world! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3542,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3545,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3556,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3559,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:90: grid-size");
t6=C_fast_retrieve(lf[499]);
f_3260(3,t6,t5,C_fast_retrieve(lf[496]));}

/* k3543 in k3539 in update-world! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3545,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(lf[506] /* grid-offset */,0,C_fix(0));
t3=((C_word*)t0)[2];
f_3542(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3550,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3553,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:92: *");
((C_proc4)C_fast_retrieve_symbol_proc(lf[510]))(4,*((C_word*)lf[510]+1),t3,((C_word*)t0)[3],C_fast_retrieve(lf[507]));}}

/* f_3163 */
static void C_ccall f_3163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3163,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_3168 in start-server in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3168,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(1100));}

/* glNormalPointer in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2563,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub680(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k3491 in k3488 in k3473 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:55: +");
((C_proc4)C_fast_retrieve_symbol_proc(lf[522]))(4,*((C_word*)lf[522]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:71: print");
((C_proc4)C_fast_retrieve_symbol_proc(lf[459]))(4,*((C_word*)lf[459]+1),t2,lf[527],((C_word*)t0)[4]);}

/* setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3494(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3494,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3498,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("beamrider.scm:70: print");
((C_proc4)C_fast_retrieve_symbol_proc(lf[459]))(4,*((C_word*)lf[459]+1),t4,lf[528],t2);}

/* k3570 in k3568 in k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3580,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3583,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:101: vector-ref");
((C_proc4)C_fast_retrieve_symbol_proc(lf[536]))(4,*((C_word*)lf[536]+1),t4,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3552 in k3543 in k3539 in update-world! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:92: +");
((C_proc4)C_fast_retrieve_symbol_proc(lf[522]))(4,*((C_word*)lf[522]+1),((C_word*)t0)[2],C_fast_retrieve(lf[506]),t1);}

/* k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_1949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1951,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d4_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3576 in k3570 in k3568 in k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:101: glRotatef");
t2=*((C_word*)lf[395]+1);
f_2409(6,t2,((C_word*)t0)[2],t1,lf[532],lf[532],lf[533]);}

/* k3548 in k3543 in k3539 in update-world! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[506]+1 /* (set! grid-offset ...) */,t1);
t3=((C_word*)t0)[2];
f_3542(t3,t2);}

/* k1944 in k1942 */
static void C_ccall f_1945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1947,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3555 in k3539 in update-world! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:90: >=");
((C_proc4)C_fast_retrieve_symbol_proc(lf[529]))(4,*((C_word*)lf[529]+1),((C_word*)t0)[2],C_fast_retrieve(lf[506]),t1);}

/* k1946 in k1944 in k1942 */
static void C_ccall f_1947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d18_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3558 in k3539 in update-world! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:90: /");
((C_proc4)C_fast_retrieve_symbol_proc(lf[512]))(4,*((C_word*)lf[512]+1),((C_word*)t0)[2],t1,C_fix(80));}

/* k1942 */
static void C_ccall f_1943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* make-point in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3173,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[486],t2,t3,t4));}

/* k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word ab[87],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3171,2,t0,t1);}
t2=C_mutate((C_word*)lf[485]+1 /* (set! make-point ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3173,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[487]+1 /* (set! point? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3179,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[488]+1 /* (set! point-x-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3185,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[490]+1 /* (set! point-x ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3194,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[491]+1 /* (set! point-y-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3203,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[492]+1 /* (set! point-y ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3212,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[493]+1 /* (set! point-z-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3221,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[494]+1 /* (set! point-z ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3230,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[495]+1 /* (set! make-grid ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3239,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[497]+1 /* (set! grid? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3245,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[498]+1 /* (set! grid-size-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[499]+1 /* (set! grid-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3260,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[500]+1 /* (set! grid-divisions-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3269,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[501]+1 /* (set! grid-divisions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3278,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[502]+1 /* (set! grid-geometry-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3287,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[503]+1 /* (set! grid-geometry ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3296,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[504]+1 /* (set! grid-number-vertexes-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3305,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[505]+1 /* (set! grid-number-vertexes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3314,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t20=C_set_block_item(lf[506] /* grid-offset */,0,C_fix(0));
t21=C_set_block_item(lf[507] /* grid-speed */,0,C_fix(2));
t22=C_mutate((C_word*)lf[508]+1 /* (set! make-perspective ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3325,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[513]+1 /* (set! point->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3352,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[515]+1 /* (set! make-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3367,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[516]+1 /* (set! line->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3379,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[519]+1 /* (set! make-grid-geometry ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3408,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[451]+1 /* (set! setup-scene ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3494,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[457]+1 /* (set! update-world! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3536,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[453]+1 /* (set! set-device-orientation! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3561,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[449]+1 /* (set! render-scene ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3597,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[551]+1 /* (set! generate-grid ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3637,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3654,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:119: generate-grid");
t33=C_fast_retrieve(lf[551]);
f_3637(4,t33,t32,C_fix(80),C_fix(100));}

/* point? in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3179,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[486]));}

/* glEnableClientState in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2600,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub704(C_SCHEME_UNDEFINED,t3));}

/* k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3426,2,t0,t1);}
if(C_truep(t1)){
C_trace("beamrider.scm:49: list->f32vector");
((C_proc3)C_fast_retrieve_symbol_proc(lf[520]))(3,*((C_word*)lf[520]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3435,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("beamrider.scm:50: -");
((C_proc4)C_fast_retrieve_symbol_proc(lf[509]))(4,*((C_word*)lf[509]+1),t2,((C_word*)t0)[6],C_fix(1));}}

/* k3579 in k3570 in k3568 in k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:101: cdr");
((C_proc3)C_fast_retrieve_symbol_proc(lf[534]))(3,*((C_word*)lf[534]+1),((C_word*)t0)[2],t1);}

/* set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3561(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3561,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3565,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:96: vector");
((C_proc9)C_fast_retrieve_symbol_proc(lf[539]))(9,*((C_word*)lf[539]+1),t3,lf[540],lf[541],lf[542],lf[543],lf[544],lf[545],lf[546]);}

/* k3588 in k3568 in k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:100: symbol->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[538]))(3,*((C_word*)lf[538]+1),((C_word*)t0)[2],t1);}

/* k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("beamrider.scm:99: glLoadIdentity");
t3=*((C_word*)lf[417]+1);
f_2714(2,t3,t2);}

/* k3568 in k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3586,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3589,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3592,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3595,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:100: vector-ref");
((C_proc4)C_fast_retrieve_symbol_proc(lf[536]))(4,*((C_word*)lf[536]+1),t6,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3585 in k3568 in k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:100: print");
((C_proc4)C_fast_retrieve_symbol_proc(lf[459]))(4,*((C_word*)lf[459]+1),((C_word*)t0)[2],lf[537],t1);}

/* k3582 in k3570 in k3568 in k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:101: assoc");
((C_proc4)C_fast_retrieve_symbol_proc(lf[535]))(4,*((C_word*)lf[535]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* display-gl-error in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_1953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("gl.scm:12: display");
((C_proc3)C_fast_retrieve_symbol_proc(lf[2]))(3,*((C_word*)lf[2]+1),t2,lf[4]);}

/* k1958 in k1956 in display-gl-error in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_1959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("gl.scm:14: newline");
((C_proc2)C_fast_retrieve_symbol_proc(lf[1]))(2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3565,2,t0,t1);}
t2=lf[531];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3567,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("beamrider.scm:98: glMatrixMode");
t4=*((C_word*)lf[413]+1);
f_2669(3,t4,t3,*((C_word*)lf[232]+1));}

/* k1956 in display-gl-error in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1959,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1965,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("gl.scm:13: glGetError");
t4=*((C_word*)lf[3]+1);
f_2352(2,t4,t3);}

/* k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_1951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word t158;
C_word t159;
C_word t160;
C_word t161;
C_word t162;
C_word t163;
C_word t164;
C_word t165;
C_word t166;
C_word t167;
C_word t168;
C_word t169;
C_word t170;
C_word t171;
C_word t172;
C_word t173;
C_word t174;
C_word t175;
C_word t176;
C_word t177;
C_word t178;
C_word t179;
C_word t180;
C_word t181;
C_word t182;
C_word t183;
C_word t184;
C_word t185;
C_word t186;
C_word t187;
C_word t188;
C_word t189;
C_word t190;
C_word t191;
C_word t192;
C_word t193;
C_word t194;
C_word t195;
C_word t196;
C_word t197;
C_word t198;
C_word t199;
C_word t200;
C_word t201;
C_word t202;
C_word t203;
C_word t204;
C_word t205;
C_word t206;
C_word t207;
C_word t208;
C_word t209;
C_word t210;
C_word t211;
C_word t212;
C_word t213;
C_word t214;
C_word t215;
C_word t216;
C_word t217;
C_word t218;
C_word t219;
C_word t220;
C_word t221;
C_word t222;
C_word t223;
C_word t224;
C_word t225;
C_word t226;
C_word t227;
C_word t228;
C_word t229;
C_word t230;
C_word t231;
C_word t232;
C_word t233;
C_word t234;
C_word t235;
C_word t236;
C_word t237;
C_word t238;
C_word t239;
C_word t240;
C_word t241;
C_word t242;
C_word t243;
C_word t244;
C_word t245;
C_word t246;
C_word t247;
C_word t248;
C_word t249;
C_word t250;
C_word t251;
C_word t252;
C_word t253;
C_word t254;
C_word t255;
C_word t256;
C_word t257;
C_word t258;
C_word t259;
C_word t260;
C_word t261;
C_word t262;
C_word t263;
C_word t264;
C_word t265;
C_word t266;
C_word t267;
C_word t268;
C_word t269;
C_word t270;
C_word t271;
C_word t272;
C_word t273;
C_word t274;
C_word t275;
C_word t276;
C_word t277;
C_word t278;
C_word t279;
C_word t280;
C_word t281;
C_word t282;
C_word t283;
C_word t284;
C_word t285;
C_word t286;
C_word t287;
C_word t288;
C_word t289;
C_word t290;
C_word t291;
C_word t292;
C_word t293;
C_word t294;
C_word t295;
C_word t296;
C_word t297;
C_word t298;
C_word t299;
C_word t300;
C_word t301;
C_word t302;
C_word t303;
C_word t304;
C_word t305;
C_word t306;
C_word t307;
C_word t308;
C_word t309;
C_word t310;
C_word t311;
C_word t312;
C_word t313;
C_word t314;
C_word t315;
C_word t316;
C_word t317;
C_word t318;
C_word t319;
C_word t320;
C_word t321;
C_word t322;
C_word t323;
C_word t324;
C_word t325;
C_word t326;
C_word t327;
C_word t328;
C_word t329;
C_word t330;
C_word t331;
C_word t332;
C_word t333;
C_word t334;
C_word t335;
C_word t336;
C_word t337;
C_word t338;
C_word t339;
C_word t340;
C_word t341;
C_word t342;
C_word t343;
C_word t344;
C_word t345;
C_word t346;
C_word t347;
C_word t348;
C_word t349;
C_word t350;
C_word t351;
C_word t352;
C_word t353;
C_word t354;
C_word t355;
C_word t356;
C_word t357;
C_word t358;
C_word t359;
C_word t360;
C_word t361;
C_word t362;
C_word t363;
C_word t364;
C_word t365;
C_word t366;
C_word t367;
C_word t368;
C_word t369;
C_word t370;
C_word t371;
C_word t372;
C_word t373;
C_word t374;
C_word t375;
C_word t376;
C_word t377;
C_word t378;
C_word t379;
C_word t380;
C_word t381;
C_word t382;
C_word t383;
C_word t384;
C_word t385;
C_word t386;
C_word t387;
C_word t388;
C_word t389;
C_word t390;
C_word t391;
C_word t392;
C_word t393;
C_word t394;
C_word t395;
C_word t396;
C_word t397;
C_word t398;
C_word t399;
C_word t400;
C_word t401;
C_word t402;
C_word t403;
C_word t404;
C_word t405;
C_word t406;
C_word t407;
C_word t408;
C_word t409;
C_word t410;
C_word t411;
C_word t412;
C_word t413;
C_word t414;
C_word t415;
C_word t416;
C_word t417;
C_word t418;
C_word t419;
C_word t420;
C_word t421;
C_word t422;
C_word t423;
C_word t424;
C_word t425;
C_word t426;
C_word t427;
C_word t428;
C_word t429;
C_word t430;
C_word t431;
C_word t432;
C_word t433;
C_word t434;
C_word t435;
C_word t436;
C_word t437;
C_word t438;
C_word t439;
C_word t440;
C_word t441;
C_word t442;
C_word t443;
C_word t444;
C_word t445;
C_word t446;
C_word t447;
C_word ab[165],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1951,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! display-gl-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1953,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_set_block_item(lf[5] /* GL_VERSION_ES_CM_1_0 */,0,C_fix(1));
t4=C_set_block_item(lf[6] /* GL_VERSION_ES_CL_1_0 */,0,C_fix(1));
t5=C_set_block_item(lf[7] /* GL_VERSION_ES_CM_1_1 */,0,C_fix(1));
t6=C_set_block_item(lf[8] /* GL_VERSION_ES_CL_1_1 */,0,C_fix(1));
t7=C_set_block_item(lf[9] /* GL_OES_VERSION_1_0 */,0,C_fix(1));
t8=C_set_block_item(lf[10] /* GL_OES_VERSION_1_1 */,0,C_fix(1));
t9=C_set_block_item(lf[11] /* GL_OES_byte_coordinates */,0,C_fix(1));
t10=C_set_block_item(lf[12] /* GL_OES_compressed_paletted_texture */,0,C_fix(1));
t11=C_set_block_item(lf[13] /* GL_OES_draw_texture */,0,C_fix(1));
t12=C_set_block_item(lf[14] /* GL_OES_fixed_point */,0,C_fix(1));
t13=C_set_block_item(lf[15] /* GL_OES_matrix_get */,0,C_fix(1));
t14=C_set_block_item(lf[16] /* GL_OES_matrix_palette */,0,C_fix(1));
t15=C_set_block_item(lf[17] /* GL_OES_point_size_array */,0,C_fix(1));
t16=C_set_block_item(lf[18] /* GL_OES_point_sprite */,0,C_fix(1));
t17=C_set_block_item(lf[19] /* GL_OES_read_format */,0,C_fix(1));
t18=C_set_block_item(lf[20] /* GL_OES_single_precision */,0,C_fix(1));
t19=C_set_block_item(lf[21] /* GL_DEPTH_BUFFER_BIT */,0,C_fix(256));
t20=C_set_block_item(lf[22] /* GL_STENCIL_BUFFER_BIT */,0,C_fix(1024));
t21=C_set_block_item(lf[23] /* GL_COLOR_BUFFER_BIT */,0,C_fix(16384));
t22=C_set_block_item(lf[24] /* GL_FALSE */,0,C_fix(0));
t23=C_set_block_item(lf[25] /* GL_TRUE */,0,C_fix(1));
t24=C_set_block_item(lf[26] /* GL_POINTS */,0,C_fix(0));
t25=C_set_block_item(lf[27] /* GL_LINES */,0,C_fix(1));
t26=C_set_block_item(lf[28] /* GL_LINE_LOOP */,0,C_fix(2));
t27=C_set_block_item(lf[29] /* GL_LINE_STRIP */,0,C_fix(3));
t28=C_set_block_item(lf[30] /* GL_TRIANGLES */,0,C_fix(4));
t29=C_set_block_item(lf[31] /* GL_TRIANGLE_STRIP */,0,C_fix(5));
t30=C_set_block_item(lf[32] /* GL_TRIANGLE_FAN */,0,C_fix(6));
t31=C_set_block_item(lf[33] /* GL_NEVER */,0,C_fix(512));
t32=C_set_block_item(lf[34] /* GL_LESS */,0,C_fix(513));
t33=C_set_block_item(lf[35] /* GL_EQUAL */,0,C_fix(514));
t34=C_set_block_item(lf[36] /* GL_LEQUAL */,0,C_fix(515));
t35=C_set_block_item(lf[37] /* GL_GREATER */,0,C_fix(516));
t36=C_set_block_item(lf[38] /* GL_NOTEQUAL */,0,C_fix(517));
t37=C_set_block_item(lf[39] /* GL_GEQUAL */,0,C_fix(518));
t38=C_set_block_item(lf[40] /* GL_ALWAYS */,0,C_fix(519));
t39=C_set_block_item(lf[41] /* GL_ZERO */,0,C_fix(0));
t40=C_set_block_item(lf[42] /* GL_ONE */,0,C_fix(1));
t41=C_set_block_item(lf[43] /* GL_SRC_COLOR */,0,C_fix(768));
t42=C_set_block_item(lf[44] /* GL_ONE_MINUS_SRC_COLOR */,0,C_fix(769));
t43=C_set_block_item(lf[45] /* GL_SRC_ALPHA */,0,C_fix(770));
t44=C_set_block_item(lf[46] /* GL_ONE_MINUS_SRC_ALPHA */,0,C_fix(771));
t45=C_set_block_item(lf[47] /* GL_DST_ALPHA */,0,C_fix(772));
t46=C_set_block_item(lf[48] /* GL_ONE_MINUS_DST_ALPHA */,0,C_fix(773));
t47=C_set_block_item(lf[49] /* GL_DST_COLOR */,0,C_fix(774));
t48=C_set_block_item(lf[50] /* GL_ONE_MINUS_DST_COLOR */,0,C_fix(775));
t49=C_set_block_item(lf[51] /* GL_SRC_ALPHA_SATURATE */,0,C_fix(776));
t50=C_set_block_item(lf[52] /* GL_CLIP_PLANE0 */,0,C_fix(12288));
t51=C_set_block_item(lf[53] /* GL_CLIP_PLANE1 */,0,C_fix(12289));
t52=C_set_block_item(lf[54] /* GL_CLIP_PLANE2 */,0,C_fix(12290));
t53=C_set_block_item(lf[55] /* GL_CLIP_PLANE3 */,0,C_fix(12291));
t54=C_set_block_item(lf[56] /* GL_CLIP_PLANE4 */,0,C_fix(12292));
t55=C_set_block_item(lf[57] /* GL_CLIP_PLANE5 */,0,C_fix(12293));
t56=C_set_block_item(lf[58] /* GL_FRONT */,0,C_fix(1028));
t57=C_set_block_item(lf[59] /* GL_BACK */,0,C_fix(1029));
t58=C_set_block_item(lf[60] /* GL_FRONT_AND_BACK */,0,C_fix(1032));
t59=C_set_block_item(lf[61] /* GL_FOG */,0,C_fix(2912));
t60=C_set_block_item(lf[62] /* GL_LIGHTING */,0,C_fix(2896));
t61=C_set_block_item(lf[63] /* GL_TEXTURE_2D */,0,C_fix(3553));
t62=C_set_block_item(lf[64] /* GL_CULL_FACE */,0,C_fix(2884));
t63=C_set_block_item(lf[65] /* GL_ALPHA_TEST */,0,C_fix(3008));
t64=C_set_block_item(lf[66] /* GL_BLEND */,0,C_fix(3042));
t65=C_set_block_item(lf[67] /* GL_COLOR_LOGIC_OP */,0,C_fix(3058));
t66=C_set_block_item(lf[68] /* GL_DITHER */,0,C_fix(3024));
t67=C_set_block_item(lf[69] /* GL_STENCIL_TEST */,0,C_fix(2960));
t68=C_set_block_item(lf[70] /* GL_DEPTH_TEST */,0,C_fix(2929));
t69=C_set_block_item(lf[71] /* GL_POINT_SMOOTH */,0,C_fix(2832));
t70=C_set_block_item(lf[72] /* GL_LINE_SMOOTH */,0,C_fix(2848));
t71=C_set_block_item(lf[73] /* GL_COLOR_MATERIAL */,0,C_fix(2903));
t72=C_set_block_item(lf[74] /* GL_NORMALIZE */,0,C_fix(2977));
t73=C_set_block_item(lf[75] /* GL_RESCALE_NORMAL */,0,C_fix(32826));
t74=C_set_block_item(lf[76] /* GL_VERTEX_ARRAY */,0,C_fix(32884));
t75=C_set_block_item(lf[77] /* GL_NORMAL_ARRAY */,0,C_fix(32885));
t76=C_set_block_item(lf[78] /* GL_COLOR_ARRAY */,0,C_fix(32886));
t77=C_set_block_item(lf[79] /* GL_TEXTURE_COORD_ARRAY */,0,C_fix(32888));
t78=C_set_block_item(lf[80] /* GL_MULTISAMPLE */,0,C_fix(32925));
t79=C_set_block_item(lf[81] /* GL_SAMPLE_ALPHA_TO_COVERAGE */,0,C_fix(32926));
t80=C_set_block_item(lf[82] /* GL_SAMPLE_ALPHA_TO_ONE */,0,C_fix(32927));
t81=C_set_block_item(lf[83] /* GL_SAMPLE_COVERAGE */,0,C_fix(32928));
t82=C_set_block_item(lf[84] /* GL_NO_ERROR */,0,C_fix(0));
t83=C_set_block_item(lf[85] /* GL_INVALID_ENUM */,0,C_fix(1280));
t84=C_set_block_item(lf[86] /* GL_INVALID_VALUE */,0,C_fix(1281));
t85=C_set_block_item(lf[87] /* GL_INVALID_OPERATION */,0,C_fix(1282));
t86=C_set_block_item(lf[88] /* GL_STACK_OVERFLOW */,0,C_fix(1283));
t87=C_set_block_item(lf[89] /* GL_STACK_UNDERFLOW */,0,C_fix(1284));
t88=C_set_block_item(lf[90] /* GL_OUT_OF_MEMORY */,0,C_fix(1285));
t89=C_set_block_item(lf[91] /* GL_EXP */,0,C_fix(2048));
t90=C_set_block_item(lf[92] /* GL_EXP2 */,0,C_fix(2049));
t91=C_set_block_item(lf[93] /* GL_FOG_DENSITY */,0,C_fix(2914));
t92=C_set_block_item(lf[94] /* GL_FOG_START */,0,C_fix(2915));
t93=C_set_block_item(lf[95] /* GL_FOG_END */,0,C_fix(2916));
t94=C_set_block_item(lf[96] /* GL_FOG_MODE */,0,C_fix(2917));
t95=C_set_block_item(lf[97] /* GL_FOG_COLOR */,0,C_fix(2918));
t96=C_set_block_item(lf[98] /* GL_CW */,0,C_fix(2304));
t97=C_set_block_item(lf[99] /* GL_CCW */,0,C_fix(2305));
t98=C_set_block_item(lf[100] /* GL_CURRENT_COLOR */,0,C_fix(2816));
t99=C_set_block_item(lf[101] /* GL_CURRENT_NORMAL */,0,C_fix(2818));
t100=C_set_block_item(lf[102] /* GL_CURRENT_TEXTURE_COORDS */,0,C_fix(2819));
t101=C_set_block_item(lf[103] /* GL_POINT_SIZE */,0,C_fix(2833));
t102=C_set_block_item(lf[104] /* GL_POINT_SIZE_MIN */,0,C_fix(33062));
t103=C_set_block_item(lf[105] /* GL_POINT_SIZE_MAX */,0,C_fix(33063));
t104=C_set_block_item(lf[106] /* GL_POINT_FADE_THRESHOLD_SIZE */,0,C_fix(33064));
t105=C_set_block_item(lf[107] /* GL_POINT_DISTANCE_ATTENUATION */,0,C_fix(33065));
t106=C_set_block_item(lf[108] /* GL_SMOOTH_POINT_SIZE_RANGE */,0,C_fix(2834));
t107=C_set_block_item(lf[109] /* GL_LINE_WIDTH */,0,C_fix(2849));
t108=C_set_block_item(lf[110] /* GL_SMOOTH_LINE_WIDTH_RANGE */,0,C_fix(2850));
t109=C_set_block_item(lf[111] /* GL_ALIASED_POINT_SIZE_RANGE */,0,C_fix(33901));
t110=C_set_block_item(lf[112] /* GL_ALIASED_LINE_WIDTH_RANGE */,0,C_fix(33902));
t111=C_set_block_item(lf[113] /* GL_CULL_FACE_MODE */,0,C_fix(2885));
t112=C_set_block_item(lf[114] /* GL_FRONT_FACE */,0,C_fix(2886));
t113=C_set_block_item(lf[115] /* GL_SHADE_MODEL */,0,C_fix(2900));
t114=C_set_block_item(lf[116] /* GL_DEPTH_RANGE */,0,C_fix(2928));
t115=C_set_block_item(lf[117] /* GL_DEPTH_WRITEMASK */,0,C_fix(2930));
t116=C_set_block_item(lf[118] /* GL_DEPTH_CLEAR_VALUE */,0,C_fix(2931));
t117=C_set_block_item(lf[119] /* GL_DEPTH_FUNC */,0,C_fix(2932));
t118=C_set_block_item(lf[120] /* GL_STENCIL_CLEAR_VALUE */,0,C_fix(2961));
t119=C_set_block_item(lf[121] /* GL_STENCIL_FUNC */,0,C_fix(2962));
t120=C_set_block_item(lf[122] /* GL_STENCIL_VALUE_MASK */,0,C_fix(2963));
t121=C_set_block_item(lf[123] /* GL_STENCIL_FAIL */,0,C_fix(2964));
t122=C_set_block_item(lf[124] /* GL_STENCIL_PASS_DEPTH_FAIL */,0,C_fix(2965));
t123=C_set_block_item(lf[125] /* GL_STENCIL_PASS_DEPTH_PASS */,0,C_fix(2966));
t124=C_set_block_item(lf[126] /* GL_STENCIL_REF */,0,C_fix(2967));
t125=C_set_block_item(lf[127] /* GL_STENCIL_WRITEMASK */,0,C_fix(2968));
t126=C_set_block_item(lf[128] /* GL_MATRIX_MODE */,0,C_fix(2976));
t127=C_set_block_item(lf[129] /* GL_VIEWPORT */,0,C_fix(2978));
t128=C_set_block_item(lf[130] /* GL_MODELVIEW_STACK_DEPTH */,0,C_fix(2979));
t129=C_set_block_item(lf[131] /* GL_PROJECTION_STACK_DEPTH */,0,C_fix(2980));
t130=C_set_block_item(lf[132] /* GL_TEXTURE_STACK_DEPTH */,0,C_fix(2981));
t131=C_set_block_item(lf[133] /* GL_MODELVIEW_MATRIX */,0,C_fix(2982));
t132=C_set_block_item(lf[134] /* GL_PROJECTION_MATRIX */,0,C_fix(2983));
t133=C_set_block_item(lf[135] /* GL_TEXTURE_MATRIX */,0,C_fix(2984));
t134=C_set_block_item(lf[136] /* GL_ALPHA_TEST_FUNC */,0,C_fix(3009));
t135=C_set_block_item(lf[137] /* GL_ALPHA_TEST_REF */,0,C_fix(3010));
t136=C_set_block_item(lf[138] /* GL_BLEND_DST */,0,C_fix(3040));
t137=C_set_block_item(lf[139] /* GL_BLEND_SRC */,0,C_fix(3041));
t138=C_set_block_item(lf[140] /* GL_LOGIC_OP_MODE */,0,C_fix(3056));
t139=C_set_block_item(lf[141] /* GL_SCISSOR_BOX */,0,C_fix(3088));
t140=C_set_block_item(lf[142] /* GL_SCISSOR_TEST */,0,C_fix(3089));
t141=C_set_block_item(lf[143] /* GL_COLOR_CLEAR_VALUE */,0,C_fix(3106));
t142=C_set_block_item(lf[144] /* GL_COLOR_WRITEMASK */,0,C_fix(3107));
t143=C_set_block_item(lf[145] /* GL_MAX_LIGHTS */,0,C_fix(3377));
t144=C_set_block_item(lf[146] /* GL_MAX_CLIP_PLANES */,0,C_fix(3378));
t145=C_set_block_item(lf[147] /* GL_MAX_TEXTURE_SIZE */,0,C_fix(3379));
t146=C_set_block_item(lf[148] /* GL_MAX_MODELVIEW_STACK_DEPTH */,0,C_fix(3382));
t147=C_set_block_item(lf[149] /* GL_MAX_PROJECTION_STACK_DEPTH */,0,C_fix(3384));
t148=C_set_block_item(lf[150] /* GL_MAX_TEXTURE_STACK_DEPTH */,0,C_fix(3385));
t149=C_set_block_item(lf[151] /* GL_MAX_VIEWPORT_DIMS */,0,C_fix(3386));
t150=C_set_block_item(lf[152] /* GL_MAX_TEXTURE_UNITS */,0,C_fix(34018));
t151=C_set_block_item(lf[153] /* GL_SUBPIXEL_BITS */,0,C_fix(3408));
t152=C_set_block_item(lf[154] /* GL_RED_BITS */,0,C_fix(3410));
t153=C_set_block_item(lf[155] /* GL_GREEN_BITS */,0,C_fix(3411));
t154=C_set_block_item(lf[156] /* GL_BLUE_BITS */,0,C_fix(3412));
t155=C_set_block_item(lf[157] /* GL_ALPHA_BITS */,0,C_fix(3413));
t156=C_set_block_item(lf[158] /* GL_DEPTH_BITS */,0,C_fix(3414));
t157=C_set_block_item(lf[159] /* GL_STENCIL_BITS */,0,C_fix(3415));
t158=C_set_block_item(lf[160] /* GL_POLYGON_OFFSET_UNITS */,0,C_fix(10752));
t159=C_set_block_item(lf[161] /* GL_POLYGON_OFFSET_FILL */,0,C_fix(32823));
t160=C_set_block_item(lf[162] /* GL_POLYGON_OFFSET_FACTOR */,0,C_fix(32824));
t161=C_set_block_item(lf[163] /* GL_TEXTURE_BINDING_2D */,0,C_fix(32873));
t162=C_set_block_item(lf[164] /* GL_VERTEX_ARRAY_SIZE */,0,C_fix(32890));
t163=C_set_block_item(lf[165] /* GL_VERTEX_ARRAY_TYPE */,0,C_fix(32891));
t164=C_set_block_item(lf[166] /* GL_VERTEX_ARRAY_STRIDE */,0,C_fix(32892));
t165=C_set_block_item(lf[167] /* GL_NORMAL_ARRAY_TYPE */,0,C_fix(32894));
t166=C_set_block_item(lf[168] /* GL_NORMAL_ARRAY_STRIDE */,0,C_fix(32895));
t167=C_set_block_item(lf[169] /* GL_COLOR_ARRAY_SIZE */,0,C_fix(32897));
t168=C_set_block_item(lf[170] /* GL_COLOR_ARRAY_TYPE */,0,C_fix(32898));
t169=C_set_block_item(lf[171] /* GL_COLOR_ARRAY_STRIDE */,0,C_fix(32899));
t170=C_set_block_item(lf[172] /* GL_TEXTURE_COORD_ARRAY_SIZE */,0,C_fix(32904));
t171=C_set_block_item(lf[173] /* GL_TEXTURE_COORD_ARRAY_TYPE */,0,C_fix(32905));
t172=C_set_block_item(lf[174] /* GL_TEXTURE_COORD_ARRAY_STRIDE */,0,C_fix(32906));
t173=C_set_block_item(lf[175] /* GL_VERTEX_ARRAY_POINTER */,0,C_fix(32910));
t174=C_set_block_item(lf[176] /* GL_NORMAL_ARRAY_POINTER */,0,C_fix(32911));
t175=C_set_block_item(lf[177] /* GL_COLOR_ARRAY_POINTER */,0,C_fix(32912));
t176=C_set_block_item(lf[178] /* GL_TEXTURE_COORD_ARRAY_POINTER */,0,C_fix(32914));
t177=C_set_block_item(lf[179] /* GL_SAMPLE_BUFFERS */,0,C_fix(32936));
t178=C_set_block_item(lf[180] /* GL_SAMPLES */,0,C_fix(32937));
t179=C_set_block_item(lf[181] /* GL_SAMPLE_COVERAGE_VALUE */,0,C_fix(32938));
t180=C_set_block_item(lf[182] /* GL_SAMPLE_COVERAGE_INVERT */,0,C_fix(32939));
t181=C_set_block_item(lf[183] /* GL_IMPLEMENTATION_COLOR_READ_TYPE_OES */,0,C_fix(35738));
t182=C_set_block_item(lf[184] /* GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES */,0,C_fix(35739));
t183=C_set_block_item(lf[185] /* GL_NUM_COMPRESSED_TEXTURE_FORMATS */,0,C_fix(34466));
t184=C_set_block_item(lf[186] /* GL_COMPRESSED_TEXTURE_FORMATS */,0,C_fix(34467));
t185=C_set_block_item(lf[187] /* GL_DONT_CARE */,0,C_fix(4352));
t186=C_set_block_item(lf[188] /* GL_FASTEST */,0,C_fix(4353));
t187=C_set_block_item(lf[189] /* GL_NICEST */,0,C_fix(4354));
t188=C_set_block_item(lf[190] /* GL_PERSPECTIVE_CORRECTION_HINT */,0,C_fix(3152));
t189=C_set_block_item(lf[191] /* GL_POINT_SMOOTH_HINT */,0,C_fix(3153));
t190=C_set_block_item(lf[192] /* GL_LINE_SMOOTH_HINT */,0,C_fix(3154));
t191=C_set_block_item(lf[193] /* GL_FOG_HINT */,0,C_fix(3156));
t192=C_set_block_item(lf[194] /* GL_GENERATE_MIPMAP_HINT */,0,C_fix(33170));
t193=C_set_block_item(lf[195] /* GL_LIGHT_MODEL_AMBIENT */,0,C_fix(2899));
t194=C_set_block_item(lf[196] /* GL_LIGHT_MODEL_TWO_SIDE */,0,C_fix(2898));
t195=C_set_block_item(lf[197] /* GL_AMBIENT */,0,C_fix(4608));
t196=C_set_block_item(lf[198] /* GL_DIFFUSE */,0,C_fix(4609));
t197=C_set_block_item(lf[199] /* GL_SPECULAR */,0,C_fix(4610));
t198=C_set_block_item(lf[200] /* GL_POSITION */,0,C_fix(4611));
t199=C_set_block_item(lf[201] /* GL_SPOT_DIRECTION */,0,C_fix(4612));
t200=C_set_block_item(lf[202] /* GL_SPOT_EXPONENT */,0,C_fix(4613));
t201=C_set_block_item(lf[203] /* GL_SPOT_CUTOFF */,0,C_fix(4614));
t202=C_set_block_item(lf[204] /* GL_CONSTANT_ATTENUATION */,0,C_fix(4615));
t203=C_set_block_item(lf[205] /* GL_LINEAR_ATTENUATION */,0,C_fix(4616));
t204=C_set_block_item(lf[206] /* GL_QUADRATIC_ATTENUATION */,0,C_fix(4617));
t205=C_set_block_item(lf[207] /* GL_BYTE */,0,C_fix(5120));
t206=C_set_block_item(lf[208] /* GL_UNSIGNED_BYTE */,0,C_fix(5121));
t207=C_set_block_item(lf[209] /* GL_SHORT */,0,C_fix(5122));
t208=C_set_block_item(lf[210] /* GL_UNSIGNED_SHORT */,0,C_fix(5123));
t209=C_set_block_item(lf[211] /* GL_FLOAT */,0,C_fix(5126));
t210=C_set_block_item(lf[212] /* GL_FIXED */,0,C_fix(5132));
t211=C_set_block_item(lf[213] /* GL_CLEAR */,0,C_fix(5376));
t212=C_set_block_item(lf[214] /* GL_AND */,0,C_fix(5377));
t213=C_set_block_item(lf[215] /* GL_AND_REVERSE */,0,C_fix(5378));
t214=C_set_block_item(lf[216] /* GL_COPY */,0,C_fix(5379));
t215=C_set_block_item(lf[217] /* GL_AND_INVERTED */,0,C_fix(5380));
t216=C_set_block_item(lf[218] /* GL_NOOP */,0,C_fix(5381));
t217=C_set_block_item(lf[219] /* GL_XOR */,0,C_fix(5382));
t218=C_set_block_item(lf[220] /* GL_OR */,0,C_fix(5383));
t219=C_set_block_item(lf[221] /* GL_NOR */,0,C_fix(5384));
t220=C_set_block_item(lf[222] /* GL_EQUIV */,0,C_fix(5385));
t221=C_set_block_item(lf[223] /* GL_INVERT */,0,C_fix(5386));
t222=C_set_block_item(lf[224] /* GL_OR_REVERSE */,0,C_fix(5387));
t223=C_set_block_item(lf[225] /* GL_COPY_INVERTED */,0,C_fix(5388));
t224=C_set_block_item(lf[226] /* GL_OR_INVERTED */,0,C_fix(5389));
t225=C_set_block_item(lf[227] /* GL_NAND */,0,C_fix(5390));
t226=C_set_block_item(lf[228] /* GL_SET */,0,C_fix(5391));
t227=C_set_block_item(lf[229] /* GL_EMISSION */,0,C_fix(5632));
t228=C_set_block_item(lf[230] /* GL_SHININESS */,0,C_fix(5633));
t229=C_set_block_item(lf[231] /* GL_AMBIENT_AND_DIFFUSE */,0,C_fix(5634));
t230=C_set_block_item(lf[232] /* GL_MODELVIEW */,0,C_fix(5888));
t231=C_set_block_item(lf[233] /* GL_PROJECTION */,0,C_fix(5889));
t232=C_set_block_item(lf[234] /* GL_TEXTURE */,0,C_fix(5890));
t233=C_set_block_item(lf[235] /* GL_ALPHA */,0,C_fix(6406));
t234=C_set_block_item(lf[236] /* GL_RGB */,0,C_fix(6407));
t235=C_set_block_item(lf[237] /* GL_RGBA */,0,C_fix(6408));
t236=C_set_block_item(lf[238] /* GL_LUMINANCE */,0,C_fix(6409));
t237=C_set_block_item(lf[239] /* GL_LUMINANCE_ALPHA */,0,C_fix(6410));
t238=C_set_block_item(lf[240] /* GL_UNPACK_ALIGNMENT */,0,C_fix(3317));
t239=C_set_block_item(lf[241] /* GL_PACK_ALIGNMENT */,0,C_fix(3333));
t240=C_set_block_item(lf[242] /* GL_UNSIGNED_SHORT_4_4_4_4 */,0,C_fix(32819));
t241=C_set_block_item(lf[243] /* GL_UNSIGNED_SHORT_5_5_5_1 */,0,C_fix(32820));
t242=C_set_block_item(lf[244] /* GL_UNSIGNED_SHORT_5_6_5 */,0,C_fix(33635));
t243=C_set_block_item(lf[245] /* GL_FLAT */,0,C_fix(7424));
t244=C_set_block_item(lf[246] /* GL_SMOOTH */,0,C_fix(7425));
t245=C_set_block_item(lf[247] /* GL_KEEP */,0,C_fix(7680));
t246=C_set_block_item(lf[248] /* GL_REPLACE */,0,C_fix(7681));
t247=C_set_block_item(lf[249] /* GL_INCR */,0,C_fix(7682));
t248=C_set_block_item(lf[250] /* GL_DECR */,0,C_fix(7683));
t249=C_set_block_item(lf[251] /* GL_VENDOR */,0,C_fix(7936));
t250=C_set_block_item(lf[252] /* GL_RENDERER */,0,C_fix(7937));
t251=C_set_block_item(lf[253] /* GL_VERSION */,0,C_fix(7938));
t252=C_set_block_item(lf[254] /* GL_EXTENSIONS */,0,C_fix(7939));
t253=C_set_block_item(lf[255] /* GL_MODULATE */,0,C_fix(8448));
t254=C_set_block_item(lf[256] /* GL_DECAL */,0,C_fix(8449));
t255=C_set_block_item(lf[257] /* GL_ADD */,0,C_fix(260));
t256=C_set_block_item(lf[258] /* GL_TEXTURE_ENV_MODE */,0,C_fix(8704));
t257=C_set_block_item(lf[259] /* GL_TEXTURE_ENV_COLOR */,0,C_fix(8705));
t258=C_set_block_item(lf[260] /* GL_TEXTURE_ENV */,0,C_fix(8960));
t259=C_set_block_item(lf[261] /* GL_NEAREST */,0,C_fix(9728));
t260=C_set_block_item(lf[262] /* GL_LINEAR */,0,C_fix(9729));
t261=C_set_block_item(lf[263] /* GL_NEAREST_MIPMAP_NEAREST */,0,C_fix(9984));
t262=C_set_block_item(lf[264] /* GL_LINEAR_MIPMAP_NEAREST */,0,C_fix(9985));
t263=C_set_block_item(lf[265] /* GL_NEAREST_MIPMAP_LINEAR */,0,C_fix(9986));
t264=C_set_block_item(lf[266] /* GL_LINEAR_MIPMAP_LINEAR */,0,C_fix(9987));
t265=C_set_block_item(lf[267] /* GL_TEXTURE_MAG_FILTER */,0,C_fix(10240));
t266=C_set_block_item(lf[268] /* GL_TEXTURE_MIN_FILTER */,0,C_fix(10241));
t267=C_set_block_item(lf[269] /* GL_TEXTURE_WRAP_S */,0,C_fix(10242));
t268=C_set_block_item(lf[270] /* GL_TEXTURE_WRAP_T */,0,C_fix(10243));
t269=C_set_block_item(lf[271] /* GL_GENERATE_MIPMAP */,0,C_fix(33169));
t270=C_set_block_item(lf[272] /* GL_TEXTURE0 */,0,C_fix(33984));
t271=C_set_block_item(lf[273] /* GL_TEXTURE1 */,0,C_fix(33985));
t272=C_set_block_item(lf[274] /* GL_TEXTURE2 */,0,C_fix(33986));
t273=C_set_block_item(lf[275] /* GL_TEXTURE3 */,0,C_fix(33987));
t274=C_set_block_item(lf[276] /* GL_TEXTURE4 */,0,C_fix(33988));
t275=C_set_block_item(lf[277] /* GL_TEXTURE5 */,0,C_fix(33989));
t276=C_set_block_item(lf[278] /* GL_TEXTURE6 */,0,C_fix(33990));
t277=C_set_block_item(lf[279] /* GL_TEXTURE7 */,0,C_fix(33991));
t278=C_set_block_item(lf[280] /* GL_TEXTURE8 */,0,C_fix(33992));
t279=C_set_block_item(lf[281] /* GL_TEXTURE9 */,0,C_fix(33993));
t280=C_set_block_item(lf[282] /* GL_TEXTURE10 */,0,C_fix(33994));
t281=C_set_block_item(lf[283] /* GL_TEXTURE11 */,0,C_fix(33995));
t282=C_set_block_item(lf[284] /* GL_TEXTURE12 */,0,C_fix(33996));
t283=C_set_block_item(lf[285] /* GL_TEXTURE13 */,0,C_fix(33997));
t284=C_set_block_item(lf[286] /* GL_TEXTURE14 */,0,C_fix(33998));
t285=C_set_block_item(lf[287] /* GL_TEXTURE15 */,0,C_fix(33999));
t286=C_set_block_item(lf[288] /* GL_TEXTURE16 */,0,C_fix(34000));
t287=C_set_block_item(lf[289] /* GL_TEXTURE17 */,0,C_fix(34001));
t288=C_set_block_item(lf[290] /* GL_TEXTURE18 */,0,C_fix(34002));
t289=C_set_block_item(lf[291] /* GL_TEXTURE19 */,0,C_fix(34003));
t290=C_set_block_item(lf[292] /* GL_TEXTURE20 */,0,C_fix(34004));
t291=C_set_block_item(lf[293] /* GL_TEXTURE21 */,0,C_fix(34005));
t292=C_set_block_item(lf[294] /* GL_TEXTURE22 */,0,C_fix(34006));
t293=C_set_block_item(lf[295] /* GL_TEXTURE23 */,0,C_fix(34007));
t294=C_set_block_item(lf[296] /* GL_TEXTURE24 */,0,C_fix(34008));
t295=C_set_block_item(lf[297] /* GL_TEXTURE25 */,0,C_fix(34009));
t296=C_set_block_item(lf[298] /* GL_TEXTURE26 */,0,C_fix(34010));
t297=C_set_block_item(lf[299] /* GL_TEXTURE27 */,0,C_fix(34011));
t298=C_set_block_item(lf[300] /* GL_TEXTURE28 */,0,C_fix(34012));
t299=C_set_block_item(lf[301] /* GL_TEXTURE29 */,0,C_fix(34013));
t300=C_set_block_item(lf[302] /* GL_TEXTURE30 */,0,C_fix(34014));
t301=C_set_block_item(lf[303] /* GL_TEXTURE31 */,0,C_fix(34015));
t302=C_set_block_item(lf[304] /* GL_ACTIVE_TEXTURE */,0,C_fix(34016));
t303=C_set_block_item(lf[305] /* GL_CLIENT_ACTIVE_TEXTURE */,0,C_fix(34017));
t304=C_set_block_item(lf[306] /* GL_REPEAT */,0,C_fix(10497));
t305=C_set_block_item(lf[307] /* GL_CLAMP_TO_EDGE */,0,C_fix(33071));
t306=C_set_block_item(lf[308] /* GL_PALETTE4_RGB8_OES */,0,C_fix(35728));
t307=C_set_block_item(lf[309] /* GL_PALETTE4_RGBA8_OES */,0,C_fix(35729));
t308=C_set_block_item(lf[310] /* GL_PALETTE4_R5_G6_B5_OES */,0,C_fix(35730));
t309=C_set_block_item(lf[311] /* GL_PALETTE4_RGBA4_OES */,0,C_fix(35731));
t310=C_set_block_item(lf[312] /* GL_PALETTE4_RGB5_A1_OES */,0,C_fix(35732));
t311=C_set_block_item(lf[313] /* GL_PALETTE8_RGB8_OES */,0,C_fix(35733));
t312=C_set_block_item(lf[314] /* GL_PALETTE8_RGBA8_OES */,0,C_fix(35734));
t313=C_set_block_item(lf[315] /* GL_PALETTE8_R5_G6_B5_OES */,0,C_fix(35735));
t314=C_set_block_item(lf[316] /* GL_PALETTE8_RGBA4_OES */,0,C_fix(35736));
t315=C_set_block_item(lf[317] /* GL_PALETTE8_RGB5_A1_OES */,0,C_fix(35737));
t316=C_set_block_item(lf[318] /* GL_LIGHT0 */,0,C_fix(16384));
t317=C_set_block_item(lf[319] /* GL_LIGHT1 */,0,C_fix(16385));
t318=C_set_block_item(lf[320] /* GL_LIGHT2 */,0,C_fix(16386));
t319=C_set_block_item(lf[321] /* GL_LIGHT3 */,0,C_fix(16387));
t320=C_set_block_item(lf[322] /* GL_LIGHT4 */,0,C_fix(16388));
t321=C_set_block_item(lf[323] /* GL_LIGHT5 */,0,C_fix(16389));
t322=C_set_block_item(lf[324] /* GL_LIGHT6 */,0,C_fix(16390));
t323=C_set_block_item(lf[325] /* GL_LIGHT7 */,0,C_fix(16391));
t324=C_set_block_item(lf[326] /* GL_ARRAY_BUFFER */,0,C_fix(34962));
t325=C_set_block_item(lf[327] /* GL_ELEMENT_ARRAY_BUFFER */,0,C_fix(34963));
t326=C_set_block_item(lf[328] /* GL_ARRAY_BUFFER_BINDING */,0,C_fix(34964));
t327=C_set_block_item(lf[329] /* GL_ELEMENT_ARRAY_BUFFER_BINDING */,0,C_fix(34965));
t328=C_set_block_item(lf[330] /* GL_VERTEX_ARRAY_BUFFER_BINDING */,0,C_fix(34966));
t329=C_set_block_item(lf[331] /* GL_NORMAL_ARRAY_BUFFER_BINDING */,0,C_fix(34967));
t330=C_set_block_item(lf[332] /* GL_COLOR_ARRAY_BUFFER_BINDING */,0,C_fix(34968));
t331=C_set_block_item(lf[333] /* GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING */,0,C_fix(34970));
t332=C_set_block_item(lf[334] /* GL_STATIC_DRAW */,0,C_fix(35044));
t333=C_set_block_item(lf[335] /* GL_DYNAMIC_DRAW */,0,C_fix(35048));
t334=C_set_block_item(lf[336] /* GL_BUFFER_SIZE */,0,C_fix(34660));
t335=C_set_block_item(lf[337] /* GL_BUFFER_USAGE */,0,C_fix(34661));
t336=C_set_block_item(lf[338] /* GL_SUBTRACT */,0,C_fix(34023));
t337=C_set_block_item(lf[339] /* GL_COMBINE */,0,C_fix(34160));
t338=C_set_block_item(lf[340] /* GL_COMBINE_RGB */,0,C_fix(34161));
t339=C_set_block_item(lf[341] /* GL_COMBINE_ALPHA */,0,C_fix(34162));
t340=C_set_block_item(lf[342] /* GL_RGB_SCALE */,0,C_fix(34163));
t341=C_set_block_item(lf[343] /* GL_ADD_SIGNED */,0,C_fix(34164));
t342=C_set_block_item(lf[344] /* GL_INTERPOLATE */,0,C_fix(34165));
t343=C_set_block_item(lf[345] /* GL_CONSTANT */,0,C_fix(34166));
t344=C_set_block_item(lf[346] /* GL_PRIMARY_COLOR */,0,C_fix(34167));
t345=C_set_block_item(lf[347] /* GL_PREVIOUS */,0,C_fix(34168));
t346=C_set_block_item(lf[348] /* GL_OPERAND0_RGB */,0,C_fix(34192));
t347=C_set_block_item(lf[349] /* GL_OPERAND1_RGB */,0,C_fix(34193));
t348=C_set_block_item(lf[350] /* GL_OPERAND2_RGB */,0,C_fix(34194));
t349=C_set_block_item(lf[351] /* GL_OPERAND0_ALPHA */,0,C_fix(34200));
t350=C_set_block_item(lf[352] /* GL_OPERAND1_ALPHA */,0,C_fix(34201));
t351=C_set_block_item(lf[353] /* GL_OPERAND2_ALPHA */,0,C_fix(34202));
t352=C_set_block_item(lf[354] /* GL_ALPHA_SCALE */,0,C_fix(3356));
t353=C_set_block_item(lf[355] /* GL_SRC0_RGB */,0,C_fix(34176));
t354=C_set_block_item(lf[356] /* GL_SRC1_RGB */,0,C_fix(34177));
t355=C_set_block_item(lf[357] /* GL_SRC2_RGB */,0,C_fix(34178));
t356=C_set_block_item(lf[358] /* GL_SRC0_ALPHA */,0,C_fix(34184));
t357=C_set_block_item(lf[359] /* GL_SRC1_ALPHA */,0,C_fix(34185));
t358=C_set_block_item(lf[360] /* GL_SRC2_ALPHA */,0,C_fix(34186));
t359=C_set_block_item(lf[361] /* GL_DOT3_RGB */,0,C_fix(34478));
t360=C_set_block_item(lf[362] /* GL_DOT3_RGBA */,0,C_fix(34479));
t361=C_set_block_item(lf[363] /* GL_TEXTURE_CROP_RECT_OES */,0,C_fix(35741));
t362=C_set_block_item(lf[364] /* GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES */,0,C_fix(35213));
t363=C_set_block_item(lf[365] /* GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES */,0,C_fix(35214));
t364=C_set_block_item(lf[366] /* GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES */,0,C_fix(35215));
t365=C_set_block_item(lf[367] /* GL_MAX_VERTEX_UNITS_OES */,0,C_fix(34468));
t366=C_set_block_item(lf[368] /* GL_MAX_PALETTE_MATRICES_OES */,0,C_fix(34882));
t367=C_set_block_item(lf[369] /* GL_MATRIX_PALETTE_OES */,0,C_fix(34880));
t368=C_set_block_item(lf[370] /* GL_MATRIX_INDEX_ARRAY_OES */,0,C_fix(34884));
t369=C_set_block_item(lf[371] /* GL_WEIGHT_ARRAY_OES */,0,C_fix(34477));
t370=C_set_block_item(lf[372] /* GL_CURRENT_PALETTE_MATRIX_OES */,0,C_fix(34883));
t371=C_set_block_item(lf[373] /* GL_MATRIX_INDEX_ARRAY_SIZE_OES */,0,C_fix(34886));
t372=C_set_block_item(lf[374] /* GL_MATRIX_INDEX_ARRAY_TYPE_OES */,0,C_fix(34887));
t373=C_set_block_item(lf[375] /* GL_MATRIX_INDEX_ARRAY_STRIDE_OES */,0,C_fix(34888));
t374=C_set_block_item(lf[376] /* GL_MATRIX_INDEX_ARRAY_POINTER_OES */,0,C_fix(34889));
t375=C_set_block_item(lf[377] /* GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES */,0,C_fix(35742));
t376=C_set_block_item(lf[378] /* GL_WEIGHT_ARRAY_SIZE_OES */,0,C_fix(34475));
t377=C_set_block_item(lf[379] /* GL_WEIGHT_ARRAY_TYPE_OES */,0,C_fix(34473));
t378=C_set_block_item(lf[380] /* GL_WEIGHT_ARRAY_STRIDE_OES */,0,C_fix(34474));
t379=C_set_block_item(lf[381] /* GL_WEIGHT_ARRAY_POINTER_OES */,0,C_fix(34476));
t380=C_set_block_item(lf[382] /* GL_WEIGHT_ARRAY_BUFFER_BINDING_OES */,0,C_fix(34974));
t381=C_set_block_item(lf[383] /* GL_POINT_SIZE_ARRAY_OES */,0,C_fix(35740));
t382=C_set_block_item(lf[384] /* GL_POINT_SIZE_ARRAY_TYPE_OES */,0,C_fix(35210));
t383=C_set_block_item(lf[385] /* GL_POINT_SIZE_ARRAY_STRIDE_OES */,0,C_fix(35211));
t384=C_set_block_item(lf[386] /* GL_POINT_SIZE_ARRAY_POINTER_OES */,0,C_fix(35212));
t385=C_set_block_item(lf[387] /* GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES */,0,C_fix(35743));
t386=C_set_block_item(lf[388] /* GL_POINT_SPRITE_OES */,0,C_fix(34913));
t387=C_set_block_item(lf[389] /* GL_COORD_REPLACE_OES */,0,C_fix(34914));
t388=C_mutate((C_word*)lf[3]+1 /* (set! glGetError ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2352,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t389=C_mutate((C_word*)lf[390]+1 /* (set! glClearColor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2356,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t390=C_mutate((C_word*)lf[391]+1 /* (set! glClear ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2372,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t391=C_mutate((C_word*)lf[392]+1 /* (set! glEnable ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2379,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t392=C_mutate((C_word*)lf[393]+1 /* (set! glBlendFunc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2386,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t393=C_mutate((C_word*)lf[394]+1 /* (set! glTranslatef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2396,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t394=C_mutate((C_word*)lf[395]+1 /* (set! glRotatef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t395=C_mutate((C_word*)lf[396]+1 /* (set! glScalef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2425,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t396=C_mutate((C_word*)lf[397]+1 /* (set! glGenTextures ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2438,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t397=C_mutate((C_word*)lf[398]+1 /* (set! glBindTexture ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2452,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t398=C_mutate((C_word*)lf[399]+1 /* (set! glTexImage2D ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2462,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t399=C_mutate((C_word*)lf[400]+1 /* (set! glTexParameteri ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2497,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t400=C_mutate((C_word*)lf[401]+1 /* (set! glTexEnvi ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2510,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t401=C_mutate((C_word*)lf[402]+1 /* (set! glVertexPointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2523,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t402=C_mutate((C_word*)lf[404]+1 /* (set! glColorPointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2543,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t403=C_mutate((C_word*)lf[406]+1 /* (set! glNormalPointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t404=C_mutate((C_word*)lf[407]+1 /* (set! glTexCoordPointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2580,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t405=C_mutate((C_word*)lf[408]+1 /* (set! glEnableClientState ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2600,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t406=C_mutate((C_word*)lf[409]+1 /* (set! glDisableClientState ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2607,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t407=C_mutate((C_word*)lf[410]+1 /* (set! glDrawArrays ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2614,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t408=C_mutate((C_word*)lf[411]+1 /* (set! glDrawElements ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2627,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t409=C_mutate((C_word*)lf[412]+1 /* (set! glOrthof ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2647,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t410=C_mutate((C_word*)lf[413]+1 /* (set! glMatrixMode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2669,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t411=C_mutate((C_word*)lf[414]+1 /* (set! glMultMatrixf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2676,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t412=C_mutate((C_word*)lf[415]+1 /* (set! glLoadMatrixf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2687,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t413=C_mutate((C_word*)lf[416]+1 /* (set! glColor4f ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2698,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t414=C_mutate((C_word*)lf[417]+1 /* (set! glLoadIdentity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2714,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t415=C_mutate((C_word*)lf[418]+1 /* (set! glFrustumf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2718,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t416=C_mutate((C_word*)lf[419]+1 /* (set! glCullFace ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2740,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t417=C_mutate((C_word*)lf[420]+1 /* (set! glDisable ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t418=C_mutate((C_word*)lf[421]+1 /* (set! glDepthMask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2754,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t419=C_mutate((C_word*)lf[422]+1 /* (set! glFogf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2761,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t420=C_mutate((C_word*)lf[423]+1 /* (set! glFogfv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2771,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t421=C_mutate((C_word*)lf[424]+1 /* (set! glFogx ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2785,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t422=C_mutate((C_word*)lf[425]+1 /* (set! glFogxv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2795,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t423=C_mutate((C_word*)lf[426]+1 /* (set! glLightf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2809,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t424=C_mutate((C_word*)lf[427]+1 /* (set! glLightfv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2822,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t425=C_mutate((C_word*)lf[428]+1 /* (set! glMaterialf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2839,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t426=C_mutate((C_word*)lf[429]+1 /* (set! glMaterialfv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2852,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t427=C_mutate((C_word*)lf[430]+1 /* (set! glShadeModel ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2869,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t428=C_mutate((C_word*)lf[431]+1 /* (set! glLightModelf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2876,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t429=C_mutate((C_word*)lf[432]+1 /* (set! glLightModelfv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2886,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t430=C_mutate((C_word*)lf[433]+1 /* (set! glClearDepth ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2900,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t431=C_mutate((C_word*)lf[434]+1 /* (set! glHint ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2907,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t432=C_mutate((C_word*)lf[435]+1 /* (set! glLineWidth ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2917,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t433=C_mutate((C_word*)lf[436]+1 /* (set! glPopMatrix ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2924,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t434=C_mutate((C_word*)lf[437]+1 /* (set! glPushMatrix ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2928,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t435=C_mutate((C_word*)lf[438]+1 /* (set! glViewport ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2932,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t436=C_mutate((C_word*)lf[439]+1 /* (set! clear-color ...) */,lf[440]);
t437=C_mutate((C_word*)lf[441]+1 /* (set! field-of-view ...) */,lf[442]);
t438=C_mutate((C_word*)lf[443]+1 /* (set! zNear ...) */,lf[444]);
t439=C_set_block_item(lf[445] /* zFar */,0,C_fix(100));
t440=C_mutate((C_word*)lf[446]+1 /* (set! PI ...) */,lf[447]);
t441=C_mutate((C_word*)lf[448]+1 /* (set! render_scene ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2953,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t442=C_mutate((C_word*)lf[450]+1 /* (set! scene_setup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2959,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t443=C_mutate((C_word*)lf[452]+1 /* (set! set_orientation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2966,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t444=C_mutate((C_word*)lf[454]+1 /* (set! start_server ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2973,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t445=C_mutate((C_word*)lf[456]+1 /* (set! update_world ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2980,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t446=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("remote-repl.scm:4: tcp-read-timeout");
((C_proc3)C_fast_retrieve_symbol_proc(lf[557]))(3,*((C_word*)lf[557]+1),t446,C_SCHEME_FALSE);}

/* point-x-set! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3185,4,t0,t1,t2,t3);}
t4=C_i_check_structure(t2,lf[486]);
C_trace("beamrider.scm:11: ##sys#block-set!");
t5=*((C_word*)lf[489]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* glTexCoordPointer in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2580,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_foreign_fixnum_argumentp(t2);
t7=C_i_foreign_fixnum_argumentp(t3);
t8=C_i_foreign_fixnum_argumentp(t4);
t9=(C_truep(t5)?C_i_foreign_pointer_argumentp(t5):C_SCHEME_FALSE);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub693(C_SCHEME_UNDEFINED,t6,t7,t8,t9));}

/* k3470 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:53: line->list");
t2=C_fast_retrieve(lf[516]);
f_3379(3,t2,((C_word*)t0)[2],t1);}

/* k3476 in k3473 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3483,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:58: *");
((C_proc4)C_fast_retrieve_symbol_proc(lf[510]))(4,*((C_word*)lf[510]+1),t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3591 in k3568 in k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:100: car");
((C_proc3)C_fast_retrieve_symbol_proc(lf[518]))(3,*((C_word*)lf[518]+1),((C_word*)t0)[2],t1);}

/* k3473 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3477,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3489,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:55: *");
((C_proc4)C_fast_retrieve_symbol_proc(lf[510]))(4,*((C_word*)lf[510]+1),t3,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* glDisableClientState in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2607,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub710(C_SCHEME_UNDEFINED,t3));}

/* render-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3601,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3635,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:104: bitwise-ior");
((C_proc4)C_fast_retrieve_symbol_proc(lf[550]))(4,*((C_word*)lf[550]+1),t3,*((C_word*)lf[23]+1),*((C_word*)lf[21]+1));}

/* k3594 in k3568 in k3566 in k3564 in set-device-orientation! in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:100: assoc");
((C_proc4)C_fast_retrieve_symbol_proc(lf[535]))(4,*((C_word*)lf[535]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3115 in k3102 */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
C_trace("remote-repl.scm:44: my-exception-handler");
t3=C_fast_retrieve(lf[463]);
f_3003(4,t3,((C_word*)t0)[3],t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
C_trace("remote-repl.scm:34: ##sys#signal");
((C_proc3)C_fast_retrieve_symbol_proc(lf[469]))(3,*((C_word*)lf[469]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k3479 in k3476 in k3473 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:54: make-line");
t2=C_fast_retrieve(lf[515]);
f_3367(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[5],t1,C_fix(0));}

/* k3488 in k3473 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3489,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:55: -");
((C_proc3)C_fast_retrieve_symbol_proc(lf[509]))(3,*((C_word*)lf[509]+1),t2,((C_word*)t0)[3]);}

/* k3482 in k3476 in k3473 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3486,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:58: -");
((C_proc3)C_fast_retrieve_symbol_proc(lf[509]))(3,*((C_word*)lf[509]+1),t2,((C_word*)t0)[3]);}

/* k3485 in k3482 in k3476 in k3473 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:58: +");
((C_proc4)C_fast_retrieve_symbol_proc(lf[522]))(4,*((C_word*)lf[522]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* glVertexPointer in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2523,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_foreign_fixnum_argumentp(t2);
t7=C_i_foreign_fixnum_argumentp(t3);
t8=C_i_foreign_fixnum_argumentp(t4);
t9=(C_truep(t5)?C_i_foreign_struct_wrapper_argumentp(lf[403],t5):C_SCHEME_FALSE);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub653(C_SCHEME_UNDEFINED,t6,t7,t8,t9));}

/* k3130 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("remote-repl.scm:34: memv");
((C_proc4)C_fast_retrieve_symbol_proc(lf[470]))(4,*((C_word*)lf[470]+1),((C_word*)t0)[2],lf[472],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_3104(2,t2,C_SCHEME_FALSE);}}

/* k3461 in k3458 in k3452 in k3449 in k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:64: +");
((C_proc4)C_fast_retrieve_symbol_proc(lf[522]))(4,*((C_word*)lf[522]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3467 in k3464 in k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:61: +");
((C_proc4)C_fast_retrieve_symbol_proc(lf[522]))(4,*((C_word*)lf[522]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3464 in k3440 in k3434 in k3424 in loop in k3413 in k3411 in make-grid-geometry in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3468,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("beamrider.scm:61: -");
((C_proc3)C_fast_retrieve_symbol_proc(lf[509]))(3,*((C_word*)lf[509]+1),t2,((C_word*)t0)[3]);}

/* k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3522,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:82: glHint");
t3=*((C_word*)lf[434]+1);
f_2907(4,t3,t2,*((C_word*)lf[192]+1),*((C_word*)lf[189]+1));}

/* k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:83: glLineWidth");
t3=*((C_word*)lf[435]+1);
f_2917(3,t3,t2,lf[524]);}

/* k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in k1942 in ... */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:84: glEnable");
t3=*((C_word*)lf[392]+1);
f_2379(3,t3,t2,*((C_word*)lf[72]+1));}

/* k3525 in k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in k1944 in ... */
static void C_ccall f_3526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3528,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("beamrider.scm:85: glEnableClientState");
t3=*((C_word*)lf[408]+1);
f_2600(3,t3,t2,*((C_word*)lf[76]+1));}

/* k3527 in k3525 in k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in setup-scene in k3170 in k2986 in k1950 in k1948 in k1946 in ... */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("beamrider.scm:86: glDisableClientState");
t2=*((C_word*)lf[409]+1);
f_2607(3,t2,((C_word*)t0)[2],*((C_word*)lf[78]+1));}

/* f_3148 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3151,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:37: my-repl");
t3=C_fast_retrieve(lf[458]);
f_2989(2,t3,t2);}

/* f_3143 */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3148,a[2]=((C_word*)t0)[2],a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3158,a[2]=((C_word*)t0)[3],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:34: ##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* glTexEnvi in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2510,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub642(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k3102 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3104,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:41: tcp-close");
((C_proc3)C_fast_retrieve_symbol_proc(lf[468]))(3,*((C_word*)lf[468]+1),t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3117,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[7])){
C_trace("remote-repl.scm:34: memv");
((C_proc4)C_fast_retrieve_symbol_proc(lf[470]))(4,*((C_word*)lf[470]+1),t2,lf[471],((C_word*)t0)[7]);}
else{
t3=t2;
f_3117(2,t3,C_SCHEME_FALSE);}}}

/* k3107 in k3105 in k3102 */
static void C_ccall f_3108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("remote-repl.scm:43: accept");
t2=((C_word*)((C_word*)t0)[2])[1];
f_3035(t2,((C_word*)t0)[3]);}

/* k3105 in k3102 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("remote-repl.scm:42: print");
((C_proc3)C_fast_retrieve_symbol_proc(lf[459]))(3,*((C_word*)lf[459]+1),t2,lf[467]);}

/* glLightModelf in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2876,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_flonum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub915(C_SCHEME_UNDEFINED,t4,t5));}

/* glShadeModel in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2869(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2869,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub908(C_SCHEME_UNDEFINED,t3));}

/* glLightModelfv in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2886,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub923(C_SCHEME_UNDEFINED,t4,t5));}

/* glLoadIdentity in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2714,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub789(C_SCHEME_UNDEFINED));}

/* glFrustumf in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2718(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_2718,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=C_i_foreign_flonum_argumentp(t2);
t9=C_i_foreign_flonum_argumentp(t3);
t10=C_i_foreign_flonum_argumentp(t4);
t11=C_i_foreign_flonum_argumentp(t5);
t12=C_i_foreign_flonum_argumentp(t6);
t13=C_i_foreign_flonum_argumentp(t7);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,stub799(C_SCHEME_UNDEFINED,t8,t9,t10,t11,t12,t13));}

/* glBindTexture in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2452,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub599(C_SCHEME_UNDEFINED,t4,t5));}

/* glFogx in k1950 in k1948 in k1946 in k1944 in k1942 */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2785,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub847(C_SCHEME_UNDEFINED,t4,t5));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[234] = {
{"f_2740:beamrider_2escm",(void*)f_2740},
{"f_2747:beamrider_2escm",(void*)f_2747},
{"f_3641:beamrider_2escm",(void*)f_3641},
{"f_3647:beamrider_2escm",(void*)f_3647},
{"f_3650:beamrider_2escm",(void*)f_3650},
{"f_3656:beamrider_2escm",(void*)f_3656},
{"f_3654:beamrider_2escm",(void*)f_3654},
{"f_3658:beamrider_2escm",(void*)f_3658},
{"f_3620:beamrider_2escm",(void*)f_3620},
{"f_3626:beamrider_2escm",(void*)f_3626},
{"f_3629:beamrider_2escm",(void*)f_3629},
{"f_3632:beamrider_2escm",(void*)f_3632},
{"f_2995:beamrider_2escm",(void*)f_2995},
{"f_3635:beamrider_2escm",(void*)f_3635},
{"f_2993:beamrider_2escm",(void*)f_2993},
{"f_3637:beamrider_2escm",(void*)f_3637},
{"f_3095:beamrider_2escm",(void*)f_3095},
{"f_3090:beamrider_2escm",(void*)f_3090},
{"f_2396:beamrider_2escm",(void*)f_2396},
{"f_3071:beamrider_2escm",(void*)f_3071},
{"f_3076:beamrider_2escm",(void*)f_3076},
{"f_2386:beamrider_2escm",(void*)f_2386},
{"f_2953:beamrider_2escm",(void*)f_2953},
{"f_2959:beamrider_2escm",(void*)f_2959},
{"f_3080:beamrider_2escm",(void*)f_3080},
{"f_3085:beamrider_2escm",(void*)f_3085},
{"f_2980:beamrider_2escm",(void*)f_2980},
{"f_3609:beamrider_2escm",(void*)f_3609},
{"f_3607:beamrider_2escm",(void*)f_3607},
{"f_3605:beamrider_2escm",(void*)f_3605},
{"f_3603:beamrider_2escm",(void*)f_3603},
{"f_3601:beamrider_2escm",(void*)f_3601},
{"f_2987:beamrider_2escm",(void*)f_2987},
{"f_2989:beamrider_2escm",(void*)f_2989},
{"f_2973:beamrider_2escm",(void*)f_2973},
{"f_3617:beamrider_2escm",(void*)f_3617},
{"f_3615:beamrider_2escm",(void*)f_3615},
{"f_3613:beamrider_2escm",(void*)f_3613},
{"f_3611:beamrider_2escm",(void*)f_3611},
{"f_2352:beamrider_2escm",(void*)f_2352},
{"f_2356:beamrider_2escm",(void*)f_2356},
{"f_2372:beamrider_2escm",(void*)f_2372},
{"f_2379:beamrider_2escm",(void*)f_2379},
{"f_3018:beamrider_2escm",(void*)f_3018},
{"f_3014:beamrider_2escm",(void*)f_3014},
{"f_3022:beamrider_2escm",(void*)f_3022},
{"f_3020:beamrider_2escm",(void*)f_3020},
{"f_3027:beamrider_2escm",(void*)f_3027},
{"f_3296:beamrider_2escm",(void*)f_3296},
{"f_3003:beamrider_2escm",(void*)f_3003},
{"f_3007:beamrider_2escm",(void*)f_3007},
{"f_3009:beamrider_2escm",(void*)f_3009},
{"f_3001:beamrider_2escm",(void*)f_3001},
{"f_3050:beamrider_2escm",(void*)f_3050},
{"f_3055:beamrider_2escm",(void*)f_3055},
{"f_2839:beamrider_2escm",(void*)f_2839},
{"f_2698:beamrider_2escm",(void*)f_2698},
{"f_3061:beamrider_2escm",(void*)f_3061},
{"f_3066:beamrider_2escm",(void*)f_3066},
{"f_3069:beamrider_2escm",(void*)f_3069},
{"f_3661:beamrider_2escm",(void*)f_3661},
{"f_2543:beamrider_2escm",(void*)f_2543},
{"f_3030:beamrider_2escm",(void*)f_3030},
{"f_2822:beamrider_2escm",(void*)f_2822},
{"f_3039:beamrider_2escm",(void*)f_3039},
{"f_3035:beamrider_2escm",(void*)f_3035},
{"f_3287:beamrider_2escm",(void*)f_3287},
{"f_2852:beamrider_2escm",(void*)f_2852},
{"f_3045:beamrider_2escm",(void*)f_3045},
{"f_3251:beamrider_2escm",(void*)f_3251},
{"f_2669:beamrider_2escm",(void*)f_2669},
{"f_3260:beamrider_2escm",(void*)f_3260},
{"f_3269:beamrider_2escm",(void*)f_3269},
{"f_3305:beamrider_2escm",(void*)f_3305},
{"f_3314:beamrider_2escm",(void*)f_3314},
{"f_2687:beamrider_2escm",(void*)f_2687},
{"f_1965:beamrider_2escm",(void*)f_1965},
{"f_3245:beamrider_2escm",(void*)f_3245},
{"f_3212:beamrider_2escm",(void*)f_3212},
{"f_2809:beamrider_2escm",(void*)f_2809},
{"f_3221:beamrider_2escm",(void*)f_3221},
{"f_3325:beamrider_2escm",(void*)f_3325},
{"f_3329:beamrider_2escm",(void*)f_3329},
{"f_3278:beamrider_2escm",(void*)f_3278},
{"f_3333:beamrider_2escm",(void*)f_3333},
{"f_3331:beamrider_2escm",(void*)f_3331},
{"f_3335:beamrider_2escm",(void*)f_3335},
{"f_3203:beamrider_2escm",(void*)f_3203},
{"f_3362:beamrider_2escm",(void*)f_3362},
{"f_3341:beamrider_2escm",(void*)f_3341},
{"f_3367:beamrider_2escm",(void*)f_3367},
{"f_3344:beamrider_2escm",(void*)f_3344},
{"f_3365:beamrider_2escm",(void*)f_3365},
{"f_3347:beamrider_2escm",(void*)f_3347},
{"f_3350:beamrider_2escm",(void*)f_3350},
{"f_3379:beamrider_2escm",(void*)f_3379},
{"f_3352:beamrider_2escm",(void*)f_3352},
{"f_3377:beamrider_2escm",(void*)f_3377},
{"f_3374:beamrider_2escm",(void*)f_3374},
{"f_3359:beamrider_2escm",(void*)f_3359},
{"f_3383:beamrider_2escm",(void*)f_3383},
{"f_3385:beamrider_2escm",(void*)f_3385},
{"f_3230:beamrider_2escm",(void*)f_3230},
{"f_3239:beamrider_2escm",(void*)f_3239},
{"f_3391:beamrider_2escm",(void*)f_3391},
{"f_3397:beamrider_2escm",(void*)f_3397},
{"f_3394:beamrider_2escm",(void*)f_3394},
{"f_2462:beamrider_2escm",(void*)f_2462},
{"f_2497:beamrider_2escm",(void*)f_2497},
{"f_3419:beamrider_2escm",(void*)f_3419},
{"f_3412:beamrider_2escm",(void*)f_3412},
{"f_3414:beamrider_2escm",(void*)f_3414},
{"f_2438:beamrider_2escm",(void*)f_2438},
{"f_2425:beamrider_2escm",(void*)f_2425},
{"toplevel:beamrider_2escm",(void*)C_toplevel},
{"f_3406:beamrider_2escm",(void*)f_3406},
{"f_3408:beamrider_2escm",(void*)f_3408},
{"f_3403:beamrider_2escm",(void*)f_3403},
{"f_3400:beamrider_2escm",(void*)f_3400},
{"f_2795:beamrider_2escm",(void*)f_2795},
{"f_2917:beamrider_2escm",(void*)f_2917},
{"f_2409:beamrider_2escm",(void*)f_2409},
{"f_2932:beamrider_2escm",(void*)f_2932},
{"f_2754:beamrider_2escm",(void*)f_2754},
{"f_2966:beamrider_2escm",(void*)f_2966},
{"f_2771:beamrider_2escm",(void*)f_2771},
{"f_2907:beamrider_2escm",(void*)f_2907},
{"f_2900:beamrider_2escm",(void*)f_2900},
{"f_2761:beamrider_2escm",(void*)f_2761},
{"f_2924:beamrider_2escm",(void*)f_2924},
{"f_2928:beamrider_2escm",(void*)f_2928},
{"f_3508:beamrider_2escm",(void*)f_3508},
{"f_3506:beamrider_2escm",(void*)f_3506},
{"f_3504:beamrider_2escm",(void*)f_3504},
{"f_3502:beamrider_2escm",(void*)f_3502},
{"f_3500:beamrider_2escm",(void*)f_3500},
{"f_3518:beamrider_2escm",(void*)f_3518},
{"f_3516:beamrider_2escm",(void*)f_3516},
{"f_3514:beamrider_2escm",(void*)f_3514},
{"f_3512:beamrider_2escm",(void*)f_3512},
{"f_3510:beamrider_2escm",(void*)f_3510},
{"f_3194:beamrider_2escm",(void*)f_3194},
{"f_2676:beamrider_2escm",(void*)f_2676},
{"f_2614:beamrider_2escm",(void*)f_2614},
{"f_3450:beamrider_2escm",(void*)f_3450},
{"f_3453:beamrider_2escm",(void*)f_3453},
{"f_3456:beamrider_2escm",(void*)f_3456},
{"f_3459:beamrider_2escm",(void*)f_3459},
{"f_2627:beamrider_2escm",(void*)f_2627},
{"f_3435:beamrider_2escm",(void*)f_3435},
{"f_3438:beamrider_2escm",(void*)f_3438},
{"f_2647:beamrider_2escm",(void*)f_2647},
{"f_3534:beamrider_2escm",(void*)f_3534},
{"f_3536:beamrider_2escm",(void*)f_3536},
{"f_3151:beamrider_2escm",(void*)f_3151},
{"f_3153:beamrider_2escm",(void*)f_3153},
{"f_3158:beamrider_2escm",(void*)f_3158},
{"f_3441:beamrider_2escm",(void*)f_3441},
{"f_3444:beamrider_2escm",(void*)f_3444},
{"f_3447:beamrider_2escm",(void*)f_3447},
{"f_3542:beamrider_2escm",(void*)f_3542},
{"f_3540:beamrider_2escm",(void*)f_3540},
{"f_3545:beamrider_2escm",(void*)f_3545},
{"f_3163:beamrider_2escm",(void*)f_3163},
{"f_3168:beamrider_2escm",(void*)f_3168},
{"f_2563:beamrider_2escm",(void*)f_2563},
{"f_3492:beamrider_2escm",(void*)f_3492},
{"f_3498:beamrider_2escm",(void*)f_3498},
{"f_3494:beamrider_2escm",(void*)f_3494},
{"f_3571:beamrider_2escm",(void*)f_3571},
{"f_3553:beamrider_2escm",(void*)f_3553},
{"f_1949:beamrider_2escm",(void*)f_1949},
{"f_3577:beamrider_2escm",(void*)f_3577},
{"f_3550:beamrider_2escm",(void*)f_3550},
{"f_1945:beamrider_2escm",(void*)f_1945},
{"f_3556:beamrider_2escm",(void*)f_3556},
{"f_1947:beamrider_2escm",(void*)f_1947},
{"f_3559:beamrider_2escm",(void*)f_3559},
{"f_1943:beamrider_2escm",(void*)f_1943},
{"f_3173:beamrider_2escm",(void*)f_3173},
{"f_3171:beamrider_2escm",(void*)f_3171},
{"f_3179:beamrider_2escm",(void*)f_3179},
{"f_2600:beamrider_2escm",(void*)f_2600},
{"f_3426:beamrider_2escm",(void*)f_3426},
{"f_3580:beamrider_2escm",(void*)f_3580},
{"f_3561:beamrider_2escm",(void*)f_3561},
{"f_3589:beamrider_2escm",(void*)f_3589},
{"f_3567:beamrider_2escm",(void*)f_3567},
{"f_3569:beamrider_2escm",(void*)f_3569},
{"f_3586:beamrider_2escm",(void*)f_3586},
{"f_3583:beamrider_2escm",(void*)f_3583},
{"f_1953:beamrider_2escm",(void*)f_1953},
{"f_1959:beamrider_2escm",(void*)f_1959},
{"f_3565:beamrider_2escm",(void*)f_3565},
{"f_1957:beamrider_2escm",(void*)f_1957},
{"f_1951:beamrider_2escm",(void*)f_1951},
{"f_3185:beamrider_2escm",(void*)f_3185},
{"f_2580:beamrider_2escm",(void*)f_2580},
{"f_3471:beamrider_2escm",(void*)f_3471},
{"f_3477:beamrider_2escm",(void*)f_3477},
{"f_3592:beamrider_2escm",(void*)f_3592},
{"f_3474:beamrider_2escm",(void*)f_3474},
{"f_2607:beamrider_2escm",(void*)f_2607},
{"f_3597:beamrider_2escm",(void*)f_3597},
{"f_3595:beamrider_2escm",(void*)f_3595},
{"f_3117:beamrider_2escm",(void*)f_3117},
{"f_3480:beamrider_2escm",(void*)f_3480},
{"f_3489:beamrider_2escm",(void*)f_3489},
{"f_3483:beamrider_2escm",(void*)f_3483},
{"f_3486:beamrider_2escm",(void*)f_3486},
{"f_2523:beamrider_2escm",(void*)f_2523},
{"f_3132:beamrider_2escm",(void*)f_3132},
{"f_3462:beamrider_2escm",(void*)f_3462},
{"f_3468:beamrider_2escm",(void*)f_3468},
{"f_3465:beamrider_2escm",(void*)f_3465},
{"f_3520:beamrider_2escm",(void*)f_3520},
{"f_3522:beamrider_2escm",(void*)f_3522},
{"f_3524:beamrider_2escm",(void*)f_3524},
{"f_3526:beamrider_2escm",(void*)f_3526},
{"f_3528:beamrider_2escm",(void*)f_3528},
{"f_3148:beamrider_2escm",(void*)f_3148},
{"f_3143:beamrider_2escm",(void*)f_3143},
{"f_2510:beamrider_2escm",(void*)f_2510},
{"f_3104:beamrider_2escm",(void*)f_3104},
{"f_3108:beamrider_2escm",(void*)f_3108},
{"f_3106:beamrider_2escm",(void*)f_3106},
{"f_2876:beamrider_2escm",(void*)f_2876},
{"f_2869:beamrider_2escm",(void*)f_2869},
{"f_2886:beamrider_2escm",(void*)f_2886},
{"f_2714:beamrider_2escm",(void*)f_2714},
{"f_2718:beamrider_2escm",(void*)f_2718},
{"f_2452:beamrider_2escm",(void*)f_2452},
{"f_2785:beamrider_2escm",(void*)f_2785},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|eliminated procedure checks: 134 
o|dropping redundant toplevel assignment: GL_SCISSOR_TEST 
o|dropping redundant toplevel assignment: GL_POLYGON_OFFSET_FILL 
o|dropping redundant toplevel assignment: GL_UNPACK_ALIGNMENT 
o|dropping redundant toplevel assignment: GL_PACK_ALIGNMENT 
o|safe globals: (update_world start_server set_orientation scene_setup render_scene PI zFar zNear field-of-view clear-color glViewport glPushMatrix glPopMatrix glLineWidth glHint glClearDepth glLightModelfv glLightModelf glShadeModel glMaterialfv glMaterialf glLightfv glLightf glFogxv glFogx glFogfv glFogf glDepthMask glDisable glCullFace glFrustumf glLoadIdentity glColor4f glLoadMatrixf glMultMatrixf glMatrixMode glOrthof glDrawElements glDrawArrays glDisableClientState glEnableClientState glTexCoordPointer glNormalPointer glColorPointer glVertexPointer glTexEnvi glTexParameteri glTexImage2D glBindTexture glGenTextures glScalef glRotatef glTranslatef glBlendFunc glEnable glClear glClearColor glGetError GL_COORD_REPLACE_OES GL_POINT_SPRITE_OES GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES GL_POINT_SIZE_ARRAY_POINTER_OES GL_POINT_SIZE_ARRAY_STRIDE_OES GL_POINT_SIZE_ARRAY_TYPE_OES GL_POINT_SIZE_ARRAY_OES GL_WEIGHT_ARRAY_BUFFER_BINDING_OES GL_WEIGHT_ARRAY_POINTER_OES GL_WEIGHT_ARRAY_STRIDE_OES GL_WEIGHT_ARRAY_TYPE_OES GL_WEIGHT_ARRAY_SIZE_OES GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES GL_MATRIX_INDEX_ARRAY_POINTER_OES GL_MATRIX_INDEX_ARRAY_STRIDE_OES GL_MATRIX_INDEX_ARRAY_TYPE_OES GL_MATRIX_INDEX_ARRAY_SIZE_OES GL_CURRENT_PALETTE_MATRIX_OES GL_WEIGHT_ARRAY_OES GL_MATRIX_INDEX_ARRAY_OES GL_MATRIX_PALETTE_OES GL_MAX_PALETTE_MATRICES_OES GL_MAX_VERTEX_UNITS_OES GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES GL_TEXTURE_CROP_RECT_OES GL_DOT3_RGBA GL_DOT3_RGB GL_SRC2_ALPHA GL_SRC1_ALPHA GL_SRC0_ALPHA GL_SRC2_RGB GL_SRC1_RGB GL_SRC0_RGB GL_ALPHA_SCALE GL_OPERAND2_ALPHA GL_OPERAND1_ALPHA GL_OPERAND0_ALPHA GL_OPERAND2_RGB GL_OPERAND1_RGB GL_OPERAND0_RGB GL_PREVIOUS GL_PRIMARY_COLOR GL_CONSTANT GL_INTERPOLATE GL_ADD_SIGNED GL_RGB_SCALE GL_COMBINE_ALPHA GL_COMBINE_RGB GL_COMBINE GL_SUBTRACT GL_BUFFER_USAGE GL_BUFFER_SIZE GL_DYNAMIC_DRAW GL_STATIC_DRAW GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING GL_COLOR_ARRAY_BUFFER_BINDING GL_NORMAL_ARRAY_BUFFER_BINDING GL_VERTEX_ARRAY_BUFFER_BINDING GL_ELEMENT_ARRAY_BUFFER_BINDING GL_ARRAY_BUFFER_BINDING GL_ELEMENT_ARRAY_BUFFER GL_ARRAY_BUFFER GL_LIGHT7 GL_LIGHT6 GL_LIGHT5 GL_LIGHT4 GL_LIGHT3 GL_LIGHT2 GL_LIGHT1 GL_LIGHT0 GL_PALETTE8_RGB5_A1_OES GL_PALETTE8_RGBA4_OES GL_PALETTE8_R5_G6_B5_OES GL_PALETTE8_RGBA8_OES GL_PALETTE8_RGB8_OES GL_PALETTE4_RGB5_A1_OES GL_PALETTE4_RGBA4_OES GL_PALETTE4_R5_G6_B5_OES GL_PALETTE4_RGBA8_OES GL_PALETTE4_RGB8_OES GL_CLAMP_TO_EDGE GL_REPEAT GL_CLIENT_ACTIVE_TEXTURE GL_ACTIVE_TEXTURE GL_TEXTURE31 GL_TEXTURE30 GL_TEXTURE29 GL_TEXTURE28 GL_TEXTURE27 GL_TEXTURE26 GL_TEXTURE25 GL_TEXTURE24 GL_TEXTURE23 GL_TEXTURE22 GL_TEXTURE21 GL_TEXTURE20 GL_TEXTURE19 GL_TEXTURE18 GL_TEXTURE17 GL_TEXTURE16 GL_TEXTURE15 GL_TEXTURE14 GL_TEXTURE13 GL_TEXTURE12 GL_TEXTURE11 GL_TEXTURE10 GL_TEXTURE9 GL_TEXTURE8 GL_TEXTURE7 GL_TEXTURE6 GL_TEXTURE5 GL_TEXTURE4 GL_TEXTURE3 GL_TEXTURE2 GL_TEXTURE1 GL_TEXTURE0 GL_GENERATE_MIPMAP GL_TEXTURE_WRAP_T GL_TEXTURE_WRAP_S GL_TEXTURE_MIN_FILTER GL_TEXTURE_MAG_FILTER GL_LINEAR_MIPMAP_LINEAR GL_NEAREST_MIPMAP_LINEAR GL_LINEAR_MIPMAP_NEAREST GL_NEAREST_MIPMAP_NEAREST GL_LINEAR GL_NEAREST GL_TEXTURE_ENV GL_TEXTURE_ENV_COLOR GL_TEXTURE_ENV_MODE GL_ADD GL_DECAL GL_MODULATE GL_EXTENSIONS GL_VERSION GL_RENDERER GL_VENDOR GL_DECR GL_INCR GL_REPLACE GL_KEEP GL_SMOOTH GL_FLAT GL_UNSIGNED_SHORT_5_6_5 GL_UNSIGNED_SHORT_5_5_5_1 GL_UNSIGNED_SHORT_4_4_4_4 GL_PACK_ALIGNMENT GL_UNPACK_ALIGNMENT GL_LUMINANCE_ALPHA GL_LUMINANCE GL_RGBA GL_RGB GL_ALPHA GL_TEXTURE GL_PROJECTION GL_MODELVIEW GL_AMBIENT_AND_DIFFUSE GL_SHININESS GL_EMISSION GL_SET GL_NAND GL_OR_INVERTED GL_COPY_INVERTED GL_OR_REVERSE GL_INVERT GL_EQUIV GL_NOR GL_OR GL_XOR GL_NOOP GL_AND_INVERTED GL_COPY GL_AND_REVERSE GL_AND GL_CLEAR GL_FIXED GL_FLOAT GL_UNSIGNED_SHORT GL_SHORT GL_UNSIGNED_BYTE GL_BYTE GL_QUADRATIC_ATTENUATION GL_LINEAR_ATTENUATION GL_CONSTANT_ATTENUATION GL_SPOT_CUTOFF GL_SPOT_EXPONENT GL_SPOT_DIRECTION GL_POSITION GL_SPECULAR GL_DIFFUSE GL_AMBIENT GL_LIGHT_MODEL_TWO_SIDE GL_LIGHT_MODEL_AMBIENT GL_GENERATE_MIPMAP_HINT GL_FOG_HINT GL_LINE_SMOOTH_HINT GL_POINT_SMOOTH_HINT GL_PERSPECTIVE_CORRECTION_HINT GL_NICEST GL_FASTEST GL_DONT_CARE GL_COMPRESSED_TEXTURE_FORMATS GL_NUM_COMPRESSED_TEXTURE_FORMATS GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES GL_IMPLEMENTATION_COLOR_READ_TYPE_OES GL_SAMPLE_COVERAGE_INVERT GL_SAMPLE_COVERAGE_VALUE GL_SAMPLES GL_SAMPLE_BUFFERS GL_TEXTURE_COORD_ARRAY_POINTER GL_COLOR_ARRAY_POINTER GL_NORMAL_ARRAY_POINTER GL_VERTEX_ARRAY_POINTER GL_TEXTURE_COORD_ARRAY_STRIDE GL_TEXTURE_COORD_ARRAY_TYPE GL_TEXTURE_COORD_ARRAY_SIZE GL_COLOR_ARRAY_STRIDE GL_COLOR_ARRAY_TYPE GL_COLOR_ARRAY_SIZE GL_NORMAL_ARRAY_STRIDE GL_NORMAL_ARRAY_TYPE GL_VERTEX_ARRAY_STRIDE GL_VERTEX_ARRAY_TYPE GL_VERTEX_ARRAY_SIZE GL_TEXTURE_BINDING_2D GL_POLYGON_OFFSET_FACTOR GL_POLYGON_OFFSET_FILL GL_POLYGON_OFFSET_UNITS GL_STENCIL_BITS GL_DEPTH_BITS GL_ALPHA_BITS GL_BLUE_BITS GL_GREEN_BITS GL_RED_BITS GL_SUBPIXEL_BITS GL_MAX_TEXTURE_UNITS GL_MAX_VIEWPORT_DIMS GL_MAX_TEXTURE_STACK_DEPTH GL_MAX_PROJECTION_STACK_DEPTH GL_MAX_MODELVIEW_STACK_DEPTH GL_MAX_TEXTURE_SIZE GL_MAX_CLIP_PLANES GL_MAX_LIGHTS GL_COLOR_WRITEMASK GL_COLOR_CLEAR_VALUE GL_SCISSOR_TEST GL_SCISSOR_BOX GL_LOGIC_OP_MODE GL_BLEND_SRC GL_BLEND_DST GL_ALPHA_TEST_REF GL_ALPHA_TEST_FUNC GL_TEXTURE_MATRIX GL_PROJECTION_MATRIX GL_MODELVIEW_MATRIX GL_TEXTURE_STACK_DEPTH GL_PROJECTION_STACK_DEPTH GL_MODELVIEW_STACK_DEPTH GL_VIEWPORT GL_MATRIX_MODE GL_STENCIL_WRITEMASK GL_STENCIL_REF GL_STENCIL_PASS_DEPTH_PASS GL_STENCIL_PASS_DEPTH_FAIL GL_STENCIL_FAIL GL_STENCIL_VALUE_MASK GL_STENCIL_FUNC GL_STENCIL_CLEAR_VALUE GL_DEPTH_FUNC GL_DEPTH_CLEAR_VALUE GL_DEPTH_WRITEMASK GL_DEPTH_RANGE GL_SHADE_MODEL GL_FRONT_FACE GL_CULL_FACE_MODE GL_ALIASED_LINE_WIDTH_RANGE GL_ALIASED_POINT_SIZE_RANGE GL_SMOOTH_LINE_WIDTH_RANGE GL_LINE_WIDTH GL_SMOOTH_POINT_SIZE_RANGE GL_POINT_DISTANCE_ATTENUATION GL_POINT_FADE_THRESHOLD_SIZE GL_POINT_SIZE_MAX GL_POINT_SIZE_MIN GL_POINT_SIZE GL_CURRENT_TEXTURE_COORDS GL_CURRENT_NORMAL GL_CURRENT_COLOR GL_CCW GL_CW GL_FOG_COLOR GL_FOG_MODE GL_FOG_END GL_FOG_START GL_FOG_DENSITY GL_EXP2 GL_EXP GL_OUT_OF_MEMORY GL_STACK_UNDERFLOW GL_STACK_OVERFLOW GL_INVALID_OPERATION GL_INVALID_VALUE GL_INVALID_ENUM GL_NO_ERROR GL_SAMPLE_COVERAGE GL_SAMPLE_ALPHA_TO_ONE GL_SAMPLE_ALPHA_TO_COVERAGE GL_MULTISAMPLE GL_TEXTURE_COORD_ARRAY GL_COLOR_ARRAY GL_NORMAL_ARRAY GL_VERTEX_ARRAY GL_RESCALE_NORMAL GL_NORMALIZE GL_COLOR_MATERIAL GL_LINE_SMOOTH GL_POINT_SMOOTH GL_DEPTH_TEST GL_STENCIL_TEST GL_DITHER GL_COLOR_LOGIC_OP GL_BLEND GL_ALPHA_TEST GL_CULL_FACE GL_TEXTURE_2D GL_LIGHTING GL_FOG GL_FRONT_AND_BACK GL_BACK GL_FRONT GL_CLIP_PLANE5 GL_CLIP_PLANE4 GL_CLIP_PLANE3 GL_CLIP_PLANE2 GL_CLIP_PLANE1 GL_CLIP_PLANE0 GL_SRC_ALPHA_SATURATE GL_ONE_MINUS_DST_COLOR GL_DST_COLOR GL_ONE_MINUS_DST_ALPHA GL_DST_ALPHA GL_ONE_MINUS_SRC_ALPHA GL_SRC_ALPHA GL_ONE_MINUS_SRC_COLOR GL_SRC_COLOR GL_ONE GL_ZERO GL_ALWAYS GL_GEQUAL GL_NOTEQUAL GL_GREATER GL_LEQUAL GL_EQUAL GL_LESS GL_NEVER GL_TRIANGLE_FAN GL_TRIANGLE_STRIP GL_TRIANGLES GL_LINE_STRIP GL_LINE_LOOP GL_LINES GL_POINTS GL_TRUE GL_FALSE GL_COLOR_BUFFER_BIT GL_STENCIL_BUFFER_BIT GL_DEPTH_BUFFER_BIT GL_OES_single_precision GL_OES_read_format GL_OES_point_sprite GL_OES_point_size_array GL_OES_matrix_palette GL_OES_matrix_get GL_OES_fixed_point GL_OES_draw_texture GL_OES_compressed_paletted_texture GL_OES_byte_coordinates GL_OES_VERSION_1_1 GL_OES_VERSION_1_0 GL_VERSION_ES_CL_1_1 GL_VERSION_ES_CM_1_1 GL_VERSION_ES_CL_1_0 GL_VERSION_ES_CM_1_0 display-gl-error) 
o|replaced variables: 105 
o|removed binding forms: 486 
o|removed binding forms: 99 
o|simplifications: ((if . 15) (##core#call . 146)) 
o|  call simplifications:
o|    ##sys#block-ref	7
o|    ##sys#check-structure	14
o|    ##sys#make-structure	2
o|    ##sys#call-with-values	2
o|    ##sys#apply
o|    ##sys#structure?	3
o|    ##sys#slot
o|    ##sys#foreign-struct-wrapper-argument	2
o|    ##sys#foreign-pointer-argument	12
o|    ##sys#foreign-fixnum-argument	66
o|    ##sys#foreign-flonum-argument	36
o|contracted procedure: k2360 
o|contracted procedure: k2363 
o|contracted procedure: k2366 
o|contracted procedure: k2369 
o|contracted procedure: k2376 
o|contracted procedure: k2383 
o|contracted procedure: k2390 
o|contracted procedure: k2393 
o|contracted procedure: k2400 
o|contracted procedure: k2403 
o|contracted procedure: k2406 
o|contracted procedure: k2413 
o|contracted procedure: k2416 
o|contracted procedure: k2419 
o|contracted procedure: k2422 
o|contracted procedure: k2429 
o|contracted procedure: k2432 
o|contracted procedure: k2435 
o|contracted procedure: k2442 
o|contracted procedure: k2445 
o|contracted procedure: k2456 
o|contracted procedure: k2459 
o|contracted procedure: k2466 
o|contracted procedure: k2469 
o|contracted procedure: k2472 
o|contracted procedure: k2475 
o|contracted procedure: k2478 
o|contracted procedure: k2481 
o|contracted procedure: k2484 
o|contracted procedure: k2487 
o|contracted procedure: k2490 
o|contracted procedure: k2501 
o|contracted procedure: k2504 
o|contracted procedure: k2507 
o|contracted procedure: k2514 
o|contracted procedure: k2517 
o|contracted procedure: k2520 
o|contracted procedure: k2527 
o|contracted procedure: k2530 
o|contracted procedure: k2533 
o|contracted procedure: k2536 
o|contracted procedure: k2547 
o|contracted procedure: k2550 
o|contracted procedure: k2553 
o|contracted procedure: k2556 
o|contracted procedure: k2567 
o|contracted procedure: k2570 
o|contracted procedure: k2573 
o|contracted procedure: k2584 
o|contracted procedure: k2587 
o|contracted procedure: k2590 
o|contracted procedure: k2593 
o|contracted procedure: k2604 
o|contracted procedure: k2611 
o|contracted procedure: k2618 
o|contracted procedure: k2621 
o|contracted procedure: k2624 
o|contracted procedure: k2631 
o|contracted procedure: k2634 
o|contracted procedure: k2637 
o|contracted procedure: k2640 
o|contracted procedure: k2651 
o|contracted procedure: k2654 
o|contracted procedure: k2657 
o|contracted procedure: k2660 
o|contracted procedure: k2663 
o|contracted procedure: k2666 
o|contracted procedure: k2673 
o|contracted procedure: k2680 
o|contracted procedure: k2691 
o|contracted procedure: k2702 
o|contracted procedure: k2705 
o|contracted procedure: k2708 
o|contracted procedure: k2711 
o|contracted procedure: k2722 
o|contracted procedure: k2725 
o|contracted procedure: k2728 
o|contracted procedure: k2731 
o|contracted procedure: k2734 
o|contracted procedure: k2737 
o|contracted procedure: k2744 
o|contracted procedure: k2751 
o|contracted procedure: k2758 
o|contracted procedure: k2765 
o|contracted procedure: k2768 
o|contracted procedure: k2775 
o|contracted procedure: k2778 
o|contracted procedure: k2789 
o|contracted procedure: k2792 
o|contracted procedure: k2799 
o|contracted procedure: k2802 
o|contracted procedure: k2813 
o|contracted procedure: k2816 
o|contracted procedure: k2819 
o|contracted procedure: k2826 
o|contracted procedure: k2829 
o|contracted procedure: k2832 
o|contracted procedure: k2843 
o|contracted procedure: k2846 
o|contracted procedure: k2849 
o|contracted procedure: k2856 
o|contracted procedure: k2859 
o|contracted procedure: k2862 
o|contracted procedure: k2873 
o|contracted procedure: k2880 
o|contracted procedure: k2883 
o|contracted procedure: k2890 
o|contracted procedure: k2893 
o|contracted procedure: k2904 
o|contracted procedure: k2911 
o|contracted procedure: k2914 
o|contracted procedure: k2921 
o|contracted procedure: k2936 
o|contracted procedure: k2939 
o|contracted procedure: k2942 
o|contracted procedure: k2945 
o|contracted procedure: k3136 
o|contracted procedure: k3097 
o|contracted procedure: k3188 
o|contracted procedure: k3197 
o|contracted procedure: k3206 
o|contracted procedure: k3215 
o|contracted procedure: k3224 
o|contracted procedure: k3233 
o|contracted procedure: k3254 
o|contracted procedure: k3263 
o|contracted procedure: k3272 
o|contracted procedure: k3281 
o|contracted procedure: k3290 
o|contracted procedure: k3299 
o|contracted procedure: k3308 
o|contracted procedure: k3317 
o|removed binding forms: 132 
o|replaced variables: 24 
o|removed binding forms: 12 
o|customizable procedures: (k3541 loop1673 accept1471) 
o|calls to known targets: 71 
o|fast box initializations: 3 
*/
/* end of file */
