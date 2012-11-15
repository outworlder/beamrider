/* Generated from modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-09-24 17:50
   Version 4.8.0 (rev 0db1908)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file modules.c
   unit: modules
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[182];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,110,97,109,101,32,120,50,51,49,50,53,48,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,31),40,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,120,50,51,49,50,56,49,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,44),40,115,101,116,45,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,50,51,49,50,56,52,32,121,50,51,50,50,56,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,109,111,100,117,108,101,45,101,120,112,111,114,116,115,32,109,51,54,52,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,45,97,108,105,97,115,32,97,108,105,97,115,51,55,50,32,110,97,109,101,51,55,51,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,8),40,102,95,50,57,51,51,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,8),40,102,95,50,57,52,53,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,102,95,50,57,53,48,32,98,52,48,52,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,56,55,32,103,51,57,57,52,48,54,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,119,105,116,104,45,109,111,100,117,108,101,45,97,108,105,97,115,101,115,32,98,105,110,100,105,110,103,115,51,55,53,32,116,104,117,110,107,51,55,54,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,49,51,32,97,52,51,48,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,110,52,50,49,32,100,111,110,101,52,50,50,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,109,111,100,117,108,101,45,110,97,109,101,32,110,97,109,101,52,49,56,32,108,111,99,52,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,32,110,97,109,101,52,51,57,32,46,32,116,109,112,52,51,56,52,52,48,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,49,57,32,109,52,54,55,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,115,119,105,116,99,104,45,109,111,100,117,108,101,32,109,111,100,52,53,56,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,53,54,32,97,52,57,57,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,15),40,102,95,51,49,52,57,32,101,120,112,52,57,49,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,56,49,32,103,52,56,56,53,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,45,108,105,115,116,32,109,111,100,52,55,51,32,101,120,112,115,52,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,60),40,35,35,115,121,115,35,116,111,112,108,101,118,101,108,45,100,101,102,105,110,105,116,105,111,110,45,104,111,111,107,32,115,121,109,53,48,56,32,109,111,100,53,48,57,32,101,120,112,53,49,48,32,118,97,108,53,49,49,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,53,49,51,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,39),40,99,104,101,99,107,45,102,111,114,45,114,101,100,101,102,32,115,121,109,53,49,54,32,101,110,118,53,49,55,32,115,101,110,118,53,49,56,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,101,120,112,111,114,116,32,115,121,109,53,50,51,32,109,111,100,53,50,52,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,51),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,53,51,57,32,109,111,100,53,52,48,32,118,97,108,53,52,49,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,102,95,51,52,48,49,32,97,53,54,54,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,49),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,117,110,100,101,102,105,110,101,100,32,115,121,109,53,53,53,32,109,111,100,53,53,54,32,119,104,101,114,101,53,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,32,110,97,109,101,53,55,52,32,101,120,112,108,105,115,116,53,55,53,32,46,32,116,109,112,53,55,51,53,55,54,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,30),40,102,95,51,53,48,50,32,115,121,109,54,48,57,32,112,114,111,112,54,49,48,32,118,97,108,54,49,49,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,57,51,32,105,109,112,54,48,51,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,53,57,51,32,103,54,48,48,54,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,109,97,114,107,45,105,109,112,111,114,116,101,100,45,115,121,109,98,111,108,115,32,115,101,53,57,48,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,101,54,55,53,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,17),40,109,101,114,103,101,45,115,101,32,115,101,115,54,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,14),40,102,95,52,48,49,48,32,105,101,55,52,53,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,19),40,102,95,51,57,52,49,32,115,101,120,112,111,114,116,55,55,56,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,100,56,48,49,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,54,49,32,103,55,55,51,55,57,52,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,50,56,32,103,55,52,48,55,53,51,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,48,50,32,103,55,49,52,55,50,48,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,45,114,101,103,105,115,116,114,97,116,105,111,110,32,109,111,100,54,56,53,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,14),40,102,95,52,49,56,50,32,115,101,56,53,48,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,14),40,102,95,52,50,49,48,32,105,101,56,55,56,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,14),40,102,95,52,50,52,49,32,110,101,57,48,54,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,16),40,102,95,52,50,54,54,32,115,101,120,112,57,50,56,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,102,95,52,50,55,56,32,105,101,120,112,57,52,54,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,16),40,102,95,52,50,57,56,32,110,101,120,112,57,54,52,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,53,52,32,103,57,54,49,57,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,51,54,32,103,57,52,51,57,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,49,56,32,103,57,50,53,57,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,56,57,32,103,57,48,49,57,48,56,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,54,49,32,103,56,55,51,56,56,48,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,51,51,32,103,56,52,53,56,53,50,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,88),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,32,110,97,109,101,56,49,54,32,105,101,120,112,111,114,116,115,56,49,55,32,118,101,120,112,111,114,116,115,56,49,56,32,115,101,120,112,111,114,116,115,56,49,57,32,46,32,116,109,112,56,49,53,56,50,48,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,30),40,102,95,52,52,56,53,32,115,121,109,57,56,49,32,112,114,111,112,57,56,50,32,118,97,108,57,56,51,41,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,112,114,105,109,105,116,105,118,101,45,97,108,105,97,115,32,115,121,109,57,55,55,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,15),40,102,95,52,53,51,53,32,118,101,49,48,50,48,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,15),40,102,95,52,53,53,52,32,115,101,49,48,52,55,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,51,48,32,103,49,48,52,50,49,48,53,50,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,48,51,32,103,49,48,49,53,49,48,50,50,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,65),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,105,109,105,116,105,118,101,45,109,111,100,117,108,101,32,110,97,109,101,57,57,49,32,118,101,120,112,111,114,116,115,57,57,50,32,46,32,116,109,112,57,57,48,57,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,120,108,49,48,54,54,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,102,105,110,100,45,101,120,112,111,114,116,32,115,121,109,49,48,54,49,32,109,111,100,49,48,54,50,32,105,110,100,105,114,101,99,116,49,48,54,51,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,16),40,102,95,52,55,50,52,32,115,121,109,49,49,49,48,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,25),40,102,95,52,55,54,55,32,115,121,109,49,49,56,50,32,112,114,111,112,49,49,56,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,14),40,102,95,52,55,57,57,32,97,49,50,48,49,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,57,49,32,103,49,49,57,56,49,50,48,53,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,16),40,102,95,52,56,52,51,32,115,121,109,49,49,55,49,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,54,49,32,103,49,49,54,56,49,49,55,52,41,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,14),40,102,95,52,55,52,53,32,117,49,49,53,53,41,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,16),40,102,95,52,56,56,50,32,101,120,112,49,50,52,49,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,14),40,102,95,52,57,49,56,32,109,49,50,54,56,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,53,56,32,103,49,50,54,53,49,50,55,52,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,50,52,32,103,49,50,51,54,49,50,52,57,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,19),40,119,97,114,110,32,109,115,103,54,51,52,32,105,100,54,51,53,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,13),40,102,95,51,54,56,50,32,97,54,53,49,41,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,13),40,102,95,51,55,49,54,32,97,54,53,56,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,50,32,105,101,120,112,111,114,116,115,54,52,50,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,101,120,112,111,114,116,115,54,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,52,53,32,103,49,49,53,50,49,50,49,55,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,120,108,49,49,50,55,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,109,101,49,49,50,48,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,57,51,32,103,49,49,48,53,49,49,49,50,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,110,97,108,105,122,101,45,109,111,100,117,108,101,32,109,111,100,49,48,56,52,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,8),40,102,95,53,50,52,56,41};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,8),40,102,95,53,50,56,53,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,8),40,102,95,53,50,57,48,41};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,8),40,102,95,53,50,57,53,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,8),40,102,95,53,50,55,57,41};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,47,105,109,112,111,114,116,45,108,105,98,114,97,114,121,32,109,110,97,109,101,49,50,57,48,32,108,111,99,49,50,57,49,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,23),40,102,95,50,54,51,55,32,115,121,109,50,50,49,32,112,114,111,112,50,50,50,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,17),40,114,101,115,111,108,118,101,32,115,121,109,49,51,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,13),40,116,111,115,116,114,32,120,49,51,55,50,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,22),40,105,109,112,111,114,116,45,110,97,109,101,32,115,112,101,99,49,51,55,54,41,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,8),40,102,95,53,52,52,49,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,14),40,102,95,53,52,56,54,32,97,49,52,52,52,41,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,14),40,102,95,53,53,48,52,32,97,49,52,52,56,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,105,100,115,49,52,51,52,32,118,49,52,51,53,32,115,49,52,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,48,57,32,103,49,52,50,49,49,52,50,55,41};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,105,109,112,115,49,52,56,53,32,115,49,52,56,54,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,105,109,112,118,49,52,55,57,32,118,49,52,56,48,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,53,52,32,103,49,52,54,54,49,52,55,50,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,15),40,102,95,53,55,48,54,32,105,100,49,53,49,57,41,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,48,57,32,103,49,53,49,54,49,53,50,49,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,14),40,102,95,53,55,52,51,32,97,49,53,50,57,41,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,14),40,102,95,53,55,56,54,32,97,49,53,51,51,41,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,44),40,108,111,111,112,32,105,109,112,118,49,52,57,52,32,105,109,112,115,49,52,57,53,32,118,49,52,57,54,32,115,49,52,57,55,32,105,100,115,49,52,57,56,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,13),40,114,101,110,32,105,109,112,49,53,51,56,41,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,54,55,32,103,49,53,55,57,49,53,56,53,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,52,49,32,103,49,53,53,51,49,53,53,57,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,59),40,102,95,53,52,52,57,32,105,109,112,118,49,51,57,49,49,51,57,50,49,51,57,55,32,105,109,112,115,49,51,57,51,49,51,57,52,49,51,57,56,32,105,109,112,105,49,51,57,53,49,51,57,54,49,51,57,57,41,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,22),40,105,109,112,111,114,116,45,115,112,101,99,32,115,112,101,99,49,51,56,49,41,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,8),40,102,95,53,57,55,55,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,25),40,102,95,53,57,57,55,32,115,121,109,49,54,52,52,32,112,114,111,112,49,54,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,16),40,102,95,53,57,57,50,32,105,109,112,49,54,51,56,41};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,16),40,102,95,54,48,51,54,32,105,109,112,49,54,54,53,41};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,48,52,32,103,49,55,49,54,49,55,50,50,41};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,54,55,56,32,103,49,54,57,48,49,54,57,54,41};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,53,56,32,103,49,55,55,48,49,55,55,54,41};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,51,50,32,103,49,55,52,52,49,55,53,48,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,53,53,32,103,49,54,54,50,49,54,54,56,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,50,56,32,103,49,54,51,53,49,54,52,57,41,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,56),40,102,95,53,57,56,50,32,118,115,118,49,54,48,55,49,54,48,56,49,54,49,51,32,118,115,115,49,54,48,57,49,54,49,48,49,54,49,52,32,118,115,105,49,54,49,49,49,54,49,50,49,54,49,53,41};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,17),40,102,95,53,57,55,50,32,115,112,101,99,49,54,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,57,54,32,103,49,54,48,51,49,56,48,48,41,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,97),40,35,35,115,121,115,35,101,120,112,97,110,100,45,105,109,112,111,114,116,32,120,49,51,53,49,32,114,49,51,53,50,32,99,49,51,53,51,32,105,109,112,111,114,116,45,101,110,118,49,51,53,52,32,109,97,99,114,111,45,101,110,118,49,51,53,53,32,109,101,116,97,63,49,51,53,54,32,114,101,101,120,112,63,49,51,53,55,32,108,111,99,49,51,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,109,111,100,117,108,101,45,114,101,110,97,109,101,32,115,121,109,49,56,49,50,32,112,114,101,102,105,120,49,56,49,51,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,16),40,102,95,54,52,50,57,32,109,111,100,49,56,51,49,41};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,17),40,109,114,101,110,97,109,101,32,115,121,109,49,56,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,25),40,102,95,54,52,53,51,32,115,121,109,49,56,51,57,32,112,114,111,112,49,56,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,14),40,102,95,54,52,54,49,32,112,49,56,52,51,41,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,25),40,102,95,54,52,55,49,32,115,121,109,49,56,52,57,32,112,114,111,112,49,56,53,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,25),40,102,95,54,52,57,56,32,115,121,109,49,56,54,56,32,112,114,111,112,49,56,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,14),40,102,95,54,52,56,51,32,97,49,56,53,57,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,97,108,105,97,115,45,103,108,111,98,97,108,45,104,111,111,107,32,115,121,109,49,56,49,53,32,97,115,115,105,103,110,49,56,49,54,32,119,104,101,114,101,49,56,49,55,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,33),40,102,95,54,53,50,50,32,115,121,109,49,56,55,55,32,112,114,111,112,49,56,55,56,32,118,97,108,49,56,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,105,110,116,101,114,102,97,99,101,32,110,97,109,101,49,56,55,51,32,101,120,112,115,49,56,55,52,41,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,14),40,101,114,114,32,97,114,103,115,49,56,56,56,41,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,25),40,102,95,54,53,52,49,32,115,121,109,49,56,57,53,32,112,114,111,112,49,56,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,16),40,105,102,97,99,101,32,110,97,109,101,49,56,56,57,41};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,50,32,108,115,116,49,57,48,56,41,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,120,112,115,49,56,57,56,41,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,118,97,108,105,100,97,116,101,45,101,120,112,111,114,116,115,32,101,120,112,115,49,56,56,49,32,108,111,99,49,56,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,33),40,102,95,54,55,50,54,32,115,121,109,49,57,50,51,32,112,114,111,112,49,57,50,52,32,118,97,108,49,57,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,62),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,102,117,110,99,116,111,114,32,110,97,109,101,49,57,49,55,32,102,97,114,103,115,49,57,49,56,32,102,101,120,112,115,49,57,49,57,32,98,111,100,121,49,57,50,48,41,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,25),40,102,95,54,55,52,49,32,115,121,109,49,57,51,51,32,112,114,111,112,49,57,51,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,14),40,101,114,114,32,97,114,103,115,49,57,51,54,41,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,52,54,32,103,49,57,53,56,49,57,54,52,41};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,6),40,109,101,114,114,41,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,97,115,49,57,55,49,32,102,97,115,49,57,55,50,41,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,105,110,115,116,97,110,116,105,97,116,101,45,102,117,110,99,116,111,114,32,110,97,109,101,49,57,50,55,32,102,110,97,109,101,49,57,50,56,32,97,114,103,115,49,57,50,57,41,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,16),40,102,95,54,56,57,51,32,101,120,112,50,48,48,53,41};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,14),40,102,95,54,57,52,48,32,115,50,48,51,49,41,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,49,52,32,103,50,48,50,54,50,48,51,51,41};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,57,57,53,32,103,50,48,48,50,50,48,48,56,41,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,78),40,35,35,115,121,115,35,109,97,116,99,104,45,102,117,110,99,116,111,114,45,97,114,103,117,109,101,110,116,32,97,108,105,97,115,49,57,56,54,32,110,97,109,101,49,57,56,55,32,109,110,97,109,101,49,57,56,56,32,101,120,112,115,49,57,56,57,32,102,110,97,109,101,49,57,57,48,41,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,44),40,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,109,110,97,109,101,50,48,53,49,32,46,32,116,109,112,50,48,53,48,50,48,53,50,41,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3100)
static void C_fcall f_3100(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4527)
static void C_ccall f_4527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4967)
static void C_fcall f_4967(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4766)
static void C_ccall f_4766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4764)
static void C_ccall f_4764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4757)
static void C_ccall f_4757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4182)
static void C_ccall f_4182(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6003)
static void C_fcall f_6003(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6001)
static void C_ccall f_6001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3781)
static void C_fcall f_3781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3407)
static void C_fcall f_3407(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6217)
static void C_ccall f_6217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3756)
static void C_ccall f_3756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4993)
static void C_fcall f_4993(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4552)
static void C_ccall f_4552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3793)
static void C_fcall f_3793(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_fcall f_4384(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6979)
static void C_ccall f_6979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6917)
static void C_ccall f_6917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6723)
static void C_ccall f_6723(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6726)
static void C_ccall f_6726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6902)
static void C_ccall f_6902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6753)
static void C_ccall f_6753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6932)
static void C_ccall f_6932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6935)
static void C_ccall f_6935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6938)
static void C_ccall f_6938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6745)
static void C_ccall f_6745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6747)
static void C_fcall f_6747(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6741)
static void C_ccall f_6741(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6545)
static void C_ccall f_6545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6541)
static void C_ccall f_6541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6929)
static void C_ccall f_6929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6777)
static void C_ccall f_6777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5829)
static void C_ccall f_5829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6337)
static void C_ccall f_6337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5179)
static void C_ccall f_5179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5648)
static void C_fcall f_5648(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6517)
static void C_ccall f_6517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6514)
static void C_ccall f_6514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5870)
static void C_fcall f_5870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6364)
static void C_ccall f_6364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5847)
static void C_ccall f_5847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5166)
static void C_fcall f_5166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6519)
static void C_ccall f_6519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6502)
static void C_ccall f_6502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6355)
static void C_fcall f_6355(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6353)
static void C_ccall f_6353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5199)
static void C_fcall f_5199(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6738)
static void C_ccall f_6738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5432)
static void C_ccall f_5432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6532)
static void C_fcall f_6532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6538)
static void C_fcall f_6538(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6308)
static void C_fcall f_6308(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5187)
static void C_ccall f_5187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6528)
static void C_ccall f_6528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6522)
static void C_ccall f_6522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3194)
static void C_ccall f_3194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5835)
static void C_fcall f_5835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6328)
static void C_fcall f_6328(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3493)
static void C_ccall f_3493(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3499)
static void C_fcall f_3499(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6317)
static void C_ccall f_6317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4259)
static void C_ccall f_4259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6954)
static void C_fcall f_6954(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6952)
static void C_ccall f_6952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6779)
static void C_fcall f_6779(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6761)
static void C_fcall f_6761(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4605)
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5420)
static void C_fcall f_5420(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6947)
static void C_ccall f_6947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_fcall f_4414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6940)
static void C_ccall f_6940(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6886)
static void C_ccall f_6886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5411)
static void C_fcall f_5411(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4804)
static void C_ccall f_4804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4444)
static void C_fcall f_4444(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6893)
static void C_ccall f_6893(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3531)
static void C_fcall f_3531(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6674)
static void C_fcall f_6674(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6475)
static void C_ccall f_6475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6483)
static void C_ccall f_6483(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5692)
static void C_fcall f_5692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7011)
static void C_ccall f_7011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7014)
static void C_ccall f_7014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7016)
static void C_ccall f_7016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3702)
static void C_ccall f_3702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4600)
static void C_ccall f_4600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6498)
static void C_ccall f_6498(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5470)
static void C_fcall f_5470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6687)
static void C_ccall f_6687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5486)
static void C_ccall f_5486(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4815)
static void C_fcall f_4815(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7044)
static void C_ccall f_7044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3930)
static void C_ccall f_3930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5673)
static void C_ccall f_5673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7027)
static void C_ccall f_7027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7020)
static void C_ccall f_7020(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7020)
static void C_ccall f_7020r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3185)
static void C_fcall f_3185(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5018)
static void C_ccall f_5018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4051)
static void C_fcall f_4051(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6272)
static void C_fcall f_6272(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6072)
static void C_ccall f_6072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6074)
static void C_fcall f_6074(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6226)
static void C_ccall f_6226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6088)
static void C_ccall f_6088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6082)
static void C_ccall f_6082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4092)
static void C_fcall f_4092(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6236)
static void C_ccall f_6236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6093)
static void C_ccall f_6093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6242)
static void C_fcall f_6242(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6240)
static void C_ccall f_6240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6026)
static void C_ccall f_6026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6035)
static void C_ccall f_6035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6036)
static void C_ccall f_6036(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_fcall f_2969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3005)
static void C_fcall f_3005(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4278)
static void C_ccall f_4278(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4263)
static void C_ccall f_4263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4489)
static void C_ccall f_4489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4678)
static void C_fcall f_4678(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3852)
static void C_fcall f_3852(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6830)
static void C_fcall f_6830(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4653)
static void C_fcall f_4653(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4651)
static void C_fcall f_4651(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4863)
static void C_ccall f_4863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3879)
static void C_fcall f_3879(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6813)
static void C_ccall f_6813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4854)
static void C_fcall f_4854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6114)
static void C_ccall f_6114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3688)
static void C_fcall f_3688(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6102)
static void C_ccall f_6102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3037)
static void C_ccall f_3037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3691)
static void C_ccall f_3691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6409)
static void C_ccall f_6409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6402)
static void C_ccall f_6402(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6461)
static void C_ccall f_6461(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6452)
static void C_ccall f_6452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6453)
static void C_ccall f_6453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6457)
static void C_ccall f_6457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5972)
static void C_ccall f_5972(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5971)
static void C_ccall f_5971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3893)
static void C_fcall f_3893(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5977)
static void C_ccall f_5977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6434)
static void C_ccall f_6434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5967)
static void C_ccall f_5967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5900)
static void C_fcall f_5900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6635)
static void C_ccall f_6635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5261)
static void C_ccall f_5261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5937)
static void C_ccall f_5937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5295)
static void C_ccall f_5295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5562)
static void C_ccall f_5562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5755)
static void C_ccall f_5755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5564)
static void C_ccall f_5564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5077)
static void C_fcall f_5077(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5925)
static void C_ccall f_5925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5290)
static void C_ccall f_5290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5743)
static void C_ccall f_5743(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5091)
static void C_fcall f_5091(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6610)
static void C_ccall f_6610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5285)
static void C_ccall f_5285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6984)
static void C_fcall f_6984(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5333)
static void C_fcall f_5333(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6649)
static void C_fcall f_6649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5224)
static void C_ccall f_5224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_modules_toplevel)
C_externexport void C_ccall C_modules_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5719)
static void C_fcall f_5719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5251)
static void C_ccall f_5251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5253)
static void C_ccall f_5253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5528)
static void C_fcall f_5528(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6873)
static void C_ccall f_6873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5026)
static void C_fcall f_5026(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5997)
static void C_ccall f_5997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5245)
static void C_ccall f_5245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6425)
static void C_ccall f_6425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6421)
static void C_fcall f_6421(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5992)
static void C_ccall f_5992(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5991)
static void C_ccall f_5991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6864)
static void C_ccall f_6864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6417)
static void C_ccall f_6417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4573)
static void C_ccall f_4573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4575)
static void C_fcall f_4575(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5982)
static void C_ccall f_5982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6580)
static void C_fcall f_6580(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3846)
static void C_fcall f_3846(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5049)
static void C_fcall f_5049(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5314)
static void C_ccall f_5314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5316)
static void C_ccall f_5316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5304)
static void C_ccall f_5304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5307)
static void C_ccall f_5307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6382)
static void C_ccall f_6382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4318)
static void C_fcall f_4318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5504)
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5324)
static void C_fcall f_5324(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5322)
static void C_ccall f_5322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7459)
static void C_ccall f7459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5576)
static void C_fcall f_5576(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4338)
static void C_fcall f_4338(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5798)
static void C_ccall f_5798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4908)
static void C_ccall f_4908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5786)
static void C_ccall f_5786(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4358)
static void C_fcall f_4358(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5379)
static void C_ccall f_5379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5375)
static void C_fcall f_5375(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6394)
static void C_ccall f_6394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3601)
static void C_fcall f_3601(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5393)
static void C_fcall f_5393(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4745)
static void C_ccall f_4745(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static void C_fcall f_3622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4742)
static void C_ccall f_4742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5588)
static void C_fcall f_5588(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3648)
static void C_fcall f_3648(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_4150)
static void C_ccall f_4150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3828)
static void C_ccall f_3828(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5116)
static void C_ccall f_5116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5102)
static void C_fcall f_5102(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6186)
static void C_fcall f_6186(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6129)
static void C_ccall f_6129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6143)
static void C_ccall f_6143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6154)
static void C_ccall f_6154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6156)
static void C_fcall f_6156(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6150)
static void C_ccall f_6150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7007)
static void C_ccall f_7007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7009)
static void C_ccall f_7009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4504)
static void C_ccall f_4504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4976)
static void C_ccall f_4976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_3100)
static void C_fcall trf_3100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3100(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3100(t0,t1);}

C_noret_decl(trf_4967)
static void C_fcall trf_4967(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4967(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4967(t0,t1,t2);}

C_noret_decl(trf_6003)
static void C_fcall trf_6003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6003(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6003(t0,t1);}

C_noret_decl(trf_3781)
static void C_fcall trf_3781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3781(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3781(t0,t1);}

C_noret_decl(trf_3407)
static void C_fcall trf_3407(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3407(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3407(t0,t1);}

C_noret_decl(trf_3977)
static void C_fcall trf_3977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3977(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3977(t0,t1,t2);}

C_noret_decl(trf_4993)
static void C_fcall trf_4993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4993(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4993(t0,t1,t2);}

C_noret_decl(trf_3793)
static void C_fcall trf_3793(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3793(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3793(t0,t1,t2);}

C_noret_decl(trf_4384)
static void C_fcall trf_4384(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4384(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4384(t0,t1,t2);}

C_noret_decl(trf_6747)
static void C_fcall trf_6747(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6747(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6747(t0,t1,t2);}

C_noret_decl(trf_5648)
static void C_fcall trf_5648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5648(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5648(t0,t1,t2);}

C_noret_decl(trf_5870)
static void C_fcall trf_5870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5870(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5870(t0,t1,t2);}

C_noret_decl(trf_5166)
static void C_fcall trf_5166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5166(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5166(t0,t1,t2);}

C_noret_decl(trf_6355)
static void C_fcall trf_6355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6355(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6355(t0,t1,t2);}

C_noret_decl(trf_5199)
static void C_fcall trf_5199(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5199(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5199(t0,t1,t2);}

C_noret_decl(trf_6532)
static void C_fcall trf_6532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6532(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6532(t0,t1,t2);}

C_noret_decl(trf_6538)
static void C_fcall trf_6538(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6538(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6538(t0,t1,t2);}

C_noret_decl(trf_6308)
static void C_fcall trf_6308(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6308(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6308(t0,t1,t2);}

C_noret_decl(trf_5835)
static void C_fcall trf_5835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5835(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5835(t0,t1,t2);}

C_noret_decl(trf_6328)
static void C_fcall trf_6328(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6328(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6328(t0,t1,t2);}

C_noret_decl(trf_3499)
static void C_fcall trf_3499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3499(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3499(t0,t1);}

C_noret_decl(trf_6954)
static void C_fcall trf_6954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6954(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6954(t0,t1,t2);}

C_noret_decl(trf_6779)
static void C_fcall trf_6779(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6779(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6779(t0,t1,t2);}

C_noret_decl(trf_6761)
static void C_fcall trf_6761(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6761(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6761(t0,t1);}

C_noret_decl(trf_4605)
static void C_fcall trf_4605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4605(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4605(t0,t1,t2);}

C_noret_decl(trf_5420)
static void C_fcall trf_5420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5420(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5420(t0,t1);}

C_noret_decl(trf_4414)
static void C_fcall trf_4414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4414(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4414(t0,t1,t2);}

C_noret_decl(trf_5411)
static void C_fcall trf_5411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5411(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5411(t0,t1);}

C_noret_decl(trf_4444)
static void C_fcall trf_4444(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4444(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4444(t0,t1,t2);}

C_noret_decl(trf_3531)
static void C_fcall trf_3531(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3531(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3531(t0,t1,t2);}

C_noret_decl(trf_6674)
static void C_fcall trf_6674(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6674(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6674(t0,t1,t2);}

C_noret_decl(trf_5692)
static void C_fcall trf_5692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5692(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5692(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5470)
static void C_fcall trf_5470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5470(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5470(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4815)
static void C_fcall trf_4815(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4815(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4815(t0,t1,t2);}

C_noret_decl(trf_3185)
static void C_fcall trf_3185(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3185(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3185(t0,t1,t2);}

C_noret_decl(trf_4051)
static void C_fcall trf_4051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4051(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4051(t0,t1,t2);}

C_noret_decl(trf_6272)
static void C_fcall trf_6272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6272(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6272(t0,t1,t2);}

C_noret_decl(trf_6074)
static void C_fcall trf_6074(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6074(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6074(t0,t1);}

C_noret_decl(trf_4092)
static void C_fcall trf_4092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4092(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4092(t0,t1,t2);}

C_noret_decl(trf_6242)
static void C_fcall trf_6242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6242(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6242(t0,t1,t2);}

C_noret_decl(trf_2969)
static void C_fcall trf_2969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2969(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2969(t0,t1,t2);}

C_noret_decl(trf_3005)
static void C_fcall trf_3005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3005(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3005(t0,t1,t2,t3);}

C_noret_decl(trf_4678)
static void C_fcall trf_4678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4678(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4678(t0,t1);}

C_noret_decl(trf_3852)
static void C_fcall trf_3852(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3852(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3852(t0,t1);}

C_noret_decl(trf_6830)
static void C_fcall trf_6830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6830(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6830(t0,t1,t2,t3);}

C_noret_decl(trf_4653)
static void C_fcall trf_4653(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4653(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4653(t0,t1,t2);}

C_noret_decl(trf_4651)
static void C_fcall trf_4651(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4651(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4651(t0,t1);}

C_noret_decl(trf_3879)
static void C_fcall trf_3879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3879(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3879(t0,t1);}

C_noret_decl(trf_4854)
static void C_fcall trf_4854(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4854(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4854(t0,t1,t2);}

C_noret_decl(trf_3688)
static void C_fcall trf_3688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3688(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3688(t0,t1);}

C_noret_decl(trf_3893)
static void C_fcall trf_3893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3893(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3893(t0,t1,t2);}

C_noret_decl(trf_5900)
static void C_fcall trf_5900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5900(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5900(t0,t1,t2);}

C_noret_decl(trf_5077)
static void C_fcall trf_5077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5077(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5077(t0,t1);}

C_noret_decl(trf_5091)
static void C_fcall trf_5091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5091(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5091(t0,t1);}

C_noret_decl(trf_6984)
static void C_fcall trf_6984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6984(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6984(t0,t1,t2);}

C_noret_decl(trf_5333)
static void C_fcall trf_5333(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5333(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5333(t0,t1,t2);}

C_noret_decl(trf_6649)
static void C_fcall trf_6649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6649(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6649(t0,t1);}

C_noret_decl(trf_5719)
static void C_fcall trf_5719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5719(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5719(t0,t1,t2);}

C_noret_decl(trf_5528)
static void C_fcall trf_5528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5528(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5528(t0,t1,t2);}

C_noret_decl(trf_5026)
static void C_fcall trf_5026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5026(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5026(t0,t1,t2);}

C_noret_decl(trf_6421)
static void C_fcall trf_6421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6421(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6421(t0,t1,t2);}

C_noret_decl(trf_4575)
static void C_fcall trf_4575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4575(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4575(t0,t1,t2);}

C_noret_decl(trf_6580)
static void C_fcall trf_6580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6580(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6580(t0,t1,t2);}

C_noret_decl(trf_3846)
static void C_fcall trf_3846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3846(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3846(t0,t1);}

C_noret_decl(trf_5049)
static void C_fcall trf_5049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5049(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5049(t0,t1,t2);}

C_noret_decl(trf_4318)
static void C_fcall trf_4318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4318(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4318(t0,t1,t2);}

C_noret_decl(trf_5324)
static void C_fcall trf_5324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5324(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5324(t0,t1);}

C_noret_decl(trf_5576)
static void C_fcall trf_5576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5576(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5576(t0,t1,t2,t3);}

C_noret_decl(trf_4338)
static void C_fcall trf_4338(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4338(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4338(t0,t1,t2);}

C_noret_decl(trf_4358)
static void C_fcall trf_4358(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4358(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4358(t0,t1,t2);}

C_noret_decl(trf_5375)
static void C_fcall trf_5375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5375(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5375(t0,t1);}

C_noret_decl(trf_3601)
static void C_fcall trf_3601(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3601(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3601(t0,t1,t2,t3);}

C_noret_decl(trf_5393)
static void C_fcall trf_5393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5393(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5393(t0,t1,t2);}

C_noret_decl(trf_3622)
static void C_fcall trf_3622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3622(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3622(t0,t1,t2);}

C_noret_decl(trf_5588)
static void C_fcall trf_5588(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5588(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5588(t0,t1,t2,t3);}

C_noret_decl(trf_3648)
static void C_fcall trf_3648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3648(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3648(t0,t1,t2);}

C_noret_decl(trf_5102)
static void C_fcall trf_5102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5102(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5102(t0,t1);}

C_noret_decl(trf_6186)
static void C_fcall trf_6186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6186(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6186(t0,t1,t2);}

C_noret_decl(trf_6156)
static void C_fcall trf_6156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6156(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6156(t0,t1,t2);}

C_noret_decl(tr10)
static void C_fcall tr10(C_proc10 k) C_regparm C_noret;
C_regparm static void C_fcall tr10(C_proc10 k){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
(k)(10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

C_noret_decl(tr6r)
static void C_fcall tr6r(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6r(C_proc6 k){
int n;
C_word *a,t6;
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
n=C_rest_count(0);
a=C_alloc(n*3);
t6=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6);}

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

/* k3101 in k3099 in k3096 in k3094 in k3131 in k3128 in switch-module in k2650 in k2646 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:159: ##sys#current-module */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4366 in for-each-loop918 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4358(t3,((C_word*)t0)[4],t2);}

/* k3106 in k3099 in k3096 in k3094 in k3131 in k3128 in switch-module in k2650 in k2646 */
static void C_ccall f_3107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:158: ##sys#macro-environment */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(3,*((C_word*)lf[25]+1),((C_word*)t0)[3],t3);}

/* k3099 in k3096 in k3094 in k3131 in k3128 in switch-module in k2650 in k2646 */
static void C_fcall f_3100(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3100,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3107,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t1);
/* modules.scm:157: ##sys#current-environment */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),t3,t4);}
else{
/* modules.scm:159: ##sys#current-module */
t3=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k3374 in k3371 in k3338 in k3334 in k3331 in register-syntax-export in k2650 in k2646 */
static void C_ccall f_3375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:216: check-for-redef */
t2=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3371 in k3338 in k3334 in k3331 in register-syntax-export in k2650 in k2646 */
static void C_ccall f_3372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:216: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t2);}

/* k4526 in k4571 in k4550 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4527,2,t0,t1);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[11]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(10));
t4=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t5=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
/* modules.scm:419: merge-se */
f_3781(((C_word*)t0)[3],C_a_i_list(&a,3,t1,t3,t5));}

/* k4523 in k4520 in k4571 in k4550 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4524,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(13),t2);}

/* for-each-loop1258 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_4967(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4967,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4976,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:530: g1259 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4961 in k4941 in k4939 in k4934 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(12),t1);}

/* k4520 in k4571 in k4550 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4524,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:422: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t2);}

/* ##sys#register-undefined in k2650 in k2646 */
static void C_ccall f_3389(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3389,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3395,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:229: module-undefined-list */
t6=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* ##sys#register-module in k2650 in k2646 */
static void C_ccall f_3445(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr4r,(void*)f_3445r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3445r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3445r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(21);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=t2;
t14=C_a_i_record(&a,14,lf[3],t13,t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t6,t10,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t15=C_a_i_cons(&a,2,t2,t14);
t16=C_a_i_cons(&a,2,t15,*((C_word*)lf[22]+1));
t17=C_mutate((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t16);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t14);}

/* f_4767 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4767,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4767,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:502: g1180 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[84]);}

/* k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4842,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:496: display */
t4=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[86],((C_word*)t0)[3]);}
else{
t3=t2;
f_4766(2,t3,C_SCHEME_UNDEFINED);}}

/* k4761 in k4759 in k4756 */
static void C_ccall f_4762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[3]);}

/* k4759 in k4756 */
static void C_ccall f_4760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4760,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:493: display */
t3=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k4987 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4991,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:527: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t2);}

/* k4756 */
static void C_ccall f_4757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4757,2,t0,t1);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4760,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:492: display */
t4=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[87],t1);}

/* k4180 */
static void C_ccall f_4181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
/* modules.scm:351: ##sys#error */
t4=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[62],lf[65],((C_word*)t0)[2]);}}
else{
/* modules.scm:351: ##sys#error */
t3=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[62],lf[65],((C_word*)t0)[2]);}}

/* f_4182 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4182(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4182,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t1;
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4181,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:348: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t5);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4200,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
t7=t2;
t8=C_u_i_car(t7);
/* modules.scm:358: ##sys#ensure-transformer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(4,*((C_word*)lf[66]+1),t4,t6,t8);}}

/* k4787 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4796,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:505: cadar */
t4=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k4779 in k4772 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:515: ##sys#warn */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),((C_word*)t0)[2],t1);}

/* k3775 in loop2 in loop in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_3776(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3776,2,t0,t1);}
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* modules.scm:275: warn */
t5=((C_word*)t0)[6];
f_3601(t5,t2,lf[94],t4);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[7]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3682,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:272: g649 */
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,((C_word*)t0)[5],t4);}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3768,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:284: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t7);}}}

/* k6002 in k5999 */
static void C_fcall f_6003(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6003,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:696: import-env */
t3=((C_word*)t0)[5];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=C_i_length(t1);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4788,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:504: display */
t6=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[80],((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:508: display */
t6=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[83],((C_word*)t0)[3]);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:515: get-output-string */
t4=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}}

/* k5999 */
static void C_ccall f_6001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t3);
t5=t2;
f_6003(t5,t4);}
else{
t3=t2;
f_6003(t3,C_SCHEME_UNDEFINED);}}

/* k4772 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:515: get-output-string */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3784 in merge-se in k2650 in k2646 */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3785,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3793,a[2]=t3,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3793(t5,((C_word*)t0)[2],t1);}

/* merge-se in k2650 in k2646 */
static void C_fcall f_3781(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3781,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3785,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(4,0,t3,*((C_word*)lf[17]+1),t2);}

/* f_3401 in k3394 in register-undefined in k2650 in k2646 */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3401,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3407,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=C_i_cdr(t2);
t5=C_i_memq(((C_word*)t0)[2],t4);
t6=t3;
f_3407(t6,C_i_not(t5));}
else{
t4=t3;
f_3407(t4,C_SCHEME_FALSE);}}

/* k3405 */
static void C_fcall f_3407(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3407,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_cdr(((C_word*)t0)[2],t3));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k6216 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(11),t1);}

/* k3755 in k3767 in k3775 in loop2 in loop in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_3756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:293: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3648(t4,((C_word*)t0)[4],t3);}

/* map-loop761 in k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3977,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4002,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:325: g767 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3973 in k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3975,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[56],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3882,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[7]))){
t5=t3;
f_3879(t5,C_a_i_cons(&a,2,lf[56],C_SCHEME_END_OF_LIST));}
else{
t5=((C_word*)t0)[8];
t6=C_i_check_structure_2(t5,lf[3],lf[44]);
t7=C_i_block_ref(t5,C_fix(5));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[7],a[3]=t9,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3893(t11,t4,t7);}}

/* k4797 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4798,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4799,a[2]=((C_word*)t0)[2],a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4815,a[2]=t4,a[3]=t2,a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4815(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f_4799 in k4797 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4799(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4799,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4802,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:511: display */
t4=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[82],((C_word*)t0)[2]);}

/* k4795 in k4787 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:505: display */
t2=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4789 in k4787 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:506: display */
t2=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[78],((C_word*)t0)[3]);}

/* k3767 in k3775 in loop2 in loop in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_3768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3768,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:272: g656 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[6],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3756,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* modules.scm:292: warn */
t6=((C_word*)t0)[5];
f_3601(t6,t3,lf[96],t5);}}

/* k3960 */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3961,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[58],((C_word*)t0)[3],t1));}

/* f_4554 in k4550 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4554(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4554,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* modules.scm:411: ##sys#error */
t4=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[73],t2,((C_word*)t0)[3]);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4990 in k4987 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4991,2,t0,t1);}
/* modules.scm:525: merge-se */
f_3781(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* map-loop1224 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_4993(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4993,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5018,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:520: g1230 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4550 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4552(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4552,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4573,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4575,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4575(t12,t8,((C_word*)t0)[4]);}

/* loop in k3784 in merge-se in k2650 in k2646 */
static void C_fcall f_3793(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3793,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_assq(t3,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
/* modules.scm:301: loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}
else{
t6=t2;
t7=C_u_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3819,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
/* modules.scm:302: loop */
t14=t8;
t15=t10;
t1=t14;
t2=t15;
goto loop;}}}

/* k4381 in k4378 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4382,2,t0,t1);}
/* modules.scm:371: merge-se */
f_3781(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* map-loop889 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_fcall f_4384(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4384,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4409,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:367: g895 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6978 in map-loop2014 in k6937 in k6934 in k6931 in k6915 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6979,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6954(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6954(t6,((C_word*)t0)[5],t5);}}

/* k4546 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4547,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6915 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6917,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6929,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6932,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:855: symbol->string */
t4=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##sys#register-functor in k2650 in k2646 */
static void C_ccall f_6723(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_6723,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6726,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_cons(&a,2,t4,t5);
t8=C_a_i_cons(&a,2,t3,t7);
/* modules.scm:811: g1921 */
t9=t6;
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t1,t2,lf[156],t8);}

/* f_6726 in register-functor in k2650 in k2646 */
static void C_ccall f_6726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6726,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* module-undefined-list in k2650 in k2646 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2747,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],lf[5]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(6)));}

/* k6900 */
static void C_ccall f_6902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6902,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_3119 in k3094 in k3131 in k3128 in switch-module in k2650 in k2646 */
static void C_ccall f_3119(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3119,3,t0,t1,t2);}
t3=t1;
t4=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t2,C_fix(13),((C_word*)t0)[2]);}

/* k6752 in k6743 in instantiate-functor in k2650 in k2646 */
static void C_ccall f_6753(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6753,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6761,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li148),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6813,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6830,a[2]=t6,a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word)li149),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_6830(t11,t7,((C_word*)t0)[4],t2);}

/* k6931 in k6915 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:856: symbol->string */
t3=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k6934 in k6931 in k6915 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:857: symbol->string */
t3=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k6937 in k6934 in k6931 in k6915 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6938(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6938,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6940,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp);
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6952,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6954,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li153),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_6954(t13,t9,t7);}

/* k6743 in instantiate-functor in k2650 in k2646 */
static void C_ccall f_6745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6747,a[2]=((C_word*)t0)[2],a[3]=((C_word)li146),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6753,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t1)){
t4=t3;
f_6753(2,t4,C_SCHEME_UNDEFINED);}
else{
/* modules.scm:817: err */
t4=t2;
f_6747(t4,t3,C_a_i_list(&a,2,lf[162],((C_word*)t0)[4]));}}

/* err in k6743 in instantiate-functor in k2650 in k2646 */
static void C_fcall f_6747(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6747,NULL,3,t0,t1,t2);}
C_apply(5,0,t1,*((C_word*)lf[105]+1),((C_word*)t0)[2],t2);}

/* k3128 in switch-module in k2650 in k2646 */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3132,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:149: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t2);}

/* f_6741 in instantiate-functor in k2650 in k2646 */
static void C_ccall f_6741(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6741,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k6543 in iface in validate-exports in k2650 in k2646 */
static void C_ccall f_6545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6545,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* modules.scm:783: err */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6532(t2,((C_word*)t0)[2],C_a_i_list(&a,3,lf[145],*((C_word*)lf[146]+1),((C_word*)t0)[4]));}}

/* k3394 in register-undefined in k2650 in k2646 */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3395,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3401,a[2]=((C_word*)t0)[3],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:229: g564 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[4],t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,t1);
/* modules.scm:235: set-module-undefined-list! */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[4],((C_word*)t0)[5],t5);}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t3,t1);
/* modules.scm:235: set-module-undefined-list! */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],((C_word*)t0)[5],t4);}}}

/* f_6541 in iface in validate-exports in k2650 in k2646 */
static void C_ccall f_6541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6541,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k6928 in k6915 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:851: ##sys#syntax-error-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[2],lf[3],t1);}

/* k6775 in merr in k6752 in k6743 in instantiate-functor in k2650 in k2646 */
static void C_ccall f_6777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6777,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:822: err */
t3=((C_word*)t0)[3];
f_6747(t3,((C_word*)t0)[4],C_a_i_list(&a,3,lf[158],((C_word*)t0)[5],t2));}

/* k5849 in ren in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:666: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5829,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:661: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[8],((C_word*)t0)[6],lf[123]);}
else{
/* modules.scm:669: ##sys#syntax-error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(5,*((C_word*)lf[105]+1),((C_word*)t0)[4],((C_word*)t0)[8],lf[124],((C_word*)t0)[6]);}}

/* k5841 in ren in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5842,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* f_3156 */
static void C_ccall f_3156(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3156,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6336 in for-each-loop1628 in k5990 */
static void C_ccall f_6337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6328(t3,((C_word*)t0)[4],t2);}

/* k5177 in loop in k5163 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5179,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5187,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* modules.scm:454: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5166(t7,t4,t6);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:455: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5166(t4,((C_word*)t0)[3],t3);}}

/* map-loop1454 in k5563 in k5560 in k5454 */
static void C_fcall f_5648(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5648,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5673,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:625: g1460 */
f_5324(t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6515 in k6513 in k6473 in k6455 in k6450 in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6517,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6483,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li133),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:747: g1857 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[4],t2);}
else{
/* modules.scm:771: mrename */
t3=((C_word*)t0)[3];
f_6421(t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k6513 in k6473 in k6455 in k6450 in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:764: g1855 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* map-loop1567 in k5860 in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_fcall f_5870(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5870,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5895,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:668: g1573 */
t5=((C_word*)t0)[5];
f_5835(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5163 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5164,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5166,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5166(t5,((C_word*)t0)[3],t1);}

/* k6363 in for-each-loop1596 in k5970 in k5968 in k5966 in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_6364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6355(t3,((C_word*)t0)[4],t2);}

/* k5846 in ren in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:665: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(3,*((C_word*)lf[69]+1),((C_word*)t0)[2],t1);}

/* k3167 in k3147 in add-to-export-list in k2650 in k2646 */
static void C_ccall f_3169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3180,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[3],lf[12]);
t6=C_i_block_ref(t4,C_fix(11));
/* modules.scm:173: append */
t7=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,((C_word*)((C_word*)t0)[6])[1],t6);}

/* loop in k5163 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_5166(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5166,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5179,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
/* modules.scm:453: ##sys#find-export */
t5=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* f_5441 in k5418 in k5409 in import-spec in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5441,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:610: import-spec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5393(t3,t1,t2);}

/* ##sys#register-interface in k2650 in k2646 */
static void C_ccall f_6519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6519,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6522,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:775: g1875 */
t5=t4;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,lf[143],t3);}

/* k6500 */
static void C_ccall f_6502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[3]));}

/* for-each-loop1596 in k5970 in k5968 in k5966 in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_fcall f_6355(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6355,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6364,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:681: g1597 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#add-to-export-list in k2650 in k2646 */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3134,4,t0,t1,t2,t3);}
t4=t2;
t5=C_i_check_structure_2(t4,lf[3],lf[10]);
t6=C_i_block_ref(t4,C_fix(2));
t7=C_eqp(t6,C_SCHEME_TRUE);
if(C_truep(t7)){
t8=t2;
t9=C_i_check_structure_2(t8,lf[3],lf[29]);
t10=C_i_block_ref(t8,C_fix(4));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3148,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:165: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t11);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3209,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:175: append */
t9=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t6,t3);}}

/* k6351 in k5970 in k5968 in k5966 in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_6353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[131]);}

/* k3131 in k3128 in switch-module in k2650 in k2646 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3132,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:150: ##sys#current-module */
t4=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* map-loop1093 in finalize-module in k2650 in k2646 */
static void C_fcall f_5199(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5199,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5224,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:446: g1099 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#instantiate-functor in k2650 in k2646 */
static void C_ccall f_6738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6738,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6741,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6745,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:814: g1931 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,lf[156]);}

/* k5431 in k5418 in k5409 in import-spec in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:607: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],lf[116],t1);}

/* err in validate-exports in k2650 in k2646 */
static void C_fcall f_6532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6532,NULL,3,t0,t1,t2);}
C_apply(5,0,t1,*((C_word*)lf[105]+1),((C_word*)t0)[2],t2);}

/* iface in validate-exports in k2650 in k2646 */
static void C_fcall f_6538(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6538,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6541,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6545,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:782: g1893 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[143]);}

/* f_5449 in k5418 in k5409 in import-spec in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5449(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5449,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],tmp=(C_word)a,a+=15,tmp);
/* modules.scm:611: c */
t6=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[11],((C_word*)t0)[8]);}

/* for-each-loop1655 in k6033 in k5990 */
static void C_fcall f_6308(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6308,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6317,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:700: g1656 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5186 in k5177 in loop in k5163 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5187,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3147 in add-to-export-list in k2650 in k2646 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3148,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3149,a[2]=t1,a[3]=t3,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
t6=C_i_check_list_2(t5,lf[30]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3169,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3185,a[2]=t9,a[3]=t4,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3185(t11,t7,t5);}

/* f_3149 in k3147 in add-to-export-list in k2650 in k2646 */
static void C_ccall f_3149(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3149,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3156,a[2]=((C_word*)t0)[3],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:168: g497 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5463 in k5457 in k5454 */
static void C_ccall f_5465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5465,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5470(t5,((C_word*)t0)[5],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4209,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4210,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4240,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4414,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li51),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4414(t13,t9,t7);}

/* ##sys#validate-exports in k2650 in k2646 */
static void C_ccall f_6528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6528,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6532,a[2]=t3,a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6538,a[2]=t5,a[3]=t2,a[4]=((C_word)li139),tmp=(C_word)a,a+=5,tmp));
t10=C_eqp(lf[147],t2);
if(C_truep(t10)){
t11=t2;
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:785: iface */
t11=((C_word*)t7)[1];
f_6538(t11,t1,t2);}
else{
if(C_truep(C_i_listp(t2))){
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6580,a[2]=t12,a[3]=t7,a[4]=t5,a[5]=t2,a[6]=((C_word)li141),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_6580(t14,t1,t2);}
else{
/* modules.scm:787: err */
t11=((C_word*)t5)[1];
f_6532(t11,t1,C_a_i_list(&a,2,lf[154],t2));}}}}

/* f_6522 in register-interface in k2650 in k2646 */
static void C_ccall f_6522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6522,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* k5133 in k5089 in loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5134,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5102,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=C_i_cdr(t2);
t5=t3;
f_5102(t5,C_i_symbolp(t4));}
else{
t4=t3;
f_5102(t4,C_SCHEME_FALSE);}}

/* k3193 in for-each-loop481 in k3147 in add-to-export-list in k2650 in k2646 */
static void C_ccall f_3194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3185(t3,((C_word*)t0)[4],t2);}

/* k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_caddr(((C_word*)t0)[6]);
/* modules.scm:662: tostr */
t4=((C_word*)((C_word*)t0)[7])[1];
f_5333(t4,t2,t3);}

/* ren in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_fcall f_5835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5835,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5842,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5847,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5850,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_i_car(t2);
/* modules.scm:666: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(3,*((C_word*)lf[112]+1),t5,t6);}

/* k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5833(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5835,a[2]=t1,a[3]=((C_word)li107),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5862,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5900,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t2,a[6]=((C_word)li109),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5900(t12,t8,((C_word*)t0)[2]);}

/* k5121 in k5100 in k5133 in k5089 in loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:477: string-append */
t2=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[98],t1,lf[99]);}

/* k4249 */
static void C_ccall f_4250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4250,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1));}

/* for-each-loop1628 in k5990 */
static void C_fcall f_6328(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6328,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6337,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:689: g1629 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4408 in map-loop889 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4409,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4384(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4384(t6,((C_word*)t0)[5],t5);}}

/* f_3493 in mark-imported-symbols in k2650 in k2646 */
static void C_ccall f_3493(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3493,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3499,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=C_u_i_car(t5);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_eqp(t6,t8);
t10=t3;
f_3499(t10,C_i_not(t9));}
else{
t5=t3;
f_3499(t5,C_SCHEME_FALSE);}}

/* k3497 */
static void C_fcall f_3499(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3499,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3502,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
/* modules.scm:249: g607 */
t5=t2;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],t4,lf[49],C_SCHEME_TRUE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5457 in k5454 */
static void C_ccall f_5458(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5458,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_cddr(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[16]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5465,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5528,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5528(t12,t8,t6);}

/* k5454 */
static void C_ccall f_5456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5456,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:612: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[8],((C_word*)t0)[2],lf[119]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:623: c */
t3=((C_word*)t0)[10];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[14],((C_word*)t0)[12]);}}

/* ##sys#mark-imported-symbols in k2650 in k2646 */
static void C_ccall f_3490(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3490,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3493,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_list_2(t2,lf[30]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3531,a[2]=t6,a[3]=t3,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3531(t8,t1,t2);}

/* f_2945 in k2931 in with-module-aliases in k2650 in k2646 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
/* modules.scm:129: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4240(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4240,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4241,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4259,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4384,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li50),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4384(t12,t8,((C_word*)t0)[2]);}

/* k4438 in map-loop861 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4439,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4414(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4414(t6,((C_word*)t0)[5],t5);}}

/* k6316 in for-each-loop1655 in k6033 in k5990 */
static void C_ccall f_6317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6308(t3,((C_word*)t0)[4],t2);}

/* f_4241 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4241(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4241,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4250,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
t7=t2;
t8=C_u_i_car(t7);
/* modules.scm:368: ##sys#ensure-transformer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(4,*((C_word*)lf[66]+1),t4,t6,t8);}

/* k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4259,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=C_a_i_record(&a,14,lf[3],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t3,t4,t5,C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4263,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4379,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:372: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t8);}

/* ##sys#register-module-alias in k2650 in k2646 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2913,4,t0,t1,t2,t3);}
t4=C_a_i_cons(&a,2,t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2926,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:122: ##sys#module-alias-environment */
t6=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* map-loop2014 in k6937 in k6934 in k6931 in k6915 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_fcall f_6954(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6954,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6979,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:858: g2020 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6950 in k6937 in k6934 in k6931 in k6915 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(12,0,((C_word*)t0)[2],*((C_word*)lf[90]+1),lf[164],((C_word*)t0)[3],lf[165],lf[166],((C_word*)t0)[4],lf[167],((C_word*)t0)[5],lf[168],t1);}

/* map-loop1946 in merr in k6752 in k6743 in instantiate-functor in k2650 in k2646 */
static void C_fcall f_6779(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6779,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* merr in k6752 in k6743 in instantiate-functor in k2650 in k2646 */
static void C_fcall f_6761(C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6761,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[129]+1);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6777,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6779,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=((C_word)li147),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6779(t13,t9,((C_word*)t0)[4]);}

/* map-loop1003 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4605,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:403: g1009 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5418 in k5409 in import-spec in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_fcall f_5420(C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5420,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5429,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5432,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[4]);
/* modules.scm:607: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[117]+1)))(3,*((C_word*)lf[117]+1),t4,t5);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5441,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5449,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=t3,a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word)li110),tmp=(C_word)a,a+=13,tmp);
/* modules.scm:609: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t4,t5);}}

/* k6946 */
static void C_ccall f_6947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],lf[163],t1);}

/* k2925 in register-module-alias in k2650 in k2646 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2926,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:121: ##sys#module-alias-environment */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* map-loop861 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_fcall f_4414(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4414,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4439,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:361: g867 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#with-module-aliases in k2650 in k2646 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[24],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2928,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2932,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2950,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
t11=C_i_check_list_2(t2,lf[16]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2964,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2969,a[2]=t9,a[3]=t14,a[4]=t7,a[5]=t10,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_2969(t16,t12,t2);}

/* f_6940 in k6937 in k6934 in k6931 in k6915 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6940(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6940,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6947,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:858: symbol->string */
t4=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* ##sys#match-functor-argument in k2650 in k2646 */
static void C_ccall f_6882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_6882,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6886,a[2]=t5,a[3]=t1,a[4]=t6,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7005,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:841: ##sys#resolve-module-name */
t9=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t4,lf[3]);}

/* k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6886(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6886,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],lf[147]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6893,a[2]=t4,a[3]=t1,a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[2];
t7=C_i_check_list_2(t6,lf[30]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6917,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6984,a[2]=t10,a[3]=t5,a[4]=((C_word)li154),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_6984(t12,t8,t6);}}

/* k3300 in k3269 in k3265 in k3263 in k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:199: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t2);}

/* k5409 in import-spec in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_fcall f_5411(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5411,NULL,2,t0,t1);}
if(C_truep(t1)){
/* modules.scm:603: ##sys#syntax-error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(5,*((C_word*)lf[105]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[115],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5420,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5937,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* modules.scm:604: c */
t5=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[14],t4);}}

/* k3303 in k3300 in k3269 in k3265 in k3263 in k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:199: check-for-redef */
t2=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5428 in k5418 in k5409 in import-spec in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:606: ##sys#intern-symbol */
C_string_to_symbol(3,0,((C_word*)t0)[2],t1);}

/* k4803 in k4801 */
static void C_ccall f_4804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(41),((C_word*)t0)[3]);}

/* k5425 in k5418 in k5409 in import-spec in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:605: import-name */
f_5375(((C_word*)t0)[3],t1);}

/* map-loop833 in register-compiled-module in k2650 in k2646 */
static void C_fcall f_4444(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4444,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4469,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:355: g839 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4801 */
static void C_ccall f_4802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* modules.scm:512: display */
t4=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* f_6893 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6893(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6893,3,t0,t1,t2);}
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t2:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6902,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:847: ##sys#find-export */
t6=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,t4,((C_word*)t0)[3],C_SCHEME_FALSE);}

/* k4226 */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4227,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k5860 in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5862(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5862,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5868,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5870,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word)li108),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_5870(t11,t7,((C_word*)t0)[2]);}

/* k4001 in map-loop761 in k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4002,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3977(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3977(t6,((C_word*)t0)[5],t5);}}

/* for-each-loop593 in mark-imported-symbols in k2650 in k2646 */
static void C_fcall f_3531(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3531,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3540,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:244: g594 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop2 in loop in validate-exports in k2650 in k2646 */
static void C_fcall f_6674(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6674,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6687,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* modules.scm:806: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6580(t5,t3,t4);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:807: loop2 */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}
else{
/* modules.scm:808: err */
t4=((C_word*)((C_word*)t0)[6])[1];
f_6532(t4,t1,C_a_i_list(&a,3,lf[151],((C_word*)t0)[2],((C_word*)t0)[7]));}}}

/* f_3502 in k3497 */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3502,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* k4629 in map-loop1003 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4630,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4605(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4605(t6,((C_word*)t0)[5],t5);}}

/* k6473 in k6455 in k6450 in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6475,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:764: ##sys#active-eval-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[140]+1)))(2,*((C_word*)lf[140]+1),t2);}}

/* f_6471 in k6455 in k6450 in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6471(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6471,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k5866 in k5860 in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:668: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3334 in k3331 in register-syntax-export in k2650 in k2646 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3335,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=C_i_block_ref(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[3],t1))){
/* modules.scm:215: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),t5,lf[45],((C_word*)t0)[3]);}
else{
t6=t5;
f_3339(2,t6,C_SCHEME_UNDEFINED);}}

/* k3331 in register-syntax-export in k2650 in k2646 */
static void C_ccall f_3333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:212: module-undefined-list */
t3=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3338 in k3334 in k3331 in register-syntax-export in k2650 in k2646 */
static void C_ccall f_3339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3372,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:216: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* f_6483 in k6515 in k6513 in k6473 in k6455 in k6450 in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6483(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6483,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* modules.scm:769: mrename */
t4=((C_word*)t0)[2];
f_6421(t4,t1,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6498,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6502,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:770: g1866 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[68]);}}

/* loop in k5683 in k5680 in k5560 in k5454 */
static void C_fcall f_5692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5692,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5706,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
t8=t6;
t9=C_i_check_list_2(t8,lf[30]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5714,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5719,a[2]=t12,a[3]=t7,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_5719(t14,t10,t8);}
else{
t7=C_i_caar(t3);
t8=C_i_assq(t7,t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5743,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t4,a[7]=t6,a[8]=((C_word)li104),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:638: g1527 */
t10=t9;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t1,t8);}
else{
t9=t3;
t10=C_u_i_cdr(t9);
t11=t3;
t12=C_u_i_car(t11);
t13=C_a_i_cons(&a,2,t12,t5);
/* modules.scm:650: loop */
t31=t1;
t32=t2;
t33=t10;
t34=t4;
t35=t13;
t36=t6;
t1=t31;
t2=t32;
t3=t33;
t4=t34;
t5=t35;
t6=t36;
goto loop;}}}
else{
t7=C_i_caar(t2);
t8=C_i_assq(t7,t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5786,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t5,a[7]=t6,a[8]=((C_word)li105),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:636: g1531 */
t10=t9;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t1,t8);}
else{
t9=t2;
t10=C_u_i_cdr(t9);
t11=t2;
t12=C_u_i_car(t11);
t13=C_a_i_cons(&a,2,t12,t4);
/* modules.scm:657: loop */
t31=t1;
t32=t10;
t33=t3;
t34=t13;
t35=t5;
t36=t6;
t1=t31;
t2=t32;
t3=t33;
t4=t34;
t5=t35;
t6=t36;
goto loop;}}}

/* k7010 in k7008 in k7006 in k2650 in k2646 */
static void C_ccall f_7011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:905: ##sys#register-primitive-module */
t3=*((C_word*)lf[72]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[177],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}

/* k7017 in k7015 in k7012 in k7010 in k7008 in k7006 in k2650 in k2646 */
static void C_ccall f_7018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7018,2,t0,t1);}
t2=C_mutate((C_word*)lf[171]+1 /* (set! module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7020,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k7012 in k7010 in k7008 in k7006 in k2650 in k2646 */
static void C_ccall f_7014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7016,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:907: ##sys#register-module-alias */
t3=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[175],lf[176]);}

/* k7015 in k7012 in k7010 in k7008 in k7006 in k2650 in k2646 */
static void C_ccall f_7016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7016,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:909: register-feature! */
t3=*((C_word*)lf[173]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[174]);}

/* k5894 in map-loop1567 in k5860 in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5895,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5870(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5870(t6,((C_word*)t0)[5],t5);}}

/* k3700 */
static void C_ccall f_3702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3702,2,t0,t1);}
t2=((C_word*)t0)[2];
f_3688(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3344 in k3340 in k3338 in k3334 in k3331 in register-syntax-export in k2650 in k2646 */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3345,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[44]);
t5=C_i_block_ref(t3,C_fix(5));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t8,C_fix(5),t6);}

/* k3340 in k3338 in k3334 in k3331 in register-syntax-export in k2650 in k2646 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],lf[39]);
t6=C_i_block_ref(t4,C_fix(3));
t7=C_a_i_cons(&a,2,t3,t6);
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t2,t8,C_fix(3),t7);}
else{
t3=t2;
f_3345(2,t3,C_SCHEME_UNDEFINED);}}

/* k5683 in k5680 in k5560 in k5454 */
static void C_ccall f_5684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5684,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5692,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5692(t6,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t2);}

/* k4845 */
static void C_ccall f_4846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:500: display */
t2=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2931 in with-module-aliases in k2650 in k2646 */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2932,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2933,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[3],a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:124: ##sys#dynamic-wind */
t7=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,((C_word*)t0)[4],t5,t6,t5);}

/* f_2933 in k2931 in with-module-aliases in k2650 in k2646 */
static void C_ccall f_2933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:124: module-alias-environment379380 */
t3=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k5680 in k5560 in k5454 */
static void C_ccall f_5682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5682,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:635: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[7],((C_word*)t0)[2],lf[122]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5829,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:660: c */
t3=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[10],((C_word*)t0)[11]);}}

/* k2935 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2938,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:124: module-alias-environment379380 */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}

/* k2937 in k2935 */
static void C_ccall f_2938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4841 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[2],a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4854,a[2]=t4,a[3]=t2,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4854(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f_4843 in k4841 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4843,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4846,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:499: display */
t4=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[85],((C_word*)t0)[2]);}

/* k4599 in map-loop1030 in k4550 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4600,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4575(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4575(t6,((C_word*)t0)[5],t5);}}

/* f_6498 */
static void C_ccall f_6498(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6498,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* loop in k5463 in k5457 in k5454 */
static void C_fcall f_5470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5470,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
/* modules.scm:615: values */
C_values(5,0,t1,t3,t4,((C_word*)t0)[2]);}
else{
t5=C_i_car(t2);
t6=C_i_assq(t5,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5486,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:613: g1442 */
t8=t7;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_car(t7);
t9=C_i_assq(t8,((C_word*)t0)[5]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5504,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:613: g1446 */
t11=t10;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t1,t9);}
else{
t10=t2;
t11=C_u_i_cdr(t10);
/* modules.scm:622: loop */
t15=t1;
t16=t11;
t17=t3;
t18=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}}}}

/* ##sys#register-syntax-export in k2650 in k2646 */
static void C_ccall f_3324(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3324,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=t3;
t6=C_i_check_structure_2(t5,lf[3],lf[10]);
t7=C_i_block_ref(t5,C_fix(2));
t8=C_eqp(C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3333,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_3333(2,t10,t8);}
else{
/* modules.scm:211: ##sys#find-export */
t10=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,t2,t3,C_SCHEME_TRUE);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4823 in for-each-loop1191 in k4797 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4815(t3,((C_word*)t0)[4],t2);}

/* k6686 in loop2 in loop in validate-exports in k2650 in k2646 */
static void C_ccall f_6687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6687,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3539 in for-each-loop593 in mark-imported-symbols in k2650 in k2646 */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3531(t3,((C_word*)t0)[4],t2);}

/* f_5486 in loop in k5463 in k5457 in k5454 */
static void C_ccall f_5486(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5486,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:618: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5470(t5,t1,t3,t4,((C_word*)t0)[5]);}

/* k3730 */
static void C_ccall f_3731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3731,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* for-each-loop1191 in k4797 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_fcall f_4815(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4815,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4824,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:509: g1192 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3739 */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:290: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3648(t4,((C_word*)t0)[4],t3);}

/* f_4210 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4210(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4210,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_cadr(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4227,a[2]=t1,a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_i_caddr(t2);
t9=t2;
t10=C_u_i_car(t9);
/* modules.scm:363: ##sys#ensure-transformer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(4,*((C_word*)lf[66]+1),t7,t8,t10);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_3716 in k3767 in k3775 in loop2 in loop in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3716,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_car(((C_word*)t0)[2]);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3731,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_cdr(t9);
/* modules.scm:287: loop2 */
t11=((C_word*)((C_word*)t0)[3])[1];
f_3648(t11,t8,t10);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[2]);
/* modules.scm:289: warn */
t6=((C_word*)t0)[4];
f_3601(t6,t4,lf[95],t5);}}

/* k7043 in k7006 in k2650 in k2646 */
static void C_ccall f_7044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:900: ##sys#register-primitive-module */
t2=*((C_word*)lf[72]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[176],t1,((C_word*)t0)[3]);}

/* k3929 in loop in k3973 in k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_3930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3930,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[58],((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3922,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* modules.scm:343: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3893(t6,t3,t5);}

/* k5672 in map-loop1454 in k5563 in k5560 in k5454 */
static void C_ccall f_5673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5673,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5648(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5648(t6,((C_word*)t0)[5],t5);}}

/* ##sys#find-export in k2650 in k2646 */
static void C_ccall f_4641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4641,5,t0,t1,t2,t3,t4);}
t5=t3;
t6=C_i_check_structure_2(t5,lf[3],lf[10]);
t7=C_i_block_ref(t5,C_fix(2));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4651,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(C_SCHEME_TRUE,t7);
if(C_truep(t9)){
t10=t3;
t11=C_i_check_structure_2(t10,lf[3],lf[29]);
t12=t8;
f_4651(t12,C_i_block_ref(t10,C_fix(4)));}
else{
t10=t8;
f_4651(t10,t7);}}

/* k4199 */
static void C_ccall f_4200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4200,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1));}

/* f_3941 in k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_3941(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3941,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,2,lf[55],t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3961,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_u_i_cdr(t4);
/* modules.scm:329: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t8,t9);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[55],t3));}}

/* k7026 in module-environment in k7017 in k7015 in k7012 in k7010 in k7008 in k7006 in k2650 in k2646 */
static void C_ccall f_7027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7027,2,t0,t1);}
t2=C_i_check_structure_2(t1,lf[3],lf[27]);
t3=C_i_block_ref(t1,C_fix(13));
t4=C_i_car(t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[172],((C_word*)t0)[3],t4,C_SCHEME_TRUE));}

/* module-environment in k7017 in k7015 in k7012 in k7010 in k7008 in k7006 in k2650 in k2646 */
static void C_ccall f_7020(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7020r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7020r(t0,t1,t2,t3);}}

static void C_ccall f_7020r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?t2:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7027,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:912: ##sys#find-module/import-library */
t7=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,lf[171]);}

/* k3921 in k3929 in loop in k3973 in k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_3922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3922,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3309 in k3265 in k3263 in k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:198: set-module-undefined-list! */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3312 in k3263 in k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:194: ##sys#toplevel-definition-hook */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE);}

/* k3170 in k3167 in k3147 in add-to-export-list in k2650 in k2646 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:174: append */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3176 in k3170 in k3167 in k3147 in add-to-export-list in k2650 in k2646 */
static void C_ccall f_3177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t3,C_fix(4),t1);}

/* k3179 in k3167 in k3147 in add-to-export-list in k2650 in k2646 */
static void C_ccall f_3180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(11),t1);}

/* for-each-loop481 in k3147 in add-to-export-list in k2650 in k2646 */
static void C_fcall f_3185(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3185,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3194,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:164: g482 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4010 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_4010(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[24],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4010,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_car(t4);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t5,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,2,lf[55],t8));}
else{
t4=t2;
t5=C_u_i_car(t4);
t6=C_a_i_list(&a,2,lf[55],t5);
t7=C_a_i_list(&a,2,lf[55],C_SCHEME_END_OF_LIST);
t8=t2;
t9=C_u_i_cdr(t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,4,lf[56],t6,t7,t9));}}

/* k5017 in map-loop1224 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5018,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4993(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4993(t6,((C_word*)t0)[5],t5);}}

/* map-loop728 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_fcall f_4051(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4051,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4076,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:318: g734 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop1732 in k6092 in k6070 in k6033 in k5990 */
static void C_fcall f_6272(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6272,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4049,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[56],t1);
t3=((C_word*)t0)[2];
t4=C_i_check_structure_2(t3,lf[3],lf[11]);
t5=C_i_block_ref(t3,C_fix(10));
t6=C_a_i_list(&a,2,lf[55],t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[3],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3975,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t6,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3977,a[2]=t10,a[3]=t15,a[4]=t8,a[5]=t11,a[6]=((C_word)li37),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_3977(t17,t13,((C_word*)t0)[4]);}

/* k6066 */
static void C_ccall f_6067(C_word c,C_word t0,C_word t1){
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
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}
else{
t7=((C_word*)t0)[3];
t8=C_u_i_car(t7);
/* modules.scm:704: ##sys#notice */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[125]+1)))(4,*((C_word*)lf[125]+1),((C_word*)t0)[4],lf[127],t8);}}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k6075 in k6073 in k6070 in k6033 in k5990 */
static void C_ccall f_6076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6085,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:736: macro-env */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k6070 in k6033 in k5990 */
static void C_ccall f_6072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6074,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6093,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;
f_6093(2,t4,C_SCHEME_UNDEFINED);}
else{
/* modules.scm:708: ##sys#syntax-error-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t3,((C_word*)t0)[11],lf[130]);}}
else{
t3=t2;
f_6074(t3,C_SCHEME_UNDEFINED);}}

/* k6073 in k6070 in k6033 in k5990 */
static void C_fcall f_6074(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6074,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6088,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6091,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:735: import-env */
t5=((C_word*)t0)[5];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}

/* k6225 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(2),t1);}

/* k6087 in k6073 in k6070 in k6033 in k5990 */
static void C_ccall f_6088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:735: import-env */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k6084 in k6075 in k6073 in k6070 in k6033 in k5990 */
static void C_ccall f_6085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:736: append */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6081 in k6075 in k6073 in k6070 in k6033 in k5990 */
static void C_ccall f_6082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:736: macro-env */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* map-loop702 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_fcall f_4092(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4092,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4117,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:314: g708 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4088 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_4090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:314: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[61]+1)))(3,*((C_word*)lf[61]+1),((C_word*)t0)[2],t1);}

/* k6234 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6236(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6236,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[129]+1);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6242,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li118),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6242(t11,t7,((C_word*)t0)[4]);}

/* k6096 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6129,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],lf[57]);
t6=C_i_block_ref(t4,C_fix(12));
/* modules.scm:727: merge-se */
f_3781(t3,C_a_i_list(&a,2,t6,((C_word*)t0)[5]));}

/* k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6093(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6093,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[10]);
t4=C_i_block_ref(t2,C_fix(2));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6098,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=C_eqp(C_SCHEME_TRUE,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6137,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6217,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=((C_word*)t0)[2];
t10=C_i_check_structure_2(t9,lf[3],lf[12]);
t11=C_i_block_ref(t9,C_fix(11));
/* modules.scm:711: append */
t12=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t8,((C_word*)t0)[6],t11);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6226,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=((C_word*)t0)[2];
t9=C_i_check_structure_2(t8,lf[3],lf[10]);
t10=C_i_block_ref(t8,C_fix(2));
t11=C_eqp(C_SCHEME_TRUE,t10);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:t10);
t13=C_SCHEME_END_OF_LIST;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=*((C_word*)lf[129]+1);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6236,a[2]=t7,a[3]=t12,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6272,a[2]=t16,a[3]=t20,a[4]=t14,a[5]=((C_word)li119),tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_6272(t22,t18,((C_word*)t0)[7]);}}

/* k6090 in k6073 in k6070 in k6033 in k5990 */
static void C_ccall f_6091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:735: append */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* map-loop1758 in k6234 in k6092 in k6070 in k6033 in k5990 */
static void C_fcall f_6242(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6242,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6238 in k6234 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:720: append */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6025 in k6002 in k5999 */
static void C_ccall f_6026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
t4=C_eqp(((C_word*)t0)[3],t3);
if(C_truep(t4)){
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}
else{
/* modules.scm:698: ##sys#notice */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[125]+1)))(4,*((C_word*)lf[125]+1),((C_word*)t0)[4],lf[126],((C_word*)t0)[2]);}}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k6033 in k5990 */
static void C_ccall f_6035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6036,a[2]=((C_word*)t0)[2],a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6308,a[2]=t6,a[3]=t2,a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6308(t8,t4,((C_word*)t0)[3]);}

/* f_6036 in k6033 in k5990 */
static void C_ccall f_6036(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6036,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6067,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:702: macro-env */
t5=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}

/* set-module-undefined-list! in k2650 in k2646 */
static void C_ccall f_2756(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2756,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(6),t3);}

/* k2962 in with-module-aliases in k2650 in k2646 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2967,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:128: ##sys#module-alias-environment */
t3=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* map-loop387 in with-module-aliases in k2650 in k2646 */
static void C_fcall f_2969(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2969,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2994,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:127: g393 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2966 in k2962 in with-module-aliases in k2650 in k2646 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:126: append */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_2950 in with-module-aliases in k2650 in k2646 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2950,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_i_cadr(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,t3,t4));}

/* loop in resolve-module-name in k2650 in k2646 */
static void C_fcall f_3005(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3005,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3037,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:133: ##sys#module-alias-environment */
t5=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* f_4278 in k4275 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4278(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4278,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_car(t5,((C_word*)t0)[2]));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4275 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4278,a[2]=((C_word*)t0)[2],a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4338,a[2]=t6,a[3]=t2,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4338(t8,t4,((C_word*)t0)[3]);}

/* f_3013 in k3036 in loop in resolve-module-name in k2650 in k2646 */
static void C_ccall f_3013(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3013,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
/* modules.scm:137: error */
t4=*((C_word*)lf[19]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[3],lf[20],((C_word*)t0)[4]);}
else{
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* modules.scm:138: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3005(t5,t1,t3,t4);}}

/* f_4266 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4266,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_car(t3,((C_word*)t0)[2]));}

/* k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4266,a[2]=((C_word*)t0)[2],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4358,a[2]=t6,a[3]=t2,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4358(t8,t4,((C_word*)t0)[3]);}

/* k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4265,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:375: ##sys#mark-imported-symbols */
t3=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4487 in k4483 in primitive-alias in k2650 in k2646 */
static void C_ccall f_4489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* ##sys#primitive-alias in k2650 in k2646 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4480,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4484,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4492,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(1));
/* modules.scm:395: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t4,lf[71],t5);}

/* f_4485 in k4483 in primitive-alias in k2650 in k2646 */
static void C_ccall f_4485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4485,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* k4483 in primitive-alias in k2650 in k2646 */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4484,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4485,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4489,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:396: g979 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t1,lf[68],((C_word*)t0)[3]);}

/* k4468 in map-loop833 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4469,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4444(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4444(t6,((C_word*)t0)[5],t5);}}

/* k2993 in map-loop387 in with-module-aliases in k2650 in k2646 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2994,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2969(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2969(t6,((C_word*)t0)[5],t5);}}

/* ##sys#resolve-module-name in k2650 in k2646 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2999,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3005,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3005(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* k3274 in k3272 in k3269 in k3265 in k3263 in k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3275(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3275,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[39]);
t5=C_i_block_ref(t3,C_fix(3));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t8,C_fix(3),t6);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3272 in k3269 in k3265 in k3263 in k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[29]);
t5=C_i_block_ref(t3,C_fix(4));
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[4];
t8=C_i_check_structure_2(t7,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t9=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t2,t7,C_fix(4),t6);}

/* k4677 in loop in k4650 in find-export in k2650 in k2646 */
static void C_fcall f_4678(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* modules.scm:434: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4653(t4,((C_word*)t0)[2],t3);}}

/* k3269 in k3265 in k3263 in k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3301,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:199: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* k3854 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_3855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:306: ##sys#append */
t2=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* ##sys#register-primitive-module in k2650 in k2646 */
static void C_ccall f_4497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4497r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4497r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4497r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4504,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:400: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t7);}

/* k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_3858(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3858,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=C_i_block_ref(t2,C_fix(1));
t5=C_a_i_list(&a,2,lf[55],t4);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4010,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
t11=((C_word*)t0)[2];
t12=C_i_check_structure_2(t11,lf[3],lf[57]);
t13=C_i_block_ref(t11,C_fix(12));
t14=C_i_check_list_2(t13,lf[16]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4051,a[2]=t9,a[3]=t17,a[4]=t7,a[5]=t10,a[6]=((C_word)li38),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_4051(t19,t15,t13);}

/* k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_fcall f_3852(C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3852,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3855,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[59]+1);
t9=((C_word*)t0)[3];
t10=C_i_check_structure_2(t9,lf[3],lf[33]);
t11=C_i_block_ref(t9,C_fix(9));
t12=C_i_check_list_2(t11,lf[16]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4090,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4092,a[2]=t7,a[3]=t15,a[4]=t5,a[5]=t8,a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_4092(t17,t13,t11);}

/* k4491 in primitive-alias in k2650 in k2646 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:394: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(3,*((C_word*)lf[69]+1),((C_word*)t0)[2],t1);}

/* k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4881(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4881,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4882,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t5,a[8]=t3,a[9]=t6,tmp=(C_word)a,a+=10,tmp);
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],lf[10]);
t10=C_i_block_ref(t8,C_fix(2));
t11=C_i_check_structure_2(t8,lf[3],lf[4]);
t12=C_i_block_ref(t8,C_fix(1));
t13=C_i_check_structure_2(t8,lf[3],lf[39]);
t14=C_i_block_ref(t8,C_fix(3));
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3601,a[2]=t12,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp);
t16=C_eqp(C_SCHEME_TRUE,t10);
if(C_truep(t16)){
t17=t7;
f_4908(2,t17,C_SCHEME_END_OF_LIST);}
else{
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3622,a[2]=t18,a[3]=t15,a[4]=t14,a[5]=t12,a[6]=((C_word)li78),tmp=(C_word)a,a+=7,tmp));
t20=((C_word*)t18)[1];
f_3622(t20,t7,t10);}}

/* f_4882 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4882(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4882,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4903,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:522: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t6);}}

/* loop in k6752 in k6743 in instantiate-functor in k2650 in k2646 */
static void C_fcall f_6830(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6830,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
/* modules.scm:826: merr */
t4=((C_word*)t0)[2];
f_6761(t4,t1);}}
else{
if(C_truep(C_i_nullp(t3))){
/* modules.scm:827: merr */
t4=((C_word*)t0)[2];
f_6761(t4,t1);}
else{
t4=C_i_car(t3);
t5=C_i_car(t4);
t6=C_i_car(t2);
t7=C_u_i_cdr(t4);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6864,a[2]=t5,a[3]=t6,a[4]=t1,a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:833: ##sys#match-functor-argument */
t9=*((C_word*)lf[161]+1);
((C_proc7)(void*)(*((C_word*)t9+1)))(7,t9,t8,t5,((C_word*)t0)[4],t6,t7,((C_word*)t0)[5]);}}}

/* loop in k4650 in find-export in k2650 in k2646 */
static void C_fcall f_4653(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4653,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_i_car(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t2;
t6=C_u_i_car(t5);
if(C_truep(C_i_pairp(t6))){
t7=C_i_caar(t2);
t8=C_eqp(((C_word*)t0)[2],t7);
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4678,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t10=t2;
t11=C_u_i_car(t10);
t12=C_u_i_cdr(t11);
t13=t9;
f_4678(t13,C_i_memq(((C_word*)t0)[2],t12));}
else{
t10=t9;
f_4678(t10,C_SCHEME_FALSE);}}}
else{
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:435: loop */
t16=t1;
t17=t8;
t1=t16;
t2=t17;
goto loop;}}}}

/* k4650 in find-export in k2650 in k2646 */
static void C_fcall f_4651(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4651,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4653,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4653(t5,((C_word*)t0)[4],t1);}

/* k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
/* modules.scm:518: ##sys#error */
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[97],((C_word*)t0)[8]);}
else{
t3=t2;
f_4881(2,t3,C_SCHEME_UNDEFINED);}}

/* k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4874,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[30]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5026,a[2]=t5,a[3]=((C_word*)t0)[9],a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5026(t7,t3,t1);}

/* k4075 in map-loop728 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_4076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4076,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4051(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4051(t6,((C_word*)t0)[5],t5);}}

/* k3263 in k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3266,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3313,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],lf[4]);
t6=C_i_block_ref(t4,C_fix(1));
/* modules.scm:195: ##sys#module-rename */
t7=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,((C_word*)t0)[2],t6);}

/* k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3262,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:193: module-undefined-list */
t3=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3265 in k3263 in k3260 in register-export in k2650 in k2646 */
static void C_ccall f_3266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3266,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3271,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3310,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:198: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t4,t2,((C_word*)t0)[3]);}
else{
t4=t3;
f_3271(2,t4,C_SCHEME_FALSE);}}

/* k4862 in for-each-loop1161 in k4841 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f_4863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4854(t3,((C_word*)t0)[4],t2);}

/* k3878 in k3973 in k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_fcall f_3879(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3879,NULL,2,t0,t1);}
t2=C_a_i_list(&a,6,lf[60],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
t3=C_a_i_list(&a,1,t2);
/* modules.scm:306: ##sys#append */
t4=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[6],((C_word*)t0)[7],t3);}

/* k6812 in k6752 in k6743 in instantiate-functor in k2650 in k2646 */
static void C_ccall f_6813(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6813,2,t0,t1);}
t2=C_eqp(lf[147],((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,lf[159],t4);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[160],t1,t5));}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,lf[159],t4);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[160],t1,t5));}}

/* k3881 in k3973 in k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_3882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3882,2,t0,t1);}
t2=((C_word*)t0)[2];
f_3879(t2,C_a_i_cons(&a,2,lf[56],t1));}

/* for-each-loop1161 in k4841 in k4763 in k4761 in k4759 in k4756 */
static void C_fcall f_4854(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4854,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4863,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:497: g1162 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3668 in k3775 in loop2 in loop in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_3669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:276: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3648(t4,((C_word*)t0)[4],t3);}

/* k6113 in k6099 in k6096 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(9),t1);}

/* k3687 */
static void C_fcall f_3688(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3688,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3691,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* modules.scm:283: loop2 */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3648(t5,t2,t4);}

/* f_3682 in k3775 in loop2 in loop in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3682,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3688,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3702,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t3;
f_3688(t7,C_a_i_cons(&a,2,t4,t5));}
else{
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
/* modules.scm:282: ##sys#module-rename */
t9=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t8,((C_word*)t0)[4]);}}

/* k6099 in k6096 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6100(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6114,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],lf[33]);
t6=C_i_block_ref(t4,C_fix(9));
t7=C_a_i_list(&a,2,lf[55],((C_word*)((C_word*)t0)[3])[1]);
t8=C_a_i_list(&a,2,lf[128],t7);
t9=C_a_i_list(&a,1,t8);
/* modules.scm:731: append */
t10=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t3,t6,t9);}
else{
t3=((C_word*)t0)[2];
f_6074(t3,C_SCHEME_UNDEFINED);}}

/* k6101 in k6099 in k6096 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6074(t2,C_SCHEME_UNDEFINED);}

/* k3036 in loop in resolve-module-name in k2650 in k2646 */
static void C_ccall f_3037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3037,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3013,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li10),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:131: g428 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[7],t2);}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#find-module in k2650 in k2646 */
static void C_ccall f_3039(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3039r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3039r(t0,t1,t2,t3);}}

static void C_ccall f_3039r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_TRUE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_assq(t2,*((C_word*)lf[22]+1));
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_i_cdr(t12));}
else{
if(C_truep(t5)){
/* modules.scm:143: error */
t13=*((C_word*)lf[19]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t1,t9,lf[23],t2);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}}

/* k3690 in k3687 */
static void C_ccall f_3691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3691,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6408 in module-rename in k2650 in k2646 */
static void C_ccall f_6409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:741: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(3,*((C_word*)lf[69]+1),((C_word*)t0)[2],t1);}

/* ##sys#module-rename in k2650 in k2646 */
static void C_ccall f_6402(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6402,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6409,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t3,C_fix(1));
t6=C_slot(t2,C_fix(1));
/* modules.scm:742: string-append */
t7=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,t5,lf[138],t6);}

/* k4295 in k4275 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[2],a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4318,a[2]=t6,a[3]=t2,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4318(t8,t4,((C_word*)t0)[3]);}

/* f_4298 in k4295 in k4275 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4298,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_car(t3,((C_word*)t0)[2]));}

/* f_6461 in k6455 in k6450 in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6461(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6461,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6450 in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6452,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6453,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6457,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:757: g1837 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[68]);}}

/* f_6453 in k6450 in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6453,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k6455 in k6450 in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6457,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6461,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:747: g1841 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6471,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6475,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:761: g1847 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[49]);}}

/* f_5972 in k5970 in k5968 in k5966 in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5972(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5972,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5977,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li112),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5982,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li122),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:682: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k5970 in k5968 in k5966 in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li123),tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[8]);
t4=C_i_check_list_2(t3,lf[30]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6353,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6355,a[2]=t7,a[3]=t2,a[4]=((C_word)li124),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_6355(t9,t5,t3);}

/* loop in k3973 in k4047 in k3857 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_fcall f_3893(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3893,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
if(C_truep(C_i_assq(t3,((C_word*)t0)[2]))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:339: loop */
t16=t1;
t17=t5;
t1=t16;
t2=t17;
goto loop;}
else{
t4=C_i_caar(t2);
t5=t2;
t6=C_u_i_car(t5);
t7=C_u_i_car(t6);
t8=C_a_i_list(&a,2,lf[55],t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3930,a[2]=t8,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t10=t2;
t11=C_u_i_car(t10);
t12=C_u_i_cdr(t11);
/* modules.scm:342: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t9,t12);}}}

/* f_5977 */
static void C_ccall f_5977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5977,2,t0,t1);}
/* modules.scm:683: import-spec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5393(t2,t1,((C_word*)t0)[3]);}

/* k6433 */
static void C_ccall f_6434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=C_i_block_ref(t2,C_fix(1));
/* modules.scm:754: ##sys#module-rename */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],((C_word*)t0)[4],t4);}

/* k5968 in k5966 in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5969(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[9])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6382,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t1;
t5=C_i_check_structure_2(t4,lf[3],lf[53]);
t6=C_i_block_ref(t4,C_fix(8));
t7=C_i_cdr(((C_word*)t0)[7]);
/* modules.scm:677: append */
t8=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t6,t7);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6394,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t1;
t5=C_i_check_structure_2(t4,lf[3],lf[52]);
t6=C_i_block_ref(t4,C_fix(7));
t7=C_i_cdr(((C_word*)t0)[7]);
/* modules.scm:680: append */
t8=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t6,t7);}}
else{
t3=t2;
f_5971(2,t3,C_SCHEME_UNDEFINED);}}

/* k5966 in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:671: ##sys#current-module */
t3=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_5279 in k5246 in k5244 in k5239 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5279(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5279,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5285,a[2]=t5,a[3]=t3,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5290,a[2]=((C_word*)t0)[2],a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5295,a[2]=t3,a[3]=t5,a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:565: ##sys#dynamic-wind */
t9=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t1,t6,t7,t8);}

/* k5275 in k5271 in k5246 in k5244 in k5239 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* map-loop1541 in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_fcall f_5900(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5900,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5925,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:668: g1547 */
t5=((C_word*)t0)[5];
f_5835(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5271 in k5246 in k5244 in k5239 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:573: ##sys#find-module */
t3=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[62]);}

/* k6634 in loop in validate-exports in k2650 in k2646 */
static void C_ccall f_6635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6635,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5267 in k5265 in k5262 in k5260 in k5257 in k5255 in k5252 in k5250 */
static void C_ccall f_5268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5265 in k5262 in k5260 in k5257 in k5255 in k5252 in k5250 */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5268,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:565: macro-environment13061307 */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}

/* k5727 in for-each-loop1509 in loop in k5683 in k5680 in k5560 in k5454 */
static void C_ccall f_5728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5719(t3,((C_word*)t0)[4],t2);}

/* k5262 in k5260 in k5257 in k5255 in k5252 in k5250 */
static void C_ccall f_5263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5263,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5266,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:565: macro-environment13061307 */
t4=((C_word*)t0)[7];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k5260 in k5257 in k5255 in k5252 in k5250 */
static void C_ccall f_5261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5263,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:565: current-meta-environment13041305 */
t3=((C_word*)t0)[7];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* k5935 in k5409 in import-spec in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_fixnump(t2))){
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[3];
f_5420(t6,C_i_nullp(t5));}
else{
t3=((C_word*)t0)[3];
f_5420(t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_5420(t2,C_SCHEME_FALSE);}}

/* f_5295 */
static void C_ccall f_5295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5295,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[102]+1));
t3=C_mutate((C_word*)lf[102]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5560 in k5454 */
static void C_ccall f_5562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5562,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5564,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:624: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[8],((C_word*)t0)[2],lf[120]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:634: c */
t3=((C_word*)t0)[10];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[13],((C_word*)t0)[12]);}}

/* k5754 */
static void C_ccall f_5755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:646: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5692(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k5563 in k5560 in k5454 */
static void C_ccall f_5564(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5564,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_cddr(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[16]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5571,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5648,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word)li101),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5648(t12,t8,t6);}

/* k5076 in loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_5077(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5077,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5080,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* modules.scm:484: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5049(t5,t2,t4);}

/* k5924 in map-loop1541 in k5832 in k5830 in k5827 in k5680 in k5560 in k5454 */
static void C_ccall f_5925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5925,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5900(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5900(t6,((C_word*)t0)[5],t5);}}

/* f_5290 */
static void C_ccall f_5290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5290,2,t0,t1);}
/* modules.scm:572: ##sys#load */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(5,*((C_word*)lf[103]+1),t1,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* f_5743 in loop in k5683 in k5680 in k5560 in k5454 */
static void C_ccall f_5743(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5743,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_cadr(t2);
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5755,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:649: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t8,t2,((C_word*)t0)[7]);}

/* k5089 in loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_5091(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5091,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5077(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5134,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:470: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t2);}}

/* k6609 in loop in validate-exports in k2650 in k2646 */
static void C_ccall f_6610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6610,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_5285 */
static void C_ccall f_5285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5285,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[102]+1));
t3=C_mutate((C_word*)lf[102]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* for-each-loop1995 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_fcall f_6984(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6984,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6993,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:843: g1996 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5552 in map-loop1409 in k5457 in k5454 */
static void C_ccall f_5553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5553,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5528(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5528(t6,((C_word*)t0)[5],t5);}}

/* tostr in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_fcall f_5333(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5333,NULL,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5346,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:590: keyword? */
t4=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}}

/* k6647 in loop in validate-exports in k2650 in k2646 */
static void C_fcall f_6649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6649,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:802: iface */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6538(t3,((C_word*)t0)[4],t2);}
else{
/* modules.scm:803: err */
t2=((C_word*)((C_word*)t0)[5])[1];
f_6532(t2,((C_word*)t0)[4],C_a_i_list(&a,3,lf[150],((C_word*)t0)[2],((C_word*)t0)[6]));}}

/* k5237 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5236,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5238,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t2)[1])){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t2)[1]);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5240,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5304,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5307,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:563: symbol->string */
t7=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[3]);}}

/* k5079 in k5076 in loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5080,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6992 in for-each-loop1995 in k6885 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_6993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6984(t3,((C_word*)t0)[4],t2);}

/* ##sys#find-module/import-library in k2650 in k2646 */
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5230,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5234,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:559: ##sys#resolve-module-name */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5236,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:560: ##sys#find-module */
t3=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* f_2637 in resolve in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_2637(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2637,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k5086 in loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5088,2,t0,t1);}
t2=((C_word*)t0)[2];
f_5077(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5223 in map-loop1093 in finalize-module in k2650 in k2646 */
static void C_ccall f_5224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5224,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5199(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5199(t6,((C_word*)t0)[5],t5);}}

/* k5351 in k5344 in tostr in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:590: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,lf[111]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_modules_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_modules_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("modules_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3966)){
C_save(t1);
C_rereclaim2(3966*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,182);
lf[0]=C_h_intern(&lf[0],18,"\003syscurrent-module");
lf[1]=C_h_intern(&lf[1],28,"\003sysmodule-alias-environment");
lf[3]=C_h_intern(&lf[3],6,"module");
lf[4]=C_h_intern(&lf[4],11,"module-name");
lf[5]=C_h_intern(&lf[5],21,"module-undefined-list");
lf[6]=C_h_intern(&lf[6],26,"set-module-undefined-list!");
lf[7]=C_h_intern(&lf[7],14,"\003sysblock-set!");
lf[8]=C_h_intern(&lf[8],15,"\003sysmodule-name");
lf[9]=C_h_intern(&lf[9],18,"\003sysmodule-exports");
lf[10]=C_h_intern(&lf[10],18,"module-export-list");
lf[11]=C_h_intern(&lf[11],15,"module-vexports");
lf[12]=C_h_intern(&lf[12],15,"module-sexports");
lf[13]=C_h_intern(&lf[13],25,"\003sysregister-module-alias");
lf[14]=C_h_intern(&lf[14],23,"\003syswith-module-aliases");
lf[15]=C_h_intern(&lf[15],16,"\003sysdynamic-wind");
lf[16]=C_h_intern(&lf[16],3,"map");
lf[17]=C_h_intern(&lf[17],6,"append");
lf[18]=C_h_intern(&lf[18],23,"\003sysresolve-module-name");
lf[19]=C_h_intern(&lf[19],5,"error");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\035module alias refers to itself");
lf[21]=C_h_intern(&lf[21],15,"\003sysfind-module");
lf[22]=C_h_intern(&lf[22],16,"\003sysmodule-table");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\020module not found");
lf[24]=C_h_intern(&lf[24],17,"\003sysswitch-module");
lf[25]=C_h_intern(&lf[25],21,"\003sysmacro-environment");
lf[26]=C_h_intern(&lf[26],23,"\003syscurrent-environment");
lf[27]=C_h_intern(&lf[27],25,"module-saved-environments");
lf[28]=C_h_intern(&lf[28],22,"\003sysadd-to-export-list");
lf[29]=C_h_intern(&lf[29],17,"module-exist-list");
lf[30]=C_h_intern(&lf[30],8,"for-each");
lf[31]=C_h_intern(&lf[31],28,"\003systoplevel-definition-hook");
lf[32]=C_h_intern(&lf[32],28,"\003sysregister-meta-expression");
lf[33]=C_h_intern(&lf[33],23,"module-meta-expressions");
lf[34]=C_h_intern(&lf[34],15,"check-for-redef");
lf[35]=C_h_intern(&lf[35],8,"\003syswarn");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\047redefinition of imported syntax binding");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000&redefinition of imported value binding");
lf[38]=C_h_intern(&lf[38],19,"\003sysregister-export");
lf[39]=C_h_intern(&lf[39],19,"module-defined-list");
lf[40]=C_h_intern(&lf[40],8,"\003sysdelq");
lf[41]=C_h_intern(&lf[41],17,"\003sysmodule-rename");
lf[42]=C_h_intern(&lf[42],15,"\003sysfind-export");
lf[43]=C_h_intern(&lf[43],26,"\003sysregister-syntax-export");
lf[44]=C_h_intern(&lf[44],26,"module-defined-syntax-list");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000!use of syntax precedes definition");
lf[46]=C_h_intern(&lf[46],22,"\003sysregister-undefined");
lf[47]=C_h_intern(&lf[47],19,"\003sysregister-module");
lf[48]=C_h_intern(&lf[48],25,"\003sysmark-imported-symbols");
lf[49]=C_h_intern(&lf[49],12,"\004corealiased");
lf[51]=C_h_intern(&lf[51],32,"\003syscompiled-module-registration");
lf[52]=C_h_intern(&lf[52],19,"module-import-forms");
lf[53]=C_h_intern(&lf[53],24,"module-meta-import-forms");
lf[54]=C_h_intern(&lf[54],10,"\003sysappend");
lf[55]=C_h_intern(&lf[55],5,"quote");
lf[56]=C_h_intern(&lf[56],4,"list");
lf[57]=C_h_intern(&lf[57],15,"module-iexports");
lf[58]=C_h_intern(&lf[58],4,"cons");
lf[59]=C_h_intern(&lf[59],16,"\003sysstrip-syntax");
lf[60]=C_h_intern(&lf[60],28,"\003sysregister-compiled-module");
lf[61]=C_h_intern(&lf[61],16,"\003sysfast-reverse");
lf[62]=C_h_intern(&lf[62],6,"import");
lf[63]=C_h_intern(&lf[63],4,"eval");
lf[64]=C_h_intern(&lf[64],9,"\003syserror");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\0000cannot find implementation of re-exported syntax");
lf[66]=C_h_intern(&lf[66],22,"\003sysensure-transformer");
lf[67]=C_h_intern(&lf[67],19,"\003sysprimitive-alias");
lf[68]=C_h_intern(&lf[68],14,"\004coreprimitive");
lf[69]=C_h_intern(&lf[69],18,"\003sysstring->symbol");
lf[70]=C_h_intern(&lf[70],17,"\003sysstring-append");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\002#%");
lf[72]=C_h_intern(&lf[72],29,"\003sysregister-primitive-module");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\0002unknown syntax referenced while registering module");
lf[74]=C_h_intern(&lf[74],7,"display");
lf[75]=C_h_intern(&lf[75],10,"write-char");
lf[76]=C_h_intern(&lf[76],19,"\003sysfinalize-module");
lf[77]=C_h_intern(&lf[77],17,"get-output-string");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[79]=C_h_intern(&lf[79],5,"cadar");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\042\012Warning:    suggesting: `(import ");
lf[81]=C_h_intern(&lf[81],19,"\003syswrite-char/port");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\025\012Warning:    (import ");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\037\012Warning:    suggesting one of:");
lf[84]=C_h_intern(&lf[84],7,"\004coredb");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\015\012Warning:    ");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\004 in:");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\052reference to possibly unbound identifier `");
lf[88]=C_h_intern(&lf[88],18,"open-output-string");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000$(internal) indirect export not found");
lf[90]=C_h_intern(&lf[90],13,"string-append");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\014 in module `");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[93]=C_h_intern(&lf[93],14,"symbol->string");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000!indirect export of syntax binding");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\033indirect reexport of syntax");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\042indirect export of unknown binding");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\021module unresolved");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\037exported identifier of module `");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\026\047 has not been defined");
lf[100]=C_h_intern(&lf[100],30,"\003sysfind-module/import-library");
lf[101]=C_h_intern(&lf[101],28,"\003syscurrent-meta-environment");
lf[102]=C_h_intern(&lf[102],19,"\003sysnotices-enabled");
lf[103]=C_h_intern(&lf[103],8,"\003sysload");
lf[104]=C_h_intern(&lf[104],26,"\003sysmeta-macro-environment");
lf[105]=C_h_intern(&lf[105],21,"\003syssyntax-error-hook");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000#cannot import from undefined module");
lf[107]=C_h_intern(&lf[107],18,"\003sysfind-extension");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\007.import");
lf[109]=C_h_intern(&lf[109],17,"\003sysexpand-import");
lf[110]=C_h_intern(&lf[110],16,"\004coremacro-alias");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[112]=C_h_intern(&lf[112],18,"\003syssymbol->string");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid prefix");
lf[114]=C_h_intern(&lf[114],8,"keyword\077");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid import specification");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\005srfi-");
lf[117]=C_h_intern(&lf[117],18,"\003sysnumber->string");
lf[118]=C_h_intern(&lf[118],16,"\003syscheck-syntax");
lf[119]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000");
lf[120]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\037renamed identifier not imported");
lf[122]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000");
lf[123]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid import specification");
lf[125]=C_h_intern(&lf[125],10,"\003sysnotice");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000(re-importing already imported identifier");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000$re-importing already imported syntax");
lf[128]=C_h_intern(&lf[128],18,"\003sysmark-primitive");
lf[129]=C_h_intern(&lf[129],3,"car");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000%`reexport\047 only valid inside a module");
lf[131]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[132]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[133]=C_h_intern(&lf[133],4,"srfi");
lf[134]=C_h_intern(&lf[134],6,"prefix");
lf[135]=C_h_intern(&lf[135],6,"except");
lf[136]=C_h_intern(&lf[136],6,"rename");
lf[137]=C_h_intern(&lf[137],4,"only");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[139]=C_h_intern(&lf[139],21,"\003sysalias-global-hook");
lf[140]=C_h_intern(&lf[140],27,"\003sysactive-eval-environment");
lf[141]=C_h_intern(&lf[141],21,"\003sysqualified-symbol\077");
lf[142]=C_h_intern(&lf[142],22,"\003sysregister-interface");
lf[143]=C_h_intern(&lf[143],14,"\004coreinterface");
lf[144]=C_h_intern(&lf[144],20,"\003sysvalidate-exports");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\021unknown interface");
lf[146]=C_h_intern(&lf[146],1,"x");
lf[147]=C_h_intern(&lf[147],1,"\052");
lf[148]=C_h_intern(&lf[148],7,"\000syntax");
lf[149]=C_h_intern(&lf[149],10,"\000interface");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid interface specification");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid export");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid export");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[155]=C_h_intern(&lf[155],20,"\003sysregister-functor");
lf[156]=C_h_intern(&lf[156],12,"\004corefunctor");
lf[157]=C_h_intern(&lf[157],23,"\003sysinstantiate-functor");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000/argument list mismatch in functor instantiation");
lf[159]=C_h_intern(&lf[159],11,"\004coremodule");
lf[160]=C_h_intern(&lf[160],21,"\004corelet-module-alias");
lf[161]=C_h_intern(&lf[161],26,"\003sysmatch-functor-argument");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000!instantation of undefined functor");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\003\012  ");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\021argument module `");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000$\047 does not match required signature\012");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\022in instantiation `");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\016\047 of functor `");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\0007\047, because the following required exports are missing:\012");
lf[169]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\003eq\077\376\003\000\000\002\376\001\000\000\004eqv\077\376\003\000\000\002\376\001\000\000\006equal\077\376\003\000\000\002\376"
"\001\000\000\005pair\077\376\003\000\000\002\376\001\000\000\004cons\376\003\000\000\002\376\001\000\000\003car\376\003\000\000\002\376\001\000\000\003cdr\376\003\000\000\002\376\001\000\000\004caar\376\003\000\000\002\376\001\000\000\004cadr\376\003\000"
"\000\002\376\001\000\000\004cdar\376\003\000\000\002\376\001\000\000\004cddr\376\003\000\000\002\376\001\000\000\005caaar\376\003\000\000\002\376\001\000\000\005caadr\376\003\000\000\002\376\001\000\000\005cadar\376\003\000\000\002\376\001\000\000\005"
"caddr\376\003\000\000\002\376\001\000\000\005cdaar\376\003\000\000\002\376\001\000\000\005cdadr\376\003\000\000\002\376\001\000\000\005cddar\376\003\000\000\002\376\001\000\000\005cdddr\376\003\000\000\002\376\001\000\000\006caaaa"
"r\376\003\000\000\002\376\001\000\000\006caaadr\376\003\000\000\002\376\001\000\000\006caadar\376\003\000\000\002\376\001\000\000\006caaddr\376\003\000\000\002\376\001\000\000\006cadaar\376\003\000\000\002\376\001\000\000\006cadad"
"r\376\003\000\000\002\376\001\000\000\006caddar\376\003\000\000\002\376\001\000\000\006cadddr\376\003\000\000\002\376\001\000\000\006cdaaar\376\003\000\000\002\376\001\000\000\006cdaadr\376\003\000\000\002\376\001\000\000\006cdada"
"r\376\003\000\000\002\376\001\000\000\006cdaddr\376\003\000\000\002\376\001\000\000\006cddaar\376\003\000\000\002\376\001\000\000\006cddadr\376\003\000\000\002\376\001\000\000\006cdddar\376\003\000\000\002\376\001\000\000\006cdddd"
"r\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\005null\077\376\003\000\000\002\376\001\000\000\005list\077\376\003\000\000\002\376\001\000\000\004lis"
"t\376\003\000\000\002\376\001\000\000\006length\376\003\000\000\002\376\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\006append\376\003\000\000\002\376\001\000\000\007"
"reverse\376\003\000\000\002\376\001\000\000\004memq\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004assq\376\003\000\000\002\376\001\000\000\004assv\376"
"\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\007symbol\077\376\003\000\000\002\376\001\000\000\016symbol->string\376\003\000\000\002\376\001\000\000\016string->symbol\376"
"\003\000\000\002\376\001\000\000\007number\077\376\003\000\000\002\376\001\000\000\010integer\077\376\003\000\000\002\376\001\000\000\006exact\077\376\003\000\000\002\376\001\000\000\005real\077\376\003\000\000\002\376\001\000\000\010compl"
"ex\077\376\003\000\000\002\376\001\000\000\010inexact\077\376\003\000\000\002\376\001\000\000\011rational\077\376\003\000\000\002\376\001\000\000\005zero\077\376\003\000\000\002\376\001\000\000\004odd\077\376\003\000\000\002\376\001\000\000\005e"
"ven\077\376\003\000\000\002\376\001\000\000\011positive\077\376\003\000\000\002\376\001\000\000\011negative\077\376\003\000\000\002\376\001\000\000\003max\376\003\000\000\002\376\001\000\000\003min\376\003\000\000\002\376\001\000\000\001+\376"
"\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001\052\376\003\000\000\002\376\001\000\000\001/\376\003\000\000\002\376\001\000\000\001=\376\003\000\000\002\376\001\000\000\001>\376\003\000\000\002\376\001\000\000\001<\376\003\000\000\002\376\001\000\000\002>=\376\003\000"
"\000\002\376\001\000\000\002<=\376\003\000\000\002\376\001\000\000\010quotient\376\003\000\000\002\376\001\000\000\011remainder\376\003\000\000\002\376\001\000\000\006modulo\376\003\000\000\002\376\001\000\000\003gcd\376\003\000\000\002"
"\376\001\000\000\003lcm\376\003\000\000\002\376\001\000\000\003abs\376\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000"
"\005round\376\003\000\000\002\376\001\000\000\016exact->inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log"
"\376\003\000\000\002\376\001\000\000\004expt\376\003\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asi"
"n\376\003\000\000\002\376\001\000\000\004acos\376\003\000\000\002\376\001\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000"
"\000\002\376\001\000\000\005char\077\376\003\000\000\002\376\001\000\000\006char=\077\376\003\000\000\002\376\001\000\000\006char>\077\376\003\000\000\002\376\001\000\000\006char<\077\376\003\000\000\002\376\001\000\000\007char>=\077\376\003\000"
"\000\002\376\001\000\000\007char<=\077\376\003\000\000\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000"
"\012char-ci>=\077\376\003\000\000\002\376\001\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespa"
"ce\077\376\003\000\000\002\376\001\000\000\015char-numeric\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\020char-lower-case\077\376\003"
"\000\000\002\376\001\000\000\013char-upcase\376\003\000\000\002\376\001\000\000\015char-downcase\376\003\000\000\002\376\001\000\000\015char->integer\376\003\000\000\002\376\001\000\000\015integ"
"er->char\376\003\000\000\002\376\001\000\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000\000\002\376\001\000\000\010string<\077\376"
"\003\000\000\002\376\001\000\000\011string>=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376\001\000\000\013string-ci<\077\376"
"\003\000\000\002\376\001\000\000\013string-ci>\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\013make-s"
"tring\376\003\000\000\002\376\001\000\000\015string-length\376\003\000\000\002\376\001\000\000\012string-ref\376\003\000\000\002\376\001\000\000\013string-set!\376\003\000\000\002\376\001\000\000\015s"
"tring-append\376\003\000\000\002\376\001\000\000\013string-copy\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000"
"\000\002\376\001\000\000\011substring\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\007vector\077\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000"
"\002\376\001\000\000\012vector-ref\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\015v"
"ector-length\376\003\000\000\002\376\001\000\000\014vector->list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003"
"\000\000\002\376\001\000\000\012procedure\077\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\005force\376"
"\003\000\000\002\376\001\000\000\036call-with-current-continuation\376\003\000\000\002\376\001\000\000\013input-port\077\376\003\000\000\002\376\001\000\000\014output-por"
"t\077\376\003\000\000\002\376\001\000\000\022current-input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\024call-with-i"
"nput-file\376\003\000\000\002\376\001\000\000\025call-with-output-file\376\003\000\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-"
"output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\004load\376\003"
"\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\013eof-object\077\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000"
"\005write\376\003\000\000\002\376\001\000\000\007display\376\003\000\000\002\376\001\000\000\012write-char\376\003\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\024with-input"
"-from-file\376\003\000\000\002\376\001\000\000\023with-output-to-file\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\013char-ready\077\376\003\000\000\002\376"
"\001\000\000\011imag-part\376\003\000\000\002\376\001\000\000\011real-part\376\003\000\000\002\376\001\000\000\011magnitude\376\003\000\000\002\376\001\000\000\011numerator\376\003\000\000\002\376\001\000\000\013"
"denominator\376\003\000\000\002\376\001\000\000\031scheme-report-environment\376\003\000\000\002\376\001\000\000\020null-environment\376\003\000\000\002\376\001\000"
"\000\027interaction-environment\376\003\000\000\002\376\001\000\000\004else\376\377\016");
lf[170]=C_h_intern(&lf[170],29,"\003sysdefault-macro-environment");
lf[171]=C_h_intern(&lf[171],18,"module-environment");
lf[172]=C_h_intern(&lf[172],11,"environment");
lf[173]=C_h_intern(&lf[173],17,"register-feature!");
lf[174]=C_h_intern(&lf[174],19,"module-environments");
lf[175]=C_h_intern(&lf[175],4,"r5rs");
lf[176]=C_h_intern(&lf[176],6,"scheme");
lf[177]=C_h_intern(&lf[177],9,"r5rs-null");
lf[178]=C_h_intern(&lf[178],9,"r4rs-null");
lf[179]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\014dynamic-wind\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\020call-with-values\376\377\016");
lf[180]=C_h_intern(&lf[180],4,"r4rs");
lf[181]=C_h_intern(&lf[181],14,"make-parameter");
C_register_lf2(lf,182,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2648,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:72: make-parameter */
t3=*((C_word*)lf[181]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k5255 in k5252 in k5250 */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5258,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:565: current-environment13021303 */
t3=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[5])[1]);}

/* k5712 in loop in k5683 in k5680 in k5560 in k5454 */
static void C_ccall f_5714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:643: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5257 in k5255 in k5252 in k5250 */
static void C_ccall f_5258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5258,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5261,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:565: current-meta-environment13041305 */
t4=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k2639 in resolve in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=t1;
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2646 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2648,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#current-module ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:73: make-parameter */
t4=*((C_word*)lf[181]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_END_OF_LIST);}

/* for-each-loop1509 in loop in k5683 in k5680 in k5560 in k5454 */
static void C_fcall f_5719(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5719,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5728,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:639: g1510 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5250 */
static void C_ccall f_5251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5253,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:565: current-module13001301 */
t3=((C_word*)t0)[11];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1]);}

/* k5252 in k5250 */
static void C_ccall f_5253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5253,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5256,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:565: current-environment13021303 */
t4=((C_word*)t0)[11];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* map-loop1409 in k5457 in k5454 */
static void C_fcall f_5528(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5528,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5553,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:613: g1415 */
f_5324(t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5246 in k5244 in k5239 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5247,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word)li84),tmp=(C_word)a,a+=12,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5279,a[2]=((C_word*)t0)[12],a[3]=((C_word)li88),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:565: ##sys#dynamic-wind */
t8=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,t5,t7,t5);}

/* k5344 in tostr in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5346,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5352,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:590: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(3,*((C_word*)lf[112]+1),t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* modules.scm:591: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(3,*((C_word*)lf[112]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* modules.scm:592: number->string */
C_number_to_string(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
/* modules.scm:593: ##sys#syntax-error-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[2],((C_word*)t0)[4],lf[113]);}}}}

/* f_5248 in k5246 in k5244 in k5239 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5248,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:565: current-module13001301 */
t3=((C_word*)t0)[10];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k6872 in k6863 in loop in k6752 in k6743 in instantiate-functor in k2650 in k2646 */
static void C_ccall f_6873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6873,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4934 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t2,t3,C_fix(10),t4);}

/* f_5706 in loop in k5683 in k5680 in k5560 in k5454 */
static void C_ccall f_5706(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5706,3,t0,t1,t2);}
/* modules.scm:641: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),t1,lf[121],t2);}

/* for-each-loop1145 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_5026(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5026,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5035,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:438: g1146 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5997 */
static void C_ccall f_5997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5997,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k5239 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5240(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5240,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[0]+1);
t3=*((C_word*)lf[26]+1);
t4=*((C_word*)lf[101]+1);
t5=*((C_word*)lf[25]+1);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5245,a[2]=t7,a[3]=t9,a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t2,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:568: ##sys#current-meta-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[101]+1)))(2,*((C_word*)lf[101]+1),t10);}
else{
/* modules.scm:575: ##sys#syntax-error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(5,*((C_word*)lf[105]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[106],((C_word*)t0)[4]);}}

/* k5244 in k5239 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5245,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:570: ##sys#meta-macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(2,*((C_word*)lf[104]+1),t3);}

/* f_6429 in k6424 in mrename in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6429(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6429,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6434,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t2;
t5=C_i_check_structure_2(t4,lf[3],lf[4]);
t6=C_i_block_ref(t4,C_fix(1));
/* modules.scm:754: ##sys#module-rename */
t7=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,((C_word*)t0)[2],t6);}
else{
/* modules.scm:753: ##sys#register-undefined */
t4=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],t2,((C_word*)t0)[4]);}}

/* k6424 in mrename in alias-global-hook in k2650 in k2646 */
static void C_ccall f_6425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6425,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li127),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:747: g1829 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* mrename in alias-global-hook in k2650 in k2646 */
static void C_fcall f_6421(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6421,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6425,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:749: ##sys#current-module */
t4=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_5992 in k5990 */
static void C_ccall f_5992(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5992,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5997,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6001,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:693: g1642 */
t8=t6;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t5,lf[68]);}

/* k5990 */
static void C_ccall f_5991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(((C_word*)t0)[4],lf[30]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6035,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6328,a[2]=t6,a[3]=t2,a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6328(t8,t4,((C_word*)t0)[4]);}

/* k6863 in loop in k6752 in k6743 in instantiate-functor in k2650 in k2646 */
static void C_ccall f_6864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6864,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6873,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[5];
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[6];
t7=C_u_i_cdr(t6);
/* modules.scm:834: loop */
t8=((C_word*)((C_word*)t0)[7])[1];
f_6830(t8,t3,t5,t7);}

/* k4346 in for-each-loop936 in k4275 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4338(t3,((C_word*)t0)[4],t2);}

/* k4920 */
static void C_ccall f_4921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_car(t3,t1));}

/* ##sys#alias-global-hook in k2650 in k2646 */
static void C_ccall f_6417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6417,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6421,a[2]=t3,a[3]=t4,a[4]=((C_word)li128),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6452,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:756: ##sys#qualified-symbol? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[141]+1)))(3,*((C_word*)lf[141]+1),t6,t2);}

/* k4571 in k4550 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4573,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_a_i_record(&a,14,lf[3],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t3,t1,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4508,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4521,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4527,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:419: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t7);}

/* map-loop1030 in k4550 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_fcall f_4575(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4575,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4600,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:408: g1036 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5982 */
static void C_ccall f_5982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5982,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5991,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=t4,a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:688: ##sys#mark-imported-symbols */
t8=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* loop in validate-exports in k2650 in k2646 */
static void C_fcall f_6580(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(11);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6580,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6610,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
/* modules.scm:795: loop */
t22=t4;
t23=t6;
t1=t22;
t2=t23;
goto loop;}
else{
if(C_truep(C_i_listp(t3))){
t4=C_i_car(t3);
t5=C_eqp(lf[148],t4);
if(C_truep(t5)){
t6=C_u_i_cdr(t3);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6635,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* modules.scm:799: loop */
t22=t7;
t23=t9;
t1=t22;
t2=t23;
goto loop;}
else{
t6=C_u_i_car(t3);
t7=C_eqp(lf[149],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6649,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t9))){
t10=C_i_cadr(t3);
t11=t8;
f_6649(t11,C_i_symbolp(t10));}
else{
t10=t8;
f_6649(t10,C_SCHEME_FALSE);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6674,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t9,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li140),tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_6674(t11,t1,t3);}}}
else{
/* modules.scm:797: err */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6532(t4,t1,C_a_i_list(&a,3,lf[152],t3,((C_word*)t0)[5]));}}}
else{
/* modules.scm:792: err */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6532(t3,t1,C_a_i_list(&a,2,lf[153],((C_word*)t0)[5]));}}}

/* k3845 in compiled-module-registration in k2650 in k2646 */
static void C_fcall f_3846(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3846,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3849,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3852,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4132,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:313: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[6]);}
else{
t4=t3;
f_3852(t4,C_SCHEME_END_OF_LIST);}}

/* loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_5049(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(17);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5049,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?t3:C_i_car(t3));
if(C_truep(C_i_assq(t5,((C_word*)t0)[2]))){
t6=t2;
t7=C_u_i_cdr(t6);
/* modules.scm:463: loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5077,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_i_assq(t5,((C_word*)t0)[4]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5088,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5091,a[2]=t7,a[3]=t6,a[4]=t5,a[5]=t8,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t10=C_i_cdr(t7);
t11=t9;
f_5091(t11,C_i_symbolp(t10));}
else{
t10=t9;
f_5091(t10,C_SCHEME_FALSE);}}}}

/* k3848 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_3849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:306: ##sys#append */
t2=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:582: r */
t3=((C_word*)t0)[10];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[136]);}

/* ##sys#expand-import in k2650 in k2646 */
static void C_ccall f_5310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(c!=10) C_bad_argc_2(c,10,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_5310,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5314,a[2]=t9,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t8,a[7]=t2,a[8]=t1,a[9]=t7,a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:581: r */
t11=t3;
((C_proc3)C_fast_retrieve_proc(t11))(3,t11,t10,lf[137]);}

/* k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:584: r */
t3=((C_word*)t0)[12];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[134]);}

/* k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:583: r */
t3=((C_word*)t0)[11];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[135]);}

/* k4943 in k4941 in k4939 in k4934 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4959,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:550: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* k5303 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:562: ##sys#find-extension */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(4,*((C_word*)lf[107]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k4941 in k4939 in k4934 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4962,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[3],lf[57]);
t6=C_i_block_ref(t4,C_fix(12));
/* modules.scm:547: merge-se */
f_3781(t3,C_a_i_list(&a,2,t6,((C_word*)t0)[6]));}

/* k3238 in check-for-redef in k2650 in k2646 */
static void C_ccall f_3240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* modules.scm:187: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[4],lf[36],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4939 in k4934 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[5];
t5=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t2,t3,C_fix(11),t4);}

/* k5306 in k5235 in k5233 in find-module/import-library in k2650 in k2646 */
static void C_ccall f_5307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,lf[108]);}

/* k6381 in k5968 in k5966 in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_6382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(8),t1);}

/* ##sys#toplevel-definition-hook in k2650 in k2646 */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3211,6,t0,t1,t2,t3,t4,t5);}
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}

/* for-each-loop954 in k4295 in k4275 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_fcall f_4318(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4318,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4327,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:385: g955 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#register-meta-expression in k2650 in k2646 */
static void C_ccall f_3215(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3215,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3219,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:180: ##sys#current-module */
t4=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3218 in register-meta-expression in k2650 in k2646 */
static void C_ccall f_3219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3219,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_i_check_structure_2(t2,lf[3],lf[33]);
t4=C_i_block_ref(t2,C_fix(9));
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[3];
t7=t1;
t8=C_i_check_structure_2(t7,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t9=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t6,t7,C_fix(9),t5);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_5504 in loop in k5463 in k5457 in k5454 */
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5504,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:621: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5470(t5,t1,t3,((C_word*)t0)[5],t4);}

/* resolve in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_fcall f_5324(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5324,NULL,2,t1,t2);}
t3=t2;
t4=C_u_i_assq(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=C_i_cdr(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2637,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2641,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:60: g219 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,lf[110]);}}

/* k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5322(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5322,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5324,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5333,a[2]=((C_word*)t0)[2],a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5375,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5393,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t9,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t1,a[13]=((C_word)li111),tmp=(C_word)a,a+=14,tmp));
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5967,a[2]=t9,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:670: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),t14,((C_word*)t0)[2],((C_word*)t0)[11],lf[132]);}

/* k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:585: r */
t3=((C_word*)t0)[13];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[133]);}

/* f7459 in k4769 in k4765 in k4763 in k4761 in k4759 in k4756 */
static void C_ccall f7459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:515: ##sys#warn */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),((C_word*)t0)[2],t1);}

/* k5034 in for-each-loop1145 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5026(t3,((C_word*)t0)[4],t2);}

/* loop in k5569 in k5563 in k5560 in k5454 */
static void C_fcall f_5576(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5576,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5588,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5588(t7,t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
t4=C_i_caar(t2);
if(C_truep(C_i_memq(t4,((C_word*)t0)[3]))){
t5=t2;
t6=C_u_i_cdr(t5);
/* modules.scm:632: loop */
t16=t1;
t17=t6;
t18=t3;
t1=t16;
t2=t17;
t3=t18;
goto loop;}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t7=t2;
t8=C_u_i_car(t7);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:633: loop */
t16=t1;
t17=t6;
t18=t9;
t1=t16;
t2=t17;
t3=t18;
goto loop;}}}

/* for-each-loop936 in k4275 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_fcall f_4338(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4338,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4347,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:380: g937 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5569 in k5563 in k5560 in k5454 */
static void C_ccall f_5571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5571,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5576,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5576(t5,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* check-for-redef in k2650 in k2646 */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3233,5,t0,t1,t2,t3,t4);}
t5=C_i_assq(t2,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3240,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* modules.scm:185: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),t6,lf[37],t2);}
else{
t7=t6;
f_3240(2,t7,C_SCHEME_FALSE);}}

/* k5797 */
static void C_ccall f_5798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:653: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5692(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k4116 in map-loop702 in k3851 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_4117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4117,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4092(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4092(t6,((C_word*)t0)[5],t5);}}

/* k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4908,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[16]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4993,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4993(t7,t3,t1);}

/* k4902 */
static void C_ccall f_4903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
/* modules.scm:523: ##sys#error */
t5=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],lf[89],t4);}}

/* k4326 in for-each-loop954 in k4295 in k4275 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4318(t3,((C_word*)t0)[4],t2);}

/* f_5786 in loop in k5683 in k5680 in k5560 in k5454 */
static void C_ccall f_5786(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5786,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_cadr(t2);
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5798,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t7,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:656: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t8,t2,((C_word*)t0)[7]);}

/* for-each-loop918 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_fcall f_4358(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4358,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4367,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:376: g919 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#register-export in k2650 in k2646 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3253,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=t3;
t5=C_i_check_structure_2(t4,lf[3],lf[10]);
t6=C_i_block_ref(t4,C_fix(2));
t7=C_eqp(C_SCHEME_TRUE,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3262,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t7)){
t9=t8;
f_3262(2,t9,t7);}
else{
/* modules.scm:192: ##sys#find-export */
t9=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,t2,t3,C_SCHEME_TRUE);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5378 in import-name in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5379(C_word c,C_word t0,C_word t1){
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
t2=t1;
t3=C_i_check_structure_2(t2,lf[3],lf[11]);
t4=C_i_block_ref(t2,C_fix(10));
t5=t1;
t6=C_i_check_structure_2(t5,lf[3],lf[12]);
t7=C_i_block_ref(t5,C_fix(11));
t8=t1;
t9=C_i_check_structure_2(t8,lf[3],lf[57]);
t10=C_i_block_ref(t8,C_fix(12));
/* modules.scm:599: values */
C_values(5,0,((C_word*)t0)[2],t4,t7,t10);}

/* import-name in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_fcall f_5375(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5375,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5379,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5391,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:595: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,t2);}

/* k6393 in k5968 in k5966 in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_6394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(7),t1);}

/* f_4724 in finalize-module in k2650 in k2646 */
static void C_ccall f_4724(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4724,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4733,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:446: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t4);}

/* warn in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_3601(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3601,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3608,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3611,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:264: symbol->string */
t6=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k3607 in warn in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_3608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:263: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3610 in warn in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:264: string-append */
t2=*((C_word*)lf[90]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[91],t1,lf[92]);}

/* import-spec in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_fcall f_5393(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5393,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:601: import-name */
f_5375(t1,t2);}
else{
t3=C_i_listp(t2);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5411,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t4)){
t6=t5;
f_5411(t6,t4);}
else{
t6=C_i_length(t2);
t7=t5;
f_5411(t7,C_fixnum_lessp(t6,C_fix(2)));}}}

/* ##sys#finalize-module in k2650 in k2646 */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[27],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4713,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[10]);
t5=C_i_block_ref(t3,C_fix(2));
t6=t2;
t7=C_i_check_structure_2(t6,lf[3],lf[4]);
t8=C_i_block_ref(t6,C_fix(1));
t9=t2;
t10=C_i_check_structure_2(t9,lf[3],lf[39]);
t11=C_i_block_ref(t9,C_fix(3));
t12=t2;
t13=C_i_check_structure_2(t12,lf[3],lf[29]);
t14=C_i_block_ref(t12,C_fix(4));
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_END_OF_LIST;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4724,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
t22=t2;
t23=C_i_check_structure_2(t22,lf[3],lf[44]);
t24=C_i_block_ref(t22,C_fix(5));
t25=C_i_check_list_2(t24,lf[16]);
t26=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4740,a[2]=t14,a[3]=t16,a[4]=t1,a[5]=t2,a[6]=t8,a[7]=t5,a[8]=t11,tmp=(C_word)a,a+=9,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5199,a[2]=t20,a[3]=t28,a[4]=t18,a[5]=t21,a[6]=((C_word)li82),tmp=(C_word)a,a+=7,tmp));
t30=((C_word*)t28)[1];
f_5199(t30,t26,t24);}

/* k5390 in import-name in k5321 in k5319 in k5317 in k5315 in k5313 in expand-import in k2650 in k2646 */
static void C_ccall f_5391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:595: ##sys#find-module/import-library */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[62]);}

/* f_4745 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4745(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4745,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t2;
t5=C_u_i_car(t4);
if(C_truep(C_i_memq(t5,((C_word*)t0)[2]))){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4757,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:490: open-output-string */
t7=*((C_word*)lf[88]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* modules.scm:516: module-undefined-list */
t4=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* loop in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_3622(C_word t0,C_word t1,C_word t2){
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
loop:
a=C_alloc(11);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3622,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:270: loop */
t11=t1;
t12=t5;
t1=t11;
t2=t12;
goto loop;}
else{
t4=C_i_cdar(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3648,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li77),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_3648(t8,t1,t4);}}}

/* k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[7]);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
t5=C_i_check_structure_2(t4,lf[3],lf[12]);
t6=C_i_block_ref(t4,C_fix(11));
/* modules.scm:450: merge-se */
f_3781(t2,C_a_i_list(&a,2,t6,t1));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5164,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:451: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t4);}}

/* k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4742,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[8]);
t4=(C_truep(t3)?((C_word*)t0)[2]:((C_word*)t0)[8]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5049,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word)li80),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_5049(t8,t2,t4);}

/* k4732 */
static void C_ccall f_4733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_assq(((C_word*)t0)[3],t1));}

/* k4131 in k3845 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_4132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4132,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[62],t1);
t3=((C_word*)t0)[2];
f_3852(t3,C_a_i_list(&a,1,t2));}

/* loop in loop in k5569 in k5563 in k5560 in k5454 */
static void C_fcall f_5588(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5588,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* modules.scm:629: values */
C_values(5,0,t1,((C_word*)t0)[2],t3,((C_word*)t0)[3]);}
else{
t4=C_i_caar(t2);
if(C_truep(C_i_memq(t4,((C_word*)t0)[4]))){
t5=t2;
t6=C_u_i_cdr(t5);
/* modules.scm:630: loop */
t13=t1;
t14=t6;
t15=t3;
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t7=t2;
t8=C_u_i_car(t7);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:631: loop */
t13=t1;
t14=t6;
t15=t9;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}}

/* loop2 in loop in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_3648(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3648,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* modules.scm:273: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3622(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3776,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:274: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t4);}}

/* k4307 in k4295 in k4275 in k4264 in k4262 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4309,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[22]+1));
t4=C_mutate((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}

/* k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4917,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:529: ##sys#mark-imported-symbols */
t3=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[2],a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4967,a[2]=t6,a[3]=t2,a[4]=((C_word)li72),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4967(t8,t4,((C_word*)t0)[3]);}

/* f_4918 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4918(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4918,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4921,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(t2);
/* modules.scm:532: merge-se */
f_3781(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[2]));}

/* k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4988,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:526: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t3);}

/* ##sys#register-compiled-module in k2650 in k2646 */
static void C_ccall f_4152(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+23)){
C_save_and_reclaim((void*)tr6r,(void*)f_4152r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_4152r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_4152r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_word *a=C_alloc(23);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_car(t6));
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4182,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
t14=C_i_check_list_2(t5,lf[16]);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4209,a[2]=t3,a[3]=t8,a[4]=t2,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4444,a[2]=t12,a[3]=t17,a[4]=t10,a[5]=t13,a[6]=((C_word)li52),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_4444(t19,t15,t5);}

/* k4149 in compiled-module-registration in k2650 in k2646 */
static void C_ccall f_4150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4150,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[62],t1);
t3=C_a_i_list(&a,2,lf[55],t2);
t4=C_a_i_list(&a,2,lf[63],t3);
t5=((C_word*)t0)[2];
f_3846(t5,C_a_i_list(&a,1,t4));}

/* ##sys#switch-module in k2650 in k2646 */
static void C_ccall f_3089(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3089,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3129,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:149: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t3);}

/* k3818 in loop in k3784 in merge-se in k2650 in k2646 */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3819,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3208 in add-to-export-list in k2650 in k2646 */
static void C_ccall f_3209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t3,C_fix(2),t1);}

/* k3094 in k3131 in k3128 in switch-module in k2650 in k2646 */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3119,a[2]=((C_word*)t0)[5],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:147: g465 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t1);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=t2;
f_3098(2,t4,t3);}}

/* k3096 in k3094 in k3131 in k3128 in switch-module in k2650 in k2646 */
static void C_ccall f_3098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],lf[27]);
t5=t2;
f_3100(t5,C_i_block_ref(t3,C_fix(13)));}
else{
t3=t2;
f_3100(t3,((C_word*)((C_word*)t0)[4])[1]);}}

/* ##sys#compiled-module-registration in k2650 in k2646 */
static void C_ccall f_3828(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3828,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[39]);
t5=C_i_block_ref(t3,C_fix(3));
t6=t2;
t7=C_i_check_structure_2(t6,lf[3],lf[4]);
t8=C_i_block_ref(t6,C_fix(1));
t9=t2;
t10=C_i_check_structure_2(t9,lf[3],lf[52]);
t11=C_i_block_ref(t9,C_fix(7));
t12=t2;
t13=C_i_check_structure_2(t12,lf[3],lf[12]);
t14=C_i_block_ref(t12,C_fix(11));
t15=t2;
t16=C_i_check_structure_2(t15,lf[3],lf[53]);
t17=C_i_block_ref(t15,C_fix(8));
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3846,a[2]=t1,a[3]=t2,a[4]=t5,a[5]=t14,a[6]=t17,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t11))){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4150,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:312: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t19,t11);}
else{
t19=t18;
f_3846(t19,C_SCHEME_END_OF_LIST);}}

/* k5118 in k5100 in k5133 in k5089 in loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:476: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5115 in k5100 in k5133 in k5089 in loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_5116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5116,2,t0,t1);}
t2=((C_word*)t0)[2];
f_5077(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE));}

/* k5100 in k5133 in k5089 in loop in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_fcall f_5102(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5102,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5077(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
if(C_truep(((C_word*)t0)[5])){
/* modules.scm:483: ##sys#module-rename */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[7]);}
else{
t2=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5116,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5119,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5122,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:479: symbol->string */
t6=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[7]);}}}

/* map-loop1678 in k6136 in k6092 in k6070 in k6033 in k5990 */
static void C_fcall f_6186(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6186,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6128 in k6096 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(12),t1);}

/* k6136 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6137(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_structure_2(t3,lf[3],lf[29]);
t5=C_i_block_ref(t3,C_fix(4));
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=*((C_word*)lf[129]+1);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6150,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6186,a[2]=t9,a[3]=t13,a[4]=t7,a[5]=((C_word)li117),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_6186(t15,t11,((C_word*)t0)[5]);}

/* k6142 in k6136 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(4),t1);}

/* k6152 in k6148 in k6136 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:714: append */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop1704 in k6148 in k6136 in k6092 in k6070 in k6033 in k5990 */
static void C_fcall f_6156(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6156,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6148 in k6136 in k6092 in k6070 in k6033 in k5990 */
static void C_ccall f_6150(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6150,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[129]+1);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6156,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li116),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6156(t11,t7,((C_word*)t0)[4]);}

/* k7006 in k2650 in k2646 */
static void C_ccall f_7007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7007,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7044,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:902: append */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[179],((C_word*)t0)[4]);}

/* k7008 in k7006 in k2650 in k2646 */
static void C_ccall f_7009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:904: ##sys#register-primitive-module */
t3=*((C_word*)lf[72]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[178],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}

/* k7004 in match-functor-argument in k2650 in k2646 */
static void C_ccall f_7005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* modules.scm:841: ##sys#find-module */
t2=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,lf[3]);}

/* k2650 in k2646 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
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
C_word ab[110],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2652,2,t0,t1);}
t2=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#module-alias-environment ...) */,t1);
t3=C_mutate(&lf[2] /* (set! module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2666,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! module-undefined-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[6]+1 /* (set! set-module-undefined-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2756,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#module-name ...) */,lf[2]);
t7=C_mutate((C_word*)lf[9]+1 /* (set! ##sys#module-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2892,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[13]+1 /* (set! ##sys#register-module-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2913,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[14]+1 /* (set! ##sys#with-module-aliases ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2928,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#resolve-module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[21]+1 /* (set! ##sys#find-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3039,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#switch-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3089,a[2]=t13,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#add-to-export-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3134,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3211,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[32]+1 /* (set! ##sys#register-meta-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[34]+1 /* (set! check-for-redef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3233,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[38]+1 /* (set! ##sys#register-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[43]+1 /* (set! ##sys#register-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3324,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#register-undefined ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3389,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[47]+1 /* (set! ##sys#register-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3445,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#mark-imported-symbols ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3490,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[50] /* (set! merge-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3781,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[51]+1 /* (set! ##sys#compiled-module-registration ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3828,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[60]+1 /* (set! ##sys#register-compiled-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4152,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[67]+1 /* (set! ##sys#primitive-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4480,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[72]+1 /* (set! ##sys#register-primitive-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4497,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[42]+1 /* (set! ##sys#find-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4641,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t30=*((C_word*)lf[74]+1);
t31=*((C_word*)lf[75]+1);
t32=C_mutate((C_word*)lf[76]+1 /* (set! ##sys#finalize-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4713,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t33=C_set_block_item(lf[22] /* ##sys#module-table */,0,C_SCHEME_END_OF_LIST);
t34=C_mutate((C_word*)lf[100]+1 /* (set! ##sys#find-module/import-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5230,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[109]+1 /* (set! ##sys#expand-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5310,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[41]+1 /* (set! ##sys#module-rename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6402,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[139]+1 /* (set! ##sys#alias-global-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6417,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[142]+1 /* (set! ##sys#register-interface ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6519,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[144]+1 /* (set! ##sys#validate-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6528,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[155]+1 /* (set! ##sys#register-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6723,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[157]+1 /* (set! ##sys#instantiate-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6738,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[161]+1 /* (set! ##sys#match-functor-argument ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6882,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t43=lf[169];
t44=*((C_word*)lf[170]+1);
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7007,a[2]=((C_word*)t0)[2],a[3]=t44,a[4]=t43,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:899: ##sys#register-primitive-module */
t46=*((C_word*)lf[72]+1);
((C_proc5)(void*)(*((C_word*)t46+1)))(5,t46,t45,lf[180],t43,*((C_word*)lf[170]+1));}

/* module-name in k2650 in k2646 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2666,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* k4958 in k4943 in k4941 in k4939 in k4934 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4959,2,t0,t1);}
/* modules.scm:550: merge-se */
f_3781(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k4955 in k4952 in k4943 in k4941 in k4939 in k4934 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4956,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,C_fix(13),t2);}

/* k4952 in k4943 in k4941 in k4939 in k4934 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4956,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:551: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(2,*((C_word*)lf[25]+1),t2);}

/* ##sys#module-exports in k2650 in k2646 */
static void C_ccall f_2892(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_2892,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[10]);
t5=C_i_block_ref(t3,C_fix(2));
t6=t2;
t7=C_i_check_structure_2(t6,lf[3],lf[11]);
t8=C_i_block_ref(t6,C_fix(10));
t9=t2;
t10=C_i_check_structure_2(t9,lf[3],lf[12]);
t11=C_i_block_ref(t9,C_fix(11));
/* modules.scm:112: values */
C_values(5,0,t1,t5,t8,t11);}

/* k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4504(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4504,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4535,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4552,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4605,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li59),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4605(t13,t9,t7);}

/* k4507 in k4571 in k4550 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4508,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[22]+1));
t4=C_mutate((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}

/* k4378 in k4257 in k4238 in k4207 in register-compiled-module in k2650 in k2646 */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:373: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(2,*((C_word*)lf[26]+1),t2);}

/* k4975 in for-each-loop1258 in k4916 in k4914 in k4911 in k4907 in k4880 in k4877 in k4873 in k4743 in k4741 in k4738 in finalize-module in k2650 in k2646 */
static void C_ccall f_4976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4967(t3,((C_word*)t0)[4],t2);}

/* f_4535 in k4503 in register-primitive-module in k2650 in k2646 */
static void C_ccall f_4535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4535,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4547,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:405: ##sys#primitive-alias */
t4=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[464] = {
{"f_3102:modules_2escm",(void*)f_3102},
{"f_4367:modules_2escm",(void*)f_4367},
{"f_3107:modules_2escm",(void*)f_3107},
{"f_3100:modules_2escm",(void*)f_3100},
{"f_3375:modules_2escm",(void*)f_3375},
{"f_3372:modules_2escm",(void*)f_3372},
{"f_4527:modules_2escm",(void*)f_4527},
{"f_4524:modules_2escm",(void*)f_4524},
{"f_4967:modules_2escm",(void*)f_4967},
{"f_4962:modules_2escm",(void*)f_4962},
{"f_4521:modules_2escm",(void*)f_4521},
{"f_3389:modules_2escm",(void*)f_3389},
{"f_3445:modules_2escm",(void*)f_3445},
{"f_4767:modules_2escm",(void*)f_4767},
{"f_4766:modules_2escm",(void*)f_4766},
{"f_4764:modules_2escm",(void*)f_4764},
{"f_4762:modules_2escm",(void*)f_4762},
{"f_4760:modules_2escm",(void*)f_4760},
{"f_4988:modules_2escm",(void*)f_4988},
{"f_4757:modules_2escm",(void*)f_4757},
{"f_4181:modules_2escm",(void*)f_4181},
{"f_4182:modules_2escm",(void*)f_4182},
{"f_4788:modules_2escm",(void*)f_4788},
{"f_4780:modules_2escm",(void*)f_4780},
{"f_3776:modules_2escm",(void*)f_3776},
{"f_6003:modules_2escm",(void*)f_6003},
{"f_4771:modules_2escm",(void*)f_4771},
{"f_6001:modules_2escm",(void*)f_6001},
{"f_4774:modules_2escm",(void*)f_4774},
{"f_3785:modules_2escm",(void*)f_3785},
{"f_3781:modules_2escm",(void*)f_3781},
{"f_3401:modules_2escm",(void*)f_3401},
{"f_3407:modules_2escm",(void*)f_3407},
{"f_6217:modules_2escm",(void*)f_6217},
{"f_3756:modules_2escm",(void*)f_3756},
{"f_3977:modules_2escm",(void*)f_3977},
{"f_3975:modules_2escm",(void*)f_3975},
{"f_4798:modules_2escm",(void*)f_4798},
{"f_4799:modules_2escm",(void*)f_4799},
{"f_4796:modules_2escm",(void*)f_4796},
{"f_4790:modules_2escm",(void*)f_4790},
{"f_3768:modules_2escm",(void*)f_3768},
{"f_3961:modules_2escm",(void*)f_3961},
{"f_4554:modules_2escm",(void*)f_4554},
{"f_4991:modules_2escm",(void*)f_4991},
{"f_4993:modules_2escm",(void*)f_4993},
{"f_4552:modules_2escm",(void*)f_4552},
{"f_3793:modules_2escm",(void*)f_3793},
{"f_4382:modules_2escm",(void*)f_4382},
{"f_4384:modules_2escm",(void*)f_4384},
{"f_6979:modules_2escm",(void*)f_6979},
{"f_4547:modules_2escm",(void*)f_4547},
{"f_6917:modules_2escm",(void*)f_6917},
{"f_6723:modules_2escm",(void*)f_6723},
{"f_6726:modules_2escm",(void*)f_6726},
{"f_2747:modules_2escm",(void*)f_2747},
{"f_6902:modules_2escm",(void*)f_6902},
{"f_3119:modules_2escm",(void*)f_3119},
{"f_6753:modules_2escm",(void*)f_6753},
{"f_6932:modules_2escm",(void*)f_6932},
{"f_6935:modules_2escm",(void*)f_6935},
{"f_6938:modules_2escm",(void*)f_6938},
{"f_6745:modules_2escm",(void*)f_6745},
{"f_6747:modules_2escm",(void*)f_6747},
{"f_3129:modules_2escm",(void*)f_3129},
{"f_6741:modules_2escm",(void*)f_6741},
{"f_6545:modules_2escm",(void*)f_6545},
{"f_3395:modules_2escm",(void*)f_3395},
{"f_6541:modules_2escm",(void*)f_6541},
{"f_6929:modules_2escm",(void*)f_6929},
{"f_6777:modules_2escm",(void*)f_6777},
{"f_5850:modules_2escm",(void*)f_5850},
{"f_5829:modules_2escm",(void*)f_5829},
{"f_5842:modules_2escm",(void*)f_5842},
{"f_3156:modules_2escm",(void*)f_3156},
{"f_6337:modules_2escm",(void*)f_6337},
{"f_5179:modules_2escm",(void*)f_5179},
{"f_5648:modules_2escm",(void*)f_5648},
{"f_6517:modules_2escm",(void*)f_6517},
{"f_6514:modules_2escm",(void*)f_6514},
{"f_5870:modules_2escm",(void*)f_5870},
{"f_5164:modules_2escm",(void*)f_5164},
{"f_6364:modules_2escm",(void*)f_6364},
{"f_5847:modules_2escm",(void*)f_5847},
{"f_3169:modules_2escm",(void*)f_3169},
{"f_5166:modules_2escm",(void*)f_5166},
{"f_5441:modules_2escm",(void*)f_5441},
{"f_6519:modules_2escm",(void*)f_6519},
{"f_6502:modules_2escm",(void*)f_6502},
{"f_6355:modules_2escm",(void*)f_6355},
{"f_3134:modules_2escm",(void*)f_3134},
{"f_6353:modules_2escm",(void*)f_6353},
{"f_3132:modules_2escm",(void*)f_3132},
{"f_5199:modules_2escm",(void*)f_5199},
{"f_6738:modules_2escm",(void*)f_6738},
{"f_5432:modules_2escm",(void*)f_5432},
{"f_6532:modules_2escm",(void*)f_6532},
{"f_6538:modules_2escm",(void*)f_6538},
{"f_5449:modules_2escm",(void*)f_5449},
{"f_6308:modules_2escm",(void*)f_6308},
{"f_5187:modules_2escm",(void*)f_5187},
{"f_3148:modules_2escm",(void*)f_3148},
{"f_3149:modules_2escm",(void*)f_3149},
{"f_5465:modules_2escm",(void*)f_5465},
{"f_4209:modules_2escm",(void*)f_4209},
{"f_6528:modules_2escm",(void*)f_6528},
{"f_6522:modules_2escm",(void*)f_6522},
{"f_5134:modules_2escm",(void*)f_5134},
{"f_3194:modules_2escm",(void*)f_3194},
{"f_5831:modules_2escm",(void*)f_5831},
{"f_5835:modules_2escm",(void*)f_5835},
{"f_5833:modules_2escm",(void*)f_5833},
{"f_5122:modules_2escm",(void*)f_5122},
{"f_4250:modules_2escm",(void*)f_4250},
{"f_6328:modules_2escm",(void*)f_6328},
{"f_4409:modules_2escm",(void*)f_4409},
{"f_3493:modules_2escm",(void*)f_3493},
{"f_3499:modules_2escm",(void*)f_3499},
{"f_5458:modules_2escm",(void*)f_5458},
{"f_5456:modules_2escm",(void*)f_5456},
{"f_3490:modules_2escm",(void*)f_3490},
{"f_2945:modules_2escm",(void*)f_2945},
{"f_4240:modules_2escm",(void*)f_4240},
{"f_4439:modules_2escm",(void*)f_4439},
{"f_6317:modules_2escm",(void*)f_6317},
{"f_4241:modules_2escm",(void*)f_4241},
{"f_4259:modules_2escm",(void*)f_4259},
{"f_2913:modules_2escm",(void*)f_2913},
{"f_6954:modules_2escm",(void*)f_6954},
{"f_6952:modules_2escm",(void*)f_6952},
{"f_6779:modules_2escm",(void*)f_6779},
{"f_6761:modules_2escm",(void*)f_6761},
{"f_4605:modules_2escm",(void*)f_4605},
{"f_5420:modules_2escm",(void*)f_5420},
{"f_6947:modules_2escm",(void*)f_6947},
{"f_2926:modules_2escm",(void*)f_2926},
{"f_4414:modules_2escm",(void*)f_4414},
{"f_2928:modules_2escm",(void*)f_2928},
{"f_6940:modules_2escm",(void*)f_6940},
{"f_6882:modules_2escm",(void*)f_6882},
{"f_6886:modules_2escm",(void*)f_6886},
{"f_3301:modules_2escm",(void*)f_3301},
{"f_5411:modules_2escm",(void*)f_5411},
{"f_3304:modules_2escm",(void*)f_3304},
{"f_5429:modules_2escm",(void*)f_5429},
{"f_4804:modules_2escm",(void*)f_4804},
{"f_5426:modules_2escm",(void*)f_5426},
{"f_4444:modules_2escm",(void*)f_4444},
{"f_4802:modules_2escm",(void*)f_4802},
{"f_6893:modules_2escm",(void*)f_6893},
{"f_4227:modules_2escm",(void*)f_4227},
{"f_5862:modules_2escm",(void*)f_5862},
{"f_4002:modules_2escm",(void*)f_4002},
{"f_3531:modules_2escm",(void*)f_3531},
{"f_6674:modules_2escm",(void*)f_6674},
{"f_3502:modules_2escm",(void*)f_3502},
{"f_4630:modules_2escm",(void*)f_4630},
{"f_6475:modules_2escm",(void*)f_6475},
{"f_6471:modules_2escm",(void*)f_6471},
{"f_5868:modules_2escm",(void*)f_5868},
{"f_3335:modules_2escm",(void*)f_3335},
{"f_3333:modules_2escm",(void*)f_3333},
{"f_3339:modules_2escm",(void*)f_3339},
{"f_6483:modules_2escm",(void*)f_6483},
{"f_5692:modules_2escm",(void*)f_5692},
{"f_7011:modules_2escm",(void*)f_7011},
{"f_7018:modules_2escm",(void*)f_7018},
{"f_7014:modules_2escm",(void*)f_7014},
{"f_7016:modules_2escm",(void*)f_7016},
{"f_5895:modules_2escm",(void*)f_5895},
{"f_3702:modules_2escm",(void*)f_3702},
{"f_3345:modules_2escm",(void*)f_3345},
{"f_3341:modules_2escm",(void*)f_3341},
{"f_5684:modules_2escm",(void*)f_5684},
{"f_4846:modules_2escm",(void*)f_4846},
{"f_2932:modules_2escm",(void*)f_2932},
{"f_2933:modules_2escm",(void*)f_2933},
{"f_5682:modules_2escm",(void*)f_5682},
{"f_2936:modules_2escm",(void*)f_2936},
{"f_2938:modules_2escm",(void*)f_2938},
{"f_4842:modules_2escm",(void*)f_4842},
{"f_4843:modules_2escm",(void*)f_4843},
{"f_4600:modules_2escm",(void*)f_4600},
{"f_6498:modules_2escm",(void*)f_6498},
{"f_5470:modules_2escm",(void*)f_5470},
{"f_3324:modules_2escm",(void*)f_3324},
{"f_4824:modules_2escm",(void*)f_4824},
{"f_6687:modules_2escm",(void*)f_6687},
{"f_3540:modules_2escm",(void*)f_3540},
{"f_5486:modules_2escm",(void*)f_5486},
{"f_3731:modules_2escm",(void*)f_3731},
{"f_4815:modules_2escm",(void*)f_4815},
{"f_3740:modules_2escm",(void*)f_3740},
{"f_4210:modules_2escm",(void*)f_4210},
{"f_3716:modules_2escm",(void*)f_3716},
{"f_7044:modules_2escm",(void*)f_7044},
{"f_3930:modules_2escm",(void*)f_3930},
{"f_5673:modules_2escm",(void*)f_5673},
{"f_4641:modules_2escm",(void*)f_4641},
{"f_4200:modules_2escm",(void*)f_4200},
{"f_3941:modules_2escm",(void*)f_3941},
{"f_7027:modules_2escm",(void*)f_7027},
{"f_7020:modules_2escm",(void*)f_7020},
{"f_3922:modules_2escm",(void*)f_3922},
{"f_3310:modules_2escm",(void*)f_3310},
{"f_3313:modules_2escm",(void*)f_3313},
{"f_3171:modules_2escm",(void*)f_3171},
{"f_3177:modules_2escm",(void*)f_3177},
{"f_3180:modules_2escm",(void*)f_3180},
{"f_3185:modules_2escm",(void*)f_3185},
{"f_4010:modules_2escm",(void*)f_4010},
{"f_5018:modules_2escm",(void*)f_5018},
{"f_4051:modules_2escm",(void*)f_4051},
{"f_6272:modules_2escm",(void*)f_6272},
{"f_4049:modules_2escm",(void*)f_4049},
{"f_6067:modules_2escm",(void*)f_6067},
{"f_6076:modules_2escm",(void*)f_6076},
{"f_6072:modules_2escm",(void*)f_6072},
{"f_6074:modules_2escm",(void*)f_6074},
{"f_6226:modules_2escm",(void*)f_6226},
{"f_6088:modules_2escm",(void*)f_6088},
{"f_6085:modules_2escm",(void*)f_6085},
{"f_6082:modules_2escm",(void*)f_6082},
{"f_4092:modules_2escm",(void*)f_4092},
{"f_4090:modules_2escm",(void*)f_4090},
{"f_6236:modules_2escm",(void*)f_6236},
{"f_6098:modules_2escm",(void*)f_6098},
{"f_6093:modules_2escm",(void*)f_6093},
{"f_6091:modules_2escm",(void*)f_6091},
{"f_6242:modules_2escm",(void*)f_6242},
{"f_6240:modules_2escm",(void*)f_6240},
{"f_6026:modules_2escm",(void*)f_6026},
{"f_6035:modules_2escm",(void*)f_6035},
{"f_6036:modules_2escm",(void*)f_6036},
{"f_2756:modules_2escm",(void*)f_2756},
{"f_2964:modules_2escm",(void*)f_2964},
{"f_2969:modules_2escm",(void*)f_2969},
{"f_2967:modules_2escm",(void*)f_2967},
{"f_2950:modules_2escm",(void*)f_2950},
{"f_3005:modules_2escm",(void*)f_3005},
{"f_4278:modules_2escm",(void*)f_4278},
{"f_4277:modules_2escm",(void*)f_4277},
{"f_3013:modules_2escm",(void*)f_3013},
{"f_4266:modules_2escm",(void*)f_4266},
{"f_4265:modules_2escm",(void*)f_4265},
{"f_4263:modules_2escm",(void*)f_4263},
{"f_4489:modules_2escm",(void*)f_4489},
{"f_4480:modules_2escm",(void*)f_4480},
{"f_4485:modules_2escm",(void*)f_4485},
{"f_4484:modules_2escm",(void*)f_4484},
{"f_4469:modules_2escm",(void*)f_4469},
{"f_2994:modules_2escm",(void*)f_2994},
{"f_2999:modules_2escm",(void*)f_2999},
{"f_3275:modules_2escm",(void*)f_3275},
{"f_3273:modules_2escm",(void*)f_3273},
{"f_4678:modules_2escm",(void*)f_4678},
{"f_3271:modules_2escm",(void*)f_3271},
{"f_3855:modules_2escm",(void*)f_3855},
{"f_4497:modules_2escm",(void*)f_4497},
{"f_3858:modules_2escm",(void*)f_3858},
{"f_3852:modules_2escm",(void*)f_3852},
{"f_4492:modules_2escm",(void*)f_4492},
{"f_4881:modules_2escm",(void*)f_4881},
{"f_4882:modules_2escm",(void*)f_4882},
{"f_6830:modules_2escm",(void*)f_6830},
{"f_4653:modules_2escm",(void*)f_4653},
{"f_4651:modules_2escm",(void*)f_4651},
{"f_4879:modules_2escm",(void*)f_4879},
{"f_4874:modules_2escm",(void*)f_4874},
{"f_4076:modules_2escm",(void*)f_4076},
{"f_3264:modules_2escm",(void*)f_3264},
{"f_3262:modules_2escm",(void*)f_3262},
{"f_3266:modules_2escm",(void*)f_3266},
{"f_4863:modules_2escm",(void*)f_4863},
{"f_3879:modules_2escm",(void*)f_3879},
{"f_6813:modules_2escm",(void*)f_6813},
{"f_3882:modules_2escm",(void*)f_3882},
{"f_4854:modules_2escm",(void*)f_4854},
{"f_3669:modules_2escm",(void*)f_3669},
{"f_6114:modules_2escm",(void*)f_6114},
{"f_3688:modules_2escm",(void*)f_3688},
{"f_3682:modules_2escm",(void*)f_3682},
{"f_6100:modules_2escm",(void*)f_6100},
{"f_6102:modules_2escm",(void*)f_6102},
{"f_3037:modules_2escm",(void*)f_3037},
{"f_3039:modules_2escm",(void*)f_3039},
{"f_3691:modules_2escm",(void*)f_3691},
{"f_6409:modules_2escm",(void*)f_6409},
{"f_6402:modules_2escm",(void*)f_6402},
{"f_4297:modules_2escm",(void*)f_4297},
{"f_4298:modules_2escm",(void*)f_4298},
{"f_6461:modules_2escm",(void*)f_6461},
{"f_6452:modules_2escm",(void*)f_6452},
{"f_6453:modules_2escm",(void*)f_6453},
{"f_6457:modules_2escm",(void*)f_6457},
{"f_5972:modules_2escm",(void*)f_5972},
{"f_5971:modules_2escm",(void*)f_5971},
{"f_3893:modules_2escm",(void*)f_3893},
{"f_5977:modules_2escm",(void*)f_5977},
{"f_6434:modules_2escm",(void*)f_6434},
{"f_5969:modules_2escm",(void*)f_5969},
{"f_5967:modules_2escm",(void*)f_5967},
{"f_5279:modules_2escm",(void*)f_5279},
{"f_5277:modules_2escm",(void*)f_5277},
{"f_5900:modules_2escm",(void*)f_5900},
{"f_5273:modules_2escm",(void*)f_5273},
{"f_6635:modules_2escm",(void*)f_6635},
{"f_5268:modules_2escm",(void*)f_5268},
{"f_5266:modules_2escm",(void*)f_5266},
{"f_5728:modules_2escm",(void*)f_5728},
{"f_5263:modules_2escm",(void*)f_5263},
{"f_5261:modules_2escm",(void*)f_5261},
{"f_5937:modules_2escm",(void*)f_5937},
{"f_5295:modules_2escm",(void*)f_5295},
{"f_5562:modules_2escm",(void*)f_5562},
{"f_5755:modules_2escm",(void*)f_5755},
{"f_5564:modules_2escm",(void*)f_5564},
{"f_5077:modules_2escm",(void*)f_5077},
{"f_5925:modules_2escm",(void*)f_5925},
{"f_5290:modules_2escm",(void*)f_5290},
{"f_5743:modules_2escm",(void*)f_5743},
{"f_5091:modules_2escm",(void*)f_5091},
{"f_6610:modules_2escm",(void*)f_6610},
{"f_5285:modules_2escm",(void*)f_5285},
{"f_6984:modules_2escm",(void*)f_6984},
{"f_5553:modules_2escm",(void*)f_5553},
{"f_5333:modules_2escm",(void*)f_5333},
{"f_6649:modules_2escm",(void*)f_6649},
{"f_5238:modules_2escm",(void*)f_5238},
{"f_5236:modules_2escm",(void*)f_5236},
{"f_5080:modules_2escm",(void*)f_5080},
{"f_6993:modules_2escm",(void*)f_6993},
{"f_5230:modules_2escm",(void*)f_5230},
{"f_5234:modules_2escm",(void*)f_5234},
{"f_2637:modules_2escm",(void*)f_2637},
{"f_5088:modules_2escm",(void*)f_5088},
{"f_5224:modules_2escm",(void*)f_5224},
{"f_5352:modules_2escm",(void*)f_5352},
{"toplevel:modules_2escm",(void*)C_modules_toplevel},
{"f_5256:modules_2escm",(void*)f_5256},
{"f_5714:modules_2escm",(void*)f_5714},
{"f_5258:modules_2escm",(void*)f_5258},
{"f_2641:modules_2escm",(void*)f_2641},
{"f_2648:modules_2escm",(void*)f_2648},
{"f_5719:modules_2escm",(void*)f_5719},
{"f_5251:modules_2escm",(void*)f_5251},
{"f_5253:modules_2escm",(void*)f_5253},
{"f_5528:modules_2escm",(void*)f_5528},
{"f_5247:modules_2escm",(void*)f_5247},
{"f_5346:modules_2escm",(void*)f_5346},
{"f_5248:modules_2escm",(void*)f_5248},
{"f_6873:modules_2escm",(void*)f_6873},
{"f_4936:modules_2escm",(void*)f_4936},
{"f_5706:modules_2escm",(void*)f_5706},
{"f_5026:modules_2escm",(void*)f_5026},
{"f_5997:modules_2escm",(void*)f_5997},
{"f_5240:modules_2escm",(void*)f_5240},
{"f_5245:modules_2escm",(void*)f_5245},
{"f_6429:modules_2escm",(void*)f_6429},
{"f_6425:modules_2escm",(void*)f_6425},
{"f_6421:modules_2escm",(void*)f_6421},
{"f_5992:modules_2escm",(void*)f_5992},
{"f_5991:modules_2escm",(void*)f_5991},
{"f_6864:modules_2escm",(void*)f_6864},
{"f_4347:modules_2escm",(void*)f_4347},
{"f_4921:modules_2escm",(void*)f_4921},
{"f_6417:modules_2escm",(void*)f_6417},
{"f_4573:modules_2escm",(void*)f_4573},
{"f_4575:modules_2escm",(void*)f_4575},
{"f_5982:modules_2escm",(void*)f_5982},
{"f_6580:modules_2escm",(void*)f_6580},
{"f_3846:modules_2escm",(void*)f_3846},
{"f_5049:modules_2escm",(void*)f_5049},
{"f_3849:modules_2escm",(void*)f_3849},
{"f_5314:modules_2escm",(void*)f_5314},
{"f_5310:modules_2escm",(void*)f_5310},
{"f_5318:modules_2escm",(void*)f_5318},
{"f_5316:modules_2escm",(void*)f_5316},
{"f_4944:modules_2escm",(void*)f_4944},
{"f_5304:modules_2escm",(void*)f_5304},
{"f_4942:modules_2escm",(void*)f_4942},
{"f_3240:modules_2escm",(void*)f_3240},
{"f_4940:modules_2escm",(void*)f_4940},
{"f_5307:modules_2escm",(void*)f_5307},
{"f_6382:modules_2escm",(void*)f_6382},
{"f_3211:modules_2escm",(void*)f_3211},
{"f_4318:modules_2escm",(void*)f_4318},
{"f_3215:modules_2escm",(void*)f_3215},
{"f_3219:modules_2escm",(void*)f_3219},
{"f_5504:modules_2escm",(void*)f_5504},
{"f_5324:modules_2escm",(void*)f_5324},
{"f_5322:modules_2escm",(void*)f_5322},
{"f_5320:modules_2escm",(void*)f_5320},
{"f7459:modules_2escm",(void*)f7459},
{"f_5035:modules_2escm",(void*)f_5035},
{"f_5576:modules_2escm",(void*)f_5576},
{"f_4338:modules_2escm",(void*)f_4338},
{"f_5571:modules_2escm",(void*)f_5571},
{"f_3233:modules_2escm",(void*)f_3233},
{"f_5798:modules_2escm",(void*)f_5798},
{"f_4117:modules_2escm",(void*)f_4117},
{"f_4908:modules_2escm",(void*)f_4908},
{"f_4903:modules_2escm",(void*)f_4903},
{"f_4327:modules_2escm",(void*)f_4327},
{"f_5786:modules_2escm",(void*)f_5786},
{"f_4358:modules_2escm",(void*)f_4358},
{"f_3253:modules_2escm",(void*)f_3253},
{"f_5379:modules_2escm",(void*)f_5379},
{"f_5375:modules_2escm",(void*)f_5375},
{"f_6394:modules_2escm",(void*)f_6394},
{"f_4724:modules_2escm",(void*)f_4724},
{"f_3601:modules_2escm",(void*)f_3601},
{"f_3608:modules_2escm",(void*)f_3608},
{"f_3611:modules_2escm",(void*)f_3611},
{"f_5393:modules_2escm",(void*)f_5393},
{"f_4713:modules_2escm",(void*)f_4713},
{"f_5391:modules_2escm",(void*)f_5391},
{"f_4745:modules_2escm",(void*)f_4745},
{"f_4744:modules_2escm",(void*)f_4744},
{"f_3622:modules_2escm",(void*)f_3622},
{"f_4740:modules_2escm",(void*)f_4740},
{"f_4742:modules_2escm",(void*)f_4742},
{"f_4733:modules_2escm",(void*)f_4733},
{"f_4132:modules_2escm",(void*)f_4132},
{"f_5588:modules_2escm",(void*)f_5588},
{"f_3648:modules_2escm",(void*)f_3648},
{"f_4309:modules_2escm",(void*)f_4309},
{"f_4915:modules_2escm",(void*)f_4915},
{"f_4917:modules_2escm",(void*)f_4917},
{"f_4918:modules_2escm",(void*)f_4918},
{"f_4913:modules_2escm",(void*)f_4913},
{"f_4152:modules_2escm",(void*)f_4152},
{"f_4150:modules_2escm",(void*)f_4150},
{"f_3089:modules_2escm",(void*)f_3089},
{"f_3819:modules_2escm",(void*)f_3819},
{"f_3209:modules_2escm",(void*)f_3209},
{"f_3095:modules_2escm",(void*)f_3095},
{"f_3098:modules_2escm",(void*)f_3098},
{"f_3828:modules_2escm",(void*)f_3828},
{"f_5119:modules_2escm",(void*)f_5119},
{"f_5116:modules_2escm",(void*)f_5116},
{"f_5102:modules_2escm",(void*)f_5102},
{"f_6186:modules_2escm",(void*)f_6186},
{"f_6129:modules_2escm",(void*)f_6129},
{"f_6137:modules_2escm",(void*)f_6137},
{"f_6143:modules_2escm",(void*)f_6143},
{"f_6154:modules_2escm",(void*)f_6154},
{"f_6156:modules_2escm",(void*)f_6156},
{"f_6150:modules_2escm",(void*)f_6150},
{"f_7007:modules_2escm",(void*)f_7007},
{"f_7009:modules_2escm",(void*)f_7009},
{"f_7005:modules_2escm",(void*)f_7005},
{"f_2652:modules_2escm",(void*)f_2652},
{"f_2666:modules_2escm",(void*)f_2666},
{"f_4959:modules_2escm",(void*)f_4959},
{"f_4956:modules_2escm",(void*)f_4956},
{"f_4953:modules_2escm",(void*)f_4953},
{"f_2892:modules_2escm",(void*)f_2892},
{"f_4504:modules_2escm",(void*)f_4504},
{"f_4508:modules_2escm",(void*)f_4508},
{"f_4379:modules_2escm",(void*)f_4379},
{"f_4976:modules_2escm",(void*)f_4976},
{"f_4535:modules_2escm",(void*)f_4535},
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
S|  for-each		14
S|  map		21
o|eliminated procedure checks: 294 
o|specializations:
o|  2 (cddr (pair * pair))
o|  1 (< fixnum fixnum)
o|  2 (string-append string string)
o|  1 (= fixnum fixnum)
o|  6 (##sys#check-list (or pair list) *)
o|  2 (cdar (pair pair *))
o|  1 (caar (pair pair *))
o|  27 (car pair)
o|  47 (cdr pair)
o|safe globals: (lookup) 
o|Removed `not' forms: 7 
o|removed side-effect free assignment to unused variable: module? 
o|contracted procedure: "(modules.scm:118) %make-module" 
o|inlining procedure: k2972 
o|inlining procedure: k2972 
o|inlining procedure: k3017 
o|inlining procedure: k3017 
o|inlining procedure: k3010 
o|inlining procedure: k3010 
o|inlining procedure: k3052 
o|inlining procedure: k3052 
o|inlining procedure: k3101 
o|inlining procedure: k3101 
o|inlining procedure: k3153 
o|inlining procedure: k3153 
o|inlining procedure: k3139 
o|inlining procedure: k3188 
o|inlining procedure: k3188 
o|inlining procedure: k3139 
o|inlining procedure: k3220 
o|inlining procedure: k3220 
o|inlining procedure: k3243 
o|inlining procedure: k3243 
o|inlining procedure: k3256 
o|removed call to pure procedure with unused result: "(modules.scm:202) void" 
o|inlining procedure: k3256 
o|inlining procedure: k3327 
o|contracted procedure: "(modules.scm:223) set-module-defined-syntax-list!" 
o|removed call to pure procedure with unused result: "(modules.scm:217) void" 
o|inlining procedure: k3327 
o|inlining procedure: k3392 
o|inlining procedure: k3403 
o|inlining procedure: k3403 
o|inlining procedure: k3439 
o|inlining procedure: k3439 
o|inlining procedure: k3392 
o|inlining procedure: k3495 
o|removed call to pure procedure with unused result: "(modules.scm:248) void" 
o|inlining procedure: k3495 
o|inlining procedure: k3534 
o|inlining procedure: k3534 
o|merged explicitly consed rest parameter: ses669 
o|removed call to pure procedure with unused result: "(modules.scm:298) void" 
o|inlining procedure: k3796 
o|inlining procedure: k3796 
o|removed call to pure procedure with unused result: "(modules.scm:295) void" 
o|inlining procedure: k3881 
o|inlining procedure: k3881 
o|inlining procedure: k3896 
o|inlining procedure: k3896 
o|inlining procedure: k3947 
o|inlining procedure: k3947 
o|removed call to pure procedure with unused result: "(modules.scm:331) void" 
o|inlining procedure: k3980 
o|inlining procedure: k3980 
o|inlining procedure: k4012 
o|inlining procedure: k4012 
o|inlining procedure: k4054 
o|inlining procedure: k4054 
o|inlining procedure: k4095 
o|inlining procedure: k4095 
o|inlining procedure: k4184 
o|contracted procedure: "(modules.scm:357) find-reexport826" 
o|inlining procedure: k4164 
o|inlining procedure: k4164 
o|inlining procedure: k4184 
o|inlining procedure: k4212 
o|inlining procedure: k4212 
o|inlining procedure: k4280 
o|inlining procedure: k4280 
o|inlining procedure: k4321 
o|inlining procedure: k4321 
o|inlining procedure: k4341 
o|inlining procedure: k4341 
o|inlining procedure: k4361 
o|inlining procedure: k4361 
o|consed rest parameter at call site: "(modules.scm:371) merge-se" 1 
o|inlining procedure: k4387 
o|inlining procedure: k4387 
o|inlining procedure: k4417 
o|inlining procedure: k4417 
o|inlining procedure: k4447 
o|inlining procedure: k4447 
o|consed rest parameter at call site: "(modules.scm:419) merge-se" 1 
o|inlining procedure: k4537 
o|inlining procedure: k4537 
o|inlining procedure: k4556 
o|inlining procedure: k4556 
o|inlining procedure: k4578 
o|inlining procedure: k4578 
o|inlining procedure: k4608 
o|inlining procedure: k4608 
o|inlining procedure: k4656 
o|inlining procedure: k4656 
o|inlining procedure: k4666 
o|inlining procedure: k4679 
o|inlining procedure: k4679 
o|inlining procedure: k4666 
o|inlining procedure: k4750 
o|inlining procedure: k4750 
o|inlining procedure: k4781 
o|inlining procedure: k4781 
o|inlining procedure: k4818 
o|inlining procedure: k4818 
o|substituted constant variable: a4834 
o|inlining procedure: k4857 
o|inlining procedure: k4857 
o|inlining procedure: k4884 
o|inlining procedure: k4884 
o|removed call to pure procedure with unused result: "(modules.scm:531) void" 
o|consed rest parameter at call site: "(modules.scm:532) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:550) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:547) merge-se" 1 
o|contracted procedure: "(modules.scm:543) set-module-vexports!" 
o|removed call to pure procedure with unused result: "(modules.scm:536) void" 
o|inlining procedure: k4970 
o|inlining procedure: k4970 
o|consed rest parameter at call site: "(modules.scm:525) merge-se" 1 
o|inlining procedure: k4996 
o|inlining procedure: k4996 
o|contracted procedure: "(modules.scm:524) module-indirect-exports" 
o|removed side-effect free assignment to unused variable: indirect?623 
o|inlining procedure: k3612 
o|inlining procedure: k3612 
o|inlining procedure: k3625 
o|inlining procedure: k3625 
o|inlining procedure: k3651 
o|inlining procedure: k3651 
o|inlining procedure: k3700 
o|inlining procedure: k3700 
o|inlining procedure: k3679 
o|inlining procedure: k3679 
o|inlining procedure: k3718 
o|inlining procedure: k3718 
o|inlining procedure: k5029 
o|inlining procedure: k5029 
o|inlining procedure: k5052 
o|inlining procedure: k5052 
o|inlining procedure: k5086 
o|inlining procedure: k5086 
o|removed call to pure procedure with unused result: "(modules.scm:472) void" 
o|contracted procedure: k5111 
o|inlining procedure: k5108 
o|inlining procedure: k5108 
o|consed rest parameter at call site: "(modules.scm:450) merge-se" 1 
o|inlining procedure: k5169 
o|inlining procedure: k5169 
o|inlining procedure: k5202 
o|inlining procedure: k5202 
o|inlining procedure: k5237 
o|inlining procedure: k5237 
o|substituted constant variable: a5308 
o|inlining procedure: k5329 
o|inlining procedure: k5329 
o|contracted procedure: "(modules.scm:587) lookup" 
o|inlining procedure: k2631 
o|inlining procedure: k2631 
o|inlining procedure: k5336 
o|inlining procedure: k5336 
o|inlining procedure: k5353 
o|inlining procedure: k5353 
o|inlining procedure: k5396 
o|inlining procedure: k5396 
o|inlining procedure: k5415 
o|inlining procedure: k5415 
o|inlining procedure: k5451 
o|inlining procedure: k5473 
o|inlining procedure: k5473 
o|inlining procedure: k5501 
o|inlining procedure: k5501 
o|inlining procedure: k5531 
o|inlining procedure: k5531 
o|inlining procedure: k5451 
o|inlining procedure: k5579 
o|inlining procedure: k5591 
o|inlining procedure: k5591 
o|inlining procedure: k5579 
o|inlining procedure: k5651 
o|inlining procedure: k5651 
o|inlining procedure: k5677 
o|inlining procedure: k5695 
o|inlining procedure: k5722 
o|inlining procedure: k5722 
o|inlining procedure: k5740 
o|inlining procedure: k5740 
o|inlining procedure: k5695 
o|inlining procedure: k5677 
o|inlining procedure: k5873 
o|inlining procedure: k5873 
o|inlining procedure: k5903 
o|inlining procedure: k5903 
o|inlining procedure: k5938 
o|inlining procedure: k5938 
o|substituted constant variable: a5962 
o|inlining procedure: k6006 
o|inlining procedure: k6006 
o|inlining procedure: k6040 
o|inlining procedure: k6040 
o|inlining procedure: k6101 
o|inlining procedure: k6101 
o|consed rest parameter at call site: "(modules.scm:727) merge-se" 1 
o|inlining procedure: k6159 
o|inlining procedure: k6159 
o|inlining procedure: k6189 
o|inlining procedure: k6189 
o|inlining procedure: k6245 
o|inlining procedure: k6245 
o|inlining procedure: k6275 
o|inlining procedure: k6275 
o|inlining procedure: k6311 
o|inlining procedure: k6311 
o|inlining procedure: k6331 
o|inlining procedure: k6331 
o|removed call to pure procedure with unused result: "(modules.scm:687) void" 
o|removed call to pure procedure with unused result: "(modules.scm:686) void" 
o|removed call to pure procedure with unused result: "(modules.scm:682) void" 
o|inlining procedure: k6358 
o|inlining procedure: k6358 
o|inlining procedure: k6374 
o|contracted procedure: "(modules.scm:675) set-module-meta-import-forms!" 
o|inlining procedure: k6374 
o|contracted procedure: "(modules.scm:678) set-module-import-forms!" 
o|removed call to pure procedure with unused result: "(modules.scm:750) void" 
o|inlining procedure: k6426 
o|inlining procedure: k6426 
o|inlining procedure: k6447 
o|inlining procedure: k6447 
o|removed call to pure procedure with unused result: "(modules.scm:758) void" 
o|inlining procedure: k6468 
o|removed call to pure procedure with unused result: "(modules.scm:762) void" 
o|inlining procedure: k6468 
o|inlining procedure: k6489 
o|inlining procedure: k6489 
o|removed call to pure procedure with unused result: "(modules.scm:765) void" 
o|merged explicitly consed rest parameter: args1888 
o|inlining procedure: k6546 
o|inlining procedure: k6546 
o|consed rest parameter at call site: "(modules.scm:783) err1886" 1 
o|inlining procedure: k6552 
o|inlining procedure: k6552 
o|inlining procedure: k6567 
o|inlining procedure: k6583 
o|inlining procedure: k6583 
o|inlining procedure: k6599 
o|inlining procedure: k6599 
o|inlining procedure: k6622 
o|inlining procedure: k6622 
o|inlining procedure: k6644 
o|inlining procedure: k6644 
o|consed rest parameter at call site: "(modules.scm:803) err1886" 1 
o|inlining procedure: k6677 
o|inlining procedure: k6677 
o|consed rest parameter at call site: "(modules.scm:808) err1886" 1 
o|consed rest parameter at call site: "(modules.scm:797) err1886" 1 
o|consed rest parameter at call site: "(modules.scm:792) err1886" 1 
o|inlining procedure: k6567 
o|consed rest parameter at call site: "(modules.scm:787) err1886" 1 
o|merged explicitly consed rest parameter: args1936 
o|consed rest parameter at call site: "(modules.scm:822) err1935" 1 
o|inlining procedure: k6782 
o|inlining procedure: k6782 
o|inlining procedure: k6824 
o|inlining procedure: k6824 
o|inlining procedure: k6833 
o|inlining procedure: k6833 
o|consed rest parameter at call site: "(modules.scm:817) err1935" 1 
o|inlining procedure: k6887 
o|inlining procedure: k6897 
o|inlining procedure: k6897 
o|inlining procedure: k6887 
o|substituted constant variable: a6944 
o|inlining procedure: k6957 
o|inlining procedure: k6957 
o|inlining procedure: k6987 
o|inlining procedure: k6987 
o|propagated global variable: r4rs-syntax2041 ##sys#default-macro-environment 
o|replaced variables: 529 
o|removed binding forms: 197 
o|substituted constant variable: defined-list236 
o|substituted constant variable: exist-list237 
o|substituted constant variable: defined-syntax-list238 
o|substituted constant variable: undefined-list239 
o|substituted constant variable: import-forms240 
o|substituted constant variable: meta-import-forms241 
o|substituted constant variable: meta-expressions242 
o|substituted constant variable: saved-environments246 
o|substituted constant variable: r32217068 
o|substituted constant variable: r32447070 
o|contracted procedure: k3279 
o|contracted procedure: k3342 
o|substituted constant variable: a34387079 
o|contracted procedure: k3500 
o|contracted procedure: k3786 
o|contracted procedure: k3790 
o|substituted constant variable: f_37957085 
o|substituted constant variable: a38807087 
o|substituted constant variable: f_38957089 
o|contracted procedure: k3966 
o|substituted constant variable: f_46557129 
o|contracted procedure: k4922 
o|contracted procedure: k4937 
o|substituted constant variable: r36137149 
o|substituted constant variable: f_36247151 
o|converted assignments to bindings: (warn624) 
o|substituted constant variable: f_50517165 
o|contracted procedure: k5103 
o|inlining procedure: k5086 
o|substituted constant variable: r51097172 
o|substituted constant variable: f_51687173 
o|inlining procedure: k5237 
o|substituted constant variable: se210 
o|converted assignments to bindings: (ren1537) 
o|substituted constant variable: r59397218 
o|contracted procedure: k5984 
o|contracted procedure: k5986 
o|contracted procedure: k5988 
o|substituted constant variable: r60077220 
o|substituted constant variable: r60417222 
o|removed call to pure procedure with unused result: "(modules.scm:734) void" 
o|contracted procedure: k6431 
o|contracted procedure: k6463 
o|contracted procedure: k6476 
o|contracted procedure: k6487 
o|converted assignments to bindings: (mrename1822) 
o|substituted constant variable: f_65827260 
o|substituted constant variable: a68237273 
o|converted assignments to bindings: (merr1943) 
o|converted assignments to bindings: (err1935) 
o|simplifications: ((let . 5)) 
o|replaced variables: 20 
o|removed binding forms: 540 
o|inlining procedure: k4772 
o|substituted constant variable: r50877348 
o|inlining procedure: k5327 
o|inlining procedure: k5327 
o|removed call to pure procedure with unused result: "(modules.scm:734) void" 
o|inlining procedure: k6433 
o|replaced variables: 1 
o|removed binding forms: 61 
o|substituted constant variable: tmp136913717482 
o|substituted constant variable: tmp136913717482 
o|substituted constant variable: tmp136913717482 
o|replaced variables: 2 
o|removed binding forms: 4 
o|removed conditional forms: 1 
o|inlining procedure: "(modules.scm:240) make-module" 
o|inlining procedure: "(modules.scm:370) make-module" 
o|inlining procedure: "(modules.scm:401) make-module" 
o|removed binding forms: 3 
o|removed side-effect free assignment to unused variable: make-module 
o|substituted constant variable: iexports3707644 
o|substituted constant variable: explist3677667 
o|substituted constant variable: explist3677679 
o|substituted constant variable: iexports3707682 
o|replaced variables: 4 
o|removed binding forms: 9 
o|simplifications: ((if . 16) (##core#call . 570)) 
o|  call simplifications:
o|    list?	3
o|    fx<
o|    fixnum?
o|    ##sys#call-with-values	2
o|    cddr	3
o|    ##sys#intern-symbol
o|    string?
o|    number?
o|    number->string
o|    cdar	3
o|    length	2
o|    write-char	2
o|    set-car!	4
o|    caddr	2
o|    ##sys#cons	11
o|    ##sys#list	21
o|    apply	4
o|    caar	9
o|    symbol?	18
o|    ##sys#make-structure	4
o|    list	5
o|    not	3
o|    set-cdr!
o|    eq?	20
o|    null?	30
o|    assq	28
o|    cdr	36
o|    memq	6
o|    ##sys#check-list	29
o|    pair?	48
o|    ##sys#setslot	21
o|    ##sys#slot	73
o|    car	40
o|    cadr	12
o|    cons	80
o|    values	6
o|    ##sys#check-structure	25
o|    ##sys#block-ref	13
o|contracted procedure: k2669 
o|contracted procedure: k2678 
o|contracted procedure: k2687 
o|contracted procedure: k2696 
o|contracted procedure: k2705 
o|contracted procedure: k2714 
o|contracted procedure: k2723 
o|contracted procedure: k2732 
o|contracted procedure: k2750 
o|contracted procedure: k2759 
o|contracted procedure: k2768 
o|contracted procedure: k2786 
o|contracted procedure: k2804 
o|contracted procedure: k2813 
o|contracted procedure: k2822 
o|contracted procedure: k2840 
o|contracted procedure: k2849 
o|contracted procedure: k2858 
o|contracted procedure: k2867 
o|contracted procedure: k2876 
o|contracted procedure: k2885 
o|contracted procedure: k2922 
o|contracted procedure: k2919 
o|contracted procedure: k2955 
o|contracted procedure: k2958 
o|contracted procedure: k2960 
o|contracted procedure: k2974 
o|contracted procedure: k2977 
o|contracted procedure: k2986 
o|contracted procedure: k2996 
o|contracted procedure: k3008 
o|contracted procedure: k3015 
o|contracted procedure: k3020 
o|contracted procedure: k3030 
o|contracted procedure: k3082 
o|contracted procedure: k3042 
o|contracted procedure: k3076 
o|contracted procedure: k3044 
o|contracted procedure: k3070 
o|contracted procedure: k3046 
o|contracted procedure: k3064 
o|contracted procedure: k3048 
o|contracted procedure: k3050 
o|contracted procedure: k3092 
o|contracted procedure: k3114 
o|contracted procedure: k3142 
o|contracted procedure: k3151 
o|contracted procedure: k3159 
o|contracted procedure: k3165 
o|contracted procedure: k3190 
o|contracted procedure: k3199 
o|contracted procedure: k3202 
o|contracted procedure: k3227 
o|contracted procedure: k3236 
o|contracted procedure: k3241 
o|contracted procedure: k3258 
o|contracted procedure: k3267 
o|contracted procedure: k3288 
o|contracted procedure: k3285 
o|contracted procedure: k3294 
o|contracted procedure: k3329 
o|contracted procedure: k3353 
o|contracted procedure: k3350 
o|contracted procedure: k2741 
o|contracted procedure: k3365 
o|contracted procedure: k3362 
o|contracted procedure: k3376 
o|contracted procedure: k3396 
o|contracted procedure: k3415 
o|contracted procedure: k3412 
o|contracted procedure: k3424 
o|contracted procedure: k3421 
o|contracted procedure: k3433 
o|contracted procedure: k3439 
o|contracted procedure: k3483 
o|contracted procedure: k3448 
o|contracted procedure: k3477 
o|contracted procedure: k3450 
o|contracted procedure: k3471 
o|contracted procedure: k3452 
o|contracted procedure: k3465 
o|contracted procedure: k3454 
o|contracted procedure: k3456 
o|contracted procedure: k3463 
o|contracted procedure: k3459 
o|contracted procedure: k3523 
o|contracted procedure: k3509 
o|contracted procedure: k3516 
o|contracted procedure: k3525 
o|contracted procedure: k3536 
o|contracted procedure: k3545 
o|contracted procedure: k3548 
o|contracted procedure: k3798 
o|contracted procedure: k3823 
o|contracted procedure: k3804 
o|contracted procedure: k3866 
o|contracted procedure: k4041 
o|contracted procedure: k4014 
o|contracted procedure: k4021 
o|contracted procedure: k4031 
o|contracted procedure: k4034 
o|contracted procedure: k4045 
o|contracted procedure: k3869 
o|contracted procedure: k3872 
o|contracted procedure: k3943 
o|contracted procedure: k3945 
o|contracted procedure: k3950 
o|contracted procedure: k3957 
o|contracted procedure: k3971 
o|contracted procedure: k3875 
o|contracted procedure: k3863 
o|contracted procedure: k3860 
o|contracted procedure: k3883 
o|contracted procedure: k3898 
o|contracted procedure: k3938 
o|contracted procedure: k3904 
o|contracted procedure: k3912 
o|contracted procedure: k3926 
o|contracted procedure: k3918 
o|contracted procedure: k3982 
o|contracted procedure: k3985 
o|contracted procedure: k3994 
o|contracted procedure: k4004 
o|contracted procedure: k4056 
o|contracted procedure: k4059 
o|contracted procedure: k4068 
o|contracted procedure: k4078 
o|contracted procedure: k4086 
o|contracted procedure: k4097 
o|contracted procedure: k4100 
o|contracted procedure: k4109 
o|contracted procedure: k4119 
o|contracted procedure: k4121 
o|contracted procedure: k4128 
o|contracted procedure: k4133 
o|contracted procedure: k4146 
o|contracted procedure: k4143 
o|contracted procedure: k4140 
o|contracted procedure: k4473 
o|contracted procedure: k4155 
o|contracted procedure: k4186 
o|contracted procedure: k4162 
o|contracted procedure: k4177 
o|contracted procedure: k4196 
o|contracted procedure: k4205 
o|contracted procedure: k4234 
o|contracted procedure: k4214 
o|contracted procedure: k4223 
o|contracted procedure: k4229 
o|contracted procedure: k4236 
o|contracted procedure: k4246 
o|contracted procedure: k4255 
o|contracted procedure: k4260 
o|contracted procedure: k4271 
o|contracted procedure: k4273 
o|contracted procedure: k4291 
o|contracted procedure: k4282 
o|contracted procedure: k4293 
o|contracted procedure: k4303 
o|contracted procedure: k4305 
o|contracted procedure: k4315 
o|contracted procedure: k4311 
o|contracted procedure: k4323 
o|contracted procedure: k4332 
o|contracted procedure: k4335 
o|contracted procedure: k4343 
o|contracted procedure: k4352 
o|contracted procedure: k4355 
o|contracted procedure: k4363 
o|contracted procedure: k4372 
o|contracted procedure: k4375 
o|contracted procedure: k4389 
o|contracted procedure: k4392 
o|contracted procedure: k4401 
o|contracted procedure: k4411 
o|contracted procedure: k4419 
o|contracted procedure: k4422 
o|contracted procedure: k4431 
o|contracted procedure: k4441 
o|contracted procedure: k4449 
o|contracted procedure: k4452 
o|contracted procedure: k4461 
o|contracted procedure: k4471 
o|contracted procedure: k4494 
o|contracted procedure: k4634 
o|contracted procedure: k4500 
o|contracted procedure: k4539 
o|contracted procedure: k4548 
o|contracted procedure: k4558 
o|contracted procedure: k4561 
o|contracted procedure: k4569 
o|contracted procedure: k4505 
o|contracted procedure: k4514 
o|contracted procedure: k4510 
o|contracted procedure: k4517 
o|contracted procedure: k4580 
o|contracted procedure: k4583 
o|contracted procedure: k4592 
o|contracted procedure: k4602 
o|contracted procedure: k4610 
o|contracted procedure: k4613 
o|contracted procedure: k4622 
o|contracted procedure: k4632 
o|contracted procedure: k4658 
o|contracted procedure: k4704 
o|contracted procedure: k4661 
o|contracted procedure: k4669 
o|contracted procedure: k4694 
o|contracted procedure: k4672 
o|contracted procedure: k4706 
o|contracted procedure: k4729 
o|contracted procedure: k4736 
o|contracted procedure: k4747 
o|contracted procedure: k4753 
o|contracted procedure: k4836 
o|contracted procedure: k4784 
o|contracted procedure: k4809 
o|contracted procedure: k4820 
o|contracted procedure: k4829 
o|contracted procedure: k4832 
o|contracted procedure: k4838 
o|contracted procedure: k4859 
o|contracted procedure: k4868 
o|contracted procedure: k4871 
o|contracted procedure: k4875 
o|contracted procedure: k4905 
o|contracted procedure: k4886 
o|contracted procedure: k4889 
o|contracted procedure: k4909 
o|contracted procedure: k4930 
o|contracted procedure: k4932 
o|contracted procedure: k4949 
o|contracted procedure: k2831 
o|contracted procedure: k4972 
o|contracted procedure: k4981 
o|contracted procedure: k4984 
o|contracted procedure: k4998 
o|contracted procedure: k5001 
o|contracted procedure: k5010 
o|contracted procedure: k5020 
o|contracted procedure: k3615 
o|contracted procedure: k3627 
o|contracted procedure: k3778 
o|contracted procedure: k3633 
o|contracted procedure: k3645 
o|contracted procedure: k3653 
o|contracted procedure: k3660 
o|contracted procedure: k3772 
o|contracted procedure: k3665 
o|contracted procedure: k3677 
o|contracted procedure: k3695 
o|contracted procedure: k3698 
o|contracted procedure: k3711 
o|contracted procedure: k3750 
o|contracted procedure: k3720 
o|contracted procedure: k3735 
o|contracted procedure: k3727 
o|contracted procedure: k3747 
o|contracted procedure: k5031 
o|contracted procedure: k5040 
o|contracted procedure: k5043 
o|contracted procedure: k5147 
o|contracted procedure: k5046 
o|contracted procedure: k5054 
o|contracted procedure: k5057 
o|contracted procedure: k5141 
o|contracted procedure: k5059 
o|contracted procedure: k5064 
o|contracted procedure: k5084 
o|inlining procedure: k5086 
o|contracted procedure: k5095 
o|inlining procedure: k5086 
o|contracted procedure: k5130 
o|contracted procedure: k5139 
o|contracted procedure: k5150 
o|contracted procedure: k5171 
o|contracted procedure: k5196 
o|contracted procedure: k5204 
o|contracted procedure: k5207 
o|contracted procedure: k5216 
o|contracted procedure: k5226 
o|contracted procedure: k5327 
o|contracted procedure: k5338 
o|contracted procedure: k5356 
o|contracted procedure: k5365 
o|contracted procedure: k5398 
o|contracted procedure: k5964 
o|contracted procedure: k5407 
o|contracted procedure: k5434 
o|contracted procedure: k5446 
o|contracted procedure: k5459 
o|contracted procedure: k5461 
o|contracted procedure: k5475 
o|contracted procedure: k5525 
o|contracted procedure: k5481 
o|contracted procedure: k5491 
o|contracted procedure: k5494 
o|contracted procedure: k5499 
o|contracted procedure: k5509 
o|contracted procedure: k5512 
o|contracted procedure: k5533 
o|contracted procedure: k5536 
o|contracted procedure: k5545 
o|contracted procedure: k5555 
o|contracted procedure: k5565 
o|contracted procedure: k5567 
o|contracted procedure: k5581 
o|contracted procedure: k5593 
o|contracted procedure: k5621 
o|contracted procedure: k5602 
o|contracted procedure: k5616 
o|contracted procedure: k5645 
o|contracted procedure: k5626 
o|contracted procedure: k5640 
o|contracted procedure: k5653 
o|contracted procedure: k5656 
o|contracted procedure: k5665 
o|contracted procedure: k5675 
o|contracted procedure: k5689 
o|contracted procedure: k5697 
o|contracted procedure: k5703 
o|contracted procedure: k5710 
o|contracted procedure: k5724 
o|contracted procedure: k5733 
o|contracted procedure: k5736 
o|contracted procedure: k5779 
o|contracted procedure: k5738 
o|contracted procedure: k5748 
o|contracted procedure: k5760 
o|contracted procedure: k5763 
o|contracted procedure: k5757 
o|contracted procedure: k5751 
o|contracted procedure: k5774 
o|contracted procedure: k5822 
o|contracted procedure: k5781 
o|contracted procedure: k5791 
o|contracted procedure: k5803 
o|contracted procedure: k5806 
o|contracted procedure: k5800 
o|contracted procedure: k5794 
o|contracted procedure: k5817 
o|contracted procedure: k5852 
o|contracted procedure: k5858 
o|contracted procedure: k5864 
o|contracted procedure: k5875 
o|contracted procedure: k5878 
o|contracted procedure: k5887 
o|contracted procedure: k5897 
o|contracted procedure: k5905 
o|contracted procedure: k5908 
o|contracted procedure: k5917 
o|contracted procedure: k5927 
o|contracted procedure: k5930 
o|contracted procedure: k5951 
o|contracted procedure: k5941 
o|contracted procedure: k5954 
o|contracted procedure: k5960 
o|contracted procedure: k5994 
o|contracted procedure: k6004 
o|contracted procedure: k6022 
o|contracted procedure: k6012 
o|contracted procedure: k6028 
o|contracted procedure: k6031 
o|contracted procedure: k6063 
o|contracted procedure: k6038 
o|contracted procedure: k6060 
o|contracted procedure: k6046 
o|contracted procedure: k6068 
o|contracted procedure: k6106 
o|contracted procedure: k6125 
o|contracted procedure: k6122 
o|contracted procedure: k6119 
o|contracted procedure: k6133 
o|contracted procedure: k6161 
o|contracted procedure: k6183 
o|contracted procedure: k6180 
o|contracted procedure: k6164 
o|contracted procedure: k6173 
o|contracted procedure: k6191 
o|contracted procedure: k6213 
o|contracted procedure: k6210 
o|contracted procedure: k6194 
o|contracted procedure: k6203 
o|contracted procedure: k6301 
o|contracted procedure: k6230 
o|contracted procedure: k6247 
o|contracted procedure: k6269 
o|contracted procedure: k6266 
o|contracted procedure: k6250 
o|contracted procedure: k6259 
o|contracted procedure: k6277 
o|contracted procedure: k6299 
o|contracted procedure: k6296 
o|contracted procedure: k6280 
o|contracted procedure: k6289 
o|contracted procedure: k6313 
o|contracted procedure: k6322 
o|contracted procedure: k6325 
o|contracted procedure: k6333 
o|contracted procedure: k6342 
o|contracted procedure: k6345 
o|contracted procedure: k6347 
o|contracted procedure: k6349 
o|contracted procedure: k6360 
o|contracted procedure: k6369 
o|contracted procedure: k6372 
o|contracted procedure: k2795 
o|contracted procedure: k6387 
o|contracted procedure: k2777 
o|contracted procedure: k6399 
o|contracted procedure: k6411 
o|contracted procedure: k6414 
o|contracted procedure: k6478 
o|contracted procedure: k6485 
o|contracted procedure: k6492 
o|contracted procedure: k6555 
o|contracted procedure: k6561 
o|contracted procedure: k6570 
o|contracted procedure: k6585 
o|contracted procedure: k6591 
o|contracted procedure: k6597 
o|contracted procedure: k6602 
o|contracted procedure: k6616 
o|contracted procedure: k6711 
o|contracted procedure: k6625 
o|contracted procedure: k6641 
o|contracted procedure: k6654 
o|contracted procedure: k6659 
o|contracted procedure: k6666 
o|contracted procedure: k6679 
o|contracted procedure: k6689 
o|contracted procedure: k6706 
o|contracted procedure: k6694 
o|contracted procedure: k6735 
o|contracted procedure: k6732 
o|contracted procedure: k6754 
o|contracted procedure: k6756 
o|contracted procedure: k6767 
o|contracted procedure: k6773 
o|contracted procedure: k6770 
o|contracted procedure: k6784 
o|contracted procedure: k6806 
o|contracted procedure: k6803 
o|contracted procedure: k6787 
o|contracted procedure: k6796 
o|contracted procedure: k6818 
o|contracted procedure: k6815 
o|contracted procedure: k6826 
o|contracted procedure: k6835 
o|contracted procedure: k6841 
o|contracted procedure: k6850 
o|contracted procedure: k6856 
o|contracted procedure: k6858 
o|contracted procedure: k6860 
o|contracted procedure: k6869 
o|contracted procedure: k6890 
o|contracted procedure: k6907 
o|contracted procedure: k6895 
o|contracted procedure: k6904 
o|contracted procedure: k6913 
o|contracted procedure: k6921 
o|contracted procedure: k6948 
o|contracted procedure: k6959 
o|contracted procedure: k6962 
o|contracted procedure: k6971 
o|contracted procedure: k6981 
o|contracted procedure: k6989 
o|contracted procedure: k6998 
o|contracted procedure: k7001 
o|contracted procedure: k7036 
o|contracted procedure: k7023 
o|contracted procedure: k7034 
o|simplifications: ((let . 93)) 
o|removed binding forms: 470 
o|inlining procedure: "(modules.scm:115) module-sexports" 
o|inlining procedure: "(modules.scm:114) module-vexports" 
o|inlining procedure: "(modules.scm:113) module-export-list" 
o|inlining procedure: k2979 
o|inlining procedure: k2979 
o|inlining procedure: "(modules.scm:155) module-saved-environments" 
o|inlining procedure: "(modules.scm:152) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:174) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:173) set-module-sexports!" 
o|inlining procedure: "(modules.scm:173) module-sexports" 
o|inlining procedure: "(modules.scm:164) module-exist-list" 
o|inlining procedure: "(modules.scm:175) set-module-export-list!" 
o|inlining procedure: "(modules.scm:162) module-export-list" 
o|inlining procedure: "(modules.scm:181) set-module-meta-expressions!" 
o|inlining procedure: "(modules.scm:181) module-meta-expressions" 
o|inlining procedure: "(modules.scm:203) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:206) module-defined-list" 
o|inlining procedure: "(modules.scm:200) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:200) module-exist-list" 
o|inlining procedure: "(modules.scm:195) module-name" 
o|inlining procedure: "(modules.scm:191) module-export-list" 
o|inlining procedure: "(modules.scm:225) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:219) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:222) module-defined-list" 
o|inlining procedure: "(modules.scm:213) module-name" 
o|inlining procedure: "(modules.scm:210) module-export-list" 
o|inlining procedure: k3436 
o|inlining procedure: k3436 
o|inlining procedure: "(modules.scm:337) module-defined-syntax-list" 
o|inlining procedure: k3987 
o|inlining procedure: k3987 
o|inlining procedure: "(modules.scm:323) module-vexports" 
o|inlining procedure: k4061 
o|inlining procedure: k4061 
o|inlining procedure: "(modules.scm:322) module-iexports" 
o|inlining procedure: "(modules.scm:316) module-name" 
o|inlining procedure: k4102 
o|inlining procedure: k4102 
o|inlining procedure: "(modules.scm:314) module-meta-expressions" 
o|inlining procedure: "(modules.scm:311) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:310) module-sexports" 
o|inlining procedure: "(modules.scm:309) module-import-forms" 
o|inlining procedure: "(modules.scm:308) module-name" 
o|inlining procedure: "(modules.scm:307) module-defined-list" 
o|inlining procedure: k4394 
o|inlining procedure: k4394 
o|inlining procedure: k4424 
o|inlining procedure: k4424 
o|inlining procedure: k4454 
o|inlining procedure: k4454 
o|inlining procedure: "(modules.scm:417) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:421) module-sexports" 
o|inlining procedure: "(modules.scm:420) module-vexports" 
o|inlining procedure: k4585 
o|inlining procedure: k4585 
o|inlining procedure: k4615 
o|inlining procedure: k4615 
o|inlining procedure: "(modules.scm:428) module-exist-list" 
o|inlining procedure: "(modules.scm:427) module-export-list" 
o|inlining procedure: "(modules.scm:548) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:545) set-module-iexports!" 
o|inlining procedure: "(modules.scm:547) module-iexports" 
o|inlining procedure: "(modules.scm:544) set-module-sexports!" 
o|inlining procedure: k5003 
o|inlining procedure: k5003 
o|inlining procedure: "(modules.scm:255) module-defined-list" 
o|inlining procedure: "(modules.scm:254) module-name" 
o|inlining procedure: "(modules.scm:253) module-export-list" 
o|inlining procedure: "(modules.scm:450) module-sexports" 
o|inlining procedure: k5209 
o|inlining procedure: k5209 
o|inlining procedure: "(modules.scm:447) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:444) module-exist-list" 
o|inlining procedure: "(modules.scm:443) module-defined-list" 
o|inlining procedure: "(modules.scm:442) module-name" 
o|inlining procedure: "(modules.scm:441) module-export-list" 
o|inlining procedure: "(modules.scm:598) module-iexports" 
o|inlining procedure: "(modules.scm:597) module-sexports" 
o|inlining procedure: "(modules.scm:596) module-vexports" 
o|inlining procedure: k5538 
o|inlining procedure: k5538 
o|inlining procedure: k5658 
o|inlining procedure: k5658 
o|inlining procedure: k5880 
o|inlining procedure: k5880 
o|inlining procedure: k5910 
o|inlining procedure: k5910 
o|inlining procedure: "(modules.scm:729) set-module-meta-expressions!" 
o|inlining procedure: "(modules.scm:732) module-meta-expressions" 
o|inlining procedure: "(modules.scm:725) set-module-iexports!" 
o|inlining procedure: "(modules.scm:727) module-iexports" 
o|inlining procedure: "(modules.scm:712) set-module-exist-list!" 
o|inlining procedure: k6166 
o|inlining procedure: k6166 
o|inlining procedure: k6196 
o|inlining procedure: k6196 
o|inlining procedure: "(modules.scm:714) module-exist-list" 
o|inlining procedure: "(modules.scm:711) set-module-sexports!" 
o|inlining procedure: "(modules.scm:711) module-sexports" 
o|inlining procedure: "(modules.scm:718) set-module-export-list!" 
o|inlining procedure: k6252 
o|inlining procedure: k6252 
o|inlining procedure: k6282 
o|inlining procedure: k6282 
o|inlining procedure: "(modules.scm:721) module-export-list" 
o|inlining procedure: "(modules.scm:709) module-export-list" 
o|inlining procedure: "(modules.scm:677) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:680) module-import-forms" 
o|inlining procedure: "(modules.scm:754) module-name" 
o|inlining procedure: "(modules.scm:754) module-name" 
o|inlining procedure: k6789 
o|inlining procedure: k6789 
o|inlining procedure: k6821 
o|inlining procedure: k6821 
o|inlining procedure: k6964 
o|inlining procedure: k6964 
o|inlining procedure: "(modules.scm:913) module-saved-environments" 
o|replaced variables: 18 
o|removed side-effect free assignment to unused variable: module-export-list 
o|removed side-effect free assignment to unused variable: set-module-export-list! 
o|removed side-effect free assignment to unused variable: module-defined-list 
o|removed side-effect free assignment to unused variable: set-module-defined-list! 
o|removed side-effect free assignment to unused variable: module-exist-list 
o|removed side-effect free assignment to unused variable: set-module-exist-list! 
o|removed side-effect free assignment to unused variable: module-defined-syntax-list 
o|removed side-effect free assignment to unused variable: module-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-expressions 
o|removed side-effect free assignment to unused variable: set-module-meta-expressions! 
o|removed side-effect free assignment to unused variable: module-vexports 
o|removed side-effect free assignment to unused variable: module-sexports 
o|removed side-effect free assignment to unused variable: set-module-sexports! 
o|removed side-effect free assignment to unused variable: module-iexports 
o|removed side-effect free assignment to unused variable: set-module-iexports! 
o|removed side-effect free assignment to unused variable: module-saved-environments 
o|removed side-effect free assignment to unused variable: set-module-saved-environments! 
o|replaced variables: 97 
o|removed binding forms: 60 
o|inlining procedure: k2904 
o|inlining procedure: k3182 
o|inlining procedure: k3315 
o|inlining procedure: k4167 
o|inlining procedure: k4167 
o|inlining procedure: k4532 
o|inlining procedure: k4964 
o|inlining procedure: k5157 
o|inlining procedure: k5384 
o|inlining procedure: k6131 
o|inlining procedure: k6219 
o|inlining procedure: k6384 
o|inlining procedure: k6396 
o|inlining procedure: k6439 
o|inlining procedure: k64397520 
o|inlining procedure: k7028 
o|removed binding forms: 107 
o|contracted procedure: k2898 
o|contracted procedure: k2901 
o|contracted procedure: k3137 
o|contracted procedure: k3145 
o|contracted procedure: k3230 
o|contracted procedure: k3321 
o|contracted procedure: k3291 
o|contracted procedure: k3297 
o|contracted procedure: k3386 
o|contracted procedure: k3336 
o|contracted procedure: k3356 
o|contracted procedure: k3368 
o|contracted procedure: k3831 
o|contracted procedure: k3833 
o|contracted procedure: k3835 
o|contracted procedure: k3837 
o|contracted procedure: k3839 
o|contracted procedure: k4081 
o|contracted procedure: k4043 
o|contracted procedure: k4007 
o|contracted procedure: k3890 
o|contracted procedure: k4084 
o|substituted constant variable: r41688845 
o|contracted procedure: k4529 
o|contracted procedure: k4644 
o|contracted procedure: k4716 
o|contracted procedure: k4718 
o|contracted procedure: k4720 
o|contracted procedure: k4722 
o|contracted procedure: k4734 
o|contracted procedure: k3554 
o|contracted procedure: k3556 
o|contracted procedure: k3558 
o|contracted procedure: k5380 
o|contracted procedure: k5382 
o|contracted procedure: k6094 
o|contracted procedure: k6116 
o|contracted procedure: k6145 
o|contracted procedure: k6228 
o|simplifications: ((let . 1)) 
o|removed binding forms: 53 
o|removed conditional forms: 1 
o|replaced variables: 2 
o|removed binding forms: 1 
o|removed binding forms: 1 
o|customizable procedures: (for-each-loop19952007 map-loop20142032 loop1970 merr1943 map-loop19461963 err1935 loop21907 k6647 loop1897 iface1887 err1886 mrename1822 for-each-loop15961799 for-each-loop16281648 for-each-loop16551667 map-loop17321749 map-loop17581775 map-loop16781695 map-loop17041721 k6073 k6002 k5409 k5418 tostr1365 map-loop15411558 ren1537 map-loop15671584 loop1493 for-each-loop15091520 map-loop14541471 loop1478 loop1484 resolve1364 map-loop14091426 loop1433 import-spec1367 import-name1366 map-loop10931111 loop1119 k5089 k5100 k5076 loop1126 for-each-loop11451216 k3687 warn624 loop2641 loop636 map-loop12241248 for-each-loop12581273 for-each-loop11611173 for-each-loop11911204 k4650 k4677 loop1065 map-loop10031021 map-loop10301051 map-loop833851 map-loop861879 map-loop889907 merge-se for-each-loop918929 for-each-loop936947 for-each-loop954965 k3845 k3851 map-loop702719 map-loop728752 map-loop761793 loop800 k3878 loop674 for-each-loop593613 k3497 k3405 for-each-loop481500 k3099 loop420 map-loop387405) 
o|calls to known targets: 225 
o|identified direct recursive calls: f_3793 2 
o|identified direct recursive calls: f_3893 1 
o|identified direct recursive calls: f_4653 1 
o|identified direct recursive calls: f_3622 1 
o|identified direct recursive calls: f_5049 1 
o|identified direct recursive calls: f_5470 1 
o|identified direct recursive calls: f_5588 2 
o|identified direct recursive calls: f_5576 2 
o|identified direct recursive calls: f_5692 2 
o|identified direct recursive calls: f_6156 2 
o|identified direct recursive calls: f_6186 2 
o|identified direct recursive calls: f_6242 2 
o|identified direct recursive calls: f_6272 2 
o|identified direct recursive calls: f_6674 1 
o|identified direct recursive calls: f_6580 2 
o|identified direct recursive calls: f_6779 2 
o|fast box initializations: 56 
o|fast global references: 9 
o|fast global assignments: 2 
o|dropping unused closure argument: f_3781 
o|dropping unused closure argument: f_5324 
o|dropping unused closure argument: f_5375 
*/
/* end of file */
