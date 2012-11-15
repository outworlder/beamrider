/* Generated from ports.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-09-24 17:49
   Version 4.8.0 (rev 0db1908)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: ports.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file ports.c
   unit: ports
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[44];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,28),40,112,111,114,116,45,102,111,114,45,101,97,99,104,32,102,110,54,50,32,116,104,117,110,107,54,51,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,120,115,55,50,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,23),40,112,111,114,116,45,109,97,112,32,102,110,54,57,32,116,104,117,110,107,55,48,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,97,99,99,56,48,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,30),40,112,111,114,116,45,102,111,108,100,32,102,110,55,54,32,97,99,99,55,55,32,116,104,117,110,107,55,56,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,102,95,56,50,51,32,98,117,102,49,52,55,32,110,49,52,56,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,48,49,32,105,49,48,51,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,19),40,102,95,56,50,56,32,98,117,102,49,52,57,32,110,49,53,48,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,49,49,55,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,102,95,56,52,54,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,12),40,102,95,56,53,49,32,120,49,53,49,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,38),40,99,111,112,121,45,112,111,114,116,32,115,114,99,49,51,49,32,100,101,115,116,49,51,50,32,46,32,116,109,112,49,51,48,49,51,51,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,18),40,102,95,56,56,56,32,103,49,55,52,49,55,53,49,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,49,32,103,49,54,56,49,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,12),40,102,95,56,56,54,32,115,49,53,56,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,54,32,103,49,57,51,49,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,7),40,102,95,57,49,55,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,109,97,107,101,45,98,114,111,97,100,99,97,115,116,45,112,111,114,116,32,46,32,112,111,114,116,115,49,53,55,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,102,95,57,53,50,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,102,95,57,56,52,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,8),40,102,95,49,48,48,49,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,50,50,53,32,99,50,50,54,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,35),40,102,95,49,48,51,51,32,112,50,50,48,32,110,50,50,49,32,100,101,115,116,50,50,50,32,115,116,97,114,116,50,50,51,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,41),40,109,97,107,101,45,99,111,110,99,97,116,101,110,97,116,101,100,45,112,111,114,116,32,112,49,50,48,50,32,46,32,112,111,114,116,115,50,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,8),40,102,95,49,48,56,56,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,8),40,102,95,49,48,57,51,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,8),40,102,95,49,48,57,56,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,39),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,111,114,116,32,112,111,114,116,50,51,52,32,116,104,117,110,107,50,51,53,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,49,50,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,49,55,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,50,50,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,38),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,50,52,56,32,116,104,117,110,107,50,52,57,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,51,54,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,52,49,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,52,54,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,44),40,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,50,54,50,32,116,104,117,110,107,50,54,51,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,39),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,115,116,114,105,110,103,32,115,116,114,50,55,54,32,112,114,111,99,50,55,55,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,33),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,115,116,114,105,110,103,32,112,114,111,99,50,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,56,48,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,56,53,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,57,48,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,40),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,115,116,114,105,110,103,32,115,116,114,50,56,52,32,116,104,117,110,107,50,56,53,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,8),40,102,95,49,50,48,52,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,8),40,102,95,49,50,48,57,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,8),40,102,95,49,50,49,55,41};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,32),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,50,57,55,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,53,48,32,112,51,51,52,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,54,57,32,112,51,52,48,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,56,55,32,112,51,52,55,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,57,53,32,112,51,52,57,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,56),40,109,97,107,101,45,105,110,112,117,116,45,112,111,114,116,32,114,101,97,100,51,49,53,32,114,101,97,100,121,63,51,49,54,32,99,108,111,115,101,51,49,55,32,46,32,116,109,112,51,49,52,51,49,56,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,18),40,102,95,49,51,54,51,32,112,51,54,56,32,99,51,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,18),40,102,95,49,51,55,49,32,112,51,55,48,32,115,51,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,13),40,102,95,49,51,55,54,32,112,51,55,50,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,13),40,102,95,49,51,56,52,32,112,51,55,52,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,48),40,109,97,107,101,45,111,117,116,112,117,116,45,112,111,114,116,32,119,114,105,116,101,51,53,57,32,99,108,111,115,101,51,54,48,32,46,32,116,109,112,51,53,56,51,54,49,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_ports_toplevel)
C_externexport void C_ccall C_ports_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_591)
static void C_ccall f_591(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_731)
static void C_fcall f_731(C_word t0,C_word t1) C_noret;
C_noret_decl(f_923)
static void C_fcall f_923(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_597)
static void C_fcall f_597(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1185)
static void C_ccall f_1185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1015)
static void C_ccall f_1015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_589)
static void C_ccall f_589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1248)
static void C_ccall f_1248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_906)
static void C_ccall f_906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_794)
static void C_ccall f_794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1033)
static void C_ccall f_1033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1038)
static void C_fcall f_1038(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1006)
static void C_fcall f_1006(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1151)
static void C_ccall f_1151(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_682)
static void C_ccall f_682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1199)
static void C_ccall f_1199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1160)
static void C_ccall f_1160(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1195)
static void C_ccall f_1195(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1164)
static void C_ccall f_1164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_673)
static void C_ccall f_673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_678)
static void C_fcall f_678(C_word t0,C_word t1) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_642)
static void C_ccall f_642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_644)
static void C_ccall f_644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1290)
static void C_ccall f_1290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_711)
static void C_ccall f_711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_654)
static void C_ccall f_654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_650)
static void C_fcall f_650(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1093)
static void C_ccall f_1093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_666)
static void C_ccall f_666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_702)
static void C_fcall f_702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_761)
static void C_fcall f_761(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1376)
static void C_ccall f_1376(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1371)
static void C_ccall f_1371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_752)
static void C_ccall f_752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_757)
static void C_fcall f_757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_952)
static void C_ccall f_952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_957)
static void C_fcall f_957(C_word t0,C_word t1) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1141)
static void C_ccall f_1141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_620)
static void C_fcall f_620(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_624)
static void C_ccall f_624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_897)
static void C_fcall f_897(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1112)
static void C_ccall f_1112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_932)
static void C_ccall f_932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_614)
static void C_ccall f_614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1122)
static void C_ccall f_1122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1117)
static void C_ccall f_1117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_880)
static void C_ccall f_880(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_880)
static void C_ccall f_880r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_943)
static void C_ccall f_943(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_943)
static void C_ccall f_943r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_917)
static void C_ccall f_917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_851)
static void C_ccall f_851(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1055)
static void C_fcall f_1055(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_846)
static void C_ccall f_846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1217)
static void C_ccall f_1217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_731)
static void C_fcall trf_731(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_731(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_731(t0,t1);}

C_noret_decl(trf_923)
static void C_fcall trf_923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_923(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_923(t0,t1,t2);}

C_noret_decl(trf_597)
static void C_fcall trf_597(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_597(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_597(t0,t1);}

C_noret_decl(trf_1038)
static void C_fcall trf_1038(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1038(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1038(t0,t1,t2,t3);}

C_noret_decl(trf_1006)
static void C_fcall trf_1006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1006(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1006(t0,t1);}

C_noret_decl(trf_678)
static void C_fcall trf_678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_678(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_678(t0,t1);}

C_noret_decl(trf_650)
static void C_fcall trf_650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_650(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_650(t0,t1,t2);}

C_noret_decl(trf_702)
static void C_fcall trf_702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_702(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_702(t0,t1,t2);}

C_noret_decl(trf_761)
static void C_fcall trf_761(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_761(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_761(t0,t1);}

C_noret_decl(trf_757)
static void C_fcall trf_757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_757(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_757(t0,t1,t2);}

C_noret_decl(trf_957)
static void C_fcall trf_957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_957(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_957(t0,t1);}

C_noret_decl(trf_620)
static void C_fcall trf_620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_620(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_620(t0,t1,t2);}

C_noret_decl(trf_897)
static void C_fcall trf_897(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_897(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_897(t0,t1,t2);}

C_noret_decl(trf_1055)
static void C_fcall trf_1055(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1055(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1055(t0,t1);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

/* make-input-port in k588 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+35)){
C_save_and_reclaim((void*)tr5r,(void*)f_1222r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1222r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1222r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word *a=C_alloc(35);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=C_i_nullp(t17);
t19=(C_truep(t18)?C_SCHEME_FALSE:C_i_car(t17));
t20=C_i_nullp(t17);
t21=(C_truep(t20)?C_SCHEME_END_OF_LIST:C_i_cdr(t17));
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1250,a[2]=t7,a[3]=t2,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1269,a[2]=t7,a[3]=t2,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1287,a[2]=t4,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1295,a[2]=t3,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t26=C_a_i_vector(&a,10,t22,t23,C_SCHEME_FALSE,C_SCHEME_FALSE,t24,C_SCHEME_FALSE,t25,t11,t15,t19);
t27=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1246,a[2]=t1,a[3]=t27,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:242: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(6,*((C_word*)lf[38]+1),t28,C_SCHEME_TRUE,t26,lf[39],lf[40]);}

/* k742 in k734 in loop in copy-port in k588 */
static void C_ccall f_743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:88: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_731(t2,((C_word*)t0)[3]);}

/* k1174 in with-input-from-string in k588 */
static void C_ccall f_1175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1175,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1180,a[2]=t4,a[3]=t2,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1185,a[2]=((C_word*)t0)[2],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1190,a[2]=t2,a[3]=t4,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:194: ##sys#dynamic-wind */
t8=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,((C_word*)t0)[3],t5,t6,t7);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_ports_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_ports_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("ports_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(420)){
C_save(t1);
C_rereclaim2(420*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,44);
lf[0]=C_h_intern(&lf[0],13,"port-for-each");
lf[1]=C_h_intern(&lf[1],8,"port-map");
lf[2]=C_h_intern(&lf[2],16,"\003sysfast-reverse");
lf[3]=C_h_intern(&lf[3],9,"port-fold");
lf[4]=C_h_intern(&lf[4],9,"read-char");
lf[5]=C_h_intern(&lf[5],10,"write-char");
lf[6]=C_h_intern(&lf[6],9,"copy-port");
lf[7]=C_h_intern(&lf[7],12,"write-string");
lf[8]=C_h_intern(&lf[8],12,"read-string!");
lf[9]=C_h_intern(&lf[9],15,"\003sysmake-string");
lf[10]=C_h_intern(&lf[10],19,"make-broadcast-port");
lf[11]=C_h_intern(&lf[11],12,"flush-output");
lf[12]=C_h_intern(&lf[12],16,"make-output-port");
lf[13]=C_h_intern(&lf[13],4,"void");
lf[14]=C_h_intern(&lf[14],22,"make-concatenated-port");
lf[15]=C_h_intern(&lf[15],18,"\003sysread-char/port");
lf[16]=C_h_intern(&lf[16],11,"char-ready\077");
lf[17]=C_h_intern(&lf[17],9,"peek-char");
lf[18]=C_h_intern(&lf[18],15,"make-input-port");
lf[19]=C_h_intern(&lf[19],20,"with-input-from-port");
lf[20]=C_h_intern(&lf[20],18,"\003sysstandard-input");
lf[21]=C_h_intern(&lf[21],16,"\003sysdynamic-wind");
lf[22]=C_h_intern(&lf[22],20,"\003syscheck-input-port");
lf[23]=C_h_intern(&lf[23],19,"with-output-to-port");
lf[24]=C_h_intern(&lf[24],19,"\003sysstandard-output");
lf[25]=C_h_intern(&lf[25],21,"\003syscheck-output-port");
lf[26]=C_h_intern(&lf[26],21,"with-output-from-port");
lf[27]=C_h_intern(&lf[27],25,"with-error-output-to-port");
lf[28]=C_h_intern(&lf[28],18,"\003sysstandard-error");
lf[29]=C_h_intern(&lf[29],27,"with-error-output-from-port");
lf[30]=C_h_intern(&lf[30],22,"call-with-input-string");
lf[31]=C_h_intern(&lf[31],17,"open-input-string");
lf[32]=C_h_intern(&lf[32],23,"call-with-output-string");
lf[33]=C_h_intern(&lf[33],17,"get-output-string");
lf[34]=C_h_intern(&lf[34],18,"open-output-string");
lf[35]=C_h_intern(&lf[35],22,"with-input-from-string");
lf[36]=C_h_intern(&lf[36],21,"with-output-to-string");
lf[37]=C_h_intern(&lf[37],18,"\003sysset-port-data!");
lf[38]=C_h_intern(&lf[38],13,"\003sysmake-port");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[40]=C_h_intern(&lf[40],6,"custom");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[42]=C_h_intern(&lf[42],17,"register-feature!");
lf[43]=C_h_intern(&lf[43],5,"ports");
C_register_lf2(lf,44,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_589,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ports.scm:40: register-feature! */
t3=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[43]);}

/* port-for-each in k588 */
static void C_ccall f_591(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_591,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_597,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_597(t7,t1);}

/* loop in copy-port in k588 */
static void C_fcall f_731(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_731,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_735,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:85: reader */
t3=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* for-each-loop186 */
static void C_fcall f_923(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_923,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_932,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* ports.scm:124: g187 */
t5=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in port-for-each in k588 */
static void C_fcall f_597(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_597,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_601,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:47: thunk */
t3=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* f_1185 in k1174 in with-input-from-string in k588 */
static void C_ccall f_1185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1185,2,t0,t1);}
/* ports.scm:196: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* k734 in loop in copy-port in k588 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_735,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:87: writer */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k1014 in loop */
static void C_ccall f_1015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* ports.scm:150: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1006(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* k588 */
static void C_ccall f_589(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_589,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! port-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_591,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[1]+1 /* (set! port-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_614,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[3]+1 /* (set! port-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_644,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[4]+1);
t6=*((C_word*)lf[5]+1);
t7=C_mutate((C_word*)lf[6]+1 /* (set! copy-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_797,a[2]=t5,a[3]=t6,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[10]+1 /* (set! make-broadcast-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_880,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[14]+1 /* (set! make-concatenated-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_943,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[19]+1 /* (set! with-input-from-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1079,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[23]+1 /* (set! with-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1103,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[27]+1 /* (set! with-error-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1127,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[30]+1 /* (set! call-with-input-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1151,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[32]+1 /* (set! call-with-output-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1160,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[35]+1 /* (set! with-input-from-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1171,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[36]+1 /* (set! with-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1195,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[18]+1 /* (set! make-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1222,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[12]+1 /* (set! make-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1348,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t19=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,C_SCHEME_UNDEFINED);}

/* k1247 in k1245 in make-input-port in k588 */
static void C_ccall f_1248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1245 in make-input-port in k588 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1248,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:243: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,t1,((C_word*)t0)[3]);}

/* k905 in for-each-loop161 */
static void C_ccall f_906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_897(t3,((C_word*)t0)[4],t2);}

/* k793 in loop in k751 in copy-port in k588 */
static void C_ccall f_794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
f_761(t3,t2);}

/* copy-port in k588 */
static void C_ccall f_797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_797r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_797r(t0,t1,t2,t3,t4);}}

static void C_ccall f_797r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(18);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?((C_word*)t0)[2]:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?((C_word*)t0)[3]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_eqp(t6,((C_word*)t0)[2]);
if(C_truep(t13)){
t14=C_eqp(t10,((C_word*)t0)[3]);
t15=(C_truep(t14)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_823,a[2]=t3,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_828,a[2]=t3,a[3]=t10,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t16=t1;
t17=t2;
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_673,a[2]=t15,a[3]=t17,a[4]=t16,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t18,C_fix(1024),C_make_character(32));}
else{
t14=C_eqp(t10,((C_word*)t0)[3]);
if(C_truep(t14)){
t15=t1;
t16=t2;
t17=t3;
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_752,a[2]=t17,a[3]=t6,a[4]=t16,a[5]=t15,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t18,C_fix(1024),C_make_character(32));}
else{
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_846,a[2]=t6,a[3]=t2,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_851,a[2]=t10,a[3]=t3,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t17=t1;
t18=t15;
t19=t16;
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_731,a[2]=t21,a[3]=t19,a[4]=t18,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t23=((C_word*)t21)[1];
f_731(t23,t17);}}}

/* k1360 in k1358 in make-output-port in k588 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_1363 in make-output-port in k588 */
static void C_ccall f_1363(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1363,4,t0,t1,t2,t3);}
t4=C_a_i_string(&a,1,t3);
/* ports.scm:253: write */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t1,t4);}

/* f_1033 in make-concatenated-port in k588 */
static void C_ccall f_1033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1033,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1038,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t5,a[5]=t4,a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1038(t9,t1,t3,C_fix(0));}

/* loop */
static void C_fcall f_1038(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1038,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1053,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t6=C_fixnum_plus(((C_word*)t0)[4],t3);
/* ports.scm:157: read-string! */
t7=*((C_word*)lf[8]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,t2,((C_word*)t0)[5],t5,t6);}}}

/* f_1190 in k1174 in with-input-from-string in k588 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1190,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_1001 in make-concatenated-port in k588 */
static void C_ccall f_1001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1001,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1006,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1006(t5,t1);}

/* loop */
static void C_fcall f_1006(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1006,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* ports.scm:147: peek-char */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}

/* call-with-input-string in k588 */
static void C_ccall f_1151(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1151,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1155,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:184: open-input-string */
t5=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1154 in call-with-input-string in k588 */
static void C_ccall f_1155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:185: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k681 in loop in k672 in copy-port in k588 */
static void C_ccall f_682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_682,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_690,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:77: writer */
t4=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[5],t1);}}

/* f_828 in copy-port in k588 */
static void C_ccall f_828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_828,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[2];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_702,a[2]=t3,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_702(t8,t1,C_fix(0));}

/* k1198 in with-output-to-string in k588 */
static void C_ccall f_1199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1199,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1204,a[2]=t4,a[3]=t2,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1209,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1217,a[2]=t2,a[3]=t4,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:199: ##sys#dynamic-wind */
t8=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,((C_word*)t0)[3],t5,t6,t7);}

/* call-with-output-string in k588 */
static void C_ccall f_1160(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1160,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1164,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:189: open-output-string */
t4=*((C_word*)lf[34]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* with-output-to-string in k588 */
static void C_ccall f_1195(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1195,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1199,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:200: open-output-string */
t4=*((C_word*)lf[34]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1163 in call-with-output-string in k588 */
static void C_ccall f_1164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1166,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:190: proc */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}

/* k672 in copy-port in k588 */
static void C_ccall f_673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_673,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_678,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_678(t5,((C_word*)t0)[4]);}

/* with-input-from-string in k588 */
static void C_ccall f_1171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1171,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1175,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:195: open-input-string */
t5=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* f_823 in copy-port in k588 */
static void C_ccall f_823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_823,4,t0,t1,t2,t3);}
/* ports.scm:108: write-string */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,t3,((C_word*)t0)[2]);}

/* k1130 in with-error-output-to-port in k588 */
static void C_ccall f_1131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1131,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1136,a[2]=t5,a[3]=t3,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1141,a[2]=((C_word*)t0)[3],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1146,a[2]=t3,a[3]=t5,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:177: ##sys#dynamic-wind */
t9=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[4],t6,t7,t8);}

/* k1165 in k1163 in call-with-output-string in k588 */
static void C_ccall f_1166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:191: get-output-string */
t2=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* loop in k672 in copy-port in k588 */
static void C_fcall f_678(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_678,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_682,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ports.scm:75: read-string! */
t3=*((C_word*)lf[8]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_fix(1024),((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k689 in k681 in loop in k672 in copy-port in k588 */
static void C_ccall f_690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:78: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_678(t2,((C_word*)t0)[3]);}

/* f_1287 in make-input-port in k588 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1287,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1290,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:233: close */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k1282 */
static void C_ccall f_1283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k641 in k623 in loop in port-map in k588 */
static void C_ccall f_642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_642,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* ports.scm:58: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_620(t3,((C_word*)t0)[4],t2);}

/* port-fold in k588 */
static void C_ccall f_644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_644,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_650,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_650(t8,t1,t3);}

/* f_1295 in make-input-port in k588 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1295,3,t0,t1,t2);}
/* ports.scm:237: ready? */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}

/* k1289 */
static void C_ccall f_1290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(8),C_SCHEME_TRUE));}

/* f_1250 in make-input-port in k588 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1250,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:217: read */
t4=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* ports.scm:221: read */
t4=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}}}

/* with-input-from-port in k588 */
static void C_ccall f_1079(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1079,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1083,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ports.scm:166: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(5,*((C_word*)lf[22]+1),t4,t2,C_SCHEME_TRUE,lf[19]);}

/* f_1269 in make-input-port in k588 */
static void C_ccall f_1269(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1269,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:224: peek */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1283,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:227: read */
t5=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}}}

/* f_1384 in make-output-port in k588 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1384,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:260: flush */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* with-output-to-port in k588 */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1103,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1107,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ports.scm:171: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(5,*((C_word*)lf[25]+1),t4,t2,C_SCHEME_TRUE,lf[26]);}

/* k710 in doloop101 */
static void C_ccall f_711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_702(t3,((C_word*)t0)[4],t2);}

/* k653 in loop in port-fold in k588 */
static void C_ccall f_654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_654,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_666,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:65: fn */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[2]);}}

/* loop in port-fold in k588 */
static void C_fcall f_650(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_650,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_654,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ports.scm:62: thunk */
t4=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* f_1093 in k1082 in with-input-from-port in k588 */
static void C_ccall f_1093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1093,2,t0,t1);}
/* ports.scm:168: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* f_1098 in k1082 in with-input-from-port in k588 */
static void C_ccall f_1098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1098,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k665 in k653 in loop in port-fold in k588 */
static void C_ccall f_666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:65: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_650(t2,((C_word*)t0)[3],t1);}

/* doloop101 */
static void C_fcall f_702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_702,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_711,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_subbyte(((C_word*)t0)[4],t2);
t5=C_make_character(C_unfix(t4));
/* ports.scm:82: writer */
t6=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,t5,((C_word*)t0)[6]);}}

/* k1106 in with-output-to-port in k588 */
static void C_ccall f_1107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1107,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1112,a[2]=t5,a[3]=t3,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1117,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1122,a[2]=t3,a[3]=t5,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:172: ##sys#dynamic-wind */
t9=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[4],t6,t7,t8);}

/* k762 in k760 in loop in k751 in copy-port in k588 */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(C_eofp(t1))){
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* ports.scm:98: write-string */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}
else{
t2=C_fix(C_character_code(t1));
t3=C_setbyte(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],t2);
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
/* ports.scm:101: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_757(t5,((C_word*)t0)[3],t4);}}

/* k760 in loop in k751 in copy-port in k588 */
static void C_fcall f_761(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_761,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* ports.scm:95: reader */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}

/* k1378 */
static void C_ccall f_1379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(8),C_SCHEME_TRUE));}

/* f_1376 in make-output-port in k588 */
static void C_ccall f_1376(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1376,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1379,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:257: close */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* f_1371 in make-output-port in k588 */
static void C_ccall f_1371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1371,4,t0,t1,t2,t3);}
/* ports.scm:255: write */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k751 in copy-port in k588 */
static void C_ccall f_752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_752,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_757,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word)li10),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_757(t5,((C_word*)t0)[5],C_fix(0));}

/* k600 in loop in port-for-each in k588 */
static void C_ccall f_601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_601,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_609,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:49: fn */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* loop in k751 in copy-port in k588 */
static void C_fcall f_757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_757,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_761,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t3)[1],C_fix(1024)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_794,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:93: write-string */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],C_fix(1024),((C_word*)t0)[3]);}
else{
t5=t4;
f_761(t5,C_SCHEME_UNDEFINED);}}

/* f_952 in make-concatenated-port in k588 */
static void C_ccall f_952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_952,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_957,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_957(t5,t1);}

/* k1082 in with-input-from-port in k588 */
static void C_ccall f_1083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1083,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1088,a[2]=t5,a[3]=t3,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1093,a[2]=((C_word*)t0)[3],a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1098,a[2]=t3,a[3]=t5,a[4]=((C_word)li31),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:167: ##sys#dynamic-wind */
t9=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[4],t6,t7,t8);}

/* f_1088 in k1082 in with-input-from-port in k588 */
static void C_ccall f_1088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1088,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* loop */
static void C_fcall f_957(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_957,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* read-char/port */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}

/* k608 in k600 in loop in port-for-each in k588 */
static void C_ccall f_609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:50: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_597(t2,((C_word*)t0)[3]);}

/* f_1141 in k1130 in with-error-output-to-port in k588 */
static void C_ccall f_1141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1141,2,t0,t1);}
/* ports.scm:178: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* f_1136 in k1130 in with-error-output-to-port in k588 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1136,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[28]+1));
t3=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_984 in make-concatenated-port in k588 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_984,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* ports.scm:141: char-ready? */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}}

/* loop in port-map in k588 */
static void C_fcall f_620(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_620,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_624,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ports.scm:55: thunk */
t4=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k623 in loop in port-map in k588 */
static void C_ccall f_624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_624,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* ports.scm:57: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[2]+1)))(3,*((C_word*)lf[2]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_642,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:58: fn */
t3=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* for-each-loop161 */
static void C_fcall f_897(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_897,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_906,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* ports.scm:122: g162 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_1112 in k1106 in with-output-to-port in k588 */
static void C_ccall f_1112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1112,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[24]+1));
t3=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_1146 in k1130 in with-error-output-to-port in k588 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1146,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[28]+1));
t3=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k931 in for-each-loop186 */
static void C_ccall f_932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_923(t3,((C_word*)t0)[4],t2);}

/* port-map in k588 */
static void C_ccall f_614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_614,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_620,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_620(t7,t1,C_SCHEME_END_OF_LIST);}

/* f_888 */
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_888,3,t0,t1,t2);}
t3=*((C_word*)lf[7]+1);
/* ports.scm:122: g177 */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* f_886 in make-broadcast-port in k588 */
static void C_ccall f_886(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_886,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_888,a[2]=t2,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_897,a[2]=t6,a[3]=t3,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_897(t8,t1,t4);}

/* f_1122 in k1106 in with-output-to-port in k588 */
static void C_ccall f_1122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1122,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[24]+1));
t3=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_1117 in k1106 in with-output-to-port in k588 */
static void C_ccall f_1117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1117,2,t0,t1);}
/* ports.scm:173: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* make-broadcast-port in k588 */
static void C_ccall f_880(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_880r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_880r(t0,t1,t2);}}

static void C_ccall f_880r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_886,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_917,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* ports.scm:121: make-output-port */
t5=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t3,*((C_word*)lf[13]+1),t4);}

/* k965 in loop */
static void C_ccall f_966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* ports.scm:137: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_957(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* with-error-output-to-port in k588 */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1127,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1131,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ports.scm:176: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(5,*((C_word*)lf[25]+1),t4,t2,C_SCHEME_TRUE,lf[29]);}

/* make-output-port in k588 */
static void C_ccall f_1348(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+32)){
C_save_and_reclaim((void*)tr4r,(void*)f_1348r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1348r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1348r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(32);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1363,a[2]=t2,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1371,a[2]=t2,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1376,a[2]=t3,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1384,a[2]=t6,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t11=C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t7,t8,t9,t10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t12=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1359,a[2]=t1,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:265: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(6,*((C_word*)lf[38]+1),t13,C_SCHEME_FALSE,t11,lf[41],lf[40]);}

/* make-concatenated-port in k588 */
static void C_ccall f_943(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr3r,(void*)f_943r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_943r(t0,t1,t2,t3);}}

static void C_ccall f_943r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(21);
t4=C_a_i_cons(&a,2,t2,t3);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_952,a[2]=t5,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_984,a[2]=t5,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1001,a[2]=t5,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1033,a[2]=t5,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
/* ports.scm:129: make-input-port */
t10=*((C_word*)lf[18]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,t1,t6,t7,*((C_word*)lf[13]+1),t8,t9);}

/* f_1204 in k1198 in with-output-to-string in k588 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[24]+1));
t3=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_917 in make-broadcast-port in k588 */
static void C_ccall f_917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_917,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=((C_word*)t0)[2];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_923,a[2]=t5,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_923(t7,t1,t3);}

/* k1358 in make-output-port in k588 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1361,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:266: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,t1,((C_word*)t0)[3]);}

/* f_1209 in k1198 in with-output-to-string in k588 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1212,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ports.scm:201: thunk */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* f_851 in copy-port in k588 */
static void C_ccall f_851(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_851,3,t0,t1,t2);}
/* ports.scm:115: write */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* k1054 in k1052 in loop */
static void C_fcall f_1055(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[3]);
/* ports.scm:160: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1038(t4,((C_word*)t0)[6],t2,t3);}

/* k1052 in loop */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1055,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[2]))){
t3=C_i_cdr(((C_word*)((C_word*)t0)[6])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t5=t2;
f_1055(t5,t4);}
else{
t3=t2;
f_1055(t3,C_SCHEME_UNDEFINED);}}

/* k1211 */
static void C_ccall f_1212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:202: get-output-string */
t2=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],*((C_word*)lf[24]+1));}

/* f_846 in copy-port in k588 */
static void C_ccall f_846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_846,2,t0,t1);}
/* ports.scm:114: read */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

/* f_1217 in k1198 in with-output-to-string in k588 */
static void C_ccall f_1217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1217,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[24]+1));
t3=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_1180 in k1174 in with-input-from-string in k588 */
static void C_ccall f_1180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1180,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[102] = {
{"f_1222:ports_2escm",(void*)f_1222},
{"f_743:ports_2escm",(void*)f_743},
{"f_1175:ports_2escm",(void*)f_1175},
{"toplevel:ports_2escm",(void*)C_ports_toplevel},
{"f_591:ports_2escm",(void*)f_591},
{"f_731:ports_2escm",(void*)f_731},
{"f_923:ports_2escm",(void*)f_923},
{"f_597:ports_2escm",(void*)f_597},
{"f_1185:ports_2escm",(void*)f_1185},
{"f_735:ports_2escm",(void*)f_735},
{"f_1015:ports_2escm",(void*)f_1015},
{"f_589:ports_2escm",(void*)f_589},
{"f_1248:ports_2escm",(void*)f_1248},
{"f_1246:ports_2escm",(void*)f_1246},
{"f_906:ports_2escm",(void*)f_906},
{"f_794:ports_2escm",(void*)f_794},
{"f_797:ports_2escm",(void*)f_797},
{"f_1361:ports_2escm",(void*)f_1361},
{"f_1363:ports_2escm",(void*)f_1363},
{"f_1033:ports_2escm",(void*)f_1033},
{"f_1038:ports_2escm",(void*)f_1038},
{"f_1190:ports_2escm",(void*)f_1190},
{"f_1001:ports_2escm",(void*)f_1001},
{"f_1006:ports_2escm",(void*)f_1006},
{"f_1151:ports_2escm",(void*)f_1151},
{"f_1155:ports_2escm",(void*)f_1155},
{"f_682:ports_2escm",(void*)f_682},
{"f_828:ports_2escm",(void*)f_828},
{"f_1199:ports_2escm",(void*)f_1199},
{"f_1160:ports_2escm",(void*)f_1160},
{"f_1195:ports_2escm",(void*)f_1195},
{"f_1164:ports_2escm",(void*)f_1164},
{"f_673:ports_2escm",(void*)f_673},
{"f_1171:ports_2escm",(void*)f_1171},
{"f_823:ports_2escm",(void*)f_823},
{"f_1131:ports_2escm",(void*)f_1131},
{"f_1166:ports_2escm",(void*)f_1166},
{"f_678:ports_2escm",(void*)f_678},
{"f_690:ports_2escm",(void*)f_690},
{"f_1287:ports_2escm",(void*)f_1287},
{"f_1283:ports_2escm",(void*)f_1283},
{"f_642:ports_2escm",(void*)f_642},
{"f_644:ports_2escm",(void*)f_644},
{"f_1295:ports_2escm",(void*)f_1295},
{"f_1290:ports_2escm",(void*)f_1290},
{"f_1250:ports_2escm",(void*)f_1250},
{"f_1079:ports_2escm",(void*)f_1079},
{"f_1269:ports_2escm",(void*)f_1269},
{"f_1384:ports_2escm",(void*)f_1384},
{"f_1103:ports_2escm",(void*)f_1103},
{"f_711:ports_2escm",(void*)f_711},
{"f_654:ports_2escm",(void*)f_654},
{"f_650:ports_2escm",(void*)f_650},
{"f_1093:ports_2escm",(void*)f_1093},
{"f_1098:ports_2escm",(void*)f_1098},
{"f_666:ports_2escm",(void*)f_666},
{"f_702:ports_2escm",(void*)f_702},
{"f_1107:ports_2escm",(void*)f_1107},
{"f_763:ports_2escm",(void*)f_763},
{"f_761:ports_2escm",(void*)f_761},
{"f_1379:ports_2escm",(void*)f_1379},
{"f_1376:ports_2escm",(void*)f_1376},
{"f_1371:ports_2escm",(void*)f_1371},
{"f_752:ports_2escm",(void*)f_752},
{"f_601:ports_2escm",(void*)f_601},
{"f_757:ports_2escm",(void*)f_757},
{"f_952:ports_2escm",(void*)f_952},
{"f_1083:ports_2escm",(void*)f_1083},
{"f_1088:ports_2escm",(void*)f_1088},
{"f_957:ports_2escm",(void*)f_957},
{"f_609:ports_2escm",(void*)f_609},
{"f_1141:ports_2escm",(void*)f_1141},
{"f_1136:ports_2escm",(void*)f_1136},
{"f_984:ports_2escm",(void*)f_984},
{"f_620:ports_2escm",(void*)f_620},
{"f_624:ports_2escm",(void*)f_624},
{"f_897:ports_2escm",(void*)f_897},
{"f_1112:ports_2escm",(void*)f_1112},
{"f_1146:ports_2escm",(void*)f_1146},
{"f_932:ports_2escm",(void*)f_932},
{"f_614:ports_2escm",(void*)f_614},
{"f_888:ports_2escm",(void*)f_888},
{"f_886:ports_2escm",(void*)f_886},
{"f_1122:ports_2escm",(void*)f_1122},
{"f_1117:ports_2escm",(void*)f_1117},
{"f_880:ports_2escm",(void*)f_880},
{"f_966:ports_2escm",(void*)f_966},
{"f_1127:ports_2escm",(void*)f_1127},
{"f_1348:ports_2escm",(void*)f_1348},
{"f_943:ports_2escm",(void*)f_943},
{"f_1204:ports_2escm",(void*)f_1204},
{"f_917:ports_2escm",(void*)f_917},
{"f_1359:ports_2escm",(void*)f_1359},
{"f_1209:ports_2escm",(void*)f_1209},
{"f_851:ports_2escm",(void*)f_851},
{"f_1055:ports_2escm",(void*)f_1055},
{"f_1053:ports_2escm",(void*)f_1053},
{"f_1212:ports_2escm",(void*)f_1212},
{"f_846:ports_2escm",(void*)f_846},
{"f_1217:ports_2escm",(void*)f_1217},
{"f_1180:ports_2escm",(void*)f_1180},
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
S|applied compiler syntax:
S|  for-each		2
o|eliminated procedure checks: 14 
o|specializations:
o|  2 (##sys#check-list (or pair list) *)
o|  2 (make-string fixnum)
o|Removed `not' forms: 1 
o|inlining procedure: k602 
o|inlining procedure: k602 
o|inlining procedure: k625 
o|inlining procedure: k625 
o|inlining procedure: k655 
o|inlining procedure: k655 
o|inlining procedure: k808 
o|contracted procedure: "(ports.scm:105) read-buf86" 
o|inlining procedure: k683 
o|inlining procedure: k683 
o|substituted constant variable: a694 
o|contracted procedure: "(ports.scm:109) write-buf87" 
o|inlining procedure: k705 
o|inlining procedure: k705 
o|inlining procedure: k808 
o|contracted procedure: "(ports.scm:111) read-and-write-buf89" 
o|inlining procedure: k764 
o|inlining procedure: k764 
o|substituted constant variable: a796 
o|contracted procedure: "(ports.scm:113) read-and-write88" 
o|inlining procedure: k736 
o|inlining procedure: k736 
o|propagated global variable: g177178 write-string 
o|inlining procedure: k900 
o|inlining procedure: k900 
o|inlining procedure: k926 
o|inlining procedure: k926 
o|inlining procedure: k960 
o|inlining procedure: k960 
o|inlining procedure: k986 
o|inlining procedure: k986 
o|inlining procedure: k1009 
o|inlining procedure: k1009 
o|inlining procedure: k1041 
o|inlining procedure: k1041 
o|inlining procedure: k1254 
o|inlining procedure: k1254 
o|inlining procedure: k1273 
o|inlining procedure: k1273 
o|inlining procedure: k1386 
o|inlining procedure: k1386 
o|replaced variables: 98 
o|removed binding forms: 61 
o|substituted constant variable: f_9591417 
o|substituted constant variable: f_9851419 
o|substituted constant variable: f_10081421 
o|replaced variables: 3 
o|removed binding forms: 106 
o|replaced variables: 1 
o|removed binding forms: 6 
o|removed binding forms: 1 
o|simplifications: ((if . 14) (##core#call . 82)) 
o|  call simplifications:
o|    string
o|    ##sys#setslot
o|    ##sys#setislot	3
o|    vector	4
o|    fx<=
o|    fx<
o|    fx-
o|    read-char
o|    pair?	2
o|    ##sys#slot	6
o|    car	11
o|    null?	17
o|    cdr	9
o|    char->integer
o|    ##sys#setbyte
o|    fx>=	3
o|    ##sys#byte
o|    integer->char
o|    fx+	4
o|    eq?	4
o|    cons	2
o|    eof-object?	7
o|contracted procedure: k605 
o|contracted procedure: k628 
o|contracted procedure: k638 
o|contracted procedure: k658 
o|contracted procedure: k873 
o|contracted procedure: k800 
o|contracted procedure: k867 
o|contracted procedure: k802 
o|contracted procedure: k861 
o|contracted procedure: k804 
o|contracted procedure: k855 
o|contracted procedure: k806 
o|contracted procedure: k811 
o|contracted procedure: k820 
o|contracted procedure: k818 
o|contracted procedure: k707 
o|contracted procedure: k716 
o|contracted procedure: k722 
o|contracted procedure: k719 
o|contracted procedure: k686 
o|contracted procedure: k836 
o|contracted procedure: k767 
o|contracted procedure: k773 
o|contracted procedure: k788 
o|contracted procedure: k779 
o|contracted procedure: k785 
o|contracted procedure: k790 
o|contracted procedure: k739 
o|contracted procedure: k902 
o|contracted procedure: k911 
o|contracted procedure: k914 
o|contracted procedure: k928 
o|contracted procedure: k937 
o|contracted procedure: k940 
o|contracted procedure: k946 
o|contracted procedure: k962 
o|contracted procedure: k970 
o|contracted procedure: k974 
o|contracted procedure: k981 
o|contracted procedure: k988 
o|contracted procedure: k995 
o|contracted procedure: k1011 
o|contracted procedure: k1019 
o|contracted procedure: k1023 
o|contracted procedure: k1030 
o|contracted procedure: k1043 
o|contracted procedure: k1049 
o|contracted procedure: k1060 
o|contracted procedure: k1063 
o|contracted procedure: k1065 
o|contracted procedure: k1069 
o|contracted procedure: k1073 
o|contracted procedure: k1076 
o|contracted procedure: k1341 
o|contracted procedure: k1225 
o|contracted procedure: k1335 
o|contracted procedure: k1227 
o|contracted procedure: k1329 
o|contracted procedure: k1229 
o|contracted procedure: k1323 
o|contracted procedure: k1231 
o|contracted procedure: k1317 
o|contracted procedure: k1233 
o|contracted procedure: k1311 
o|contracted procedure: k1235 
o|contracted procedure: k1305 
o|contracted procedure: k1237 
o|contracted procedure: k1299 
o|contracted procedure: k1239 
o|contracted procedure: k1252 
o|contracted procedure: k1263 
o|contracted procedure: k1271 
o|contracted procedure: k1284 
o|contracted procedure: k1241 
o|contracted procedure: k1243 
o|contracted procedure: k1391 
o|contracted procedure: k1351 
o|contracted procedure: k1368 
o|contracted procedure: k1354 
o|contracted procedure: k1356 
o|simplifications: ((let . 18)) 
o|removed binding forms: 80 
o|replaced variables: 2 
o|removed binding forms: 2 
o|customizable procedures: (k1054 loop224 loop213 loop205 for-each-loop186196 for-each-loop161179 loop108 k760 loop116 loop93 doloop101102 loop79 loop71 loop64) 
o|calls to known targets: 28 
o|fast box initializations: 12 
*/
/* end of file */
