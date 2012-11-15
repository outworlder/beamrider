/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-09-24 17:49
   Version 4.8.0 (rev 0db1908)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file extras.c
   unit: extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[133];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,100,111,108,111,111,112,56,52,32,120,56,54,32,105,56,55,32,120,115,56,56,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,115,108,117,114,112,32,112,111,114,116,56,51,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,102,105,108,101,32,46,32,116,109,112,54,56,54,57,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,17),40,114,97,110,100,111,109,105,122,101,32,46,32,110,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,114,97,110,100,111,109,32,110,49,48,48,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,14),40,102,95,49,49,54,50,32,114,108,49,50,48,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,49,50,52,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,108,105,110,101,32,46,32,97,114,103,115,49,48,55,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,110,115,49,52,57,32,110,49,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,100,111,114,101,97,100,32,112,111,114,116,49,52,55,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,108,105,110,101,115,32,46,32,112,111,114,116,45,97,110,100,45,109,97,120,49,52,49,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,108,105,110,101,32,115,116,114,49,53,57,32,46,32,112,111,114,116,49,54,48,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,55,56,32,110,49,55,57,32,109,49,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,57,50,32,110,49,57,51,32,109,49,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,33,32,110,49,54,56,32,100,101,115,116,49,54,57,32,112,111,114,116,49,55,48,32,115,116,97,114,116,49,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,39),40,114,101,97,100,45,115,116,114,105,110,103,33,32,110,50,49,51,32,100,101,115,116,50,49,52,32,46,32,116,109,112,50,49,50,50,49,53,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,47,112,111,114,116,32,110,50,51,50,32,112,50,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,114,101,97,100,45,115,116,114,105,110,103,32,46,32,116,109,112,50,53,53,50,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,27),40,114,101,97,100,45,98,117,102,102,101,114,101,100,32,46,32,116,109,112,50,55,50,50,55,51,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,116,111,107,101,110,32,112,114,101,100,50,56,50,32,46,32,112,111,114,116,50,56,51,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,21),40,102,95,49,55,54,53,32,110,51,49,48,32,112,111,114,116,51,49,49,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,17),40,102,95,49,55,57,55,32,37,110,50,57,57,51,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,8),40,102,95,49,56,48,49,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,115,116,114,105,110,103,32,115,50,57,55,32,46,32,109,111,114,101,50,57,56,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,23),40,114,101,97,100,45,98,121,116,101,32,46,32,116,109,112,51,51,48,51,51,49,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,119,114,105,116,101,45,98,121,116,101,32,98,121,116,101,51,52,53,32,46,32,116,109,112,51,52,52,51,52,54,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,18),40,114,101,97,100,45,109,97,99,114,111,63,32,108,51,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,111,117,116,32,115,116,114,51,57,53,32,99,111,108,51,57,54,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,24),40,119,114,45,101,120,112,114,32,101,120,112,114,52,48,54,32,99,111,108,52,48,55,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,52,49,49,32,99,111,108,52,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,119,114,45,108,115,116,32,108,52,48,56,32,99,111,108,52,48,57,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,102,95,50,50,53,52,32,97,52,51,54,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,105,52,50,49,32,106,52,50,50,32,99,111,108,52,50,51,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,14),40,102,95,50,51,50,57,32,99,110,52,52,55,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,52,53,52,32,105,52,53,54,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,18),40,119,114,32,111,98,106,51,57,57,32,99,111,108,52,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,115,112,97,99,101,115,32,110,52,57,48,32,99,111,108,52,57,49,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,105,110,100,101,110,116,32,116,111,52,57,50,32,99,111,108,52,57,51,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,15),40,102,95,50,54,48,56,32,115,116,114,53,48,53,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,38),40,112,114,32,111,98,106,52,57,54,32,99,111,108,52,57,55,32,101,120,116,114,97,52,57,56,32,112,112,45,112,97,105,114,52,57,57,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,33),40,112,112,45,101,120,112,114,32,101,120,112,114,53,48,57,32,99,111,108,53,49,48,32,101,120,116,114,97,53,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,44),40,112,112,45,99,97,108,108,32,101,120,112,114,53,49,52,32,99,111,108,53,49,53,32,101,120,116,114,97,53,49,54,32,112,112,45,105,116,101,109,53,49,55,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,41),40,112,112,45,108,105,115,116,32,108,53,50,48,32,99,111,108,53,50,49,32,101,120,116,114,97,53,50,50,32,112,112,45,105,116,101,109,53,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,53,51,49,32,99,111,108,53,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,50),40,112,112,45,100,111,119,110,32,108,53,50,53,32,99,111,108,49,53,50,54,32,99,111,108,50,53,50,55,32,101,120,116,114,97,53,50,56,32,112,112,45,105,116,101,109,53,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,49,32,114,101,115,116,53,53,48,32,99,111,108,49,53,53,49,32,99,111,108,50,53,53,50,32,99,111,108,51,53,53,51,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,50,32,114,101,115,116,53,53,56,32,99,111,108,49,53,53,57,32,99,111,108,50,53,54,48,32,99,111,108,51,53,54,49,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,31),40,116,97,105,108,51,32,114,101,115,116,53,54,54,32,99,111,108,49,53,54,55,32,99,111,108,50,53,54,56,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,70),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,53,52,48,32,99,111,108,53,52,49,32,101,120,116,114,97,53,52,50,32,110,97,109,101,100,63,53,52,51,32,112,112,45,49,53,52,52,32,112,112,45,50,53,52,53,32,112,112,45,51,53,52,54,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,35),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,53,55,57,32,99,111,108,53,56,48,32,101,120,116,114,97,53,56,49,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,35),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,53,56,50,32,99,111,108,53,56,51,32,101,120,116,114,97,53,56,52,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,31),40,112,112,45,105,102,32,101,120,112,114,53,56,53,32,99,111,108,53,56,54,32,101,120,116,114,97,53,56,55,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,111,110,100,32,101,120,112,114,53,56,56,32,99,111,108,53,56,57,32,101,120,116,114,97,53,57,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,97,115,101,32,101,120,112,114,53,57,49,32,99,111,108,53,57,50,32,101,120,116,114,97,53,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,112,112,45,97,110,100,32,101,120,112,114,53,57,52,32,99,111,108,53,57,53,32,101,120,116,114,97,53,57,54,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,32),40,112,112,45,108,101,116,32,101,120,112,114,53,57,55,32,99,111,108,53,57,56,32,101,120,116,114,97,53,57,57,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,34),40,112,112,45,98,101,103,105,110,32,101,120,112,114,54,48,51,32,99,111,108,54,48,52,32,101,120,116,114,97,54,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,31),40,112,112,45,100,111,32,101,120,112,114,54,48,54,32,99,111,108,54,48,55,32,101,120,116,114,97,54,48,56,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,15),40,115,116,121,108,101,32,104,101,97,100,54,48,57,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,18),40,112,112,32,111,98,106,52,54,55,32,99,111,108,52,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,53),40,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,51,53,53,32,100,105,115,112,108,97,121,63,51,53,54,32,119,105,100,116,104,51,53,55,32,111,117,116,112,117,116,51,53,56,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,50,54,32,115,54,54,50,41,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,30),40,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,54,53,57,32,46,32,111,112,116,54,54,48,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,109,115,103,54,55,52,32,97,114,103,115,54,55,53,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,40),40,102,112,114,105,110,116,102,48,32,108,111,99,54,54,55,32,112,111,114,116,54,54,56,32,109,115,103,54,54,57,32,97,114,103,115,54,55,48,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,35),40,102,112,114,105,110,116,102,32,112,111,114,116,55,49,53,32,102,115,116,114,55,49,54,32,46,32,97,114,103,115,55,49,55,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,26),40,112,114,105,110,116,102,32,102,115,116,114,55,49,57,32,46,32,97,114,103,115,55,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,27),40,115,112,114,105,110,116,102,32,102,115,116,114,55,50,50,32,46,32,97,114,103,115,55,50,51,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,32),40,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,55,50,53,32,46,32,97,114,103,115,55,50,54,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1172)
static void C_ccall f_1172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1177)
static void C_fcall f_1177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1882)
static void C_fcall f_1882(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2869)
static void C_fcall f_2869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1722)
static void C_fcall f_1722(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_fcall f_1237(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1886)
static void C_fcall f_1886(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_fcall f_2501(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1734)
static void C_ccall f_1734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2223)
static void C_fcall f_2223(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_fcall f_2988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2216)
static void C_fcall f_2216(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1535)
static void C_ccall f_1535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2698)
static void C_fcall f_2698(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2998)
static void C_fcall f_2998(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3363)
static C_word C_fcall f_3363(C_word t0,C_word t1);
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1622)
static void C_fcall f_1622(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_fcall f_1913(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1304)
static void C_fcall f_1304(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1945)
static C_word C_fcall f_1945(C_word t0);
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1316)
static void C_ccall f_1316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_fcall f_2563(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2799)
static void C_fcall f_2799(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_fcall f_2795(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1294)
static void C_ccall f_1294(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_fcall f_3119(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_fcall f_2834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2006)
static void C_fcall f_2006(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_fcall f_2002(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_976)
static void C_ccall f_976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_ccall f_3142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3136)
static void C_fcall f_3136(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2497)
static void C_fcall f_2497(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3288)
static void C_ccall f_3288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1411)
static void C_fcall f_1411(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3481)
static void C_ccall f_3481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_fcall f_1781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1401)
static void C_fcall f_1401(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_fcall f_2447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2736)
static void C_fcall f_2736(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2730)
static void C_fcall f_2730(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1007)
static void C_fcall f_1007(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2030)
static void C_fcall f_2030(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1984)
static void C_fcall f_1984(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2047)
static void C_fcall f_2047(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2721)
static void C_fcall f_2721(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1994)
static void C_ccall f_1994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3204)
static void C_fcall f_3204(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_fcall f_3186(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3170)
static void C_fcall f_3170(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3178)
static C_word C_fcall f_3178(C_word t0);
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1470)
static void C_fcall f_1470(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1463)
static void C_fcall f_1463(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2531)
static void C_fcall f_2531(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1154)
static void C_fcall f_1154(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1177)
static void C_fcall trf_1177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1177(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1177(t0,t1,t2);}

C_noret_decl(trf_1882)
static void C_fcall trf_1882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1882(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1882(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2869)
static void C_fcall trf_2869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2869(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2869(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1722)
static void C_fcall trf_1722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1722(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1722(t0,t1);}

C_noret_decl(trf_1237)
static void C_fcall trf_1237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1237(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1237(t0,t1);}

C_noret_decl(trf_1886)
static void C_fcall trf_1886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1886(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1886(t0,t1);}

C_noret_decl(trf_2501)
static void C_fcall trf_2501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2501(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2501(t0,t1,t2,t3);}

C_noret_decl(trf_2223)
static void C_fcall trf_2223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2223(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2223(t0,t1);}

C_noret_decl(trf_2988)
static void C_fcall trf_2988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2988(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2988(t0,t1,t2);}

C_noret_decl(trf_2216)
static void C_fcall trf_2216(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2216(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2216(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2698)
static void C_fcall trf_2698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2698(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2698(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2998)
static void C_fcall trf_2998(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2998(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2998(t0,t1);}

C_noret_decl(trf_1622)
static void C_fcall trf_1622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1622(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1622(t0,t1);}

C_noret_decl(trf_1913)
static void C_fcall trf_1913(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1913(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1913(t0,t1);}

C_noret_decl(trf_1304)
static void C_fcall trf_1304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1304(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1304(t0,t1,t2,t3);}

C_noret_decl(trf_2563)
static void C_fcall trf_2563(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2563(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2563(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2799)
static void C_fcall trf_2799(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2799(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2799(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2795)
static void C_fcall trf_2795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2795(void *dummy){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
f_2795(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3119)
static void C_fcall trf_3119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3119(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3119(t0,t1);}

C_noret_decl(trf_2834)
static void C_fcall trf_2834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2834(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2834(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2006)
static void C_fcall trf_2006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2006(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2006(t0,t1,t2,t3);}

C_noret_decl(trf_2002)
static void C_fcall trf_2002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2002(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2002(t0,t1,t2,t3);}

C_noret_decl(trf_3136)
static void C_fcall trf_3136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3136(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3136(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2497)
static void C_fcall trf_2497(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2497(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2497(t0,t1,t2,t3);}

C_noret_decl(trf_1411)
static void C_fcall trf_1411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1411(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1411(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1781)
static void C_fcall trf_1781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1781(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1781(t0,t1);}

C_noret_decl(trf_1401)
static void C_fcall trf_1401(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1401(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1401(t0,t1);}

C_noret_decl(trf_2447)
static void C_fcall trf_2447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2447(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2447(t0,t1,t2);}

C_noret_decl(trf_2736)
static void C_fcall trf_2736(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2736(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2736(t0,t1,t2,t3);}

C_noret_decl(trf_2730)
static void C_fcall trf_2730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2730(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2730(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1007)
static void C_fcall trf_1007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1007(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1007(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2030)
static void C_fcall trf_2030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2030(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2030(t0,t1,t2,t3);}

C_noret_decl(trf_1984)
static void C_fcall trf_1984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1984(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1984(t0,t1,t2,t3);}

C_noret_decl(trf_2047)
static void C_fcall trf_2047(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2047(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2047(t0,t1,t2,t3);}

C_noret_decl(trf_2721)
static void C_fcall trf_2721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2721(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2721(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3204)
static void C_fcall trf_3204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3204(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3204(t0,t1);}

C_noret_decl(trf_3186)
static void C_fcall trf_3186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3186(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3186(t0,t1);}

C_noret_decl(trf_3170)
static void C_fcall trf_3170(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3170(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3170(t0,t1,t2,t3);}

C_noret_decl(trf_1470)
static void C_fcall trf_1470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1470(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1470(t0,t1);}

C_noret_decl(trf_1463)
static void C_fcall trf_1463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1463(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1463(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2531)
static void C_fcall trf_2531(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2531(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2531(t0,t1,t2,t3);}

C_noret_decl(trf_1154)
static void C_fcall trf_1154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1154(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1154(t0,t1);}

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

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

/* k2851 in tail2 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:493: tail3 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2869(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2854 in tail2 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:493: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2563(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* read-token in k979 in k977 in k975 */
static void C_ccall f_1708(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1708r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1708r(t0,t1,t2,t3);}}

static void C_ccall f_1708r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[3]+1):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1715,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:232: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t6,t5,C_SCHEME_TRUE,lf[33]);}

/* k1867 in write-byte in k979 in k977 in k975 */
static void C_ccall f_1868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_make_character(C_unfix(((C_word*)t0)[2]));
/* extras.scm:267: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1172,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1177,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word)li6),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1177(t6,((C_word*)t0)[5],C_fix(0));}

/* loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_fcall f_1177(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1177,NULL,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm:93: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t1,((C_word*)((C_word*)t0)[3])[1],C_fix(0),t2);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1189,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:94: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t4,((C_word*)t0)[4]);}}

/* generic-write in k979 in k977 in k975 */
static void C_fcall f_1882(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[43],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1882,NULL,5,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1886,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1945,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1984,a[2]=t5,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2002,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t3,a[7]=((C_word)li38),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2497,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=t13,a[6]=t9,a[7]=t7,a[8]=((C_word)li62),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3101,a[2]=t11,a[3]=t1,a[4]=t15,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t21,C_fix(1),C_make_character(10));}
else{
/* extras.scm:562: wr */
t21=((C_word*)t13)[1];
f_2002(t21,t1,t2,C_fix(0));}}

/* tail3 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2869,NULL,5,t0,t1,t2,t3,t4);}
/* extras.scm:497: pp-down */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2730(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* read-string! in k979 in k977 in k975 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_1523r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1523r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1523r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word *a=C_alloc(9);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[3]+1):C_i_car(t4));
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1535,a[2]=t3,a[3]=t5,a[4]=t11,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:177: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t14,t7,C_SCHEME_TRUE,lf[25]);}

/* write-byte in k979 in k977 in k975 */
static void C_ccall f_1859(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1859r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1859r(t0,t1,t2,t3);}}

static void C_ccall f_1859r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[21]+1):C_i_car(t3));
t6=C_i_check_exact_2(t2,lf[36]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1868,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:266: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),t7,t5,C_SCHEME_TRUE,lf[36]);}

/* k2522 in spaces in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:403: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2501(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2528 in spaces in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:404: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* loop in k1716 in k1714 in read-token in k979 in k977 in k975 */
static void C_fcall f_1722(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1722,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1726,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:235: ##sys#peek-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(3,*((C_word*)lf[34]+1),t2,((C_word*)t0)[4]);}

/* k1236 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_fcall f_1237(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_setsubchar(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:113: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1177(t4,((C_word*)t0)[6],t3);}

/* read-macro? in generic-write in k979 in k977 in k975 */
static void C_fcall f_1886(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1886,NULL,2,t1,t2);}
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_eqp(t3,lf[38]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1913,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_1913(t8,t6);}
else{
t8=C_eqp(t3,lf[39]);
if(C_truep(t8)){
t9=t7;
f_1913(t9,t8);}
else{
t9=C_eqp(t3,lf[40]);
t10=t7;
f_1913(t10,(C_truep(t9)?t9:C_eqp(t3,lf[41])));}}}

/* k1725 in loop in k1716 in k1714 in read-token in k979 in k977 in k975 */
static void C_ccall f_1726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1732(2,t3,C_SCHEME_FALSE);}
else{
/* extras.scm:236: pred */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* spaces in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2501(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2501,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
if(C_truep(C_i_greaterp(t2,C_fix(7)))){
t4=C_a_i_minus(&a,2,t2,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:403: out */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1984(t6,t5,lf[85],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:404: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t4,lf[86],C_fix(0),t2);}}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1714 in read-token in k979 in k977 in k975 */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:233: open-output-string */
t3=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1716 in k1714 in read-token in k979 in k977 in k975 */
static void C_ccall f_1717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1717,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1722,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1722(t5,((C_word*)t0)[4]);}

/* pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2640,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2647,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* extras.scm:430: read-macro? */
f_1886(t5,t2);}

/* k2645 in pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2647,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=f_1945(((C_word*)t0)[2]);
/* extras.scm:432: out */
t6=((C_word*)((C_word*)t0)[8])[1];
f_1984(t6,t4,t5,((C_word*)t0)[9]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2669,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* extras.scm:437: style */
t4=((C_word*)((C_word*)t0)[12])[1];
f_2988(t4,t3,t2);}
else{
/* extras.scm:444: pp-list */
t3=((C_word*)((C_word*)t0)[13])[1];
f_2721(t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k2195 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:333: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1739 in k1730 in k1725 in loop in k1716 in k1714 in read-token in k979 in k977 in k975 */
static void C_ccall f_1740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:238: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* pp-begin in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2973,5,t0,t1,t2,t3,t4);}
/* extras.scm:533: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2795(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* k1256 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:110: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* k2213 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2214,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2216,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2216(t5,((C_word*)t0)[4],C_fix(0),C_fix(0),t1);}

/* pp-do in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2979,5,t0,t1,t2,t3,t4);}
/* extras.scm:536: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2795(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* k1090 in randomize in k979 in k977 in k975 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_exact_2(t1,lf[6]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_randomize(t1));}

/* k2655 in k2645 in pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:431: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2563(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k1733 in k1730 in k1725 in loop in k1716 in k1714 in read-token in k979 in k977 in k975 */
static void C_ccall f_1734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:239: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1722(t2,((C_word*)t0)[3]);}

/* k1730 in k1725 in loop in k1716 in k1714 in read-token in k979 in k977 in k975 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1732,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1740,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:238: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t3,((C_word*)t0)[5]);}
else{
/* extras.scm:240: get-output-string */
t2=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k1248 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
f_1237(t5,t4);}

/* k2221 in loop in k2213 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2223(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2223,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_i_char_equalp(t2,C_make_character(92));
t4=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(34)));
if(C_truep(t4)){
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2242,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2245,a[2]=((C_word*)t0)[6],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2248,a[2]=((C_word*)t0)[6],a[3]=t7,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:344: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t8,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[3]);}
else{
t5=C_u_i_assq(t2,lf[61]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2254,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word)li34),tmp=(C_word)a,a+=9,tmp);
/* extras.scm:346: g434 */
t7=t6;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[5],t5);}
else{
t6=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:356: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2216(t7,((C_word*)t0)[5],((C_word*)t0)[8],t6,((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:358: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t3,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[3]);}}

/* style in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2988(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2988,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,lf[98]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2998,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_2998(t5,t3);}
else{
t5=C_eqp(t2,lf[108]);
if(C_truep(t5)){
t6=t4;
f_2998(t6,t5);}
else{
t6=C_eqp(t2,lf[109]);
t7=t4;
f_2998(t7,(C_truep(t6)?t6:C_eqp(t2,lf[110])));}}}

/* loop in k2213 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2216(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2216,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=C_i_string_length(((C_word*)t0)[2]);
t7=t5;
f_2223(t7,C_fixnum_lessp(t3,t6));}
else{
t6=t5;
f_2223(t6,C_SCHEME_FALSE);}}

/* k1041 in read-file in k979 in k977 in k975 */
static void C_ccall f_1043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm:52: slurp */
t2=((C_word*)t0)[2];
f_998(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
/* extras.scm:53: call-with-input-file */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k2437 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2438,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2447,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word)li37),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_2447(t7,t3,C_fix(0));}

/* k1516 in read-string! in k979 in k977 in k975 */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_setsubchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
f_1401(t5,t4);}

/* read-lines in k979 in k977 in k975 */
static void C_ccall f_1284(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_1284r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1284r(t0,t1,t2);}}

static void C_ccall f_1284r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(9);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_slot(t2,C_fix(0)):*((C_word*)lf[3]+1));
t5=C_i_pairp(t2);
t6=(C_truep(t5)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
t7=C_i_pairp(t6);
t8=(C_truep(t7)?C_slot(t6,C_fix(0)):C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1294,a[2]=t8,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(t4))){
/* extras.scm:130: call-with-input-file */
t10=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,t4,t9);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1345,a[2]=t9,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:132: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t10,t4,C_SCHEME_TRUE,lf[19]);}}

/* pp-let in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2954,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_car(t5);
t7=C_i_symbolp(t6);
/* extras.scm:530: pp-general */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2795(t8,t1,t2,t3,t4,t7,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:530: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2795(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}}

/* printf in k3111 in k979 in k977 in k975 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3437r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3437r(t0,t1,t2,t3);}}

static void C_ccall f_3437r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm:636: fprintf0 */
f_3136(t1,lf[124],*((C_word*)lf[21]+1),t2,t3);}

/* fprintf in k3111 in k979 in k977 in k975 */
static void C_ccall f_3431(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3431r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3431r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3431r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
/* extras.scm:633: fprintf0 */
f_3136(t1,lf[123],t2,t3,t4);}

/* k2429 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:381: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3214 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:627: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3204(t2,((C_word*)t0)[3]);}

/* k3418 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3142(2,t2,((C_word*)t0)[3]);}
else{
/* extras.scm:584: open-output-string */
t2=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k2072 in loop in k2044 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:318: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2002(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2417 in k2411 in k2409 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:380: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1534 in read-string! in k979 in k977 in k975 */
static void C_ccall f_1535(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_i_check_string_2(((C_word*)t0)[2],lf[25]);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=C_i_check_exact_2(((C_word*)((C_word*)t0)[3])[1],lf[25]);
t4=C_fixnum_plus(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t5=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t4,t5))){
t6=C_block_size(((C_word*)t0)[2]);
t7=C_fixnum_difference(t6,((C_word*)t0)[4]);
t8=C_mutate(((C_word *)((C_word*)t0)[3])+1,t7);
t9=C_i_check_exact_2(((C_word*)t0)[4],lf[25]);
/* extras.scm:184: ##sys#read-string! */
t10=*((C_word*)lf[24]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
t6=C_i_check_exact_2(((C_word*)t0)[4],lf[25]);
/* extras.scm:184: ##sys#read-string! */
t7=*((C_word*)lf[24]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[4]);}}
else{
t3=C_i_check_exact_2(((C_word*)t0)[4],lf[25]);
/* extras.scm:184: ##sys#read-string! */
t4=*((C_word*)lf[24]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[4]);}}

/* k2316 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:360: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1636 in k1625 in loop in k1616 in k1614 in k1594 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:207: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1622(t2,((C_word*)t0)[3]);}

/* k2411 in k2409 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:380: get-output-string */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k2087 in loop in k2044 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:320: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],lf[48],t1);}

/* k2409 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:379: ##sys#user-print-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(5,*((C_word*)lf[73]+1),t2,((C_word*)t0)[5],C_SCHEME_TRUE,t1);}

/* pp-call in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2698(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2698,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2702,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2719,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:450: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1984(t9,t8,lf[91],t3);}

/* k2692 in k2668 in k2645 in pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:442: pp-general */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2795(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[7])[1]);}
else{
/* extras.scm:443: pp-call */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2698(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}

/* k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2424,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(3));
/* extras.scm:381: string-append */
t4=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[75],t3,lf[76]);}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2438,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:383: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1984(t3,t2,lf[79],((C_word*)t0)[4]);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2481,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:393: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1984(t3,t2,lf[82],((C_word*)t0)[4]);}
else{
/* extras.scm:396: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],lf[83],((C_word*)t0)[4]);}}}}

/* k3260 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:607: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2996 in style in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2998(C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[99]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[100]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)((C_word*)t0)[5])[1]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[101]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)((C_word*)t0)[6])[1]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[102]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)((C_word*)t0)[7])[1]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[103]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[104]));
if(C_truep(t7)){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)((C_word*)t0)[8])[1]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[105]);
if(C_truep(t8)){
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)((C_word*)t0)[9])[1]);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[106]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,((C_word*)((C_word*)t0)[10])[1]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[107]);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?((C_word*)((C_word*)t0)[11])[1]:C_SCHEME_FALSE));}}}}}}}}

/* k3103 in k3100 in generic-write in k979 in k977 in k975 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:561: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3100 in generic-write in k979 in k977 in k975 */
static void C_ccall f_3101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:561: pp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2497(t3,t2,((C_word*)t0)[5],C_fix(0));}

/* k1603 in k1601 in k1594 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
/* extras.scm:196: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),t1);}}

/* k1601 in k1594 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:193: ##sys#read-string! */
t3=*((C_word*)lf[24]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],t1,((C_word*)t0)[4],C_fix(0));}

/* skip in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static C_word C_fcall f_3363(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=f_3178(((C_word*)((C_word*)t0)[2])[1]);
t6=t2;
t1=t6;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
return(t3);}}

/* k3248 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:606: display */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2322 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:363: char-name */
t3=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* f_2329 in k2324 in k2322 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2329(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2329,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
/* extras.scm:365: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1984(t4,t1,t3,((C_word*)t0)[3]);}

/* k2324 in k2322 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2325,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:363: g445 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:367: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1984(t3,t2,lf[64],((C_word*)t0)[3]);}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(65535)))){
/* extras.scm:370: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1984(t3,t2,lf[65],((C_word*)t0)[3]);}
else{
/* extras.scm:370: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1984(t3,t2,lf[66],((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:372: make-string */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[6]);}}}}

/* k1625 in loop in k1616 in k1614 in k1594 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1626,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
/* extras.scm:204: get-output-string */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:206: write-string */
t4=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[5],t1,((C_word*)t0)[3]);}}

/* loop in k1616 in k1614 in k1594 in read-string/port in k979 in k977 in k975 */
static void C_fcall f_1622(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1622,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1626,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:201: ##sys#read-string! */
t3=*((C_word*)lf[24]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(2048),((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0));}

/* k3236 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:605: write */
t2=*((C_word*)lf[118]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k1616 in k1614 in k1594 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1617,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1622,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1622(t5,((C_word*)t0)[4]);}

/* k1614 in k1594 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1617,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,C_fix(2048),C_make_character(32));}

/* k1911 in read-macro? in generic-write in k979 in k977 in k975 */
static void C_fcall f_1913(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t3));}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3290 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:609: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),((C_word*)t0)[2],t1,C_fix(8));}

/* loop in doread in read-lines in k979 in k977 in k975 */
static void C_fcall f_1304(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1304,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm:124: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),t1,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1316,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:125: read-line */
t6=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}}

/* read-macro-prefix in generic-write in k979 in k977 in k975 */
static C_word C_fcall f_1945(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
t2=C_i_car(t1);
t3=t1;
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[38]);
if(C_truep(t5)){
return(lf[42]);}
else{
t6=C_eqp(t2,lf[39]);
if(C_truep(t6)){
return(lf[43]);}
else{
t7=C_eqp(t2,lf[40]);
if(C_truep(t7)){
return(lf[44]);}
else{
t8=C_eqp(t2,lf[41]);
return((C_truep(t8)?lf[45]:C_SCHEME_UNDEFINED));}}}}

/* k2783 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2784,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* extras.scm:473: pr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2563(t3,((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}

/* k2780 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:472: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],lf[94],t1);}

/* slurp in read-file in k979 in k977 in k975 */
static void C_ccall f_998(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_998,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:47: reader */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2668 in k2645 in pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2669,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm:439: proc */
t2=t1;
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2693,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:440: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[90]+1)))(3,*((C_word*)lf[90]+1),t2,((C_word*)t0)[9]);}}

/* k1315 in loop in doread in read-lines in k979 in k977 in k975 */
static void C_ccall f_1316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1316,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* extras.scm:127: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* extras.scm:128: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1304(t4,((C_word*)t0)[2],t2,t3);}}

/* k2754 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:467: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2736(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2241 in k2221 in loop in k2213 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:341: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2216(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2247 in k2221 in loop in k2213 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:344: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2244 in k2221 in loop in k2213 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:343: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],lf[60],t1);}

/* k2759 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:468: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2563(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2552 in indent in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:410: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pr in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2563(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2563,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
t11=C_a_i_minus(&a,2,((C_word*)t0)[6],t3);
t12=C_a_i_minus(&a,2,t11,t4);
t13=C_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm:416: max */
t14=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t10,t13,C_fix(50));}
else{
/* extras.scm:427: wr */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2002(t8,t1,t2,t3);}}

/* k2789 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:474: indent */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2531(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* tail1 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2799(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2799,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2817,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t9,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[5],a[3]=t12,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:485: indent */
t14=((C_word*)((C_word*)t0)[6])[1];
f_2531(t14,t13,t5,t4);}
else{
/* extras.scm:486: tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2834(t7,t1,t2,t3,t4,t5);}}

/* k2792 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:474: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],lf[95],t1);}

/* pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2795(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2795,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2799,a[2]=t6,a[3]=t4,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2834,a[2]=t7,a[3]=t4,a[4]=t14,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li49),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2869,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t8,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=t2;
t20=C_u_i_cdr(t19);
t21=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2878,a[2]=t5,a[3]=t20,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[5],a[3]=t21,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:501: out */
t23=((C_word*)((C_word*)t0)[6])[1];
f_1984(t23,t22,lf[97],t3);}

/* k2545 in indent in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm:410: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2501(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3123 in k3118 in pretty-print in k3111 in k979 in k977 in k975 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3126,a[2]=((C_word*)t0)[2],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:571: generic-write */
f_1882(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1,t2);}

/* k2256 */
static void C_ccall f_2257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2257,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2269,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_cdr(((C_word*)t0)[5]);
/* extras.scm:355: out */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1984(t6,t4,t5,t1);}

/* k3128 */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3126 in k3123 in k3118 in pretty-print in k3111 in k979 in k977 in k975 */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3126,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3129,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:571: display */
t4=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[2]);}

/* f_2254 in k2221 in loop in k2213 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2254(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2254,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2275,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:352: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t4,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[2]);}

/* k3120 in k3118 in pretty-print in k3111 in k979 in k977 in k975 */
static void C_ccall f_3121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_1801 in write-string in k979 in k977 in k975 */
static void C_ccall f_1801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1801,2,t0,t1);}
/* extras.scm:245: def-port304 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* doread in read-lines in k979 in k977 in k975 */
static void C_ccall f_1294(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1294,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_fix(1000000000));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1304,a[2]=t5,a[3]=t2,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1304(t7,t1,C_SCHEME_END_OF_LIST,t3);}

/* pretty-print in k3111 in k979 in k977 in k975 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3115r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3115r(t0,t1,t2,t3);}}

static void C_ccall f_3115r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3119,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_3119(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3119(t5,*((C_word*)lf[21]+1));}}

/* k3111 in k979 in k977 in k975 */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3113,2,t0,t1);}
t2=C_mutate((C_word*)lf[111]+1 /* (set! pretty-print-width ...) */,t1);
t3=C_mutate((C_word*)lf[112]+1 /* (set! pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3115,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[114]+1 /* (set! pp ...) */,*((C_word*)lf[112]+1));
t5=C_mutate(&lf[115] /* (set! fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3136,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[123]+1 /* (set! fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3431,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[124]+1 /* (set! printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3437,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[125]+1 /* (set! sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3443,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[126]+1 /* (set! format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3449,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3490,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:651: register-feature! */
t11=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[130]);}

/* k3118 in pretty-print in k3111 in k979 in k977 in k975 */
static void C_fcall f_3119(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3119,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3121,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3124,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:571: pretty-print-width */
t4=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2268 in k2256 */
static void C_ccall f_2269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:353: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2216(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* randomize in k979 in k977 in k975 */
static void C_ccall f_1087(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1087r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1087r(t0,t1,t2);}}

static void C_ccall f_1087r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1091,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1103,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:60: current-seconds */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=C_i_check_exact_2(t4,lf[6]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_randomize(t4));}}

/* k2469 in k2457 in doloop454 in k2437 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:390: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* tail2 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2834,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t9,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2855,a[2]=((C_word*)t0)[5],a[3]=t12,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:493: indent */
t14=((C_word*)((C_word*)t0)[6])[1];
f_2531(t14,t13,t5,t4);}
else{
/* extras.scm:494: tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2869(t7,t1,t2,t3,t4);}}

/* wr-expr in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2006(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2006,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2013,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:308: read-macro? */
f_1886(t4,t2);}

/* k2480 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:394: ##sys#lambda-info->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(3,*((C_word*)lf[81]+1),t3,((C_word*)t0)[5]);}

/* k2488 in k2480 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:394: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2482 in k2480 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:395: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],lf[80],((C_word*)t0)[4]);}

/* k2587 in k2575 in k2573 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:423: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2002(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2002,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word)li31),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:323: wr-expr */
t9=t4;
f_2006(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:324: wr-lst */
t9=((C_word*)t6)[1];
f_2030(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:325: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1984(t9,t1,lf[52],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2141,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:326: vector->list */
t10=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:327: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1984(t9,t1,lf[55],t3);}
else{
/* extras.scm:327: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1984(t9,t1,lf[56],t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2162,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:328: ##sys#number? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[84]+1)))(3,*((C_word*)lf[84]+1),t9,t2);}}}}}}

/* k2457 in doloop454 in k2437 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2470,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:390: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),t3,((C_word*)t0)[7],C_fix(16));}

/* k977 in k975 */
static void C_ccall f_978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:37: register-feature! */
t3=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[132]);}

/* k975 */
static void C_ccall f_976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2816 in tail1 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:485: tail2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2834(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k3164 in k3143 in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:630: ##sys#print */
t2=*((C_word*)lf[58]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k3455 in format in k3111 in k979 in k977 in k975 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k2459 in k2457 in doloop454 in k2437 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2447(t3,((C_word*)t0)[4],t2);}

/* k1841 in k1839 in read-byte in k979 in k977 in k975 */
static void C_ccall f_1842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_eofp(t1))){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_character_code(t1)));}}

/* k1839 in read-byte in k979 in k977 in k975 */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:259: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[3]);}

/* read-file in k979 in k977 in k975 */
static void C_ccall f_982(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_982r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_982r(t0,t1,t2);}}

static void C_ccall f_982r(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a=C_alloc(10);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[3]+1):C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?((C_word*)t0)[2]:C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_SCHEME_FALSE:C_i_car(t10));
t13=C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_998,a[2]=t12,a[3]=t8,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1043,a[2]=t15,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:51: port? */
t17=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,t4);}

/* k979 in k977 in k975 */
static void C_ccall f_980(C_word c,C_word t0,C_word t1){
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
C_word ab[52],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_980,2,t0,t1);}
t2=*((C_word*)lf[0]+1);
t3=*((C_word*)lf[1]+1);
t4=C_mutate((C_word*)lf[2]+1 /* (set! read-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_982,a[2]=t2,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[6]+1 /* (set! randomize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1087,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[10]+1 /* (set! random ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1109,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[11]+1 /* (set! read-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1146,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[19]+1 /* (set! read-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1284,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[20]+1 /* (set! write-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1368,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1392,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[25]+1 /* (set! read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1523,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[26]+1 /* (set! ##sys#read-string/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1591,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[27]+1 /* (set! read-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1643,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[31]+1 /* (set! read-buffered ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1682,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[33]+1 /* (set! read-token ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1708,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[29]+1 /* (set! write-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1760,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[35]+1 /* (set! read-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1833,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[36]+1 /* (set! write-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1859,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[37] /* (set! generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1882,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3113,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:567: make-parameter */
t21=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t21+1)))(3,t21,t20,C_fix(79));}

/* k2819 in tail1 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:485: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2563(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* sprintf in k3111 in k979 in k977 in k975 */
static void C_ccall f_3443(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3443r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3443r(t0,t1,t2,t3);}}

static void C_ccall f_3443r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm:639: fprintf0 */
f_3136(t1,lf[125],C_SCHEME_FALSE,t2,t3);}

/* k2900 in k2877 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:505: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2002(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* format in k3111 in k979 in k977 in k975 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_3449r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3449r(t0,t1,t2,t3);}}

static void C_ccall f_3449r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word *a=C_alloc(12);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3456,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
if(C_truep(t6)){
if(C_truep(C_booleanp(t2))){
t7=*((C_word*)lf[124]+1);
C_apply(4,0,t1,*((C_word*)lf[124]+1),((C_word*)t4)[1]);}
else{
if(C_truep(C_i_stringp(t2))){
t7=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t8=C_set_block_item(t4,0,t7);
t9=*((C_word*)lf[125]+1);
t10=*((C_word*)lf[125]+1);
C_apply(4,0,t1,*((C_word*)lf[125]+1),((C_word*)t4)[1]);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3481,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:646: output-port? */
t8=*((C_word*)lf[128]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}}}
else{
t7=*((C_word*)lf[125]+1);
C_apply(4,0,t1,*((C_word*)lf[125]+1),((C_word*)t4)[1]);}}

/* read-byte in k979 in k977 in k975 */
static void C_ccall f_1833(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1833r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1833r(t0,t1,t2);}}

static void C_ccall f_1833r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[3]+1):C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1840,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:258: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t5,t4,C_SCHEME_TRUE,lf[35]);}

/* k1594 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1595,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[27]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:192: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t3,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1615,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:198: open-output-string */
t3=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##sys#read-string/port in k979 in k977 in k975 */
static void C_ccall f_1591(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1591,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1595,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:190: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t4,t3,C_SCHEME_TRUE,lf[27]);}

/* k3143 in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3144,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3165,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:630: get-output-string */
t5=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}
else{
/* extras.scm:628: get-output-string */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:582: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[122]+1)))(3,*((C_word*)lf[122]+1),t3,((C_word*)t0)[2]);}
else{
/* extras.scm:584: open-output-string */
t4=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3144,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3170(t6,t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_extras_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("extras_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(862)){
C_save(t1);
C_rereclaim2(862*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,133);
lf[0]=C_h_intern(&lf[0],4,"read");
lf[1]=C_h_intern(&lf[1],20,"call-with-input-file");
lf[2]=C_h_intern(&lf[2],9,"read-file");
lf[3]=C_h_intern(&lf[3],18,"\003sysstandard-input");
lf[4]=C_h_intern(&lf[4],16,"\003sysfast-reverse");
lf[5]=C_h_intern(&lf[5],5,"port\077");
lf[6]=C_h_intern(&lf[6],9,"randomize");
lf[7]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[8]=C_h_intern(&lf[8],11,"\003sysflo2fix");
lf[9]=C_h_intern(&lf[9],15,"current-seconds");
lf[10]=C_h_intern(&lf[10],6,"random");
lf[11]=C_h_intern(&lf[11],9,"read-line");
lf[12]=C_h_intern(&lf[12],13,"\003syssubstring");
lf[13]=C_h_intern(&lf[13],15,"\003sysread-char-0");
lf[14]=C_h_intern(&lf[14],9,"peek-char");
lf[15]=C_h_intern(&lf[15],17,"\003sysstring-append");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_h_intern(&lf[17],15,"\003sysmake-string");
lf[18]=C_h_intern(&lf[18],20,"\003syscheck-input-port");
lf[19]=C_h_intern(&lf[19],10,"read-lines");
lf[20]=C_h_intern(&lf[20],10,"write-line");
lf[21]=C_h_intern(&lf[21],19,"\003sysstandard-output");
lf[22]=C_h_intern(&lf[22],16,"\003syswrite-char-0");
lf[23]=C_h_intern(&lf[23],21,"\003syscheck-output-port");
lf[24]=C_h_intern(&lf[24],16,"\003sysread-string!");
lf[25]=C_h_intern(&lf[25],12,"read-string!");
lf[26]=C_h_intern(&lf[26],20,"\003sysread-string/port");
lf[27]=C_h_intern(&lf[27],11,"read-string");
lf[28]=C_h_intern(&lf[28],17,"get-output-string");
lf[29]=C_h_intern(&lf[29],12,"write-string");
lf[30]=C_h_intern(&lf[30],18,"open-output-string");
lf[31]=C_h_intern(&lf[31],13,"read-buffered");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[33]=C_h_intern(&lf[33],10,"read-token");
lf[34]=C_h_intern(&lf[34],15,"\003syspeek-char-0");
lf[35]=C_h_intern(&lf[35],9,"read-byte");
lf[36]=C_h_intern(&lf[36],10,"write-byte");
lf[38]=C_h_intern(&lf[38],5,"quote");
lf[39]=C_h_intern(&lf[39],10,"quasiquote");
lf[40]=C_h_intern(&lf[40],7,"unquote");
lf[41]=C_h_intern(&lf[41],16,"unquote-splicing");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001`");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\002,@");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\003 . ");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\002()");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\005#!eof");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[54]=C_h_intern(&lf[54],12,"vector->list");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\002#t");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[57]=C_h_intern(&lf[57],18,"\003sysnumber->string");
lf[58]=C_h_intern(&lf[58],9,"\003sysprint");
lf[59]=C_h_intern(&lf[59],21,"\003sysprocedure->string");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376B\000\000\002\134t\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376B\000\000\002\134n\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376B\000\000\002\134r\376\377\016");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\001x");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001u");
lf[67]=C_h_intern(&lf[67],9,"char-name");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002#\134");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\016#<unspecified>");
lf[70]=C_h_intern(&lf[70],19,"\003syspointer->string");
lf[71]=C_h_intern(&lf[71],28,"\003sysarbitrary-unbound-symbol");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\020#<unbound value>");
lf[73]=C_h_intern(&lf[73],19,"\003sysuser-print-hook");
lf[74]=C_h_intern(&lf[74],13,"string-append");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\007#<port ");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\003#${");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[81]=C_h_intern(&lf[81],23,"\003syslambda-info->string");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\016#<lambda info ");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\025#<unprintable object>");
lf[84]=C_h_intern(&lf[84],11,"\003sysnumber\077");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[87]=C_h_intern(&lf[87],21,"reverse-string-append");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[89]=C_h_intern(&lf[89],3,"max");
lf[90]=C_h_intern(&lf[90],28,"\003syssymbol->qualified-string");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[98]=C_h_intern(&lf[98],6,"lambda");
lf[99]=C_h_intern(&lf[99],2,"if");
lf[100]=C_h_intern(&lf[100],4,"set!");
lf[101]=C_h_intern(&lf[101],4,"cond");
lf[102]=C_h_intern(&lf[102],4,"case");
lf[103]=C_h_intern(&lf[103],3,"and");
lf[104]=C_h_intern(&lf[104],2,"or");
lf[105]=C_h_intern(&lf[105],3,"let");
lf[106]=C_h_intern(&lf[106],5,"begin");
lf[107]=C_h_intern(&lf[107],2,"do");
lf[108]=C_h_intern(&lf[108],4,"let\052");
lf[109]=C_h_intern(&lf[109],6,"letrec");
lf[110]=C_h_intern(&lf[110],6,"define");
lf[111]=C_h_intern(&lf[111],18,"pretty-print-width");
lf[112]=C_h_intern(&lf[112],12,"pretty-print");
lf[113]=C_h_intern(&lf[113],7,"display");
lf[114]=C_h_intern(&lf[114],2,"pp");
lf[116]=C_h_intern(&lf[116],9,"\003syserror");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[118]=C_h_intern(&lf[118],5,"write");
lf[119]=C_h_intern(&lf[119],16,"\003sysflush-output");
lf[120]=C_h_intern(&lf[120],7,"newline");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\037illegal format-string character");
lf[122]=C_h_intern(&lf[122],13,"\003systty-port\077");
lf[123]=C_h_intern(&lf[123],7,"fprintf");
lf[124]=C_h_intern(&lf[124],6,"printf");
lf[125]=C_h_intern(&lf[125],7,"sprintf");
lf[126]=C_h_intern(&lf[126],6,"format");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\023illegal destination");
lf[128]=C_h_intern(&lf[128],12,"output-port\077");
lf[129]=C_h_intern(&lf[129],17,"register-feature!");
lf[130]=C_h_intern(&lf[130],7,"srfi-28");
lf[131]=C_h_intern(&lf[131],14,"make-parameter");
lf[132]=C_h_intern(&lf[132],6,"extras");
C_register_lf2(lf,133,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_976,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* fprintf0 in k3111 in k979 in k977 in k975 */
static void C_fcall f_3136(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3136,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3140,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
/* extras.scm:581: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),t6,t3,C_SCHEME_TRUE,t2);}
else{
t7=t6;
f_3140(2,t7,C_SCHEME_UNDEFINED);}}

/* read-string in k979 in k977 in k975 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_1643r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1643r(t0,t1,t2);}}

static void C_ccall f_1643r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[3]+1):C_i_car(t6));
if(C_truep(C_i_nullp(t6))){
/* extras.scm:210: ##sys#read-string/port */
t9=*((C_word*)lf[26]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,t4,t8);}
else{
t9=C_i_cdr(t6);
/* extras.scm:210: ##sys#read-string/port */
t10=*((C_word*)lf[26]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,t4,t8);}}

/* pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2497(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word ab[152],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2497,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2501,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2531,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2563,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li42),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2640,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t19,a[7]=t13,a[8]=t39,a[9]=t15,a[10]=((C_word*)t0)[7],a[11]=((C_word)li43),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2698,a[2]=t17,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2721,a[2]=t17,a[3]=((C_word*)t0)[2],a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2730,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2795,a[2]=t9,a[3]=t7,a[4]=t17,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2918,a[2]=t15,a[3]=t11,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2924,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2930,a[2]=t19,a[3]=t11,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2936,a[2]=t13,a[3]=t21,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=t19,a[3]=t11,a[4]=t21,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2948,a[2]=t13,a[3]=t11,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2954,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2973,a[2]=t19,a[3]=t11,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2979,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2988,a[2]=t23,a[3]=t25,a[4]=t27,a[5]=t29,a[6]=t31,a[7]=t33,a[8]=t35,a[9]=t37,a[10]=((C_word)li61),tmp=(C_word)a,a+=11,tmp));
/* extras.scm:558: pr */
t58=((C_word*)t9)[1];
f_2563(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* write-string in k979 in k977 in k975 */
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_1760r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1760r(t0,t1,t2,t3);}}

static void C_ccall f_1760r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(12);
t4=C_i_check_string_2(t2,lf[29]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1765,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1797,a[2]=t5,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1801,a[2]=t6,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* extras.scm:245: def-n303 */
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t1);}
else{
t8=C_i_car(t3);
t9=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* extras.scm:245: def-port304 */
t10=t6;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* extras.scm:245: body301 */
t12=t5;
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,t8,t10);}}}

/* f_1765 in write-string in k979 in k977 in k975 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1765,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1768,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:246: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),t4,t3,C_SCHEME_TRUE,lf[29]);}

/* pp-cond in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2936,5,t0,t1,t2,t3,t4);}
/* extras.scm:519: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2698(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-if in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2930,5,t0,t1,t2,t3,t4);}
/* extras.scm:516: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2795(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* k3287 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:609: display */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k1767 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1768,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_check_exact_2(((C_word*)t0)[2],lf[29]):C_SCHEME_UNDEFINED);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_slot(t3,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1778,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1781,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
t7=C_block_size(((C_word*)t0)[5]);
t8=t6;
f_1781(t8,C_fixnum_lessp(((C_word*)t0)[2],t7));}
else{
t7=t6;
f_1781(t7,C_SCHEME_FALSE);}}

/* k2392 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:374: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3489 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* pp-and in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2948,5,t0,t1,t2,t3,t4);}
/* extras.scm:525: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2698(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* k1414 in loop in k1400 in read-string! in k979 in k977 in k975 */
static void C_ccall f_1415(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(5));
t3=C_fixnum_plus(t2,t1);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t3);
t5=C_eqp(t1,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_i_not(((C_word*)t0)[5]);
t7=(C_truep(t6)?t6:C_fixnum_lessp(t1,((C_word*)t0)[5]));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[6],t1);
t9=(C_truep(((C_word*)t0)[5])?C_fixnum_difference(((C_word*)t0)[5],t1):C_SCHEME_FALSE);
t10=C_fixnum_plus(((C_word*)t0)[3],t1);
/* extras.scm:162: loop */
t11=((C_word*)((C_word*)t0)[7])[1];
f_1411(t11,((C_word*)t0)[4],t8,t9,t10);}
else{
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fixnum_plus(t1,((C_word*)t0)[3]));}}}

/* k3272 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:608: display */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* pp-case in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2942,5,t0,t1,t2,t3,t4);}
/* extras.scm:522: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2795(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* loop in k1400 in read-string! in k979 in k977 in k975 */
static void C_fcall f_1411(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1411,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1415,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:157: rdstring */
t6=((C_word*)t0)[4];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t5,((C_word*)t0)[2],t3,((C_word*)t0)[5],t2);}

/* k3275 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:608: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),((C_word*)t0)[2],t1,C_fix(2));}

/* k2359 in k2324 in k2322 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:371: number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[5],C_fix(16));}

/* k2365 in k2359 in k2324 in k2322 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:371: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3479 in format in k3111 in k979 in k977 in k975 */
static void C_ccall f_3481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3481,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=*((C_word*)lf[123]+1);
C_apply(4,0,((C_word*)t0)[4],*((C_word*)lf[123]+1),((C_word*)((C_word*)t0)[3])[1]);}
else{
/* extras.scm:648: ##sys#error */
t2=*((C_word*)lf[116]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[126],lf[127],((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}}

/* k1779 in k1767 */
static void C_fcall f_1781(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* extras.scm:251: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
/* extras.scm:245: g312 */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[6],((C_word*)t0)[7],t2);}}

/* pp-expr-list in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2918,5,t0,t1,t2,t3,t4);}
/* extras.scm:510: pp-list */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2721(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* k2915 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:501: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2002(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2573 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2574,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2576,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2608,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:417: generic-write */
f_1882(t3,((C_word*)t0)[6],((C_word*)t0)[11],C_SCHEME_FALSE,t4);}

/* k2575 in k2573 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2576,2,t0,t1);}
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:423: reverse-string-append */
t3=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* extras.scm:425: pp-pair */
t2=((C_word*)t0)[8];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[9]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:426: vector->list */
t3=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}}}

/* k1400 in read-string! in k979 in k977 in k975 */
static void C_fcall f_1401(C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1401,NULL,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(7));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1411,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1411(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],C_fix(0));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1463,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1463(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],C_fix(0));}}

/* k3328 in k3324 in k3322 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:627: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3204(t2,((C_word*)t0)[3]);}

/* k3324 in k3322 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3325,2,t0,t1);}
t2=C_i_check_list_2(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3329,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:616: rec */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3170(t4,t3,((C_word*)t0)[6],t1);}

/* k3322 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:614: next */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3186(t3,t2);}

/* k2377 in k2324 in k2322 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:372: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1688 in read-buffered in k979 in k977 in k975 */
static void C_ccall f_1689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(9));
if(C_truep(t3)){
/* extras.scm:223: rb */
t4=t3;
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[32]);}}

/* pp-lambda in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2924,5,t0,t1,t2,t3,t4);}
/* extras.scm:513: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2795(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* k1777 in k1767 */
static void C_ccall f_1778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:245: g312 */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2345 in k2324 in k2322 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:368: number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[5],C_fix(16));}

/* read-buffered in k979 in k977 in k975 */
static void C_ccall f_1682(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1682r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1682r(t0,t1,t2);}}

static void C_ccall f_1682r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[3]+1):C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1689,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:220: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t5,t4,C_SCHEME_TRUE,lf[31]);}

/* k3305 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:610: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),((C_word*)t0)[2],t1,C_fix(16));}

/* k3302 in loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:610: display */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2140 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:326: out */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1984(t3,t2,lf[53],((C_word*)t0)[5]);}

/* k2143 in k2140 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:326: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2030(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_1797 in write-string in k979 in k977 in k975 */
static void C_ccall f_1797(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1797,3,t0,t1,t2);}
/* extras.scm:245: body301 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[21]+1));}

/* write-line in k979 in k977 in k975 */
static void C_ccall f_1368(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1368r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1368r(t0,t1,t2,t3);}}

static void C_ccall f_1368r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[21]+1):C_slot(t3,C_fix(0)));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1374,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:140: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),t5,t4,C_SCHEME_TRUE,lf[20]);}

/* k2441 in k2437 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:391: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],lf[77],((C_word*)t0)[4]);}

/* doloop454 in k2437 in k2422 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2447(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2447,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_subbyte(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2458,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_lessp(t3,C_fix(16)))){
/* extras.scm:389: out */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1984(t5,t4,lf[78],((C_word*)t0)[6]);}
else{
t5=t4;
f_2458(2,t5,C_SCHEME_UNDEFINED);}}}

/* k1379 in k1373 in write-line in k979 in k977 in k975 */
static void C_ccall f_1381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:143: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k2175 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:331: ##sys#print */
t3=*((C_word*)lf[58]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,t1);}

/* k2177 in k2175 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:332: get-output-string */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k2011 in wr-expr in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2013,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2022,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=f_1945(((C_word*)t0)[2]);
/* extras.scm:309: out */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1984(t6,t4,t5,((C_word*)t0)[7]);}
else{
/* extras.scm:310: wr-lst */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2030(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k1373 in write-line in k979 in k977 in k975 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1374,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[2],lf[20]);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_slot(t3,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:136: g162 */
t6=t4;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2701 in pp-call in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2702,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:452: pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2730(t5,((C_word*)t0)[5],t3,t1,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2183 in k2177 in k2175 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:332: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2021 in k2011 in wr-expr in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:309: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2002(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2602 in k2575 in k2573 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:426: out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1984(t3,t2,lf[88],((C_word*)t0)[7]);}

/* k1228 in k1220 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:105: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[4]);}

/* k1220 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1221,2,t0,t1);}
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:104: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[5]);}
else{
/* extras.scm:106: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[4]);}}

/* ##sys#read-string! in k979 in k977 in k975 */
static void C_ccall f_1392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1392,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_eqp(t2,C_fix(0));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fix(0));}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1401,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t6,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(t4,C_fix(6)))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1517,a[2]=t3,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:152: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t9,t4);}
else{
t9=t8;
f_1401(t9,C_SCHEME_UNDEFINED);}}}

/* k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2162(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2162,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:328: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t2,((C_word*)t0)[5]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:330: open-output-string */
t3=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:333: ##sys#procedure->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t2,((C_word*)t0)[5]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:335: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2214,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:336: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1984(t3,t2,lf[63],((C_word*)t0)[4]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,C_fix(1),t3);}
else{
t2=C_fix(C_character_code(((C_word*)t0)[5]));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:362: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1984(t4,t3,lf[68],((C_word*)t0)[4]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[5]))){
/* extras.scm:373: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],lf[69],((C_word*)t0)[4]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:374: ##sys#pointer->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(3,*((C_word*)lf[70]+1),t2,((C_word*)t0)[5]);}
else{
t2=C_slot(lf[71],C_fix(0));
t3=C_eqp(((C_word*)t0)[5],t2);
if(C_truep(t3)){
/* extras.scm:376: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1984(t4,((C_word*)t0)[3],lf[72],((C_word*)t0)[4]);}
else{
if(C_truep(C_structurep(((C_word*)t0)[5]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:378: open-output-string */
t5=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:381: port? */
t5=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}}}}}}}}}

/* k2167 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:328: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* f_2608 in k2573 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2608,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_string_length(t2);
t6=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_greaterp(((C_word*)((C_word*)t0)[3])[1],C_fix(0)));}

/* k2605 in k2602 in k2575 in k2573 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:426: pp-list */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2721(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k2292 in k2221 in loop in k2213 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:357: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],lf[62],t1);}

/* k2351 in k2345 in k2324 in k2322 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:368: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2736(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2736,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1)):C_fix(0));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=t2;
t10=C_u_i_car(t9);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2760,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t10,a[5]=t7,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:468: indent */
t12=((C_word*)((C_word*)t0)[6])[1];
f_2531(t12,t11,((C_word*)t0)[7],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:470: out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_1984(t4,t1,lf[93],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2781,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2790,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2793,a[2]=((C_word*)t0)[8],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:474: indent */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2531(t8,t7,((C_word*)t0)[7],t3);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2295 in k2221 in loop in k2213 in k2160 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:358: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2067 in loop in k2044 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:318: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2047(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2730(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2730,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2736,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word)li46),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_2736(t10,t1,t2,t3);}

/* k1004 in slurp in read-file in k979 in k977 in k975 */
static void C_ccall f_1005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1005,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1007,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1007(t5,((C_word*)t0)[5],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* doloop84 in k1004 in slurp in read-file in k979 in k977 in k975 */
static void C_fcall f_1007(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1007,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm:50: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),t1,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1025,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:47: reader */
t8=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[5]);}}

/* wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2030(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2030,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t7=t2;
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2099,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:315: out */
t10=((C_word*)((C_word*)t0)[3])[1];
f_1984(t10,t9,lf[50],t3);}
else{
t7=t6;
f_2045(2,t7,C_SCHEME_FALSE);}}
else{
/* extras.scm:321: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1984(t4,t1,lf[51],t3);}}

/* out in generic-write in k979 in k977 in k975 */
static void C_fcall f_1984(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1984,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1994,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:303: output */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2718 in pp-call in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:450: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2002(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2274 */
static void C_ccall f_2275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:352: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1984(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* loop in k2044 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2047(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2047,NULL,4,t0,t1,t2,t3);}
t4=t3;
if(C_truep(t4)){
if(C_truep(C_i_pairp(t2))){
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2068,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=t2;
t9=C_u_i_car(t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2073,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:318: out */
t11=((C_word*)((C_word*)t0)[4])[1];
f_1984(t11,t10,lf[46],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:319: out */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1984(t5,t1,lf[47],t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2088,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2091,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:320: out */
t7=((C_word*)((C_word*)t0)[4])[1];
f_1984(t7,t6,lf[49],t3);}}}
else{
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k2044 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2045,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2047,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2047(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2724 in pp-list in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:459: pp-down */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2730(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2090 in loop in k2044 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:320: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2002(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-list in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2721(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2721,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2725,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:458: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1984(t7,t6,lf[92],t3);}

/* k2098 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:315: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2002(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1992 in out in generic-write in k979 in k977 in k975 */
static void C_ccall f_1994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1994,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_plus(&a,2,((C_word*)t0)[4],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1102 in randomize in k979 in k977 in k975 */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1103,2,t0,t1);}
t2=C_a_i_flonum_quotient(&a,2,t1,lf[7]);
/* extras.scm:60: ##sys#flo2fix */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(3,*((C_word*)lf[8]+1),((C_word*)t0)[2],t2);}

/* random in k979 in k977 in k975 */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1109,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[10]);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}
else{
t5=C_random_fixnum(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* loop in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_fcall f_3204(C_word t0,C_word t1){
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
C_word *a;
loop:
a=C_alloc(11);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3204,NULL,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=f_3178(((C_word*)((C_word*)t0)[4])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3215,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=f_3178(((C_word*)((C_word*)t0)[4])[1]);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3237,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:605: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3186(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3249,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:606: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3186(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3261,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:607: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3186(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3273,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3276,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:608: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3186(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3288,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3291,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:609: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3186(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3303,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3306,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:610: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3186(t10,t9);
case C_make_character(33):
/* extras.scm:611: ##sys#flush-output */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[119]+1)))(3,*((C_word*)lf[119]+1),t3,((C_word*)t0)[6]);
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3323,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:613: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3186(t9,t8);
case C_make_character(126):
/* extras.scm:617: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t3,C_make_character(126),((C_word*)t0)[6]);
default:
t8=C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm:618: newline */
t10=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t3,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=f_3178(((C_word*)((C_word*)t0)[4])[1]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t12=f_3363(t11,t10);
/* extras.scm:627: loop */
t25=t1;
t1=t25;
goto loop;}
else{
/* extras.scm:625: ##sys#error */
t10=*((C_word*)lf[116]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t3,((C_word*)t0)[8],lf[121],t6);}}}}
else{
/* extras.scm:626: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t3,t2,((C_word*)t0)[6]);}}}

/* next in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_fcall f_3186(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3186,NULL,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:595: ##sys#error */
t2=*((C_word*)lf[116]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],lf[117]);}
else{
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static void C_fcall f_3170(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3170,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_check_string_2(t2,((C_word*)t0)[2]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_block_size(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3178,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3186,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3204,a[2]=t7,a[3]=t8,a[4]=t10,a[5]=t16,a[6]=((C_word*)t0)[3],a[7]=t12,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[4],a[10]=((C_word)li68),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_3204(t18,t1);}

/* fetch in rec in k3141 in k3139 in fprintf0 in k3111 in k979 in k977 in k975 */
static C_word C_fcall f_3178(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t1=C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
return(t1);}

/* k1344 in read-lines in k979 in k977 in k975 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:133: doread */
t2=((C_word*)t0)[2];
f_1294(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* read-line in k979 in k977 in k975 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1146r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1146r(t0,t1,t2);}}

static void C_ccall f_1146r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):*((C_word*)lf[3]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1154,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t6=C_i_cdr(t2);
t7=C_i_pairp(t6);
t8=t5;
f_1154(t8,(C_truep(t7)?C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t6=t5;
f_1154(t6,C_SCHEME_FALSE);}}

/* k1468 in k1466 in loop in k1400 in read-string! in k979 in k977 in k975 */
static void C_fcall f_1470(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[5],t1);
t6=(C_truep(((C_word*)t0)[4])?C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t7=C_fixnum_plus(((C_word*)t0)[2],t1);
/* extras.scm:173: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1463(t8,((C_word*)t0)[3],t5,t6,t7);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_plus(t1,((C_word*)t0)[2]));}}}

/* loop in k1400 in read-string! in k979 in k977 in k975 */
static void C_fcall f_1463(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1463,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1467,a[2]=t4,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:165: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t5,((C_word*)t0)[4]);}

/* k1466 in loop in k1400 in read-string! in k979 in k977 in k975 */
static void C_ccall f_1467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1470(t3,C_fix(0));}
else{
t3=C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[5],t1);
t4=t2;
f_1470(t4,C_fix(1));}}

/* k1024 in doloop84 in k1004 in slurp in read-file in k979 in k977 in k975 */
static void C_ccall f_1025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1025,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[5])[1];
f_1007(t4,((C_word*)t0)[6],t1,t2,t3);}

/* f_1162 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1162,3,t0,t1,t2);}
/* extras.scm:87: rl */
t3=t2;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2877 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2878,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:505: out */
t7=((C_word*)((C_word*)t0)[8])[1];
f_1984(t7,t6,lf[96],t1);}
else{
t3=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(2));
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:507: tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2799(t5,((C_word*)t0)[6],((C_word*)t0)[3],t3,t1,t4);}}

/* indent in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2531(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2531,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep(C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t5,C_fix(1),C_make_character(10));}
else{
t4=C_a_i_minus(&a,2,t2,t3);
/* extras.scm:411: spaces */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2501(t5,t1,t4,t3);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1153 in read-line in k979 in k977 in k975 */
static void C_fcall f_1154(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1154,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1156,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:86: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[11]);}

/* k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1156,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(8));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:87: g118 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[4],t3);}
else{
t4=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:C_fix(256));
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:90: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t6,((C_word*)t5)[1]);}}

/* k2888 in k2877 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2889,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:506: tail1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2799(t4,((C_word*)t0)[4],((C_word*)t0)[5],t2,t1,t3);}

/* k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1189,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* extras.scm:98: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[2]);}}
else{
t2=t1;
switch(t2){
case C_make_character(10):
/* extras.scm:100: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[2]);
case C_make_character(13):
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1221,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:102: peek-char */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);
default:
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1237,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],((C_word*)((C_word*)t0)[7])[1]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1250,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1257,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:110: make-string */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)((C_word*)t0)[7])[1]);}
else{
t4=t3;
f_1237(t4,C_SCHEME_UNDEFINED);}}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[234] = {
{"f_2852:extras_2escm",(void*)f_2852},
{"f_2855:extras_2escm",(void*)f_2855},
{"f_1708:extras_2escm",(void*)f_1708},
{"f_1868:extras_2escm",(void*)f_1868},
{"f_1172:extras_2escm",(void*)f_1172},
{"f_1177:extras_2escm",(void*)f_1177},
{"f_1882:extras_2escm",(void*)f_1882},
{"f_2869:extras_2escm",(void*)f_2869},
{"f_1523:extras_2escm",(void*)f_1523},
{"f_1859:extras_2escm",(void*)f_1859},
{"f_2523:extras_2escm",(void*)f_2523},
{"f_2529:extras_2escm",(void*)f_2529},
{"f_1722:extras_2escm",(void*)f_1722},
{"f_1237:extras_2escm",(void*)f_1237},
{"f_1886:extras_2escm",(void*)f_1886},
{"f_1726:extras_2escm",(void*)f_1726},
{"f_2501:extras_2escm",(void*)f_2501},
{"f_1715:extras_2escm",(void*)f_1715},
{"f_1717:extras_2escm",(void*)f_1717},
{"f_2640:extras_2escm",(void*)f_2640},
{"f_2647:extras_2escm",(void*)f_2647},
{"f_2196:extras_2escm",(void*)f_2196},
{"f_1740:extras_2escm",(void*)f_1740},
{"f_2973:extras_2escm",(void*)f_2973},
{"f_1257:extras_2escm",(void*)f_1257},
{"f_2214:extras_2escm",(void*)f_2214},
{"f_2979:extras_2escm",(void*)f_2979},
{"f_1091:extras_2escm",(void*)f_1091},
{"f_2656:extras_2escm",(void*)f_2656},
{"f_1734:extras_2escm",(void*)f_1734},
{"f_1732:extras_2escm",(void*)f_1732},
{"f_1250:extras_2escm",(void*)f_1250},
{"f_2223:extras_2escm",(void*)f_2223},
{"f_2988:extras_2escm",(void*)f_2988},
{"f_2216:extras_2escm",(void*)f_2216},
{"f_1043:extras_2escm",(void*)f_1043},
{"f_2438:extras_2escm",(void*)f_2438},
{"f_1517:extras_2escm",(void*)f_1517},
{"f_1284:extras_2escm",(void*)f_1284},
{"f_2954:extras_2escm",(void*)f_2954},
{"f_3437:extras_2escm",(void*)f_3437},
{"f_3431:extras_2escm",(void*)f_3431},
{"f_2430:extras_2escm",(void*)f_2430},
{"f_3215:extras_2escm",(void*)f_3215},
{"f_3420:extras_2escm",(void*)f_3420},
{"f_2073:extras_2escm",(void*)f_2073},
{"f_2418:extras_2escm",(void*)f_2418},
{"f_1535:extras_2escm",(void*)f_1535},
{"f_2317:extras_2escm",(void*)f_2317},
{"f_1637:extras_2escm",(void*)f_1637},
{"f_2412:extras_2escm",(void*)f_2412},
{"f_2088:extras_2escm",(void*)f_2088},
{"f_2410:extras_2escm",(void*)f_2410},
{"f_2698:extras_2escm",(void*)f_2698},
{"f_2693:extras_2escm",(void*)f_2693},
{"f_2424:extras_2escm",(void*)f_2424},
{"f_3261:extras_2escm",(void*)f_3261},
{"f_2998:extras_2escm",(void*)f_2998},
{"f_3104:extras_2escm",(void*)f_3104},
{"f_3101:extras_2escm",(void*)f_3101},
{"f_1604:extras_2escm",(void*)f_1604},
{"f_1602:extras_2escm",(void*)f_1602},
{"f_3363:extras_2escm",(void*)f_3363},
{"f_3249:extras_2escm",(void*)f_3249},
{"f_2323:extras_2escm",(void*)f_2323},
{"f_2329:extras_2escm",(void*)f_2329},
{"f_2325:extras_2escm",(void*)f_2325},
{"f_1626:extras_2escm",(void*)f_1626},
{"f_1622:extras_2escm",(void*)f_1622},
{"f_3237:extras_2escm",(void*)f_3237},
{"f_1617:extras_2escm",(void*)f_1617},
{"f_1615:extras_2escm",(void*)f_1615},
{"f_1913:extras_2escm",(void*)f_1913},
{"f_3291:extras_2escm",(void*)f_3291},
{"f_1304:extras_2escm",(void*)f_1304},
{"f_1945:extras_2escm",(void*)f_1945},
{"f_2784:extras_2escm",(void*)f_2784},
{"f_2781:extras_2escm",(void*)f_2781},
{"f_998:extras_2escm",(void*)f_998},
{"f_2669:extras_2escm",(void*)f_2669},
{"f_1316:extras_2escm",(void*)f_1316},
{"f_2755:extras_2escm",(void*)f_2755},
{"f_2242:extras_2escm",(void*)f_2242},
{"f_2248:extras_2escm",(void*)f_2248},
{"f_2245:extras_2escm",(void*)f_2245},
{"f_2760:extras_2escm",(void*)f_2760},
{"f_2553:extras_2escm",(void*)f_2553},
{"f_2563:extras_2escm",(void*)f_2563},
{"f_2790:extras_2escm",(void*)f_2790},
{"f_2799:extras_2escm",(void*)f_2799},
{"f_2793:extras_2escm",(void*)f_2793},
{"f_2795:extras_2escm",(void*)f_2795},
{"f_2547:extras_2escm",(void*)f_2547},
{"f_3124:extras_2escm",(void*)f_3124},
{"f_2257:extras_2escm",(void*)f_2257},
{"f_3129:extras_2escm",(void*)f_3129},
{"f_3126:extras_2escm",(void*)f_3126},
{"f_2254:extras_2escm",(void*)f_2254},
{"f_3121:extras_2escm",(void*)f_3121},
{"f_1801:extras_2escm",(void*)f_1801},
{"f_1294:extras_2escm",(void*)f_1294},
{"f_3115:extras_2escm",(void*)f_3115},
{"f_3113:extras_2escm",(void*)f_3113},
{"f_3119:extras_2escm",(void*)f_3119},
{"f_2269:extras_2escm",(void*)f_2269},
{"f_1087:extras_2escm",(void*)f_1087},
{"f_2470:extras_2escm",(void*)f_2470},
{"f_2834:extras_2escm",(void*)f_2834},
{"f_2006:extras_2escm",(void*)f_2006},
{"f_2481:extras_2escm",(void*)f_2481},
{"f_2489:extras_2escm",(void*)f_2489},
{"f_2483:extras_2escm",(void*)f_2483},
{"f_2588:extras_2escm",(void*)f_2588},
{"f_2002:extras_2escm",(void*)f_2002},
{"f_2458:extras_2escm",(void*)f_2458},
{"f_978:extras_2escm",(void*)f_978},
{"f_976:extras_2escm",(void*)f_976},
{"f_2817:extras_2escm",(void*)f_2817},
{"f_3165:extras_2escm",(void*)f_3165},
{"f_3456:extras_2escm",(void*)f_3456},
{"f_2461:extras_2escm",(void*)f_2461},
{"f_1842:extras_2escm",(void*)f_1842},
{"f_1840:extras_2escm",(void*)f_1840},
{"f_982:extras_2escm",(void*)f_982},
{"f_980:extras_2escm",(void*)f_980},
{"f_2820:extras_2escm",(void*)f_2820},
{"f_3443:extras_2escm",(void*)f_3443},
{"f_2901:extras_2escm",(void*)f_2901},
{"f_3449:extras_2escm",(void*)f_3449},
{"f_1833:extras_2escm",(void*)f_1833},
{"f_1595:extras_2escm",(void*)f_1595},
{"f_1591:extras_2escm",(void*)f_1591},
{"f_3144:extras_2escm",(void*)f_3144},
{"f_3140:extras_2escm",(void*)f_3140},
{"f_3142:extras_2escm",(void*)f_3142},
{"toplevel:extras_2escm",(void*)C_extras_toplevel},
{"f_3136:extras_2escm",(void*)f_3136},
{"f_1643:extras_2escm",(void*)f_1643},
{"f_2497:extras_2escm",(void*)f_2497},
{"f_1760:extras_2escm",(void*)f_1760},
{"f_1765:extras_2escm",(void*)f_1765},
{"f_2936:extras_2escm",(void*)f_2936},
{"f_2930:extras_2escm",(void*)f_2930},
{"f_3288:extras_2escm",(void*)f_3288},
{"f_1768:extras_2escm",(void*)f_1768},
{"f_2393:extras_2escm",(void*)f_2393},
{"f_3490:extras_2escm",(void*)f_3490},
{"f_2948:extras_2escm",(void*)f_2948},
{"f_1415:extras_2escm",(void*)f_1415},
{"f_3273:extras_2escm",(void*)f_3273},
{"f_2942:extras_2escm",(void*)f_2942},
{"f_1411:extras_2escm",(void*)f_1411},
{"f_3276:extras_2escm",(void*)f_3276},
{"f_2360:extras_2escm",(void*)f_2360},
{"f_2366:extras_2escm",(void*)f_2366},
{"f_3481:extras_2escm",(void*)f_3481},
{"f_1781:extras_2escm",(void*)f_1781},
{"f_2918:extras_2escm",(void*)f_2918},
{"f_2916:extras_2escm",(void*)f_2916},
{"f_2574:extras_2escm",(void*)f_2574},
{"f_2576:extras_2escm",(void*)f_2576},
{"f_1401:extras_2escm",(void*)f_1401},
{"f_3329:extras_2escm",(void*)f_3329},
{"f_3325:extras_2escm",(void*)f_3325},
{"f_3323:extras_2escm",(void*)f_3323},
{"f_2378:extras_2escm",(void*)f_2378},
{"f_1689:extras_2escm",(void*)f_1689},
{"f_2924:extras_2escm",(void*)f_2924},
{"f_1778:extras_2escm",(void*)f_1778},
{"f_2346:extras_2escm",(void*)f_2346},
{"f_1682:extras_2escm",(void*)f_1682},
{"f_3306:extras_2escm",(void*)f_3306},
{"f_3303:extras_2escm",(void*)f_3303},
{"f_2141:extras_2escm",(void*)f_2141},
{"f_2144:extras_2escm",(void*)f_2144},
{"f_1797:extras_2escm",(void*)f_1797},
{"f_1368:extras_2escm",(void*)f_1368},
{"f_2442:extras_2escm",(void*)f_2442},
{"f_2447:extras_2escm",(void*)f_2447},
{"f_1381:extras_2escm",(void*)f_1381},
{"f_2176:extras_2escm",(void*)f_2176},
{"f_2178:extras_2escm",(void*)f_2178},
{"f_2013:extras_2escm",(void*)f_2013},
{"f_1374:extras_2escm",(void*)f_1374},
{"f_2702:extras_2escm",(void*)f_2702},
{"f_2184:extras_2escm",(void*)f_2184},
{"f_2022:extras_2escm",(void*)f_2022},
{"f_2603:extras_2escm",(void*)f_2603},
{"f_1229:extras_2escm",(void*)f_1229},
{"f_1221:extras_2escm",(void*)f_1221},
{"f_1392:extras_2escm",(void*)f_1392},
{"f_2162:extras_2escm",(void*)f_2162},
{"f_2168:extras_2escm",(void*)f_2168},
{"f_2608:extras_2escm",(void*)f_2608},
{"f_2606:extras_2escm",(void*)f_2606},
{"f_2293:extras_2escm",(void*)f_2293},
{"f_2352:extras_2escm",(void*)f_2352},
{"f_2736:extras_2escm",(void*)f_2736},
{"f_2296:extras_2escm",(void*)f_2296},
{"f_2068:extras_2escm",(void*)f_2068},
{"f_2730:extras_2escm",(void*)f_2730},
{"f_1005:extras_2escm",(void*)f_1005},
{"f_1007:extras_2escm",(void*)f_1007},
{"f_2030:extras_2escm",(void*)f_2030},
{"f_1984:extras_2escm",(void*)f_1984},
{"f_2719:extras_2escm",(void*)f_2719},
{"f_2275:extras_2escm",(void*)f_2275},
{"f_2047:extras_2escm",(void*)f_2047},
{"f_2045:extras_2escm",(void*)f_2045},
{"f_2725:extras_2escm",(void*)f_2725},
{"f_2091:extras_2escm",(void*)f_2091},
{"f_2721:extras_2escm",(void*)f_2721},
{"f_2099:extras_2escm",(void*)f_2099},
{"f_1994:extras_2escm",(void*)f_1994},
{"f_1103:extras_2escm",(void*)f_1103},
{"f_1109:extras_2escm",(void*)f_1109},
{"f_3204:extras_2escm",(void*)f_3204},
{"f_3186:extras_2escm",(void*)f_3186},
{"f_3170:extras_2escm",(void*)f_3170},
{"f_3178:extras_2escm",(void*)f_3178},
{"f_1345:extras_2escm",(void*)f_1345},
{"f_1146:extras_2escm",(void*)f_1146},
{"f_1470:extras_2escm",(void*)f_1470},
{"f_1463:extras_2escm",(void*)f_1463},
{"f_1467:extras_2escm",(void*)f_1467},
{"f_1025:extras_2escm",(void*)f_1025},
{"f_1162:extras_2escm",(void*)f_1162},
{"f_2878:extras_2escm",(void*)f_2878},
{"f_2531:extras_2escm",(void*)f_2531},
{"f_1154:extras_2escm",(void*)f_1154},
{"f_1156:extras_2escm",(void*)f_1156},
{"f_2889:extras_2escm",(void*)f_2889},
{"f_1189:extras_2escm",(void*)f_1189},
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
o|eliminated procedure checks: 38 
o|specializations:
o|  11 (eqv? (not float) *)
o|  1 (current-output-port)
o|  3 (make-string fixnum char)
o|  1 (assq * list)
o|  5 (car pair)
o|  13 (cdr pair)
o|  1 (make-string fixnum)
o|  23 (eqv? * (not float))
o|  1 (fp/ float float)
o|Removed `not' forms: 5 
o|inlining procedure: k1010 
o|inlining procedure: k1010 
o|inlining procedure: k1032 
o|inlining procedure: k1032 
o|inlining procedure: k1038 
o|inlining procedure: k1038 
o|inlining procedure: k1090 
o|substituted constant variable: a1104 
o|inlining procedure: k1090 
o|inlining procedure: k1114 
o|inlining procedure: k1114 
o|removed side-effect free assignment to unused variable: fixup103 
o|inlining procedure: k1159 
o|inlining procedure: k1159 
o|inlining procedure: k1180 
o|inlining procedure: k1180 
o|inlining procedure: k1196 
o|inlining procedure: k1196 
o|inlining procedure: k1205 
o|inlining procedure: k1205 
o|inlining procedure: k1222 
o|inlining procedure: k1222 
o|substituted constant variable: a1259 
o|substituted constant variable: a1261 
o|inlining procedure: k1268 
o|inlining procedure: k1268 
o|inlining procedure: k1307 
o|inlining procedure: k1307 
o|inlining procedure: k1335 
o|inlining procedure: k1335 
o|inlining procedure: k1395 
o|inlining procedure: k1395 
o|inlining procedure: k1418 
o|inlining procedure: k1418 
o|inlining procedure: k1471 
o|inlining procedure: k1471 
o|inlining procedure: k1547 
o|inlining procedure: k1547 
o|inlining procedure: k1596 
o|inlining procedure: k1596 
o|inlining procedure: k1627 
o|inlining procedure: k1627 
o|substituted constant variable: a1641 
o|inlining procedure: k1652 
o|inlining procedure: k1652 
o|inlining procedure: k1692 
o|inlining procedure: k1692 
o|inlining procedure: k1727 
o|inlining procedure: k1727 
o|inlining procedure: k1777 
o|inlining procedure: k1777 
o|inlining procedure: k1805 
o|inlining procedure: k1805 
o|inlining procedure: k1843 
o|inlining procedure: k1843 
o|inlining procedure: k1906 
o|contracted procedure: "(extras.scm:288) length1?366" 
o|inlining procedure: k1893 
o|inlining procedure: k1893 
o|inlining procedure: k1906 
o|inlining procedure: k1919 
o|inlining procedure: k1919 
o|substituted constant variable: a1931 
o|substituted constant variable: a1933 
o|substituted constant variable: a1935 
o|substituted constant variable: a1937 
o|inlining procedure: k1951 
o|inlining procedure: k1951 
o|inlining procedure: k1963 
o|inlining procedure: k1963 
o|substituted constant variable: a1976 
o|substituted constant variable: a1978 
o|substituted constant variable: a1980 
o|substituted constant variable: a1982 
o|inlining procedure: k1987 
o|inlining procedure: k1987 
o|inlining procedure: k2009 
o|inlining procedure: "(extras.scm:309) read-macro-body360" 
o|inlining procedure: k2009 
o|inlining procedure: k2033 
o|contracted procedure: k2052 
o|inlining procedure: k2050 
o|inlining procedure: k2074 
o|inlining procedure: k2074 
o|inlining procedure: k2050 
o|inlining procedure: k2033 
o|inlining procedure: k2103 
o|inlining procedure: k2103 
o|inlining procedure: k2121 
o|inlining procedure: k2121 
o|inlining procedure: k2145 
o|inlining procedure: k2155 
o|inlining procedure: k2155 
o|inlining procedure: k2145 
o|inlining procedure: k2169 
o|inlining procedure: k2169 
o|inlining procedure: k2197 
o|inlining procedure: k2219 
o|substituted constant variable: a2250 
o|inlining procedure: k2251 
o|inlining procedure: k2251 
o|inlining procedure: k2219 
o|inlining procedure: k2197 
o|inlining procedure: k2309 
o|substituted constant variable: a2318 
o|inlining procedure: k2309 
o|inlining procedure: k2339 
o|inlining procedure: k2339 
o|inlining procedure: k2368 
o|inlining procedure: k2368 
o|inlining procedure: k2379 
o|inlining procedure: k2379 
o|inlining procedure: k2394 
o|inlining procedure: k2394 
o|inlining procedure: k2419 
o|inlining procedure: k2419 
o|inlining procedure: k2450 
o|inlining procedure: k2450 
o|inlining procedure: k2477 
o|inlining procedure: k2477 
o|inlining procedure: k2504 
o|inlining procedure: k2504 
o|inlining procedure: k2534 
o|inlining procedure: k2542 
o|inlining procedure: k2542 
o|substituted constant variable: a2554 
o|substituted constant variable: a2555 
o|inlining procedure: k2534 
o|inlining procedure: k2566 
o|inlining procedure: k2589 
o|inlining procedure: k2589 
o|substituted constant variable: max-expr-width488 
o|inlining procedure: k2566 
o|inlining procedure: k2643 
o|inlining procedure: "(extras.scm:431) read-macro-body360" 
o|inlining procedure: k2643 
o|inlining procedure: k2670 
o|inlining procedure: k2670 
o|substituted constant variable: max-call-head-width487 
o|inlining procedure: k2703 
o|inlining procedure: k2703 
o|inlining procedure: k2739 
o|inlining procedure: k2767 
o|inlining procedure: k2767 
o|inlining procedure: k2739 
o|inlining procedure: k2802 
o|inlining procedure: k2802 
o|inlining procedure: k2837 
o|inlining procedure: k2837 
o|inlining procedure: k2879 
o|substituted constant variable: indent-general486 
o|inlining procedure: k2879 
o|substituted constant variable: indent-general486 
o|inlining procedure: k2991 
o|inlining procedure: k2991 
o|inlining procedure: k3007 
o|inlining procedure: k3007 
o|inlining procedure: k3019 
o|inlining procedure: k3019 
o|inlining procedure: k3033 
o|inlining procedure: k3033 
o|substituted constant variable: a3046 
o|substituted constant variable: a3048 
o|substituted constant variable: a3050 
o|substituted constant variable: a3055 
o|substituted constant variable: a3057 
o|substituted constant variable: a3059 
o|substituted constant variable: a3061 
o|substituted constant variable: a3066 
o|substituted constant variable: a3068 
o|inlining procedure: k3071 
o|inlining procedure: k3071 
o|substituted constant variable: a3083 
o|substituted constant variable: a3085 
o|substituted constant variable: a3087 
o|substituted constant variable: a3089 
o|inlining procedure: k3093 
o|substituted constant variable: a3105 
o|substituted constant variable: a3106 
o|inlining procedure: k3093 
o|contracted procedure: k3148 
o|inlining procedure: k3145 
o|inlining procedure: k3145 
o|inlining procedure: k3189 
o|inlining procedure: k3189 
o|inlining procedure: k3207 
o|inlining procedure: k3207 
o|inlining procedure: k3226 
o|inlining procedure: k3226 
o|inlining procedure: k3250 
o|inlining procedure: k3250 
o|inlining procedure: k3277 
o|inlining procedure: k3277 
o|inlining procedure: k3307 
o|inlining procedure: k3307 
o|inlining procedure: k3330 
o|inlining procedure: k3330 
o|inlining procedure: k3350 
o|inlining procedure: k3366 
o|inlining procedure: k3366 
o|inlining procedure: k3350 
o|substituted constant variable: a3388 
o|substituted constant variable: a3390 
o|substituted constant variable: a3392 
o|substituted constant variable: a3394 
o|substituted constant variable: a3396 
o|substituted constant variable: a3398 
o|substituted constant variable: a3400 
o|substituted constant variable: a3402 
o|substituted constant variable: a3404 
o|substituted constant variable: a3406 
o|substituted constant variable: a3408 
o|contracted procedure: k3457 
o|inlining procedure: k3455 
o|inlining procedure: k3466 
o|propagated global variable: r34673674 sprintf 
o|inlining procedure: k3466 
o|inlining procedure: k3455 
o|propagated global variable: a34543676 sprintf 
o|replaced variables: 443 
o|removed binding forms: 89 
o|substituted constant variable: r10333494 
o|converted assignments to bindings: (slurp82) 
o|substituted constant variable: r11153505 
o|substituted constant variable: r12693518 
o|converted assignments to bindings: (doread146) 
o|substituted constant variable: f_13943523 
o|substituted constant variable: r16933544 
o|substituted constant variable: f_18923555 
o|substituted constant variable: r19073556 
o|removed side-effect free assignment to unused variable: read-macro-body360 
o|substituted constant variable: r19523559 
o|substituted constant variable: r19643561 
o|substituted constant variable: f_19863564 
o|substituted constant variable: a21543583 
o|substituted constant variable: a21543584 
o|substituted constant variable: a23673598 
o|substituted constant variable: a23673599 
o|substituted constant variable: r25433614 
o|substituted constant variable: f_25333615 
o|substituted constant variable: r27043630 
o|substituted constant variable: f_27383634 
o|removed side-effect free assignment to unused variable: indent-general486 
o|removed side-effect free assignment to unused variable: max-call-head-width487 
o|removed side-effect free assignment to unused variable: max-expr-width488 
o|inlining procedure: k3214 
o|inlining procedure: k3455 
o|propagated global variable: a34543728 printf 
o|inlining procedure: k3455 
o|propagated global variable: a34543729 sprintf 
o|inlining procedure: k3455 
o|propagated global variable: a34543730 fprintf 
o|simplifications: ((let . 2)) 
o|replaced variables: 14 
o|removed binding forms: 416 
o|inlining procedure: k2959 
o|inlining procedure: k3418 
o|removed binding forms: 41 
o|substituted constant variable: named?6013753 
o|substituted constant variable: r34193760 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 48) (##core#call . 274)) 
o|  call simplifications:
o|    apply	5
o|    char-upcase
o|    char-whitespace?	2
o|    ##sys#check-list
o|    <
o|    >	5
o|    -	5
o|    vector?	2
o|    boolean?	2
o|    symbol?	3
o|    procedure?
o|    char?
o|    ##sys#generic-structure?
o|    ##sys#byte
o|    number->string	2
o|    string-ref
o|    string-length	4
o|    +	12
o|    integer->char
o|    char->integer	2
o|    fx>	3
o|    ##sys#size	5
o|    ##sys#setislot
o|    not	2
o|    fx<	7
o|    ##sys#check-string	4
o|    string?	3
o|    fx-	5
o|    pair?	17
o|    cadr	3
o|    ##sys#slot	21
o|    char=?	3
o|    fx=
o|    eq?	44
o|    ##sys#check-exact	7
o|    car	23
o|    null?	28
o|    cdr	10
o|    eof-object?	7
o|    fx>=	5
o|    fx+	17
o|    cons	5
o|contracted procedure: k1080 
o|contracted procedure: k985 
o|contracted procedure: k1074 
o|contracted procedure: k987 
o|contracted procedure: k1068 
o|contracted procedure: k989 
o|contracted procedure: k1062 
o|contracted procedure: k991 
o|contracted procedure: k1056 
o|contracted procedure: k993 
o|contracted procedure: k1050 
o|contracted procedure: k995 
o|contracted procedure: k1012 
o|contracted procedure: k1014 
o|contracted procedure: k1027 
o|contracted procedure: k1030 
o|contracted procedure: k1092 
o|contracted procedure: k1094 
o|contracted procedure: k1112 
o|contracted procedure: k1117 
o|contracted procedure: k1149 
o|contracted procedure: k1151 
o|contracted procedure: k1266 
o|contracted procedure: k1157 
o|contracted procedure: k1169 
o|contracted procedure: k1182 
o|contracted procedure: k1193 
o|contracted procedure: k1199 
o|contracted procedure: k1208 
o|contracted procedure: k1217 
o|contracted procedure: k1225 
o|contracted procedure: k1242 
o|contracted procedure: k1244 
o|contracted procedure: k1252 
o|contracted procedure: k1278 
o|contracted procedure: k1271 
o|contracted procedure: k1361 
o|contracted procedure: k1287 
o|contracted procedure: k1355 
o|contracted procedure: k1289 
o|contracted procedure: k1349 
o|contracted procedure: k1291 
o|contracted procedure: k1300 
o|contracted procedure: k1309 
o|contracted procedure: k1320 
o|contracted procedure: k1330 
o|contracted procedure: k1333 
o|contracted procedure: k1338 
o|contracted procedure: k1371 
o|contracted procedure: k1375 
o|contracted procedure: k1386 
o|contracted procedure: k1377 
o|contracted procedure: k1397 
o|contracted procedure: k1510 
o|contracted procedure: k1402 
o|contracted procedure: k1457 
o|contracted procedure: k1454 
o|contracted procedure: k1416 
o|contracted procedure: k1421 
o|contracted procedure: k1427 
o|contracted procedure: k1429 
o|contracted procedure: k1436 
o|contracted procedure: k1439 
o|contracted procedure: k1442 
o|contracted procedure: k1474 
o|contracted procedure: k1480 
o|contracted procedure: k1482 
o|contracted procedure: k1489 
o|contracted procedure: k1492 
o|contracted procedure: k1495 
o|contracted procedure: k1506 
o|contracted procedure: k1512 
o|contracted procedure: k1519 
o|contracted procedure: k1584 
o|contracted procedure: k1526 
o|contracted procedure: k1578 
o|contracted procedure: k1528 
o|contracted procedure: k1572 
o|contracted procedure: k1530 
o|contracted procedure: k1566 
o|contracted procedure: k1532 
o|contracted procedure: k1536 
o|contracted procedure: k1540 
o|contracted procedure: k1545 
o|contracted procedure: k1561 
o|contracted procedure: k1564 
o|contracted procedure: k1550 
o|contracted procedure: k1558 
o|contracted procedure: k1554 
o|contracted procedure: k1599 
o|contracted procedure: k1608 
o|contracted procedure: k1630 
o|contracted procedure: k1675 
o|contracted procedure: k1646 
o|contracted procedure: k1669 
o|contracted procedure: k1648 
o|contracted procedure: k1663 
o|contracted procedure: k1650 
o|contracted procedure: k1657 
o|contracted procedure: k1652 
o|contracted procedure: k1701 
o|contracted procedure: k1685 
o|contracted procedure: k1699 
o|contracted procedure: k1690 
o|contracted procedure: k1753 
o|contracted procedure: k1711 
o|contracted procedure: k1744 
o|contracted procedure: k1763 
o|contracted procedure: k1769 
o|contracted procedure: k1792 
o|contracted procedure: k1771 
o|contracted procedure: k1789 
o|contracted procedure: k1808 
o|contracted procedure: k1814 
o|contracted procedure: k1820 
o|contracted procedure: k1826 
o|contracted procedure: k1852 
o|contracted procedure: k1836 
o|contracted procedure: k1846 
o|contracted procedure: k1875 
o|contracted procedure: k1862 
o|contracted procedure: k1865 
o|contracted procedure: k1873 
o|contracted procedure: k1903 
o|contracted procedure: k1909 
o|contracted procedure: k1895 
o|contracted procedure: k1917 
o|contracted procedure: k1922 
o|contracted procedure: k1948 
o|contracted procedure: k1954 
o|contracted procedure: k1960 
o|contracted procedure: k1966 
o|contracted procedure: k1972 
o|contracted procedure: k1999 
o|contracted procedure: k2018 
o|contracted procedure: k2035 
o|contracted procedure: k2058 
o|contracted procedure: k2077 
o|contracted procedure: k2106 
o|contracted procedure: k2115 
o|contracted procedure: k2124 
o|contracted procedure: k2133 
o|contracted procedure: k2148 
o|contracted procedure: k2172 
o|contracted procedure: k2188 
o|contracted procedure: k2200 
o|contracted procedure: k2224 
o|contracted procedure: k2229 
o|contracted procedure: k2231 
o|contracted procedure: k2238 
o|contracted procedure: k2262 
o|contracted procedure: k2265 
o|contracted procedure: k2271 
o|contracted procedure: k2283 
o|contracted procedure: k2301 
o|contracted procedure: k2306 
o|contracted procedure: k2320 
o|contracted procedure: k2334 
o|contracted procedure: k2342 
o|contracted procedure: k2356 
o|contracted procedure: k2370 
o|contracted procedure: k2494 
o|contracted procedure: k2397 
o|contracted procedure: k2406 
o|contracted procedure: k2432 
o|contracted procedure: k2439 
o|contracted procedure: k2452 
o|contracted procedure: k2455 
o|contracted procedure: k2466 
o|contracted procedure: k2471 
o|contracted procedure: k2506 
o|contracted procedure: k2512 
o|contracted procedure: k2519 
o|contracted procedure: k2539 
o|contracted procedure: k2560 
o|contracted procedure: k2568 
o|contracted procedure: k2570 
o|contracted procedure: k2580 
o|contracted procedure: k2592 
o|contracted procedure: k2611 
o|contracted procedure: k2622 
o|contracted procedure: k2615 
o|contracted procedure: k2631 
o|contracted procedure: k2628 
o|contracted procedure: k2625 
o|contracted procedure: k2652 
o|contracted procedure: k2660 
o|contracted procedure: k2665 
o|contracted procedure: k2689 
o|contracted procedure: k2679 
o|contracted procedure: k2712 
o|contracted procedure: k2715 
o|contracted procedure: k2744 
o|contracted procedure: k2761 
o|contracted procedure: k2748 
o|contracted procedure: k2770 
o|contracted procedure: k2786 
o|contracted procedure: k2804 
o|contracted procedure: k2807 
o|contracted procedure: k2821 
o|contracted procedure: k2810 
o|contracted procedure: k2839 
o|contracted procedure: k2842 
o|contracted procedure: k2856 
o|contracted procedure: k2845 
o|contracted procedure: k2874 
o|contracted procedure: k2882 
o|contracted procedure: k2885 
o|contracted procedure: k2894 
o|contracted procedure: k2897 
o|contracted procedure: k2906 
o|contracted procedure: k2909 
o|contracted procedure: k2957 
o|contracted procedure: k2964 
o|contracted procedure: k2959 
o|contracted procedure: k2994 
o|contracted procedure: k3002 
o|contracted procedure: k3004 
o|contracted procedure: k3010 
o|contracted procedure: k3016 
o|contracted procedure: k3022 
o|contracted procedure: k3024 
o|contracted procedure: k3030 
o|contracted procedure: k3036 
o|contracted procedure: k3042 
o|contracted procedure: k3069 
o|contracted procedure: k3074 
o|contracted procedure: k3130 
o|contracted procedure: k3157 
o|contracted procedure: k3173 
o|contracted procedure: k3175 
o|contracted procedure: k3182 
o|contracted procedure: k3194 
o|contracted procedure: k3197 
o|contracted procedure: k3209 
o|contracted procedure: k3412 
o|contracted procedure: k3219 
o|contracted procedure: k3224 
o|contracted procedure: k3229 
o|contracted procedure: k3241 
o|contracted procedure: k3253 
o|contracted procedure: k3265 
o|contracted procedure: k3280 
o|contracted procedure: k3295 
o|contracted procedure: k3310 
o|contracted procedure: k3319 
o|contracted procedure: k3326 
o|contracted procedure: k3333 
o|contracted procedure: k3342 
o|contracted procedure: k3353 
o|contracted procedure: k3368 
o|contracted procedure: k3378 
o|contracted procedure: k3463 
o|contracted procedure: k3469 
o|contracted procedure: k3473 
o|contracted procedure: k3483 
o|simplifications: ((let . 50)) 
o|removed binding forms: 256 
o|inlining procedure: k1090 
o|inlining procedure: k1538 
o|inlining procedure: k1538 
o|inlining procedure: k1538 
o|replaced variables: 21 
o|simplifications: ((let . 8) (if . 1)) 
o|removed binding forms: 22 
o|contracted procedure: k3344 
o|removed binding forms: 2 
o|direct leaf routine/allocation: read-macro-prefix361 0 
o|direct leaf routine/allocation: fetch678 0 
o|contracted procedure: "(extras.scm:309) k2024" 
o|contracted procedure: "(extras.scm:432) k2658" 
o|contracted procedure: "(extras.scm:601) k3212" 
o|contracted procedure: "(extras.scm:603) k3222" 
o|contracted procedure: "(extras.scm:621) k3360" 
o|contracted procedure: "(extras.scm:623) k3375" 
o|removed binding forms: 6 
o|direct leaf routine/allocation: skip700 0 
o|inlining procedure: k3214 
o|converted assignments to bindings: (skip700) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (fprintf0 rec673 next679 loop684 k3118 pp364 k2996 tail1547 tail3549 tail2548 indent470 loop530 pp-down475 style489 pp-call473 pp-general476 pr471 generic-write pp-list474 spaces469 doloop454455 k2221 loop420 wr-expr404 loop410 read-macro?359 wr-lst405 out362 wr363 k1911 k1779 loop290 loop242 k1400 k1468 loop191 loop177 loop148 k1153 k1236 loop123 doloop8485) 
o|calls to known targets: 182 
o|identified direct recursive calls: f_3363 1 
o|identified direct recursive calls: f_3204 1 
o|fast box initializations: 43 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1882 
o|dropping unused closure argument: f_1886 
o|dropping unused closure argument: f_1945 
o|dropping unused closure argument: f_3136 
*/
/* end of file */
