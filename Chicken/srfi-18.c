/* Generated from srfi-18.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-09-24 17:49
   Version 4.8.0 (rev 0db1908)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: srfi-18.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-18.c
   unit: srfi_2d18
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[110];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,31),40,99,111,109,112,117,116,101,45,116,105,109,101,45,108,105,109,105,116,32,116,109,56,56,32,108,111,99,56,57,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,99,117,114,114,101,110,116,45,116,105,109,101,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,20),40,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,57,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,19),40,115,101,99,111,110,100,115,45,62,116,105,109,101,32,110,57,56,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,116,105,109,101,63,32,120,49,48,49,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,30),40,106,111,105,110,45,116,105,109,101,111,117,116,45,101,120,99,101,112,116,105,111,110,63,32,120,49,48,52,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,33),40,97,98,97,110,100,111,110,101,100,45,109,117,116,101,120,45,101,120,99,101,112,116,105,111,110,63,32,120,49,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,35),40,116,101,114,109,105,110,97,116,101,100,45,116,104,114,101,97,100,45,101,120,99,101,112,116,105,111,110,63,32,120,49,49,48,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,26),40,117,110,99,97,117,103,104,116,45,101,120,99,101,112,116,105,111,110,63,32,120,49,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,20),40,102,95,56,48,56,32,46,32,114,101,115,117,108,116,115,49,50,48,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,102,95,56,48,51,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,32),40,109,97,107,101,45,116,104,114,101,97,100,32,116,104,117,110,107,49,49,55,32,46,32,110,97,109,101,49,49,56,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,14),40,116,104,114,101,97,100,63,32,120,49,50,53,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,99,117,114,114,101,110,116,45,116,104,114,101,97,100,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,24),40,116,104,114,101,97,100,45,115,116,97,116,101,32,116,104,114,101,97,100,49,50,56,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,116,104,114,101,97,100,49,51,49,32,120,49,51,50,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,32,116,104,114,101,97,100,49,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,36),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,45,115,101,116,33,32,116,104,114,101,97,100,49,52,49,32,113,49,52,50,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,18),40,116,104,114,101,97,100,45,110,97,109,101,32,120,49,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,25),40,116,104,114,101,97,100,45,115,116,97,114,116,33,32,116,104,114,101,97,100,49,52,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,102,95,57,53,56,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,17),40,102,95,57,52,54,32,114,101,116,117,114,110,49,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,106,111,105,110,33,32,116,104,114,101,97,100,49,53,54,32,46,32,116,105,109,101,111,117,116,49,53,55,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,29),40,116,104,114,101,97,100,45,116,101,114,109,105,110,97,116,101,33,32,116,104,114,101,97,100,49,55,57,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,48,54,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,102,95,49,48,57,56,32,114,101,116,117,114,110,49,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,27),40,116,104,114,101,97,100,45,115,117,115,112,101,110,100,33,32,116,104,114,101,97,100,49,56,56,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,114,101,115,117,109,101,33,32,116,104,114,101,97,100,49,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,53,49,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,18),40,102,95,49,49,52,49,32,114,101,116,117,114,110,50,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,21),40,116,104,114,101,97,100,45,115,108,101,101,112,33,32,116,109,49,57,56,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,109,117,116,101,120,63,32,120,50,48,56,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,24),40,109,97,107,101,45,109,117,116,101,120,32,46,32,116,109,112,50,49,52,50,49,53,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,17),40,109,117,116,101,120,45,110,97,109,101,32,120,50,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,25),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,32,109,117,116,101,120,50,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,35),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,109,117,116,101,120,50,50,56,32,120,50,50,57,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,22),40,109,117,116,101,120,45,115,116,97,116,101,32,109,117,116,101,120,50,51,50,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,115,119,105,116,99,104,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,99,104,101,99,107,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,8),40,102,95,49,51,55,48,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,8),40,102,95,49,52,49,53,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,18),40,102,95,49,50,54,49,32,114,101,116,117,114,110,50,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,36),40,109,117,116,101,120,45,108,111,99,107,33,32,109,117,116,101,120,50,52,49,32,46,32,109,115,45,97,110,100,45,116,50,52,50,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,8),40,102,95,49,53,52,56,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,8),40,102,95,49,53,56,48,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,18),40,102,95,49,52,53,53,32,114,101,116,117,114,110,50,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,41),40,109,117,116,101,120,45,117,110,108,111,99,107,33,32,109,117,116,101,120,50,57,48,32,46,32,99,118,97,114,45,97,110,100,45,116,111,50,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,32,46,32,110,97,109,101,51,51,48,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,63,32,120,51,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,31),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,110,97,109,101,32,99,118,51,51,52,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,35),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,32,99,118,51,51,55,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,45),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,99,118,51,52,48,32,120,51,52,49,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,36),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,105,103,110,97,108,33,32,99,118,97,114,51,52,52,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,14),40,102,95,49,55,49,50,32,116,105,51,54,55,41,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,53,55,32,103,51,54,52,51,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,39),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,98,114,111,97,100,99,97,115,116,33,32,99,118,97,114,51,53,52,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,8),40,102,95,49,55,56,57,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,33),40,116,104,114,101,97,100,45,115,105,103,110,97,108,33,32,116,104,114,101,97,100,51,56,48,32,101,120,110,51,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,114,101,97,100,45,112,114,111,109,112,116,45,104,111,111,107,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,40),40,116,104,114,101,97,100,45,119,97,105,116,45,102,111,114,45,105,47,111,33,32,102,100,52,48,52,32,46,32,116,109,112,52,48,51,52,48,53,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,18),40,102,95,49,56,56,48,32,116,104,114,101,97,100,49,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1834)
static void C_ccall f_1834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1564)
static void C_ccall f_1564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1971)
static void C_ccall f1971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1548)
static void C_ccall f_1548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1469)
static void C_fcall f_1469(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1967)
static void C_ccall f1967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1963)
static void C_ccall f1963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1141)
static void C_ccall f_1141(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1111)
static void C_ccall f_1111(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1210)
static void C_ccall f_1210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1455)
static void C_ccall f_1455(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1106)
static void C_ccall f_1106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_fcall f_901(C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1242)
static void C_ccall f_1242(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1242)
static void C_ccall f_1242r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_923)
static void C_ccall f_923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_839)
static void C_ccall f_839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1261)
static void C_ccall f_1261(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_929)
static void C_ccall f_929(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_929)
static void C_ccall f_929r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1264)
static void C_fcall f_1264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_731)
static void C_ccall f_731(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1056)
static void C_ccall f_1056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_722)
static void C_ccall f_722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_724)
static void C_ccall f_724(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_650)
static void C_ccall f_650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_652)
static void C_fcall f_652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1446)
static void C_fcall f_1446(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1151)
static void C_ccall f_1151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_648)
static void C_ccall f_648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_695)
static void C_ccall f_695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_793)
static void C_ccall f_793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_799)
static void C_ccall f_799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1712)
static void C_ccall f_1712(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_680)
static void C_ccall f_680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_697)
static void C_ccall f_697(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_949)
static void C_ccall f_949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1804)
static void C_ccall f_1804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_688)
static void C_ccall f_688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_865)
static void C_ccall f_865(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_776)
static void C_ccall f_776(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_761)
static void C_ccall f_761(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_srfi_2d18_toplevel)
C_externexport void C_ccall C_srfi_2d18_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1780)
static void C_fcall f_1780(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1792)
static void C_ccall f_1792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_709)
static void C_ccall f_709(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1282)
static void C_fcall f_1282(C_word t0,C_word t1) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_803)
static void C_ccall f_803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1178)
static void C_ccall f_1178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1741)
static void C_fcall f_1741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_953)
static void C_ccall f_953(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1469)
static void C_fcall trf_1469(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1469(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1469(t0,t1);}

C_noret_decl(trf_901)
static void C_fcall trf_901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_901(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_901(t0,t1);}

C_noret_decl(trf_1264)
static void C_fcall trf_1264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1264(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1264(t0,t1);}

C_noret_decl(trf_652)
static void C_fcall trf_652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_652(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_652(t0,t1,t2);}

C_noret_decl(trf_1446)
static void C_fcall trf_1446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1446(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1446(t0,t1);}

C_noret_decl(trf_1780)
static void C_fcall trf_1780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1780(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1780(t0,t1);}

C_noret_decl(trf_1282)
static void C_fcall trf_1282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1282(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1282(t0,t1);}

C_noret_decl(trf_1741)
static void C_fcall trf_1741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1741(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1741(t0,t1,t2);}

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

/* ##sys#read-prompt-hook in k861 in k791 in k649 in k647 */
static void C_ccall f_1839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1839,2,t0,t1);}
t2=C_fudge(C_fix(12));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1848,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_1848(2,t4,t2);}
else{
/* srfi-18.scm:443: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[101]+1)))(3,*((C_word*)lf[101]+1),t3,*((C_word*)lf[102]+1));}}

/* f_958 in k948 */
static void C_ccall f_958(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_958,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_eqp(t2,lf[29]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_969,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[4],C_fix(13)))){
t5=C_slot(((C_word*)t0)[2],C_fix(2));
C_apply(4,0,t1,((C_word*)t0)[3],t5);}
else{
/* srfi-18.scm:178: ##sys#remove-from-timeout-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t4,((C_word*)t0)[4]);}}
else{
t4=C_eqp(t2,lf[52]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(((C_word*)t0)[2],C_fix(7));
t7=C_a_i_list2(&a,2,lf[53],t6);
t8=C_a_i_record3(&a,3,lf[17],lf[54],t7);
/* srfi-18.scm:182: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t5,t8);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1008,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[5])){
/* srfi-18.scm:187: return */
t6=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t1,((C_word*)t0)[6]);}
else{
t6=C_a_i_record3(&a,3,lf[17],lf[55],C_SCHEME_END_OF_LIST);
/* srfi-18.scm:190: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t5,t6);}}}}

/* k1470 in k1467 in k1459 */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[5]))){
t3=t2;
f_1473(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_slot(((C_word*)t0)[5],C_fix(0));
t4=C_slot(t3,C_fix(3));
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=C_i_setslot(((C_word*)t0)[6],C_fix(3),t5);
t7=C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t8=C_eqp(t4,lf[86]);
t9=(C_truep(t8)?t8:C_eqp(t4,lf[82]));
if(C_truep(t9)){
t10=C_i_setslot(((C_word*)t0)[6],C_fix(2),t3);
t11=C_slot(t3,C_fix(8));
t12=C_a_i_cons(&a,2,((C_word*)t0)[6],t11);
t13=C_i_setslot(t3,C_fix(8),t12);
t14=C_i_set_i_slot(t3,C_fix(11),C_SCHEME_FALSE);
t15=C_eqp(t4,lf[82]);
if(C_truep(t15)){
/* srfi-18.scm:358: ##sys#add-to-ready-queue */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(3,*((C_word*)lf[45]+1),t2,t3);}
else{
t16=t2;
f_1473(2,t16,C_SCHEME_UNDEFINED);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=t2;
f_1473(2,t11,t10);}}}

/* k1833 in thread-signal! in k861 in k791 in k649 in k647 */
static void C_ccall f_1834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1780(t2,C_i_setslot(((C_word*)t0)[3],C_fix(12),t1));}

/* k1472 in k1470 in k1467 in k1459 */
static void C_ccall f_1473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_eqp(t2,lf[85]);
if(C_truep(t3)){
/* srfi-18.scm:360: return */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[4],C_SCHEME_TRUE);}
else{
/* srfi-18.scm:361: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[4]);}}

/* k1749 in for-each-loop357 in condition-variable-broadcast! in k861 in k791 in k649 in k647 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1741(t3,((C_word*)t0)[4],t2);}

/* k1563 in k1569 */
static void C_ccall f_1564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:344: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* k1846 in read-prompt-hook in k861 in k791 in k649 in k647 */
static void C_ccall f_1848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1848,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:444: old */
t3=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1569 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1570,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=C_i_set_i_slot(((C_word*)t0)[3],C_fix(11),C_SCHEME_FALSE);
if(C_truep(C_slot(((C_word*)t0)[3],C_fix(13)))){
/* srfi-18.scm:341: return */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[5],C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1564,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:343: ##sys#remove-from-timeout-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t4,((C_word*)t0)[3]);}}

/* k1851 in k1849 in k1846 in read-prompt-hook in k861 in k791 in k649 in k647 */
static void C_ccall f_1852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:446: thread-yield! */
t2=*((C_word*)lf[48]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f1971 */
static void C_ccall f1971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:291: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* k1849 in k1846 in read-prompt-hook in k861 in k791 in k649 in k647 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1852,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:445: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[99]+1)))(5,*((C_word*)lf[99]+1),t2,*((C_word*)lf[30]+1),C_fix(0),lf[100]);}

/* k1734 in condition-variable-broadcast! in k861 in k791 in k649 in k647 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST));}

/* f_1548 in k1585 in k1467 in k1459 */
static void C_ccall f_1548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(2));
/* srfi-18.scm:338: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(4,*((C_word*)lf[81]+1),t2,((C_word*)t0)[3],t3);}

/* k1467 in k1459 */
static void C_fcall f_1469(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1469,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1586,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_slot(((C_word*)t0)[7],C_fix(2));
t5=C_a_i_list(&a,1,((C_word*)t0)[2]);
/* srfi-18.scm:332: ##sys#append */
t6=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}
else{
t3=t2;
f_1471(2,t3,C_SCHEME_UNDEFINED);}}

/* k1459 */
static void C_ccall f_1460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1460,2,t0,t1);}
t2=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_FALSE);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_FALSE);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1469,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1598,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t4,C_fix(8));
/* srfi-18.scm:330: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(4,*((C_word*)lf[81]+1),t6,((C_word*)t0)[2],t7);}
else{
t6=t5;
f_1469(t6,C_SCHEME_UNDEFINED);}}

/* f1967 */
static void C_ccall f1967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:291: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* k1360 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li39),tmp=(C_word)a,a+=8,tmp);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1365,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:305: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),t4,((C_word*)t0)[3],((C_word*)t0)[9]);}

/* k1364 in k1360 */
static void C_ccall f_1365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:306: switch */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1264(t2,((C_word*)t0)[3]);}

/* f1963 */
static void C_ccall f1963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:291: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* thread-sleep! in k861 in k791 in k649 in k647 */
static void C_ccall f_1131(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1131,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1156,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_1156(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm:227: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[4],lf[65],lf[66],t2);}}

/* condition-variable-signal! in k861 in k791 in k649 in k647 */
static void C_ccall f_1670(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1670,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[84],lf[92]);
t4=C_slot(t2,C_fix(2));
if(C_truep(C_i_nullp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_slot(t4,C_fix(0));
t6=C_slot(t5,C_fix(3));
t7=C_slot(t4,C_fix(1));
t8=C_i_setslot(t2,C_fix(2),t7);
t9=C_eqp(t6,lf[86]);
if(C_truep(t9)){
if(C_truep(t9)){
/* srfi-18.scm:399: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),t1,t5);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}}
else{
t10=C_eqp(t6,lf[82]);
if(C_truep(t10)){
/* srfi-18.scm:399: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),t1,t5);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}}}

/* k1145 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:226: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[2]);}

/* f_1141 in k1161 in k1155 in thread-sleep! in k861 in k791 in k649 in k647 */
static void C_ccall f_1141(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1141,3,t0,t1,t2);}
t3=*((C_word*)lf[30]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1151,a[2]=t2,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(*((C_word*)lf[30]+1),C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1146,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:225: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),t6,*((C_word*)lf[30]+1),((C_word*)t0)[2]);}

/* mutex-specific in k861 in k791 in k649 in k647 */
static void C_ccall f_1201(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1201,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[68],lf[72]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* k1400 */
static void C_ccall f_1401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1401,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1375,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_slot(((C_word*)t0)[3],C_fix(13)))){
t4=t3;
f_1375(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm:299: ##sys#remove-from-timeout-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t3,((C_word*)t0)[3]);}}

/* thread-resume! in k861 in k791 in k649 in k647 */
static void C_ccall f_1111(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1111,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[64]);
t4=C_slot(t2,C_fix(3));
t5=C_eqp(t4,lf[63]);
if(C_truep(t5)){
t6=C_i_setslot(t2,C_fix(3),lf[44]);
/* srfi-18.scm:217: ##sys#add-to-ready-queue */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(3,*((C_word*)lf[45]+1),t1,t2);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* mutex-state in k861 in k791 in k649 in k647 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1219,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[68],lf[74]);
if(C_truep(C_slot(t2,C_fix(5)))){
t4=C_slot(t2,C_fix(2));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:lf[75]));}
else{
t4=C_slot(t2,C_fix(4));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?lf[76]:lf[77]));}}

/* mutex-specific-set! in k861 in k791 in k649 in k647 */
static void C_ccall f_1210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1210,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[68],lf[73]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(6),t3));}

/* f_1455 in k1445 in mutex-unlock! in k861 in k791 in k649 in k647 */
static void C_ccall f_1455(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1455,3,t0,t1,t2);}
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* srfi-18.scm:325: compute-time-limit */
f_652(t4,((C_word*)t0)[5],lf[83]);}
else{
t5=t4;
f_1460(2,t5,C_SCHEME_FALSE);}}

/* k1627 in make-condition-variable in k861 in k791 in k649 in k647 */
static void C_ccall f_1628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1628,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record4(&a,4,lf[84],t1,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}

/* make-condition-variable in k861 in k791 in k649 in k647 */
static void C_ccall f_1621(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_1621r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1621r(t0,t1,t2);}}

static void C_ccall f_1621r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1628,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[84],t5,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}
else{
/* srfi-18.scm:371: gensym */
t4=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[84]);}}

/* k1597 in k1459 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1469(t2,C_i_setslot(((C_word*)t0)[3],C_fix(8),t1));}

/* f_1106 */
static void C_ccall f_1106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1106,2,t0,t1);}
/* srfi-18.scm:210: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* k902 in k900 in thread-start! in k861 in k791 in k649 in k647 */
static void C_ccall f_903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_903,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(3),lf[44]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_907,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:155: ##sys#add-to-ready-queue */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(3,*((C_word*)lf[45]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k900 in thread-start! in k861 in k791 in k649 in k647 */
static void C_fcall f_901(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_901,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(3));
t4=C_eqp(lf[32],t3);
if(C_truep(t4)){
t5=t2;
f_903(2,t5,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm:153: ##sys#error */
t5=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[43],lf[47],((C_word*)((C_word*)t0)[2])[1]);}}

/* k906 in k902 in k900 in thread-start! in k861 in k791 in k649 in k647 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* mutex-lock! in k861 in k791 in k649 in k647 */
static void C_ccall f_1242(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1242r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1242r(t0,t1,t2,t3);}}

static void C_ccall f_1242r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[68],lf[78]);
t5=C_i_pairp(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1250,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_car(t3);
/* srfi-18.scm:260: compute-time-limit */
f_652(t6,t7,lf[78]);}
else{
t7=t6;
f_1250(2,t7,C_SCHEME_FALSE);}}

/* condition-variable-name in k861 in k791 in k649 in k647 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1643,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[84],lf[89]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k1249 in mutex-lock! in k861 in k791 in k649 in k647 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1250,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_length(t2);
t4=C_fixnum_greaterp(t3,C_fix(1));
t5=(C_truep(t4)?C_i_cadr(((C_word*)t0)[2]):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_check_structure_2(t5,lf[34],lf[78]):C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1261,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,a[5]=t4,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:264: ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[4],t7);}

/* k1417 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:310: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_TRUE);}

/* f_1415 */
static void C_ccall f_1415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:310: check */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1282(t3,t2);}

/* condition-variable-specific in k861 in k791 in k649 in k647 */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1652,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[84],lf[90]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* k921 in thread-start! in k861 in k791 in k649 in k647 */
static void C_ccall f_923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_901(t3,t2);}

/* current-thread in k791 in k649 in k647 */
static void C_ccall f_839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_839,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[30]+1));}

/* f_1261 in k1249 in mutex-lock! in k861 in k791 in k649 in k647 */
static void C_ccall f_1261(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[24],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1261,3,t0,t1,t2);}
t3=*((C_word*)lf[30]+1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1264,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1282,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(5)))){
if(C_truep(((C_word*)t0)[3])){
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1361,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t7,a[7]=t5,a[8]=t1,a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* srfi-18.scm:293: check */
t11=((C_word*)t7)[1];
f_1282(t11,t10);}
else{
t10=C_i_setslot(t3,C_fix(3),lf[82]);
t11=C_i_setslot(t3,C_fix(11),((C_word*)t0)[2]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1415,a[2]=t2,a[3]=t7,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
t13=C_i_setslot(t3,C_fix(1),t12);
/* srfi-18.scm:311: switch */
t14=((C_word*)t5)[1];
f_1264(t14,t1);}}
else{
t10=(C_truep(((C_word*)t0)[5])?C_i_not(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_SCHEME_FALSE);
t12=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_TRUE);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f1963,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:290: check */
t14=((C_word*)t7)[1];
f_1282(t14,t13);}
else{
t11=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:t3);
t12=C_slot(t11,C_fix(3));
t13=C_eqp(lf[52],t12);
t14=(C_truep(t13)?t13:C_eqp(lf[29],t12));
if(C_truep(t14)){
t15=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_TRUE);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f1967,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:290: check */
t17=((C_word*)t7)[1];
f_1282(t17,t16);}
else{
t15=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_TRUE);
t16=C_slot(t11,C_fix(8));
t17=C_a_i_cons(&a,2,((C_word*)t0)[2],t16);
t18=C_i_setslot(t11,C_fix(8),t17);
t19=C_i_setslot(t11,C_fix(11),((C_word*)t0)[2]);
t20=C_i_setslot(((C_word*)t0)[2],C_fix(2),t11);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f1971,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:290: check */
t22=((C_word*)t7)[1];
f_1282(t22,t21);}}}}

/* thread-join! in k861 in k791 in k649 in k647 */
static void C_ccall f_929(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_929r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_929r(t0,t1,t2,t3);}}

static void C_ccall f_929r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[34],lf[50]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_935,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
/* srfi-18.scm:164: compute-time-limit */
f_652(t5,t6,lf[50]);}
else{
t6=t5;
f_935(2,t6,C_SCHEME_FALSE);}}

/* switch */
static void C_fcall f_1264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1264,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* srfi-18.scm:268: ##sys#append */
t5=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* condition-variable-specific-set! in k861 in k791 in k649 in k647 */
static void C_ccall f_1661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1661,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[84],lf[91]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(3),t3));}

/* thread? in k791 in k649 in k647 */
static void C_ccall f_833(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_833,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[34]));}

/* thread-terminate! in k861 in k791 in k649 in k647 */
static void C_ccall f_1044(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1044,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[58]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1050,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t2,*((C_word*)lf[60]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1076,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:198: ##sys#exit-handler */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[61]+1)))(2,*((C_word*)lf[61]+1),t6);}
else{
t6=t4;
f_1050(2,t6,C_SCHEME_UNDEFINED);}}

/* join-timeout-exception? in k649 in k647 */
static void C_ccall f_731(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_731,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[18],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1055 in k1049 in thread-terminate! in k861 in k791 in k649 in k647 */
static void C_ccall f_1056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],*((C_word*)lf[30]+1));
if(C_truep(t2)){
/* srfi-18.scm:202: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[3]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1049 in thread-terminate! in k861 in k791 in k649 in k647 */
static void C_ccall f_1050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1050,2,t0,t1);}
t2=C_a_i_list1(&a,1,C_SCHEME_UNDEFINED);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=C_a_i_record3(&a,3,lf[17],lf[59],C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)t0)[2],C_fix(7),t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:201: ##sys#thread-kill! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(4,*((C_word*)lf[28]+1),t6,((C_word*)t0)[2],lf[52]);}

/* k721 in seconds->time in k649 in k647 */
static void C_ccall f_722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:66: fp* */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[9]);}

/* time? in k649 in k647 */
static void C_ccall f_724(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_724,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[1]));}

/* k649 in k647 */
static void C_ccall f_650(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_650,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! compute-time-limit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_652,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[6]+1 /* (set! current-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_688,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[7]+1 /* (set! time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_697,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[10]+1 /* (set! seconds->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_709,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[13]+1 /* (set! time? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_724,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[14]+1 /* (set! raise ...) */,*((C_word*)lf[15]+1));
t8=C_mutate((C_word*)lf[16]+1 /* (set! join-timeout-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_731,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[19]+1 /* (set! abandoned-mutex-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_746,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[21]+1 /* (set! terminated-thread-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_761,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[23]+1 /* (set! uncaught-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_776,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:92: condition-property-accessor */
t13=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t12,lf[24],lf[107]);}

/* compute-time-limit in k649 in k647 */
static void C_fcall f_652(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_652,NULL,3,t1,t2,t3);}
t4=t2;
if(C_truep(t4)){
if(C_truep(C_i_structurep(t2,lf[1]))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_slot(t2,C_fix(1)));}
else{
if(C_truep(C_i_numberp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_680,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:51: current-milliseconds */
t6=*((C_word*)lf[2]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* srfi-18.scm:52: ##sys#signal-hook */
t5=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,lf[4],t3,lf[5],t2);}}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* condition-variable? in k861 in k791 in k649 in k647 */
static void C_ccall f_1637(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1637,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[84]));}

/* k1445 in mutex-unlock! in k861 in k791 in k649 in k647 */
static void C_fcall f_1446(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1446,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_length(t2);
t4=C_fixnum_greaterp(t3,C_fix(1));
t5=(C_truep(t4)?C_i_cadr(((C_word*)t0)[2]):C_SCHEME_FALSE);
t6=(C_truep(t1)?C_i_check_structure_2(t1,lf[84],lf[83]):C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1455,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t5,a[6]=((C_word)li45),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:322: ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[5],t7);}

/* mutex-unlock! in k861 in k791 in k649 in k647 */
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1440r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1440r(t0,t1,t2,t3);}}

static void C_ccall f_1440r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t4=C_i_check_structure_2(t2,lf[68],lf[83]);
t5=*((C_word*)lf[30]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1446,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t7=t3;
t8=t6;
f_1446(t8,C_u_i_car(t7));}
else{
t7=t6;
f_1446(t7,C_SCHEME_FALSE);}}

/* k1155 in thread-sleep! in k861 in k791 in k649 in k647 */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:228: compute-time-limit */
f_652(t2,((C_word*)t0)[3],lf[65]);}

/* f_1151 */
static void C_ccall f_1151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1151,2,t0,t1);}
/* srfi-18.scm:224: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* k1007 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:187: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k647 */
static void C_ccall f_648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_650,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:36: register-feature! */
t3=*((C_word*)lf[108]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[109]);}

/* mutex? in k861 in k791 in k649 in k647 */
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1167,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[68]));}

/* k1161 in k1155 in thread-sleep! in k861 in k791 in k649 in k647 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1162,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1141,a[2]=t1,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:221: ##sys#call-with-current-continuation */
C_call_cc(3,0,t2,t3);}

/* condition-variable-broadcast! in k861 in k791 in k649 in k647 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1707,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[84],lf[94]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1712,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(2));
t6=C_i_check_list_2(t5,lf[95]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1736,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1741,a[2]=t9,a[3]=t4,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_1741(t11,t7,t5);}

/* k694 in current-time in k649 in k647 */
static void C_ccall f_695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_695,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,lf[1],t1));}

/* make-thread in k791 in k649 in k647 */
static void C_ccall f_795(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_795r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_795r(t0,t1,t2,t3);}}

static void C_ccall f_795r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_799,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_819,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
t7=C_slot(*((C_word*)lf[30]+1),C_fix(9));
/* srfi-18.scm:100: ##sys#make-thread */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(6,*((C_word*)lf[31]+1),t4,C_SCHEME_FALSE,lf[32],t6,t7);}
else{
/* srfi-18.scm:103: gensym */
t6=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[34]);}}

/* k791 in k649 in k647 */
static void C_ccall f_793(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_793,2,t0,t1);}
t2=C_mutate((C_word*)lf[25]+1 /* (set! uncaught-exception-reason ...) */,t1);
t3=C_mutate((C_word*)lf[26]+1 /* (set! make-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_795,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[35]+1 /* (set! thread? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_833,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[36]+1 /* (set! current-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_839,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[37]+1 /* (set! thread-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_843,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[38]+1 /* (set! thread-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_852,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1880,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:128: getter-with-setter */
t10=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,*((C_word*)lf[38]+1));}

/* k798 in make-thread in k791 in k649 in k647 */
static void C_ccall f_799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_803,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
t3=C_i_setslot(t1,C_fix(1),t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* f_1712 in condition-variable-broadcast! in k861 in k791 in k649 in k647 */
static void C_ccall f_1712(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1712,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(3));
t4=C_eqp(t3,lf[86]);
if(C_truep(t4)){
if(C_truep(t4)){
/* srfi-18.scm:408: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),t1,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}
else{
t5=C_eqp(t3,lf[82]);
if(C_truep(t5)){
/* srfi-18.scm:408: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),t1,t2);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* k679 in compute-time-limit in k649 in k647 */
static void C_ccall f_680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_680,2,t0,t1);}
t2=C_a_i_times(&a,2,((C_word*)t0)[2],C_fix(1000));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_plus(&a,2,t1,t2));}

/* time->seconds in k649 in k647 */
static void C_ccall f_697(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_697,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[1],lf[7]);
t4=C_slot(t2,C_fix(1));
/* srfi-18.scm:62: fp/ */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,lf[9]);}

/* thread-start! in k861 in k791 in k649 in k647 */
static void C_ccall f_897(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_897,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_901,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_923,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:150: make-thread */
t6=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t3)[1]);}
else{
t5=t4;
f_901(t5,C_i_check_structure_2(((C_word*)t3)[1],lf[34],lf[43]));}}

/* k948 */
static void C_ccall f_949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li20),tmp=(C_word)a,a+=8,tmp);
t3=C_i_setslot(((C_word*)t0)[4],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_953,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:192: ##sys#thread-block-for-termination! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(4,*((C_word*)lf[56]+1),t4,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* f_946 in k934 in thread-join! in k861 in k791 in k649 in k647 */
static void C_ccall f_946(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_946,3,t0,t1,t2);}
t3=*((C_word*)lf[30]+1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_949,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* srfi-18.scm:171: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),t4,*((C_word*)lf[30]+1),((C_word*)t0)[5]);}
else{
t5=t4;
f_949(2,t5,C_SCHEME_UNDEFINED);}}

/* k1803 in thread-signal! in k861 in k791 in k649 in k647 */
static void C_ccall f_1804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1780(t2,C_i_setslot(((C_word*)t0)[3],C_fix(2),t1));}

/* current-time in k649 in k647 */
static void C_ccall f_688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_688,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_695,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:58: current-milliseconds */
t3=*((C_word*)lf[2]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* thread-name in k861 in k791 in k649 in k647 */
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_888,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[42]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* k1818 in thread-signal! in k861 in k791 in k649 in k647 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1780(t2,C_i_setslot(((C_word*)t0)[3],C_fix(3),t1));}

/* k934 in thread-join! in k861 in k791 in k649 in k647 */
static void C_ccall f_935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_935,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
t4=(C_truep(t3)?C_i_pairp(t3):C_SCHEME_FALSE);
t5=(C_truep(t4)?C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_946,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t5,a[5]=t1,a[6]=((C_word)li21),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:168: ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[4],t6);}

/* k968 */
static void C_ccall f_969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(2));
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* thread-quantum-set! in k861 in k791 in k649 in k647 */
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_874,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[34],lf[41]);
t5=C_i_check_exact_2(t3,lf[41]);
t6=C_i_fixnum_max(t3,C_fix(10));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_set_i_slot(t2,C_fix(9),t6));}

/* abandoned-mutex-exception? in k649 in k647 */
static void C_ccall f_746(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_746,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[20],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k861 in k791 in k649 in k647 */
static void C_ccall f_863(C_word c,C_word t0,C_word t1){
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
C_word ab[82],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_863,2,t0,t1);}
t2=C_mutate((C_word*)lf[39]+1 /* (set! thread-specific ...) */,t1);
t3=C_mutate((C_word*)lf[40]+1 /* (set! thread-quantum ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_865,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[41]+1 /* (set! thread-quantum-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_874,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[42]+1 /* (set! thread-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_888,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[43]+1 /* (set! thread-start! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_897,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[48]+1 /* (set! thread-yield! ...) */,*((C_word*)lf[49]+1));
t8=C_mutate((C_word*)lf[50]+1 /* (set! thread-join! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_929,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[58]+1 /* (set! thread-terminate! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1044,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[62]+1 /* (set! thread-suspend! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1081,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[64]+1 /* (set! thread-resume! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1111,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[65]+1 /* (set! thread-sleep! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1131,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[67]+1 /* (set! mutex? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1167,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[69]+1 /* (set! make-mutex ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1173,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[71]+1 /* (set! mutex-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1192,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[72]+1 /* (set! mutex-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1201,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[73]+1 /* (set! mutex-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1210,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[74]+1 /* (set! mutex-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1219,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[78]+1 /* (set! mutex-lock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1242,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[83]+1 /* (set! mutex-unlock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1440,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[87]+1 /* (set! make-condition-variable ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1621,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[88]+1 /* (set! condition-variable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1637,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[89]+1 /* (set! condition-variable-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1643,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[90]+1 /* (set! condition-variable-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1652,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[91]+1 /* (set! condition-variable-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1661,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[92]+1 /* (set! condition-variable-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1670,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[94]+1 /* (set! condition-variable-broadcast! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1707,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[96]+1 /* (set! thread-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1761,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t29=*((C_word*)lf[98]+1);
t30=C_mutate((C_word*)lf[98]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1839,a[2]=t29,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp));
t31=C_mutate((C_word*)lf[103]+1 /* (set! thread-wait-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1860,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t32=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t32+1)))(2,t32,C_SCHEME_UNDEFINED);}

/* thread-quantum in k861 in k791 in k649 in k647 */
static void C_ccall f_865(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_865,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[40]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(9)));}

/* k1075 in thread-terminate! in k861 in k791 in k649 in k647 */
static void C_ccall f_1076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:197: g180 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* uncaught-exception? in k649 in k647 */
static void C_ccall f_776(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_776,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[24],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* thread-specific-set! in k791 in k649 in k647 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_852,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[34],lf[38]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(10),t3));}

/* thread-suspend! in k861 in k791 in k649 in k647 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1081,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[62]);
t4=C_i_setslot(t2,C_fix(3),lf[63]);
t5=C_eqp(t2,*((C_word*)lf[30]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1098,a[2]=t2,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:208: ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* thread-state in k791 in k649 in k647 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_843,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[37]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* terminated-thread-exception? in k649 in k647 */
static void C_ccall f_761(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_761,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[22],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1098 in thread-suspend! in k861 in k791 in k649 in k647 */
static void C_ccall f_1098(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1098,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1106,a[2]=t2,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t4=C_i_setslot(((C_word*)t0)[2],C_fix(1),t3);
/* srfi-18.scm:211: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d18_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d18_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d18_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1079)){
C_save(t1);
C_rereclaim2(1079*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,110);
lf[1]=C_h_intern(&lf[1],4,"time");
lf[2]=C_h_intern(&lf[2],20,"current-milliseconds");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[6]=C_h_intern(&lf[6],12,"current-time");
lf[7]=C_h_intern(&lf[7],13,"time->seconds");
lf[8]=C_h_intern(&lf[8],3,"fp/");
lf[9]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[10]=C_h_intern(&lf[10],13,"seconds->time");
lf[11]=C_h_intern(&lf[11],3,"fp\052");
lf[12]=C_h_intern(&lf[12],18,"\003sysexact->inexact");
lf[13]=C_h_intern(&lf[13],5,"time\077");
lf[14]=C_h_intern(&lf[14],5,"raise");
lf[15]=C_h_intern(&lf[15],10,"\003syssignal");
lf[16]=C_h_intern(&lf[16],23,"join-timeout-exception\077");
lf[17]=C_h_intern(&lf[17],9,"condition");
lf[18]=C_h_intern(&lf[18],22,"join-timeout-exception");
lf[19]=C_h_intern(&lf[19],26,"abandoned-mutex-exception\077");
lf[20]=C_h_intern(&lf[20],25,"abandoned-mutex-exception");
lf[21]=C_h_intern(&lf[21],28,"terminated-thread-exception\077");
lf[22]=C_h_intern(&lf[22],27,"terminated-thread-exception");
lf[23]=C_h_intern(&lf[23],19,"uncaught-exception\077");
lf[24]=C_h_intern(&lf[24],18,"uncaught-exception");
lf[25]=C_h_intern(&lf[25],25,"uncaught-exception-reason");
lf[26]=C_h_intern(&lf[26],11,"make-thread");
lf[27]=C_h_intern(&lf[27],12,"\003sysschedule");
lf[28]=C_h_intern(&lf[28],16,"\003systhread-kill!");
lf[29]=C_h_intern(&lf[29],4,"dead");
lf[30]=C_h_intern(&lf[30],18,"\003syscurrent-thread");
lf[31]=C_h_intern(&lf[31],15,"\003sysmake-thread");
lf[32]=C_h_intern(&lf[32],7,"created");
lf[33]=C_h_intern(&lf[33],6,"gensym");
lf[34]=C_h_intern(&lf[34],6,"thread");
lf[35]=C_h_intern(&lf[35],7,"thread\077");
lf[36]=C_h_intern(&lf[36],14,"current-thread");
lf[37]=C_h_intern(&lf[37],12,"thread-state");
lf[38]=C_h_intern(&lf[38],20,"thread-specific-set!");
lf[39]=C_h_intern(&lf[39],15,"thread-specific");
lf[40]=C_h_intern(&lf[40],14,"thread-quantum");
lf[41]=C_h_intern(&lf[41],19,"thread-quantum-set!");
lf[42]=C_h_intern(&lf[42],11,"thread-name");
lf[43]=C_h_intern(&lf[43],13,"thread-start!");
lf[44]=C_h_intern(&lf[44],5,"ready");
lf[45]=C_h_intern(&lf[45],22,"\003sysadd-to-ready-queue");
lf[46]=C_h_intern(&lf[46],9,"\003syserror");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000&thread cannot be started a second time");
lf[48]=C_h_intern(&lf[48],13,"thread-yield!");
lf[49]=C_h_intern(&lf[49],17,"\003systhread-yield!");
lf[50]=C_h_intern(&lf[50],12,"thread-join!");
lf[51]=C_h_intern(&lf[51],28,"\003sysremove-from-timeout-list");
lf[52]=C_h_intern(&lf[52],10,"terminated");
lf[53]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\001\000\000\006reason");
lf[54]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\377\016");
lf[55]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\026join-timeout-exception\376\377\016");
lf[56]=C_h_intern(&lf[56],33,"\003systhread-block-for-termination!");
lf[57]=C_h_intern(&lf[57],29,"\003systhread-block-for-timeout!");
lf[58]=C_h_intern(&lf[58],17,"thread-terminate!");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\033terminated-thread-exception\376\377\016");
lf[60]=C_h_intern(&lf[60],21,"\003sysprimordial-thread");
lf[61]=C_h_intern(&lf[61],16,"\003sysexit-handler");
lf[62]=C_h_intern(&lf[62],15,"thread-suspend!");
lf[63]=C_h_intern(&lf[63],9,"suspended");
lf[64]=C_h_intern(&lf[64],14,"thread-resume!");
lf[65]=C_h_intern(&lf[65],13,"thread-sleep!");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[67]=C_h_intern(&lf[67],6,"mutex\077");
lf[68]=C_h_intern(&lf[68],5,"mutex");
lf[69]=C_h_intern(&lf[69],10,"make-mutex");
lf[70]=C_h_intern(&lf[70],14,"\003sysmake-mutex");
lf[71]=C_h_intern(&lf[71],10,"mutex-name");
lf[72]=C_h_intern(&lf[72],14,"mutex-specific");
lf[73]=C_h_intern(&lf[73],19,"mutex-specific-set!");
lf[74]=C_h_intern(&lf[74],11,"mutex-state");
lf[75]=C_h_intern(&lf[75],9,"not-owned");
lf[76]=C_h_intern(&lf[76],9,"abandoned");
lf[77]=C_h_intern(&lf[77],13,"not-abandoned");
lf[78]=C_h_intern(&lf[78],11,"mutex-lock!");
lf[79]=C_h_intern(&lf[79],10,"\003sysappend");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\031abandoned-mutex-exception\376\377\016");
lf[81]=C_h_intern(&lf[81],8,"\003sysdelq");
lf[82]=C_h_intern(&lf[82],8,"sleeping");
lf[83]=C_h_intern(&lf[83],13,"mutex-unlock!");
lf[84]=C_h_intern(&lf[84],18,"condition-variable");
lf[85]=C_h_intern(&lf[85],7,"running");
lf[86]=C_h_intern(&lf[86],7,"blocked");
lf[87]=C_h_intern(&lf[87],23,"make-condition-variable");
lf[88]=C_h_intern(&lf[88],19,"condition-variable\077");
lf[89]=C_h_intern(&lf[89],23,"condition-variable-name");
lf[90]=C_h_intern(&lf[90],27,"condition-variable-specific");
lf[91]=C_h_intern(&lf[91],32,"condition-variable-specific-set!");
lf[92]=C_h_intern(&lf[92],26,"condition-variable-signal!");
lf[93]=C_h_intern(&lf[93],25,"\003systhread-basic-unblock!");
lf[94]=C_h_intern(&lf[94],29,"condition-variable-broadcast!");
lf[95]=C_h_intern(&lf[95],8,"for-each");
lf[96]=C_h_intern(&lf[96],14,"thread-signal!");
lf[97]=C_h_intern(&lf[97],19,"\003systhread-unblock!");
lf[98]=C_h_intern(&lf[98],20,"\003sysread-prompt-hook");
lf[99]=C_h_intern(&lf[99],25,"\003systhread-block-for-i/o!");
lf[100]=C_h_intern(&lf[100],6,"\000input");
lf[101]=C_h_intern(&lf[101],13,"\003systty-port\077");
lf[102]=C_h_intern(&lf[102],18,"\003sysstandard-input");
lf[103]=C_h_intern(&lf[103],20,"thread-wait-for-i/o!");
lf[104]=C_h_intern(&lf[104],4,"\000all");
lf[105]=C_h_intern(&lf[105],18,"getter-with-setter");
lf[106]=C_h_intern(&lf[106],27,"condition-property-accessor");
lf[107]=C_h_intern(&lf[107],6,"reason");
lf[108]=C_h_intern(&lf[108],17,"register-feature!");
lf[109]=C_h_intern(&lf[109],7,"srfi-18");
C_register_lf2(lf,110,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_648,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1779 in thread-signal! in k861 in k791 in k649 in k647 */
static void C_fcall f_1780(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1780,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp);
t3=C_i_setslot(((C_word*)t0)[4],C_fix(1),t2);
t4=C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[86]);
/* srfi-18.scm:435: ##sys#thread-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(3,*((C_word*)lf[97]+1),((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k1868 in thread-wait-for-i/o! in k861 in k791 in k649 in k647 */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:454: thread-yield! */
t2=*((C_word*)lf[48]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1789 in k1779 in thread-signal! in k861 in k791 in k649 in k647 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1792,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:432: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[3]);}

/* thread-wait-for-i/o! in k861 in k791 in k649 in k647 */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1860r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1860r(t0,t1,t2,t3);}}

static void C_ccall f_1860r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[104]:C_i_car(t3));
t6=C_i_check_exact_2(t2,lf[103]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1869,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:453: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[99]+1)))(5,*((C_word*)lf[99]+1),t7,*((C_word*)lf[30]+1),t2,t5);}

/* k992 */
static void C_ccall f_993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:181: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* f_1370 in k1360 */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(3));
/* srfi-18.scm:297: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(4,*((C_word*)lf[81]+1),t2,((C_word*)t0)[3],t3);}

/* k1376 in k1374 in k1400 */
static void C_ccall f_1377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1377,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(8));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_i_setslot(((C_word*)t0)[2],C_fix(8),t3);
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
t6=C_i_setslot(((C_word*)t0)[3],C_fix(2),((C_word*)t0)[4]);
/* srfi-18.scm:304: return */
t7=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k718 in seconds->time in k649 in k647 */
static void C_ccall f_719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_719,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,lf[1],t1));}

/* k1374 in k1400 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:300: check */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1282(t3,t2);}

/* k1791 */
static void C_ccall f_1792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:433: old */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}

/* k1273 in switch */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
/* srfi-18.scm:269: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[3]);}

/* seconds->time in k649 in k647 */
static void C_ccall f_709(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_709,3,t0,t1,t2);}
t3=C_i_check_number_2(t2,lf[10]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_719,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_722,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:66: ##sys#exact->inexact */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t5,t2);}

/* check */
static void C_fcall f_1282(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1282,NULL,2,t0,t1);}
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(4)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1295,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_record3(&a,3,lf[17],lf[80],C_SCHEME_END_OF_LIST);
/* srfi-18.scm:273: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k818 in make-thread in k791 in k649 in k647 */
static void C_ccall f_819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(*((C_word*)lf[30]+1),C_fix(9));
/* srfi-18.scm:100: ##sys#make-thread */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(6,*((C_word*)lf[31]+1),((C_word*)t0)[2],C_SCHEME_FALSE,lf[32],t1,t2);}

/* mutex-name in k861 in k791 in k649 in k647 */
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1192,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[68],lf[71]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f_1880 in k791 in k649 in k647 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1880,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[34],lf[39]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(10)));}

/* thread-signal! in k861 in k791 in k649 in k647 */
static void C_ccall f_1761(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1761,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[34],lf[96]);
t5=C_eqp(t2,*((C_word*)lf[30]+1));
if(C_truep(t5)){
/* srfi-18.scm:419: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t1,t3);}
else{
t6=C_slot(t2,C_fix(1));
t7=C_slot(t2,C_fix(11));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1780,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_structurep(t7,lf[84]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1804,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t7,C_fix(2));
/* srfi-18.scm:424: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(4,*((C_word*)lf[81]+1),t9,t2,t10);}
else{
if(C_truep(C_i_structurep(t7,lf[68]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1819,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t7,C_fix(3));
/* srfi-18.scm:426: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(4,*((C_word*)lf[81]+1),t9,t2,t10);}
else{
if(C_truep(C_i_structurep(t7,lf[34]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1834,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t7,C_fix(12));
/* srfi-18.scm:428: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(4,*((C_word*)lf[81]+1),t9,t2,t10);}
else{
t9=t8;
f_1780(t9,C_SCHEME_UNDEFINED);}}}}}

/* k812 */
static void C_ccall f_813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:113: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[2]);}

/* f_808 */
static void C_ccall f_808(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_808r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_808r(t0,t1,t2);}}

static void C_ccall f_808r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_813,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:112: ##sys#thread-kill! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(4,*((C_word*)lf[28]+1),t4,((C_word*)t0)[2],lf[29]);}

/* k1294 in check */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:272: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* f_1580 in k1585 in k1467 in k1459 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1580,2,t0,t1);}
/* srfi-18.scm:347: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_TRUE);}

/* k1585 in k1467 in k1459 */
static void C_ccall f_1586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1586,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(11),((C_word*)t0)[2]);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp);
t5=C_i_setslot(((C_word*)t0)[3],C_fix(1),t4);
/* srfi-18.scm:345: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1580,a[2]=((C_word*)t0)[5],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(((C_word*)t0)[3],C_fix(1),t4);
t6=((C_word*)t0)[6];
f_1471(2,t6,C_i_setslot(((C_word*)t0)[3],C_fix(3),lf[82]));}}

/* f_803 in k798 in make-thread in k791 in k649 in k647 */
static void C_ccall f_803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[2],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:108: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* k1176 in make-mutex in k861 in k791 in k649 in k647 */
static void C_ccall f_1178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:236: ##sys#make-mutex */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* make-mutex in k861 in k791 in k649 in k647 */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1173r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1173r(t0,t1,t2);}}

static void C_ccall f_1173r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1178,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* srfi-18.scm:235: gensym */
t4=*((C_word*)lf[33]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[68]);}
else{
t4=C_i_car(t2);
/* srfi-18.scm:236: ##sys#make-mutex */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t1,t4,C_SCHEME_FALSE);}}

/* for-each-loop357 in condition-variable-broadcast! in k861 in k791 in k649 in k647 */
static void C_fcall f_1741(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1741,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1750,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-18.scm:404: g358 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k952 in k948 */
static void C_ccall f_953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:193: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(2,*((C_word*)lf[27]+1),((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[124] = {
{"f_1839:srfi_2d18_2escm",(void*)f_1839},
{"f_958:srfi_2d18_2escm",(void*)f_958},
{"f_1471:srfi_2d18_2escm",(void*)f_1471},
{"f_1834:srfi_2d18_2escm",(void*)f_1834},
{"f_1473:srfi_2d18_2escm",(void*)f_1473},
{"f_1750:srfi_2d18_2escm",(void*)f_1750},
{"f_1564:srfi_2d18_2escm",(void*)f_1564},
{"f_1848:srfi_2d18_2escm",(void*)f_1848},
{"f_1570:srfi_2d18_2escm",(void*)f_1570},
{"f_1852:srfi_2d18_2escm",(void*)f_1852},
{"f1971:srfi_2d18_2escm",(void*)f1971},
{"f_1850:srfi_2d18_2escm",(void*)f_1850},
{"f_1736:srfi_2d18_2escm",(void*)f_1736},
{"f_1548:srfi_2d18_2escm",(void*)f_1548},
{"f_1469:srfi_2d18_2escm",(void*)f_1469},
{"f_1460:srfi_2d18_2escm",(void*)f_1460},
{"f1967:srfi_2d18_2escm",(void*)f1967},
{"f_1361:srfi_2d18_2escm",(void*)f_1361},
{"f_1365:srfi_2d18_2escm",(void*)f_1365},
{"f1963:srfi_2d18_2escm",(void*)f1963},
{"f_1131:srfi_2d18_2escm",(void*)f_1131},
{"f_1670:srfi_2d18_2escm",(void*)f_1670},
{"f_1146:srfi_2d18_2escm",(void*)f_1146},
{"f_1141:srfi_2d18_2escm",(void*)f_1141},
{"f_1201:srfi_2d18_2escm",(void*)f_1201},
{"f_1401:srfi_2d18_2escm",(void*)f_1401},
{"f_1111:srfi_2d18_2escm",(void*)f_1111},
{"f_1219:srfi_2d18_2escm",(void*)f_1219},
{"f_1210:srfi_2d18_2escm",(void*)f_1210},
{"f_1455:srfi_2d18_2escm",(void*)f_1455},
{"f_1628:srfi_2d18_2escm",(void*)f_1628},
{"f_1621:srfi_2d18_2escm",(void*)f_1621},
{"f_1598:srfi_2d18_2escm",(void*)f_1598},
{"f_1106:srfi_2d18_2escm",(void*)f_1106},
{"f_903:srfi_2d18_2escm",(void*)f_903},
{"f_901:srfi_2d18_2escm",(void*)f_901},
{"f_907:srfi_2d18_2escm",(void*)f_907},
{"f_1242:srfi_2d18_2escm",(void*)f_1242},
{"f_1643:srfi_2d18_2escm",(void*)f_1643},
{"f_1250:srfi_2d18_2escm",(void*)f_1250},
{"f_1418:srfi_2d18_2escm",(void*)f_1418},
{"f_1415:srfi_2d18_2escm",(void*)f_1415},
{"f_1652:srfi_2d18_2escm",(void*)f_1652},
{"f_923:srfi_2d18_2escm",(void*)f_923},
{"f_839:srfi_2d18_2escm",(void*)f_839},
{"f_1261:srfi_2d18_2escm",(void*)f_1261},
{"f_929:srfi_2d18_2escm",(void*)f_929},
{"f_1264:srfi_2d18_2escm",(void*)f_1264},
{"f_1661:srfi_2d18_2escm",(void*)f_1661},
{"f_833:srfi_2d18_2escm",(void*)f_833},
{"f_1044:srfi_2d18_2escm",(void*)f_1044},
{"f_731:srfi_2d18_2escm",(void*)f_731},
{"f_1056:srfi_2d18_2escm",(void*)f_1056},
{"f_1050:srfi_2d18_2escm",(void*)f_1050},
{"f_722:srfi_2d18_2escm",(void*)f_722},
{"f_724:srfi_2d18_2escm",(void*)f_724},
{"f_650:srfi_2d18_2escm",(void*)f_650},
{"f_652:srfi_2d18_2escm",(void*)f_652},
{"f_1637:srfi_2d18_2escm",(void*)f_1637},
{"f_1446:srfi_2d18_2escm",(void*)f_1446},
{"f_1440:srfi_2d18_2escm",(void*)f_1440},
{"f_1156:srfi_2d18_2escm",(void*)f_1156},
{"f_1151:srfi_2d18_2escm",(void*)f_1151},
{"f_1008:srfi_2d18_2escm",(void*)f_1008},
{"f_648:srfi_2d18_2escm",(void*)f_648},
{"f_1167:srfi_2d18_2escm",(void*)f_1167},
{"f_1162:srfi_2d18_2escm",(void*)f_1162},
{"f_1707:srfi_2d18_2escm",(void*)f_1707},
{"f_695:srfi_2d18_2escm",(void*)f_695},
{"f_795:srfi_2d18_2escm",(void*)f_795},
{"f_793:srfi_2d18_2escm",(void*)f_793},
{"f_799:srfi_2d18_2escm",(void*)f_799},
{"f_1712:srfi_2d18_2escm",(void*)f_1712},
{"f_680:srfi_2d18_2escm",(void*)f_680},
{"f_697:srfi_2d18_2escm",(void*)f_697},
{"f_897:srfi_2d18_2escm",(void*)f_897},
{"f_949:srfi_2d18_2escm",(void*)f_949},
{"f_946:srfi_2d18_2escm",(void*)f_946},
{"f_1804:srfi_2d18_2escm",(void*)f_1804},
{"f_688:srfi_2d18_2escm",(void*)f_688},
{"f_888:srfi_2d18_2escm",(void*)f_888},
{"f_1819:srfi_2d18_2escm",(void*)f_1819},
{"f_935:srfi_2d18_2escm",(void*)f_935},
{"f_969:srfi_2d18_2escm",(void*)f_969},
{"f_874:srfi_2d18_2escm",(void*)f_874},
{"f_746:srfi_2d18_2escm",(void*)f_746},
{"f_863:srfi_2d18_2escm",(void*)f_863},
{"f_865:srfi_2d18_2escm",(void*)f_865},
{"f_1076:srfi_2d18_2escm",(void*)f_1076},
{"f_776:srfi_2d18_2escm",(void*)f_776},
{"f_852:srfi_2d18_2escm",(void*)f_852},
{"f_1081:srfi_2d18_2escm",(void*)f_1081},
{"f_843:srfi_2d18_2escm",(void*)f_843},
{"f_761:srfi_2d18_2escm",(void*)f_761},
{"f_1098:srfi_2d18_2escm",(void*)f_1098},
{"toplevel:srfi_2d18_2escm",(void*)C_srfi_2d18_toplevel},
{"f_1780:srfi_2d18_2escm",(void*)f_1780},
{"f_1869:srfi_2d18_2escm",(void*)f_1869},
{"f_1789:srfi_2d18_2escm",(void*)f_1789},
{"f_1860:srfi_2d18_2escm",(void*)f_1860},
{"f_993:srfi_2d18_2escm",(void*)f_993},
{"f_1370:srfi_2d18_2escm",(void*)f_1370},
{"f_1377:srfi_2d18_2escm",(void*)f_1377},
{"f_719:srfi_2d18_2escm",(void*)f_719},
{"f_1375:srfi_2d18_2escm",(void*)f_1375},
{"f_1792:srfi_2d18_2escm",(void*)f_1792},
{"f_1274:srfi_2d18_2escm",(void*)f_1274},
{"f_709:srfi_2d18_2escm",(void*)f_709},
{"f_1282:srfi_2d18_2escm",(void*)f_1282},
{"f_819:srfi_2d18_2escm",(void*)f_819},
{"f_1192:srfi_2d18_2escm",(void*)f_1192},
{"f_1880:srfi_2d18_2escm",(void*)f_1880},
{"f_1761:srfi_2d18_2escm",(void*)f_1761},
{"f_813:srfi_2d18_2escm",(void*)f_813},
{"f_808:srfi_2d18_2escm",(void*)f_808},
{"f_1295:srfi_2d18_2escm",(void*)f_1295},
{"f_1580:srfi_2d18_2escm",(void*)f_1580},
{"f_1586:srfi_2d18_2escm",(void*)f_1586},
{"f_803:srfi_2d18_2escm",(void*)f_803},
{"f_1178:srfi_2d18_2escm",(void*)f_1178},
{"f_1173:srfi_2d18_2escm",(void*)f_1173},
{"f_1741:srfi_2d18_2escm",(void*)f_1741},
{"f_953:srfi_2d18_2escm",(void*)f_953},
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
S|  ##sys#for-each		1
o|eliminated procedure checks: 132 
o|specializations:
o|  2 (car pair)
o|  2 (length list)
o|  2 (eqv? * (not float))
o|Removed `not' forms: 2 
o|contracted procedure: k657 
o|inlining procedure: k655 
o|inlining procedure: k669 
o|inlining procedure: k669 
o|inlining procedure: k655 
o|inlining procedure: k734 
o|inlining procedure: k734 
o|inlining procedure: k749 
o|inlining procedure: k749 
o|inlining procedure: k764 
o|inlining procedure: k764 
o|inlining procedure: k779 
o|inlining procedure: k779 
o|inlining procedure: k962 
o|inlining procedure: k962 
o|inlining procedure: k1007 
o|inlining procedure: k1007 
o|substituted constant variable: a1016 
o|substituted constant variable: a1018 
o|propagated global variable: ct167 ##sys#current-thread 
o|inlining procedure: k1057 
o|inlining procedure: k1057 
o|inlining procedure: k1088 
o|inlining procedure: k1088 
o|inlining procedure: k1116 
o|inlining procedure: k1116 
o|contracted procedure: "(srfi-18.scm:228) sleep199" 
o|propagated global variable: ct202 ##sys#current-thread 
o|inlining procedure: k1176 
o|inlining procedure: k1176 
o|inlining procedure: k1224 
o|inlining procedure: k1224 
o|inlining procedure: k1285 
o|inlining procedure: k1285 
o|inlining procedure: k1299 
o|inlining procedure: k1299 
o|inlining procedure: k1325 
o|inlining procedure: k1325 
o|inlining procedure: k1474 
o|inlining procedure: k1474 
o|inlining procedure: k1500 
o|inlining procedure: k1500 
o|inlining procedure: k1539 
o|inlining procedure: k1554 
o|inlining procedure: k1554 
o|inlining procedure: k1539 
o|inlining procedure: k1627 
o|inlining procedure: k1627 
o|inlining procedure: k1677 
o|inlining procedure: k1677 
o|inlining procedure: k1716 
o|inlining procedure: k1716 
o|inlining procedure: k1744 
o|inlining procedure: k1744 
o|inlining procedure: k1766 
o|inlining procedure: k1766 
o|inlining procedure: k1808 
o|inlining procedure: k1808 
o|inlining procedure: k1842 
o|inlining procedure: k1842 
o|replaced variables: 141 
o|removed binding forms: 53 
o|substituted constant variable: f_6541890 
o|substituted constant variable: f_7331892 
o|substituted constant variable: f_7481894 
o|substituted constant variable: f_7631896 
o|substituted constant variable: f_7781898 
o|replaced variables: 1 
o|removed binding forms: 148 
o|inlining procedure: k1694 
o|inlining procedure: k1721 
o|removed binding forms: 6 
o|simplifications: ((if . 14) (##core#call . 224)) 
o|  call simplifications:
o|    ##sys#fudge
o|    ##sys#check-list
o|    ##sys#list
o|    fx>	2
o|    cadr	2
o|    not
o|    cons	3
o|    null?	4
o|    car	3
o|    ##sys#call-with-current-continuation	5
o|    list	3
o|    apply
o|    procedure?
o|    eq?	18
o|    ##sys#check-exact	2
o|    fxmax
o|    ##sys#setislot	9
o|    pair?	8
o|    ##sys#call-with-values
o|    ##sys#setslot	43
o|    memq	4
o|    ##sys#check-number
o|    ##sys#check-structure	26
o|    ##sys#make-structure	8
o|    ##sys#structure?	12
o|    number?
o|    *
o|    +
o|    ##sys#slot	60
o|contracted procedure: k663 
o|contracted procedure: k672 
o|contracted procedure: k682 
o|contracted procedure: k700 
o|contracted procedure: k706 
o|contracted procedure: k712 
o|contracted procedure: k736 
o|contracted procedure: k743 
o|contracted procedure: k751 
o|contracted procedure: k758 
o|contracted procedure: k766 
o|contracted procedure: k773 
o|contracted procedure: k781 
o|contracted procedure: k788 
o|contracted procedure: k810 
o|contracted procedure: k800 
o|contracted procedure: k821 
o|contracted procedure: k823 
o|contracted procedure: k846 
o|contracted procedure: k855 
o|contracted procedure: k868 
o|contracted procedure: k877 
o|contracted procedure: k879 
o|contracted procedure: k885 
o|contracted procedure: k891 
o|contracted procedure: k904 
o|contracted procedure: k915 
o|contracted procedure: k908 
o|contracted procedure: k917 
o|contracted procedure: k932 
o|contracted procedure: k1028 
o|contracted procedure: k936 
o|contracted procedure: k938 
o|contracted procedure: k940 
o|contracted procedure: k960 
o|contracted procedure: k965 
o|contracted procedure: k974 
o|contracted procedure: k976 
o|contracted procedure: k985 
o|contracted procedure: k1001 
o|contracted procedure: k998 
o|contracted procedure: k995 
o|contracted procedure: k1013 
o|contracted procedure: k950 
o|contracted procedure: k1034 
o|contracted procedure: k1041 
o|contracted procedure: k1047 
o|contracted procedure: k1070 
o|contracted procedure: k1051 
o|contracted procedure: k1067 
o|contracted procedure: k1053 
o|contracted procedure: k1060 
o|contracted procedure: k1072 
o|contracted procedure: k1084 
o|contracted procedure: k1086 
o|contracted procedure: k1091 
o|contracted procedure: k1100 
o|contracted procedure: k1114 
o|contracted procedure: k1128 
o|contracted procedure: k1119 
o|contracted procedure: k1122 
o|contracted procedure: k1143 
o|propagated global variable: ct202 ##sys#current-thread 
o|contracted procedure: k1182 
o|inlining procedure: k1176 
o|contracted procedure: k1195 
o|contracted procedure: k1204 
o|contracted procedure: k1213 
o|contracted procedure: k1222 
o|contracted procedure: k1227 
o|contracted procedure: k1230 
o|contracted procedure: k1238 
o|contracted procedure: k1245 
o|contracted procedure: k1247 
o|contracted procedure: k1251 
o|contracted procedure: k1253 
o|contracted procedure: k1255 
o|contracted procedure: k1267 
o|contracted procedure: k1276 
o|contracted procedure: k1279 
o|contracted procedure: k1287 
o|contracted procedure: k1297 
o|contracted procedure: k1302 
o|contracted procedure: k1372 
o|contracted procedure: k1391 
o|contracted procedure: k1388 
o|contracted procedure: k1378 
o|contracted procedure: k1380 
o|contracted procedure: k1382 
o|contracted procedure: k1393 
o|contracted procedure: k1403 
o|contracted procedure: k1362 
o|contracted procedure: k1405 
o|contracted procedure: k1407 
o|contracted procedure: k1409 
o|contracted procedure: k1312 
o|contracted procedure: k1315 
o|inlining procedure: k1305 
o|contracted procedure: k1320 
o|contracted procedure: k1323 
o|contracted procedure: k1328 
o|contracted procedure: k1330 
o|inlining procedure: k1305 
o|contracted procedure: k1336 
o|contracted procedure: k1349 
o|contracted procedure: k1346 
o|contracted procedure: k1338 
o|contracted procedure: k1340 
o|inlining procedure: k1305 
o|contracted procedure: k1437 
o|contracted procedure: k1443 
o|contracted procedure: k1608 
o|contracted procedure: k1447 
o|contracted procedure: k1449 
o|contracted procedure: k1457 
o|contracted procedure: k1461 
o|contracted procedure: k1463 
o|contracted procedure: k1465 
o|contracted procedure: k1487 
o|contracted procedure: k1477 
o|contracted procedure: k1489 
o|contracted procedure: k1492 
o|contracted procedure: k1494 
o|contracted procedure: k1533 
o|contracted procedure: k1496 
o|contracted procedure: k1498 
o|contracted procedure: k1503 
o|contracted procedure: k1505 
o|contracted procedure: k1508 
o|contracted procedure: k1527 
o|contracted procedure: k1524 
o|contracted procedure: k1510 
o|contracted procedure: k1512 
o|contracted procedure: k1517 
o|contracted procedure: k1535 
o|contracted procedure: k1537 
o|contracted procedure: k1550 
o|contracted procedure: k1552 
o|contracted procedure: k1557 
o|contracted procedure: k1572 
o|contracted procedure: k1542 
o|contracted procedure: k1574 
o|contracted procedure: k1588 
o|contracted procedure: k1591 
o|contracted procedure: k1600 
o|contracted procedure: k1616 
o|contracted procedure: k1629 
o|contracted procedure: k1646 
o|contracted procedure: k1655 
o|contracted procedure: k1664 
o|contracted procedure: k1673 
o|contracted procedure: k1675 
o|contracted procedure: k1680 
o|contracted procedure: k1683 
o|contracted procedure: k1685 
o|contracted procedure: k1704 
o|contracted procedure: k1687 
o|contracted procedure: k1692 
o|contracted procedure: k1694 
o|contracted procedure: k1710 
o|contracted procedure: k1714 
o|contracted procedure: k1719 
o|contracted procedure: k1721 
o|contracted procedure: k1730 
o|contracted procedure: k1732 
o|contracted procedure: k1746 
o|contracted procedure: k1755 
o|contracted procedure: k1758 
o|contracted procedure: k1764 
o|contracted procedure: k1769 
o|contracted procedure: k1775 
o|contracted procedure: k1777 
o|contracted procedure: k1781 
o|contracted procedure: k1783 
o|contracted procedure: k1796 
o|contracted procedure: k1806 
o|contracted procedure: k1811 
o|contracted procedure: k1821 
o|contracted procedure: k1826 
o|contracted procedure: k1836 
o|contracted procedure: k1844 
o|contracted procedure: k1873 
o|contracted procedure: k1863 
o|contracted procedure: k1866 
o|contracted procedure: k1882 
o|simplifications: ((let . 24)) 
o|removed binding forms: 180 
o|inlining procedure: k818 
o|inlining procedure: k968 
o|replaced variables: 7 
o|removed binding forms: 1 
o|removed binding forms: 7 
o|customizable procedures: (k1779 for-each-loop357372 k1445 k1467 switch251 check252 compute-time-limit k900) 
o|calls to known targets: 38 
o|fast box initializations: 3 
o|fast global references: 4 
o|fast global assignments: 1 
o|dropping unused closure argument: f_652 
*/
/* end of file */
