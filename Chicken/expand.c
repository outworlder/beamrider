/* Generated from expand.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-09-24 17:50
   Version 4.8.0 (rev 0db1908)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: expand.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file expand.c
   unit: expand
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[340];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,102,95,51,51,55,55,32,115,121,109,50,50,48,32,112,114,111,112,50,50,49,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,20),40,108,111,111,107,117,112,32,105,100,50,48,56,32,115,101,50,48,57,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,23),40,102,95,51,52,48,51,32,115,121,109,50,52,50,32,112,114,111,112,50,52,51,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,30),40,102,95,51,52,49,49,32,115,121,109,50,52,54,32,112,114,111,112,50,52,55,32,118,97,108,50,52,56,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,30),40,102,95,51,52,49,54,32,115,121,109,50,53,49,32,112,114,111,112,50,53,50,32,118,97,108,50,53,51,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,26),40,109,97,99,114,111,45,97,108,105,97,115,32,118,97,114,50,50,51,32,115,101,50,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,23),40,102,95,51,52,54,50,32,115,121,109,50,55,54,32,112,114,111,112,50,55,55,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,23),40,102,95,51,52,54,55,32,115,121,109,50,56,54,32,112,114,111,112,50,56,55,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,50,57,52,32,105,50,57,54,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,11),40,119,97,108,107,32,120,50,54,55,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,115,116,114,105,112,45,115,121,110,116,97,120,32,101,120,112,50,54,52,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,23),40,102,95,51,53,55,49,32,115,121,109,51,54,49,32,112,114,111,112,51,54,50,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,30),40,102,95,51,53,55,54,32,115,121,109,51,54,53,32,112,114,111,112,51,54,54,32,118,97,108,51,54,55,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,24),40,102,95,51,53,54,57,32,97,108,105,97,115,51,53,54,32,115,121,109,51,53,55,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,18),40,102,95,51,53,57,54,32,120,52,48,48,32,121,52,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,56,49,32,103,51,57,51,52,48,51,32,103,51,57,52,52,48,52,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,34),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,52,52,32,103,51,53,49,51,55,50,32,103,51,53,50,51,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,49,56,32,103,51,51,48,51,51,54,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,101,120,116,101,110,100,45,115,101,32,115,101,51,48,56,32,118,97,114,115,51,48,57,32,46,32,116,109,112,51,48,55,51,49,48,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,23),40,102,95,51,55,51,51,32,115,121,109,52,50,53,32,112,114,111,112,52,50,54,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,13),40,102,95,51,55,52,49,32,97,52,50,57,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,101,52,51,49,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,49,32,115,121,109,52,49,55,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,103,108,111,98,97,108,105,122,101,32,115,121,109,52,49,52,32,115,101,52,49,53,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,101,110,115,117,114,101,45,116,114,97,110,115,102,111,114,109,101,114,32,116,52,52,55,32,46,32,116,109,112,52,52,54,52,52,56,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,102,95,51,56,53,51,32,97,52,55,48,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,61),40,35,35,115,121,115,35,101,120,116,101,110,100,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,52,53,56,32,115,101,52,53,57,32,116,114,97,110,115,102,111,114,109,101,114,52,54,48,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,99,111,112,121,45,109,97,99,114,111,32,111,108,100,52,55,54,32,110,101,119,52,55,55,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,109,97,99,114,111,63,32,115,121,109,52,56,53,32,46,32,116,109,112,52,56,52,52,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,109,101,53,48,48,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,110,114,101,103,105,115,116,101,114,45,109,97,99,114,111,32,110,97,109,101,52,57,56,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,117,110,100,101,102,105,110,101,45,109,97,99,114,111,33,32,110,97,109,101,53,48,55,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,99,111,112,121,32,112,115,53,51,51,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,8),40,102,95,51,57,57,54,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,14),40,102,95,51,57,57,49,32,101,120,53,51,48,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,17),40,102,95,52,49,48,56,32,105,110,112,117,116,53,52,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,8),40,102,95,52,49,49,52,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,102,95,52,49,49,57,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,8),40,102,95,52,49,50,52,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,56,50,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,8),40,102,95,52,49,51,54,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,21),40,102,95,52,49,51,49,32,46,32,97,114,103,115,53,50,52,53,53,54,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,56,48,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,102,95,51,57,56,54,32,107,53,50,51,53,50,57,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,52),40,99,97,108,108,45,104,97,110,100,108,101,114,32,110,97,109,101,53,49,52,32,104,97,110,100,108,101,114,53,49,53,32,101,120,112,53,49,54,32,115,101,53,49,55,32,99,115,53,49,56,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,31),40,101,120,112,97,110,100,32,104,101,97,100,53,53,57,32,101,120,112,53,54,48,32,109,100,101,102,53,54,49,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,13),40,102,95,52,50,57,48,32,98,54,49,48,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,50,48,32,103,54,51,50,54,51,56,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,57,51,32,103,54,48,53,54,49,50,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,14),40,102,95,52,51,52,48,32,99,115,54,53,53,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,23),40,102,95,52,51,55,56,32,115,121,109,54,53,49,32,112,114,111,112,54,53,50,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,101,120,112,53,54,57,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,101,120,112,97,110,100,45,48,32,101,120,112,53,48,57,32,100,115,101,53,49,48,32,99,115,63,53,49,49,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,8),40,102,95,52,52,50,53,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,33),40,102,95,52,52,51,48,32,101,120,112,50,54,56,55,54,56,56,54,57,49,32,109,54,56,57,54,57,48,54,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,101,120,112,54,56,54,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,101,120,112,97,110,100,32,101,120,112,54,55,51,32,46,32,116,109,112,54,55,50,54,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,108,108,105,115,116,55,48,48,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,63,32,108,108,105,115,116,54,57,56,41,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,12),40,101,114,114,32,109,115,103,55,50,50,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,13),40,102,95,52,54,55,52,32,107,55,54,51,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,52,54,32,103,55,53,56,55,55,53,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,44),40,108,111,111,112,32,109,111,100,101,55,51,50,32,114,101,113,55,51,51,32,111,112,116,55,51,52,32,107,101,121,55,51,53,32,108,108,105,115,116,55,51,54,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,67),40,35,35,115,121,115,35,101,120,112,97,110,100,45,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,55,49,54,32,98,111,100,121,55,49,55,32,101,114,114,104,55,49,56,32,115,101,55,49,57,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,100,101,102,106,97,109,45,101,114,114,111,114,32,102,111,114,109,56,51,56,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,17),40,99,111,109,112,32,115,56,54,52,32,105,100,56,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,98,111,100,121,50,56,56,50,32,101,120,112,115,56,56,51,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,13),40,102,95,53,50,50,55,32,118,57,49,54,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,18),40,102,95,53,50,52,53,32,118,57,52,53,32,120,57,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,102,95,53,50,55,56,32,118,49,48,51,52,32,116,49,48,51,53,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,48,49,53,32,103,49,48,50,55,49,48,52,48,32,103,49,48,50,56,49,48,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,22),40,109,97,112,45,108,111,111,112,57,56,54,32,103,57,57,56,49,48,48,52,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,19),40,102,95,53,50,53,56,32,118,115,57,56,49,32,120,57,56,50,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,31),40,109,97,112,45,108,111,111,112,57,54,50,32,103,57,55,52,49,48,53,48,32,103,57,55,53,49,48,53,49,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,57,50,54,32,103,57,51,56,57,53,49,32,103,57,51,57,57,53,50,41,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,57,57,32,103,57,49,49,57,49,56,41,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,48),40,102,105,110,105,32,118,97,114,115,56,55,53,32,118,97,108,115,56,55,54,32,109,118,97,114,115,56,55,55,32,109,118,97,108,115,56,55,56,32,98,111,100,121,56,55,57,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,55,57,32,103,49,48,57,49,49,48,57,55,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,33),40,108,111,111,112,32,98,111,100,121,49,48,54,56,32,100,101,102,115,49,48,54,57,32,100,111,110,101,49,48,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,60),40,102,105,110,105,47,115,121,110,116,97,120,32,118,97,114,115,49,48,54,50,32,118,97,108,115,49,48,54,51,32,109,118,97,114,115,49,48,54,52,32,109,118,97,108,115,49,48,54,53,32,98,111,100,121,49,48,54,54,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,120,49,49,51,50,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,53),40,108,111,111,112,32,98,111,100,121,49,49,49,54,32,118,97,114,115,49,49,49,55,32,118,97,108,115,49,49,49,56,32,109,118,97,114,115,49,49,49,57,32,109,118,97,108,115,49,49,50,48,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,17),40,101,120,112,97,110,100,32,98,111,100,121,49,49,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,45),40,35,35,115,121,115,35,99,97,110,111,110,105,99,97,108,105,122,101,45,98,111,100,121,32,98,111,100,121,56,52,56,32,46,32,116,109,112,56,52,55,56,52,57,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,14),40,102,95,53,57,51,53,32,97,49,49,55,54,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,19),40,109,119,97,108,107,32,120,49,49,54,52,32,112,49,49,54,53,41,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,43),40,109,97,116,99,104,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,49,49,53,56,32,112,97,116,49,49,53,57,32,118,97,114,115,49,49,54,48,41,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,104,101,97,100,49,49,56,54,32,98,111,100,121,49,49,56,55,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,101,120,112,97,110,100,45,99,117,114,114,105,101,100,45,100,101,102,105,110,101,32,104,101,97,100,49,49,56,49,32,98,111,100,121,49,49,56,50,32,115,101,49,49,56,51,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,115,121,110,116,97,120,45,101,114,114,111,114,45,104,111,111,107,32,46,32,97,114,103,115,49,50,48,49,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,16),40,111,117,116,115,116,114,32,115,116,114,49,50,49,56,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,49,50,51,53,41,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,100,101,102,115,49,50,48,56,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,99,120,49,50,50,48,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,121,110,116,97,120,45,101,114,114,111,114,47,99,111,110,116,101,120,116,32,109,115,103,49,50,48,51,32,97,114,103,49,50,48,52,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,115,121,110,116,97,120,45,114,117,108,101,115,45,109,105,115,109,97,116,99,104,32,105,110,112,117,116,49,50,52,57,41,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,15),40,102,95,54,50,55,51,32,112,108,49,50,54,51,41,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,26),40,103,101,116,45,108,105,110,101,45,110,117,109,98,101,114,32,115,101,120,112,49,50,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,29),40,116,101,115,116,32,120,49,50,57,48,32,112,114,101,100,49,50,57,49,32,109,115,103,49,50,57,50,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,13),40,101,114,114,32,109,115,103,49,50,57,51,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,120,49,51,48,49,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,108,97,109,98,100,97,45,108,105,115,116,63,32,120,49,50,57,54,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,20),40,112,114,111,112,101,114,45,108,105,115,116,63,32,120,49,51,49,50,41,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,51,51,53,32,120,49,51,51,55,32,110,49,51,51,56,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,14),40,102,95,54,54,49,51,32,121,49,51,52,57,41,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,120,49,51,50,51,32,112,49,51,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,57),40,35,35,115,121,115,35,99,104,101,99,107,45,115,121,110,116,97,120,32,105,100,49,50,55,50,32,101,120,112,49,50,55,51,32,112,97,116,49,50,55,52,32,46,32,116,109,112,49,50,55,49,49,50,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,14),40,102,95,54,55,55,52,32,97,49,51,55,57,41,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,25),40,102,95,54,55,57,57,32,115,121,109,49,51,57,56,32,112,114,111,112,49,51,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,25),40,102,95,54,56,50,55,32,115,121,109,49,52,48,50,32,112,114,111,112,49,52,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,14),40,102,95,54,55,56,57,32,97,49,51,56,54,41,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,16),40,114,101,110,97,109,101,32,115,121,109,49,51,55,49,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,52,51,52,32,105,49,52,51,54,32,102,49,52,51,55,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,25),40,102,95,54,57,53,55,32,115,121,109,49,52,53,48,32,112,114,111,112,49,52,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,25),40,102,95,54,57,54,53,32,115,121,109,49,52,54,48,32,112,114,111,112,49,52,54,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,25),40,102,95,54,57,56,57,32,115,121,109,49,52,55,55,32,112,114,111,112,49,52,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,25),40,102,95,54,57,57,56,32,115,121,109,49,52,56,52,32,112,114,111,112,49,52,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,14),40,102,95,55,48,49,49,32,97,49,52,56,57,41,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,14),40,102,95,55,48,51,53,32,97,49,52,57,55,41,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,23),40,99,111,109,112,97,114,101,32,115,49,49,52,50,51,32,115,50,49,52,50,52,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,20),40,97,115,115,113,45,114,101,118,101,114,115,101,32,108,49,53,48,57,41,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,14),40,102,95,55,49,53,50,32,97,49,53,50,53,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,25),40,102,95,55,49,56,52,32,115,121,109,49,53,51,56,32,112,114,111,112,49,53,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,17),40,102,95,55,49,57,50,32,110,97,109,101,49,53,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,23),40,109,105,114,114,111,114,45,114,101,110,97,109,101,32,115,121,109,49,53,49,51,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,32),40,102,95,54,55,50,50,32,102,111,114,109,49,51,54,50,32,115,101,49,51,54,51,32,100,115,101,49,51,54,52,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,59),40,109,97,107,101,45,101,114,47,105,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,51,54,48,32,101,120,112,108,105,99,105,116,45,114,101,110,97,109,105,110,103,63,49,51,54,49,41,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,101,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,53,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,105,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,53,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,33),40,102,95,55,50,52,55,32,115,121,109,49,53,55,57,32,112,114,111,112,49,53,56,48,32,118,97,108,49,53,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,14),40,102,95,55,50,52,53,32,97,49,53,55,54,41,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,54,54,32,103,49,53,55,51,49,53,56,51,41,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,109,97,114,107,45,112,114,105,109,105,116,105,118,101,32,112,114,105,109,115,49,53,54,51,41};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,14),40,102,95,55,52,52,53,32,120,50,50,54,51,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,50,55,48,32,103,50,50,56,50,50,50,56,56,41};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,18),40,102,95,55,52,53,49,32,114,117,108,101,115,50,50,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,14),40,102,95,55,53,53,55,32,120,50,51,48,50,41,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,17),40,102,95,55,53,50,54,32,114,117,108,101,50,50,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,48),40,102,95,55,53,56,51,32,105,110,112,117,116,50,51,48,51,32,112,97,116,116,101,114,110,50,51,48,52,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,51,48,53,41};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,30),40,102,95,55,55,51,53,32,105,110,112,117,116,50,51,52,50,32,112,97,116,116,101,114,110,50,51,52,51,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,14),40,102,95,55,56,56,53,32,120,50,51,54,51,41,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,57),40,102,95,55,56,51,52,32,112,97,116,116,101,114,110,50,51,53,49,32,112,97,116,104,50,51,53,50,32,109,97,112,105,116,50,51,53,51,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,51,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,50,52,48,49,32,100,50,52,48,51,32,103,101,110,50,52,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,37),40,102,95,55,57,53,53,32,116,101,109,112,108,97,116,101,50,51,55,57,32,100,105,109,50,51,56,48,32,101,110,118,50,51,56,49,41,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,55),40,102,95,56,49,50,54,32,112,97,116,116,101,114,110,50,52,50,49,32,100,105,109,50,52,50,50,32,118,97,114,115,50,52,50,51,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,52,50,52,41,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,46),40,102,95,56,49,57,54,32,116,101,109,112,108,97,116,101,50,52,50,56,32,100,105,109,50,52,50,57,32,101,110,118,50,52,51,48,32,102,114,101,101,50,52,51,49,41,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,32),40,102,95,56,50,55,55,32,112,50,52,51,56,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,52,51,57,41};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,20),40,102,95,56,51,48,52,32,112,97,116,116,101,114,110,50,52,52,52,41,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,20),40,102,95,56,51,50,55,32,112,97,116,116,101,114,110,50,52,52,55,41,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,112,97,116,116,101,114,110,50,52,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,20),40,102,95,56,51,52,53,32,112,97,116,116,101,114,110,50,52,52,56,41,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,79),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,115,121,110,116,97,120,45,114,117,108,101,115,32,101,108,108,105,112,115,105,115,50,50,48,54,32,114,117,108,101,115,50,50,48,55,32,115,117,98,107,101,121,119,111,114,100,115,50,50,48,56,32,114,50,50,48,57,32,99,50,50,49,48,41,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,109,101,50,53,50,49,41,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,109,97,99,114,111,45,115,117,98,115,101,116,32,109,101,48,50,53,49,50,32,46,32,116,109,112,50,53,49,49,50,53,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,17),40,102,95,56,52,51,52,32,115,100,101,102,50,53,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,52,50,32,103,50,53,52,57,50,53,53,52,41,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,102,105,120,117,112,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,115,101,50,53,51,50,32,46,32,116,109,112,50,53,51,49,50,53,51,51,41,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,28),40,102,95,56,53,49,54,32,101,120,112,50,49,57,52,32,114,50,49,57,53,32,99,50,49,57,54,41,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,26),40,102,95,56,53,52,55,32,120,50,49,56,56,32,114,50,49,56,57,32,99,50,49,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,26),40,102,95,56,53,54,56,32,120,50,49,55,55,32,114,50,49,55,56,32,99,50,49,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,26),40,102,95,56,53,57,50,32,120,50,49,52,50,32,114,50,49,52,51,32,99,50,49,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,26),40,102,95,56,55,52,49,32,120,50,49,51,53,32,114,50,49,51,54,32,99,50,49,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,26),40,102,95,56,55,53,50,32,120,50,49,50,56,32,114,50,49,50,57,32,99,50,49,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,11),40,101,114,114,32,120,50,48,53,54,41,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,13),40,116,101,115,116,32,102,120,50,48,53,55,41,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,14),40,102,95,56,57,50,51,32,120,50,49,48,52,41,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,56,55,32,103,50,48,57,57,50,49,48,54,41};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,16),40,101,120,112,97,110,100,32,99,108,115,50,48,56,49,41};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,29),40,102,95,56,55,54,51,32,102,111,114,109,50,48,52,54,32,114,50,48,52,55,32,99,50,48,52,56,41,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,29),40,102,95,57,48,50,53,32,102,111,114,109,50,48,51,57,32,114,50,48,52,48,32,99,50,48,52,49,41,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,120,49,57,54,57,32,110,49,57,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,19),40,119,97,108,107,49,32,120,49,57,55,49,32,110,49,57,55,50,41,0,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,16),40,102,95,57,50,48,57,32,101,110,118,50,48,49,57,41};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,16),40,102,95,57,50,51,48,32,101,110,118,50,48,50,54,41};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,16),40,102,95,57,50,54,57,32,101,110,118,50,48,51,52,41};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,16),40,115,105,109,112,108,105,102,121,32,120,50,48,49,49,41};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,29),40,102,95,57,48,52,50,32,102,111,114,109,49,57,54,48,32,114,49,57,54,49,32,99,49,57,54,50,41,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,14),40,102,95,57,51,48,56,32,98,49,57,49,55,41,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,14),40,102,95,57,51,52,57,32,98,49,57,53,49,41,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,51,52,32,103,49,57,52,54,49,57,53,51,41};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,48,48,32,103,49,57,49,50,49,57,49,57,41};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,29),40,102,95,57,50,57,49,32,102,111,114,109,49,56,56,56,32,114,49,56,56,57,32,99,49,56,57,48,41,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,15),40,101,120,112,97,110,100,32,98,115,49,56,55,57,41,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,29),40,102,95,57,52,53,51,32,102,111,114,109,49,56,55,51,32,114,49,56,55,52,32,99,49,56,55,53,41,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,14),40,102,95,57,53,55,52,32,120,49,56,53,57,41,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,52,50,32,103,49,56,53,52,49,56,54,52,41};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,56,50,52,32,101,108,115,101,63,49,56,50,53,41,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,29),40,102,95,57,52,57,55,32,102,111,114,109,49,56,49,49,32,114,49,56,49,50,32,99,49,56,49,51,41,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,55,56,48,32,101,108,115,101,63,49,55,56,49,41,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,29),40,102,95,57,54,51,48,32,102,111,114,109,49,55,55,50,32,114,49,55,55,51,32,99,49,55,55,52,41,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,29),40,102,95,57,56,48,55,32,102,111,114,109,49,55,54,50,32,114,49,55,54,51,32,99,49,55,54,52,41,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,29),40,102,95,57,56,53,48,32,102,111,114,109,49,55,53,51,32,114,49,55,53,52,32,99,49,55,53,53,41,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,26),40,102,95,57,56,56,50,32,120,49,55,51,56,32,114,49,55,51,57,32,99,49,55,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,26),40,102,95,57,57,49,57,32,120,49,55,51,49,32,114,49,55,51,50,32,99,49,55,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,26),40,102,95,57,57,51,51,32,120,49,55,50,52,32,114,49,55,50,53,32,99,49,55,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,26),40,102,95,57,57,52,55,32,120,49,55,49,55,32,114,49,55,49,56,32,99,49,55,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,26),40,102,95,57,57,54,49,32,120,49,55,48,57,32,114,49,55,49,48,32,99,49,55,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,29),40,102,95,57,57,57,53,32,102,111,114,109,49,54,56,56,32,114,49,54,56,57,32,99,49,54,57,48,41,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,102,111,114,109,49,54,54,57,41,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,48,55,51,32,120,49,54,54,53,32,114,49,54,54,54,32,99,49,54,54,55,41,0,0,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,49,54,55,32,120,49,54,53,56,32,114,49,54,53,57,32,99,49,54,54,48,41,0,0,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,49,56,49,32,120,49,54,53,49,32,114,49,54,53,50,32,99,49,54,53,51,41,0,0,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,49,57,53,32,120,49,54,52,52,32,114,49,54,52,53,32,99,49,54,52,54,41,0,0,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,50,48,57,32,120,49,54,51,55,32,114,49,54,51,56,32,99,49,54,51,57,41,0,0,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,50,50,51,32,120,49,54,51,48,32,114,49,54,51,49,32,99,49,54,51,50,41,0,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,51),40,102,95,49,48,50,51,55,32,103,49,54,49,56,49,54,49,57,49,54,50,52,32,103,49,54,50,48,49,54,50,49,49,54,50,53,32,103,49,54,50,50,49,54,50,51,49,54,50,54,41,0,0,0,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,51),40,102,95,49,48,50,52,54,32,103,49,54,48,52,49,54,48,53,49,54,49,48,32,103,49,54,48,54,49,54,48,55,49,54,49,49,32,103,49,54,48,56,49,54,48,57,49,54,49,50,41,0,0,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,51),40,102,95,49,48,50,53,53,32,103,49,53,57,48,49,53,57,49,49,53,57,54,32,103,49,53,57,50,49,53,57,51,49,53,57,55,32,103,49,53,57,52,49,53,57,53,49,53,57,56,41,0,0,0,0,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_4557)
static void C_fcall f_4557(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9349)
static void C_ccall f_9349(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5796)
static void C_ccall f_5796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4569)
static void C_fcall f_4569(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9341)
static void C_fcall f_9341(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5798)
static void C_ccall f_5798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8284)
static void C_ccall f_8284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8277)
static void C_ccall f_8277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8275)
static void C_ccall f_8275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8666)
static void C_ccall f_8666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7856)
static void C_ccall f_7856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4248)
static void C_fcall f_4248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7885)
static void C_ccall f_7885(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8361)
static void C_ccall f_8361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8750)
static void C_ccall f_8750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_fcall f_3386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7862)
static void C_ccall f_7862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3354)
static void C_ccall f_3354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8340)
static void C_ccall f_8340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8752)
static void C_ccall f_8752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8354)
static void C_fcall f_8354(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_fcall f_3368(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9205)
static void C_ccall f_9205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8741)
static void C_ccall f_8741(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9201)
static void C_fcall f_9201(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9209)
static void C_ccall f_9209(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8739)
static void C_ccall f_8739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8733)
static void C_ccall f_8733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7875)
static void C_ccall f_7875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9226)
static void C_ccall f_9226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8721)
static void C_ccall f_8721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9230)
static void C_ccall f_9230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6743)
static void C_ccall f_6743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7650)
static void C_ccall f_7650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8304)
static void C_ccall f_8304(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7647)
static void C_ccall f_7647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7644)
static void C_ccall f_7644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6759)
static void C_ccall f_6759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6727)
static void C_ccall f_6727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9265)
static void C_ccall f_9265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9269)
static void C_ccall f_9269(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8345)
static void C_ccall f_8345(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9375)
static void C_fcall f_9375(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4218)
static void C_ccall f_4218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4210)
static void C_fcall f_4210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9373)
static void C_ccall f_9373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8334)
static void C_ccall f_8334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8327)
static void C_ccall f_8327(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5227)
static void C_ccall f_5227(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6774)
static void C_ccall f_6774(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5218)
static void C_ccall f_5218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4726)
static void C_ccall f_4726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4728)
static void C_fcall f_4728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4721)
static void C_ccall f_4721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9922)
static void C_ccall f_9922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9919)
static void C_ccall f_9919(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9917)
static void C_ccall f_9917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5264)
static void C_ccall f_5264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9904)
static void C_ccall f_9904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5253)
static void C_ccall f_5253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5250)
static void C_ccall f_5250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5935)
static void C_ccall f_5935(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5243)
static void C_ccall f_5243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5245)
static void C_ccall f_5245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6716)
static void C_ccall f_6716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5235)
static void C_ccall f_5235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5918)
static void C_fcall f_5918(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6803)
static void C_ccall f_6803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6806)
static void C_ccall f_6806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6808)
static void C_ccall f_6808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8798)
static void C_ccall f_8798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3934)
static void C_fcall f_3934(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8772)
static void C_ccall f_8772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8770)
static void C_ccall f_8770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5299)
static void C_fcall f_5299(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10193)
static void C_ccall f_10193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7557)
static void C_ccall f_7557(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7555)
static void C_ccall f_7555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8785)
static void C_fcall f_8785(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7552)
static void C_ccall f_7552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8763)
static void C_ccall f_8763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8761)
static void C_ccall f_8761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5286)
static void C_ccall f_5286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5288)
static void C_fcall f_5288(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7549)
static void C_ccall f_7549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8776)
static void C_fcall f_8776(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8774)
static void C_ccall f_8774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10195)
static void C_ccall f_10195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10198)
static void C_ccall f_10198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5922)
static void C_fcall f_5922(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7116)
static void C_ccall f_7116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6833)
static void C_ccall f_6833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7533)
static void C_fcall f_7533(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7119)
static void C_ccall f_7119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8768)
static void C_ccall f_8768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7103)
static void C_fcall f_7103(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6847)
static void C_ccall f_6847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7526)
static void C_ccall f_7526(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7690)
static void C_ccall f_7690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7515)
static void C_ccall f_7515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7696)
static void C_ccall f_7696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9280)
static void C_ccall f_9280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6785)
static void C_ccall f_6785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6789)
static void C_ccall f_6789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9289)
static void C_ccall f_9289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6827)
static void C_ccall f_6827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9294)
static void C_ccall f_9294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9291)
static void C_ccall f_9291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6799)
static void C_ccall f_6799(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5999)
static void C_fcall f_5999(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9541)
static void C_ccall f_9541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9543)
static void C_ccall f_9543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5993)
static void C_ccall f_5993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9553)
static void C_ccall f_9553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7135)
static void C_ccall f_7135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7138)
static void C_ccall f_7138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9993)
static void C_ccall f_9993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9995)
static void C_ccall f_9995(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9523)
static void C_fcall f_9523(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9521)
static void C_ccall f_9521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9555)
static void C_ccall f_9555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9558)
static void C_ccall f_9558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6861)
static void C_ccall f_6861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8118)
static void C_ccall f_8118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8554)
static void C_ccall f_8554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8552)
static void C_ccall f_8552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8550)
static void C_ccall f_8550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10129)
static void C_ccall f_10129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8547)
static void C_ccall f_8547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8545)
static void C_ccall f_8545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9535)
static void C_ccall f_9535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10137)
static void C_ccall f_10137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10135)
static void C_ccall f_10135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8533)
static void C_ccall f_8533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7614)
static void C_ccall f_7614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4632)
static void C_ccall f_4632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8126)
static void C_ccall f_8126(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9964)
static void C_ccall f_9964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9961)
static void C_ccall f_9961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8121)
static void C_ccall f_8121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9959)
static void C_ccall f_9959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8514)
static void C_ccall f_8514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9931)
static void C_ccall f_9931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9933)
static void C_ccall f_9933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8519)
static void C_ccall f_8519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8516)
static void C_ccall f_8516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8511)
static void C_ccall f_8511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8505)
static void C_ccall f_8505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7561)
static void C_ccall f_7561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8508)
static void C_ccall f_8508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9945)
static void C_ccall f_9945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7146)
static void C_ccall f_7146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8180)
static void C_ccall f_8180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8501)
static void C_ccall f_8501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9936)
static void C_ccall f_9936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3986)
static void C_ccall f_3986(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4674)
static void C_ccall f_4674(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9947)
static void C_ccall f_9947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5972)
static void C_ccall f_5972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3991)
static void C_ccall f_3991(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9972)
static void C_fcall f_9972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9950)
static void C_ccall f_9950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10170)
static void C_ccall f_10170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8151)
static void C_ccall f_8151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10165)
static void C_ccall f_10165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10167)
static void C_ccall f_10167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10181)
static void C_ccall f_10181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5420)
static void C_fcall f_5420(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8102)
static void C_ccall f_8102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10179)
static void C_ccall f_10179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10112)
static void C_ccall f_10112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8571)
static void C_ccall f_8571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8573)
static void C_ccall f_8573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10184)
static void C_ccall f_10184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10121)
static void C_ccall f_10121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8566)
static void C_ccall f_8566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8568)
static void C_ccall f_8568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8560)
static void C_ccall f_8560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8163)
static void C_ccall f_8163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10118)
static void C_ccall f_10118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_fcall f_5409(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4490)
static void C_fcall f_4490(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7192)
static void C_ccall f_7192(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3969)
static void C_ccall f_3969(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9586)
static void C_ccall f_9586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7188)
static void C_ccall f_7188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_fcall f_3973(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7184)
static void C_ccall f_7184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5142)
static void C_fcall f_5142(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8933)
static void C_fcall f_8933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8931)
static void C_ccall f_8931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9588)
static void C_fcall f_9588(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10207)
static void C_ccall f_10207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10209)
static void C_ccall f_10209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9805)
static void C_ccall f_9805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9807)
static void C_ccall f_9807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7583)
static void C_ccall f_7583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9570)
static void C_ccall f_9570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9574)
static void C_ccall f_9574(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5154)
static void C_fcall f_5154(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5187)
static void C_ccall f_5187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3821)
static void C_ccall f_3821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9827)
static void C_ccall f_9827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5181)
static void C_ccall f_5181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10237)
static void C_ccall f_10237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10235)
static void C_ccall f_10235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4473)
static void C_fcall f_4473(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10244)
static void C_ccall f_10244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10246)
static void C_ccall f_10246(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3845)
static void C_ccall f_3845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4419)
static void C_fcall f_4419(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10212)
static void C_ccall f_10212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8196)
static void C_ccall f_8196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8194)
static void C_ccall f_8194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10226)
static void C_ccall f_10226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10223)
static void C_ccall f_10223(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10221)
static void C_ccall f_10221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9500)
static void C_ccall f_9500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9510)
static void C_ccall f_9510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9512)
static void C_ccall f_9512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9506)
static void C_ccall f_9506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9508)
static void C_ccall f_9508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_fcall f_3536(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9885)
static void C_ccall f_9885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9880)
static void C_ccall f_9880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9882)
static void C_ccall f_9882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10255)
static void C_ccall f_10255(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7991)
static void C_ccall f_7991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7993)
static void C_ccall f_7993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10253)
static void C_ccall f_10253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7997)
static void C_ccall f_7997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8597)
static void C_ccall f_8597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8592)
static void C_ccall f_8592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8590)
static void C_ccall f_8590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5316)
static void C_ccall f_5316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9842)
static void C_ccall f_9842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9848)
static void C_ccall f_9848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7955)
static void C_ccall f_7955(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7950)
static void C_ccall f_7950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9850)
static void C_ccall f_9850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9877)
static void C_ccall f_9877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5451)
static void C_fcall f_5451(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7928)
static void C_ccall f_7928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7925)
static void C_ccall f_7925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7389)
static void C_ccall f_7389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7383)
static void C_ccall f_7383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8990)
static void C_ccall f_8990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7374)
static void C_ccall f_7374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3758)
static void C_fcall f_3758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3725)
static void C_fcall f_3725(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3576)
static void C_ccall f_3576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5496)
static void C_fcall f_5496(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8958)
static void C_ccall f_8958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5487)
static void C_fcall f_5487(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3867)
static void C_ccall f_3867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3879)
static void C_ccall f_3879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7397)
static void C_ccall f_7397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7393)
static void C_ccall f_7393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3741)
static void C_ccall f_3741(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3894)
static void C_ccall f_3894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8911)
static void C_fcall f_8911(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9732)
static void C_ccall f_9732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9730)
static void C_ccall f_9730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9716)
static void C_ccall f_9716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8923)
static void C_ccall f_8923(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4147)
static void C_fcall f_4147(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6327)
static void C_ccall f_6327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5367)
static void C_fcall f_5367(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4968)
static void C_fcall f_4968(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6306)
static void C_ccall f_6306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9753)
static void C_ccall f_9753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_fcall f_5330(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6118)
static void C_fcall f_6118(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4188)
static void C_fcall f_4188(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6613)
static void C_ccall f_6613(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6616)
static void C_ccall f_6616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6124)
static void C_ccall f_6124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6204)
static void C_ccall f_6204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6207)
static void C_ccall f_6207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6209)
static void C_fcall f_6209(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7351)
static void C_ccall f_7351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7359)
static void C_ccall f_7359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5360)
static void C_ccall f_5360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6162)
static void C_ccall f_6162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6160)
static void C_ccall f_6160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5378)
static void C_fcall f_5378(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6132)
static void C_fcall f_6132(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6667)
static void C_ccall f_6667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3604)
static void C_fcall f_3604(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6244)
static void C_ccall f_6244(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7739)
static void C_ccall f_7739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7735)
static void C_ccall f_7735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6147)
static void C_ccall f_6147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6143)
static void C_ccall f_6143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3774)
static void C_fcall f_3774(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3615)
static void C_fcall f_3615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6145)
static void C_ccall f_6145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7305)
static void C_ccall f_7305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6192)
static void C_ccall f_6192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6195)
static void C_ccall f_6195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7301)
static void C_ccall f_7301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4108)
static void C_ccall f_4108(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6222)
static void C_ccall f_6222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6225)
static void C_ccall f_6225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9630)
static void C_ccall f_9630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9639)
static void C_ccall f_9639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9635)
static void C_ccall f_9635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9637)
static void C_ccall f_9637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6176)
static void C_ccall f_6176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6174)
static void C_ccall f_6174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_6180)
static void C_ccall f_6180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6299)
static void C_fcall f_6299(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4303)
static void C_fcall f_4303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8448)
static void C_ccall f_8448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9656)
static void C_ccall f_9656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7343)
static void C_ccall f_7343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7341)
static void C_ccall f_7341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6395)
static void C_ccall f_6395(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7347)
static void C_ccall f_7347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7345)
static void C_ccall f_7345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7349)
static void C_ccall f_7349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6269)
static void C_ccall f_6269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9628)
static void C_ccall f_9628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7331)
static void C_ccall f_7331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7337)
static void C_ccall f_7337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7335)
static void C_ccall f_7335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8012)
static void C_ccall f_8012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7339)
static void C_ccall f_7339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8010)
static void C_fcall f_8010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4340)
static void C_ccall f_4340(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8008)
static void C_ccall f_8008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9772)
static void C_ccall f_9772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6426)
static void C_fcall f_6426(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6421)
static void C_fcall f_6421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7323)
static void C_ccall f_7323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7327)
static void C_ccall f_7327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10008)
static void C_ccall f_10008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9644)
static void C_fcall f_9644(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8413)
static void C_ccall f_8413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7313)
static void C_ccall f_7313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7311)
static void C_ccall f_7311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7317)
static void C_ccall f_7317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7319)
static void C_ccall f_7319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8027)
static void C_ccall f_8027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6401)
static C_word C_fcall f_6401(C_word t0);
C_noret_decl(f_8024)
static void C_ccall f_8024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8434)
static void C_ccall f_8434(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8433)
static void C_ccall f_8433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10038)
static void C_ccall f_10038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10036)
static void C_ccall f_10036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10034)
static void C_ccall f_10034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10032)
static void C_ccall f_10032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5661)
static void C_fcall f_5661(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8426)
static void C_ccall f_8426(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8426)
static void C_ccall f_8426r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6333)
static void C_ccall f_6333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7272)
static void C_ccall f_7272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5655)
static void C_fcall f_5655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6347)
static void C_fcall f_6347(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10014)
static void C_ccall f_10014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10010)
static void C_ccall f_10010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10012)
static void C_ccall f_10012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6315)
static void C_ccall f_6315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6311)
static void C_fcall f_6311(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10029)
static void C_ccall f_10029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10023)
static void C_ccall f_10023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10076)
static void C_ccall f_10076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7781)
static void C_ccall f_7781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10073)
static void C_ccall f_10073(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10071)
static void C_ccall f_10071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9701)
static void C_ccall f_9701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10081)
static void C_fcall f_10081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8030)
static void C_ccall f_8030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8032)
static void C_fcall f_8032(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7299)
static void C_ccall f_7299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7295)
static void C_ccall f_7295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7297)
static void C_ccall f_7297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7291)
static void C_ccall f_7291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7293)
static void C_ccall f_7293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7799)
static void C_ccall f_7799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8051)
static void C_fcall f_8051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7287)
static void C_ccall f_7287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7285)
static void C_ccall f_7285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7283)
static void C_ccall f_7283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3646)
static void C_fcall f_3646(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10099)
static void C_ccall f_10099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10095)
static void C_ccall f_10095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10097)
static void C_ccall f_10097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8479)
static void C_ccall f_8479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8470)
static void C_fcall f_8470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9123)
static void C_ccall f_9123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7707)
static void C_fcall f_7707(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9674)
static void C_ccall f_9674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9676)
static void C_ccall f_9676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9679)
static void C_ccall f_9679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8468)
static void C_ccall f_8468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3686)
static void C_fcall f_3686(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9102)
static void C_ccall f_9102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9693)
static void C_ccall f_9693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9699)
static void C_ccall f_9699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9662)
static void C_ccall f_9662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9664)
static void C_ccall f_9664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9167)
static void C_ccall f_9167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9158)
static void C_ccall f_9158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6464)
static void C_ccall f_6464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9132)
static void C_ccall f_9132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4388)
static void C_ccall f_4388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9141)
static void C_ccall f_9141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7263)
static void C_fcall f_7263(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6446)
static void C_fcall f_6446(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6441)
static void C_fcall f_6441(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9114)
static void C_ccall f_9114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9149)
static void C_ccall f_9149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8099)
static void C_ccall f_8099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7242)
static void C_ccall f_7242(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7247)
static void C_ccall f_7247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7245)
static void C_ccall f_7245(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9613)
static void C_ccall f_9613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9420)
static void C_fcall f_9420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9445)
static void C_ccall f_9445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9451)
static void C_ccall f_9451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9453)
static void C_ccall f_9453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9456)
static void C_ccall f_9456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4828)
static void C_ccall f_4828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5517)
static void C_fcall f_5517(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7234)
static void C_ccall f_7234(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4848)
static void C_fcall f_4848(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4846)
static void C_fcall f_4846(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5515)
static void C_ccall f_5515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7220)
static void C_ccall f_7220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7228)
static void C_ccall f_7228(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6918)
static void C_fcall f_6918(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8897)
static void C_ccall f_8897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7217)
static void C_ccall f_7217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8891)
static void C_ccall f_8891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7011)
static void C_ccall f_7011(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7451)
static void C_ccall f_7451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7445)
static void C_ccall f_7445(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7443)
static void C_ccall f_7443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6957)
static void C_ccall f_6957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7438)
static void C_ccall f_7438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7434)
static void C_ccall f_7434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7430)
static void C_ccall f_7430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8852)
static void C_ccall f_8852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5830)
static void C_ccall f_5830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7023)
static void C_ccall f_7023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7426)
static void C_ccall f_7426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7421)
static void C_ccall f_7421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5836)
static void C_ccall f_5836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3445)
static void C_fcall f_3445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6936)
static void C_ccall f_6936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9173)
static void C_ccall f_9173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7414)
static void C_ccall f_7414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7409)
static void C_ccall f_7409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7401)
static void C_ccall f_7401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7405)
static void C_ccall f_7405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9487)
static void C_ccall f_9487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8866)
static void C_ccall f_8866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9495)
static void C_ccall f_9495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9497)
static void C_ccall f_9497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6998)
static void C_ccall f_6998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8816)
static void C_ccall f_8816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9188)
static void C_ccall f_9188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9185)
static void C_ccall f_9185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9094)
static void C_ccall f_9094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6972)
static void C_fcall f_6972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8833)
static void C_ccall f_8833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7047)
static void C_ccall f_7047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6989)
static void C_ccall f_6989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5807)
static void C_ccall f_5807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8625)
static void C_ccall f_8625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8623)
static void C_ccall f_8623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8656)
static void C_ccall f_8656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7052)
static void C_ccall f_7052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8652)
static void C_ccall f_8652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8654)
static void C_ccall f_8654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8649)
static void C_ccall f_8649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9400)
static void C_ccall f_9400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7002)
static void C_ccall f_7002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4515)
static void C_fcall f_4515(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9073)
static void C_ccall f_9073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4511)
static void C_ccall f_4511(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7473)
static void C_ccall f_7473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7035)
static void C_ccall f_7035(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9076)
static void C_ccall f_9076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7479)
static void C_ccall f_7479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_fcall f_4886(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4019)
static void C_fcall f_4019(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7834)
static void C_ccall f_7834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6070)
static void C_fcall f_6070(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6961)
static void C_ccall f_6961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6964)
static void C_fcall f_6964(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6965)
static void C_ccall f_6965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4035)
static void C_fcall f_4035(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6969)
static void C_ccall f_6969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9465)
static void C_fcall f_9465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6052)
static void C_ccall f_6052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_fcall f_4005(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5762)
static void C_ccall f_5762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4812)
static void C_fcall f_4812(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8244)
static void C_ccall f_8244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8235)
static void C_ccall f_8235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6092)
static void C_ccall f_6092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8690)
static void C_fcall f_8690(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8387)
static void C_ccall f_8387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8261)
static void C_ccall f_8261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5712)
static void C_ccall f_5712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7079)
static C_word C_fcall f_7079(C_word t0,C_word t1);
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5700)
static void C_fcall f_5700(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9042)
static void C_ccall f_9042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9040)
static void C_ccall f_9040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9047)
static void C_ccall f_9047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9045)
static void C_ccall f_9045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9049)
static void C_ccall f_9049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9051)
static void C_fcall f_9051(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9058)
static void C_ccall f_9058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7490)
static void C_fcall f_7490(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9324)
static void C_ccall f_9324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9060)
static void C_fcall f_9060(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(C_expand_toplevel)
C_externexport void C_ccall C_expand_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9308)
static void C_ccall f_9308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5077)
static void C_fcall f_5077(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9303)
static void C_ccall f_9303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9006)
static void C_ccall f_9006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8380)
static void C_ccall f_8380(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8380)
static void C_ccall f_8380r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_fcall f_3395(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4530)
static void C_ccall f_4530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8395)
static void C_fcall f_8395(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8393)
static void C_ccall f_8393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4541)
static void C_fcall f_4541(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_9023)
static void C_ccall f_9023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9025)
static void C_ccall f_9025(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9028)
static void C_ccall f_9028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8603)
static void C_ccall f_8603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8605)
static void C_ccall f_8605(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_4557)
static void C_fcall trf_4557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4557(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4557(t0,t1);}

C_noret_decl(trf_4569)
static void C_fcall trf_4569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4569(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4569(t0,t1);}

C_noret_decl(trf_9341)
static void C_fcall trf_9341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9341(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9341(t0,t1);}

C_noret_decl(trf_4248)
static void C_fcall trf_4248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4248(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4248(t0,t1,t2);}

C_noret_decl(trf_3386)
static void C_fcall trf_3386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3386(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3386(t0,t1,t2);}

C_noret_decl(trf_8354)
static void C_fcall trf_8354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8354(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8354(t0,t1,t2);}

C_noret_decl(trf_3368)
static void C_fcall trf_3368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3368(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3368(t0,t1,t2);}

C_noret_decl(trf_9201)
static void C_fcall trf_9201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9201(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9201(t0,t1,t2);}

C_noret_decl(trf_9375)
static void C_fcall trf_9375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9375(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9375(t0,t1,t2);}

C_noret_decl(trf_4210)
static void C_fcall trf_4210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4210(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4210(t0,t1);}

C_noret_decl(trf_4728)
static void C_fcall trf_4728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4728(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4728(t0,t1,t2);}

C_noret_decl(trf_5918)
static void C_fcall trf_5918(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5918(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5918(t0,t1,t2,t3);}

C_noret_decl(trf_3934)
static void C_fcall trf_3934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3934(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3934(t0,t1,t2);}

C_noret_decl(trf_5299)
static void C_fcall trf_5299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5299(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5299(t0,t1);}

C_noret_decl(trf_8785)
static void C_fcall trf_8785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8785(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8785(t0,t1,t2);}

C_noret_decl(trf_5288)
static void C_fcall trf_5288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5288(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5288(t0,t1,t2,t3);}

C_noret_decl(trf_8776)
static void C_fcall trf_8776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8776(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8776(t0,t1,t2);}

C_noret_decl(trf_5922)
static void C_fcall trf_5922(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5922(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5922(t0,t1,t2,t3);}

C_noret_decl(trf_7533)
static void C_fcall trf_7533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7533(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7533(t0,t1);}

C_noret_decl(trf_7103)
static void C_fcall trf_7103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7103(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7103(t0,t1,t2);}

C_noret_decl(trf_5999)
static void C_fcall trf_5999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5999(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5999(t0,t1,t2,t3);}

C_noret_decl(trf_9523)
static void C_fcall trf_9523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9523(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9523(t0,t1,t2,t3);}

C_noret_decl(trf_9972)
static void C_fcall trf_9972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9972(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9972(t0,t1);}

C_noret_decl(trf_5420)
static void C_fcall trf_5420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5420(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5420(t0,t1);}

C_noret_decl(trf_5409)
static void C_fcall trf_5409(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5409(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5409(t0,t1,t2,t3);}

C_noret_decl(trf_4490)
static void C_fcall trf_4490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4490(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4490(t0,t1);}

C_noret_decl(trf_3973)
static void C_fcall trf_3973(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3973(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3973(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5142)
static void C_fcall trf_5142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5142(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5142(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8933)
static void C_fcall trf_8933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8933(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8933(t0,t1,t2);}

C_noret_decl(trf_9588)
static void C_fcall trf_9588(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9588(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9588(t0,t1,t2);}

C_noret_decl(trf_5154)
static void C_fcall trf_5154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5154(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5154(t0,t1,t2,t3);}

C_noret_decl(trf_4473)
static void C_fcall trf_4473(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4473(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4473(t0,t1,t2);}

C_noret_decl(trf_4419)
static void C_fcall trf_4419(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4419(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4419(t0,t1,t2);}

C_noret_decl(trf_3536)
static void C_fcall trf_3536(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3536(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3536(t0,t1,t2);}

C_noret_decl(trf_5451)
static void C_fcall trf_5451(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5451(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5451(t0,t1,t2);}

C_noret_decl(trf_3758)
static void C_fcall trf_3758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3758(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3758(t0,t1,t2);}

C_noret_decl(trf_3725)
static void C_fcall trf_3725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3725(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3725(t0,t1,t2);}

C_noret_decl(trf_5496)
static void C_fcall trf_5496(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5496(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5496(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5487)
static void C_fcall trf_5487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5487(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5487(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8911)
static void C_fcall trf_8911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8911(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8911(t0,t1,t2);}

C_noret_decl(trf_4147)
static void C_fcall trf_4147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4147(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4147(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5367)
static void C_fcall trf_5367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5367(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5367(t0,t1,t2,t3);}

C_noret_decl(trf_4968)
static void C_fcall trf_4968(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4968(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4968(t0,t1);}

C_noret_decl(trf_5330)
static void C_fcall trf_5330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5330(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5330(t0,t1,t2);}

C_noret_decl(trf_6118)
static void C_fcall trf_6118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6118(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6118(t0,t1,t2);}

C_noret_decl(trf_4188)
static void C_fcall trf_4188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4188(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4188(t0,t1,t2);}

C_noret_decl(trf_6209)
static void C_fcall trf_6209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6209(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6209(t0,t1,t2);}

C_noret_decl(trf_5378)
static void C_fcall trf_5378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5378(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5378(t0,t1);}

C_noret_decl(trf_6132)
static void C_fcall trf_6132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6132(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6132(t0,t1,t2);}

C_noret_decl(trf_3604)
static void C_fcall trf_3604(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3604(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3604(t0,t1,t2,t3);}

C_noret_decl(trf_3774)
static void C_fcall trf_3774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3774(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3774(t0,t1);}

C_noret_decl(trf_3615)
static void C_fcall trf_3615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3615(t0,t1);}

C_noret_decl(trf_6299)
static void C_fcall trf_6299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6299(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6299(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4303)
static void C_fcall trf_4303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4303(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4303(t0,t1,t2);}

C_noret_decl(trf_8010)
static void C_fcall trf_8010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8010(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8010(t0,t1);}

C_noret_decl(trf_6426)
static void C_fcall trf_6426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6426(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6426(t0,t1,t2,t3);}

C_noret_decl(trf_6421)
static void C_fcall trf_6421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6421(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6421(t0,t1);}

C_noret_decl(trf_9644)
static void C_fcall trf_9644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9644(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9644(t0,t1,t2,t3);}

C_noret_decl(trf_5661)
static void C_fcall trf_5661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5661(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5661(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5655)
static void C_fcall trf_5655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5655(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5655(t0,t1,t2);}

C_noret_decl(trf_6347)
static void C_fcall trf_6347(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6347(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6347(t0,t1,t2);}

C_noret_decl(trf_6311)
static void C_fcall trf_6311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6311(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6311(t0,t1,t2);}

C_noret_decl(trf_10081)
static void C_fcall trf_10081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10081(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10081(t0,t1,t2);}

C_noret_decl(trf_8032)
static void C_fcall trf_8032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8032(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8032(t0,t1,t2,t3);}

C_noret_decl(trf_8051)
static void C_fcall trf_8051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8051(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8051(t0,t1);}

C_noret_decl(trf_3646)
static void C_fcall trf_3646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3646(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3646(t0,t1,t2,t3);}

C_noret_decl(trf_8470)
static void C_fcall trf_8470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8470(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8470(t0,t1,t2);}

C_noret_decl(trf_7707)
static void C_fcall trf_7707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7707(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7707(t0,t1);}

C_noret_decl(trf_3686)
static void C_fcall trf_3686(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3686(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3686(t0,t1,t2);}

C_noret_decl(trf_7263)
static void C_fcall trf_7263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7263(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7263(t0,t1,t2);}

C_noret_decl(trf_6446)
static void C_fcall trf_6446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6446(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6446(t0,t1,t2,t3);}

C_noret_decl(trf_6441)
static void C_fcall trf_6441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6441(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6441(t0,t1);}

C_noret_decl(trf_9420)
static void C_fcall trf_9420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9420(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9420(t0,t1,t2);}

C_noret_decl(trf_5517)
static void C_fcall trf_5517(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5517(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5517(t0,t1,t2);}

C_noret_decl(trf_4848)
static void C_fcall trf_4848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4848(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4848(t0,t1);}

C_noret_decl(trf_4846)
static void C_fcall trf_4846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4846(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4846(t0,t1);}

C_noret_decl(trf_6918)
static void C_fcall trf_6918(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6918(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6918(t0,t1,t2,t3);}

C_noret_decl(trf_3445)
static void C_fcall trf_3445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3445(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3445(t0,t1,t2);}

C_noret_decl(trf_6972)
static void C_fcall trf_6972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6972(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6972(t0,t1);}

C_noret_decl(trf_4515)
static void C_fcall trf_4515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4515(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4515(t0,t1,t2);}

C_noret_decl(trf_4886)
static void C_fcall trf_4886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4886(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4886(t0,t1);}

C_noret_decl(trf_4019)
static void C_fcall trf_4019(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4019(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4019(t0,t1,t2);}

C_noret_decl(trf_6070)
static void C_fcall trf_6070(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6070(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6070(t0,t1,t2);}

C_noret_decl(trf_6964)
static void C_fcall trf_6964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6964(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6964(t0,t1);}

C_noret_decl(trf_4035)
static void C_fcall trf_4035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4035(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4035(t0,t1);}

C_noret_decl(trf_9465)
static void C_fcall trf_9465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9465(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9465(t0,t1,t2);}

C_noret_decl(trf_4005)
static void C_fcall trf_4005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4005(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4005(t0,t1);}

C_noret_decl(trf_4812)
static void C_fcall trf_4812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4812(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4812(t0,t1);}

C_noret_decl(trf_8690)
static void C_fcall trf_8690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8690(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8690(t0,t1);}

C_noret_decl(trf_5700)
static void C_fcall trf_5700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5700(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5700(t0,t1,t2);}

C_noret_decl(trf_9051)
static void C_fcall trf_9051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9051(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9051(t0,t1,t2,t3);}

C_noret_decl(trf_7490)
static void C_fcall trf_7490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7490(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7490(t0,t1,t2);}

C_noret_decl(trf_9060)
static void C_fcall trf_9060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9060(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9060(t0,t1,t2,t3);}

C_noret_decl(trf_5077)
static void C_fcall trf_5077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5077(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5077(t0,t1,t2,t3);}

C_noret_decl(trf_3395)
static void C_fcall trf_3395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3395(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3395(t0,t1);}

C_noret_decl(trf_8395)
static void C_fcall trf_8395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8395(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8395(t0,t1,t2);}

C_noret_decl(trf_4541)
static void C_fcall trf_4541(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4541(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4541(t0,t1,t2,t3,t4,t5,t6);}

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

/* k4556 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4557(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4557,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=t1;
/* expand.scm:353: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t3)){
t4=t2;
f_4569(t4,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[9]))){
t4=C_i_cdr(((C_word*)t0)[2]);
t5=t2;
f_4569(t5,C_i_nullp(t4));}
else{
t4=t2;
f_4569(t4,C_SCHEME_FALSE);}}}}

/* k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[8]))){
t3=t2;
f_4557(t3,((C_word*)t0)[10]);}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4674,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4723,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t2,a[5]=t6,a[6]=t4,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:366: reverse */
t9=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[8]);}}

/* f_9349 in k9340 in k9322 in k9302 in k9293 */
static void C_ccall f_9349(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9349,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_i_cdr(t3);
t5=C_eqp(t4,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_i_cdr(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_i_car(t8));}}

/* k5794 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5796,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:561: ##sys#check-syntax */
t3=*((C_word*)lf[55]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[97],((C_word*)t0)[9],lf[112],((C_word*)t0)[10]);}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5807,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
/* expand.scm:563: comp */
t3=((C_word*)((C_word*)t0)[16])[1];
f_5077(t3,t2,lf[98],((C_word*)t0)[13]);}}

/* k4567 in k4556 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4569(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4569,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4593,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:371: cadar */
t4=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=((C_word*)((C_word*)t0)[9])[1];
t3=(C_truep(t2)?C_SCHEME_FALSE:C_i_nullp(((C_word*)t0)[10]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4614,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:375: reverse */
t5=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4629,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4632,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:378: reverse */
t6=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}}

/* k9340 in k9322 in k9302 in k9293 */
static void C_fcall f_9341(C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9341,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9349,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9373,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9375,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,a[6]=((C_word)li180),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_9375(t11,t7,((C_word*)t0)[7]);}

/* k5797 in k5794 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:562: fini/syntax */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5487(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k8282 */
static void C_ccall f_8284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
/* synrules.scm:288: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[211],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
/* synrules.scm:290: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[212],((C_word*)t0)[4]);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_8277 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_8277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8277,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8284,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:285: segment-template? */
t5=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t2);}

/* k8274 in k8233 */
static void C_ccall f_8275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:281: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k4592 in k4567 in k4556 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4593,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[6],t5);
t7=C_a_i_list(&a,1,t6);
/* expand.scm:353: values */
C_values(4,0,((C_word*)t0)[7],((C_word*)t0)[8],t7);}

/* k8665 in k8601 in k8596 */
static void C_ccall f_8666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8666,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_eqp(lf[245],t1);
t4=(C_truep(t3)?C_SCHEME_TRUE:t1);
t5=C_i_cdddr(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8690,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_cdr(t5);
if(C_truep(C_i_nullp(t7))){
t8=C_u_i_car(t5);
t9=t6;
f_8690(t9,C_i_stringp(t8));}
else{
t8=t6;
f_8690(t8,C_SCHEME_FALSE);}}
else{
t7=t6;
f_8690(t7,C_SCHEME_FALSE);}}

/* k7855 */
static void C_ccall f_7856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7856,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list1(&a,1,t2));}

/* map-loop620 in k4296 in k4227 in k4217 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4248(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4248,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k4244 in k4296 in k4227 in k4217 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4246,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[54],t2);
/* expand.scm:277: values */
C_values(4,0,((C_word*)t0)[3],t3,C_SCHEME_TRUE);}

/* f_7885 in k7860 */
static void C_ccall f_7885(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7885,3,t0,t1,t2);}
t3=C_eqp(((C_word*)((C_word*)t0)[2])[1],t2);
if(C_truep(t3)){
/* synrules.scm:184: mapit */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,((C_word*)t0)[4]);}
else{
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],t4,t2);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],t5,((C_word*)t0)[4]);
/* synrules.scm:184: mapit */
t7=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t1,t6);}}

/* k8359 in loop */
static void C_ccall f_8361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
/* synrules.scm:311: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8354(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_3377 in lookup in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3377,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k8749 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in ... */
static void C_ccall f_8750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1336: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[259],C_SCHEME_END_OF_LIST,t1);}

/* macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3386(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3386,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3392,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:76: ##sys#qualified-symbol? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),t4,t2);}

/* k3379 in lookup in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:C_SCHEME_FALSE));}

/* k7860 */
static void C_ccall f_7862(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7862,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_i_length(t2);
t4=C_eqp(t3,C_fix(0));
t5=(C_truep(t4)?((C_word*)t0)[3]:C_a_i_list(&a,3,lf[206],((C_word*)t0)[3],t3));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7872,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7885,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word)li141),tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:181: process-pattern */
t10=((C_word*)((C_word*)t0)[5])[1];
((C_proc6)C_fast_retrieve_proc(t10))(6,t10,t6,t8,((C_word*)((C_word*)t0)[7])[1],t9,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7925,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[11])[1],((C_word*)t0)[3]);
/* synrules.scm:192: process-pattern */
t6=((C_word*)((C_word*)t0)[5])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t2,t4,t5,((C_word*)t0)[6],C_SCHEME_FALSE);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7950,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:195: vector->list */
t3=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}}}

/* k3352 */
static void C_ccall f_3354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3354,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#features ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:64: make-parameter */
t4=*((C_word*)lf[230]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_END_OF_LIST);}

/* k3356 in k3352 */
static void C_ccall f_3358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3358,2,t0,t1);}
t2=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#current-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:65: make-parameter */
t4=*((C_word*)lf[230]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_END_OF_LIST);}

/* k8339 in k8332 */
static void C_ccall f_8340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(C_fix(1),t1));}

/* f_8752 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in ... */
static void C_ccall f_8752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8752,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[258],t5,C_SCHEME_FALSE));}

/* loop */
static void C_fcall f_8354(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8354,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8361,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
/* synrules.scm:310: ellipsis? */
t6=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t3,t5);}
else{
t4=t3;
f_8361(2,t4,C_SCHEME_FALSE);}}

/* k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3366(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3366,2,t0,t1);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#active-eval-environment ...) */,t1);
t3=C_mutate(&lf[4] /* (set! lookup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3368,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[6] /* (set! macro-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3386,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#strip-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3438,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[12]+1 /* (set! strip-syntax ...) */,*((C_word*)lf[10]+1));
t7=C_mutate((C_word*)lf[13]+1 /* (set! ##sys#extend-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3563,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[17]+1 /* (set! ##sys#globalize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3719,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3800,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:153: make-parameter */
t10=*((C_word*)lf[230]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,C_SCHEME_END_OF_LIST);}

/* k3360 in k3356 in k3352 */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3362,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#current-meta-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:68: make-parameter */
t4=*((C_word*)lf[230]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[1]+1));}

/* lookup in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3368(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3368,NULL,3,t1,t2,t3);}
t4=C_u_i_assq(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_cdr(t4));}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3377,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3381,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:72: g218 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,lf[5]);}}

/* k9204 in simplify in k9048 in k9046 in k9044 */
static void C_ccall f_9205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9205,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9209,a[2]=((C_word*)t0)[2],a[3]=((C_word)li173),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1226: g2017 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1261: match-expression */
f_5918(t2,((C_word*)t0)[4],lf[279],lf[280]);}}

/* f_8741 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in ... */
static void C_ccall f_8741(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8741,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[258],t5,C_SCHEME_TRUE));}

/* simplify in k9048 in k9046 in k9044 */
static void C_fcall f_9201(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9201,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9205,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1259: match-expression */
f_5918(t3,t2,lf[281],lf[282]);}

/* f_9209 in k9204 in simplify in k9048 in k9046 in k9044 */
static void C_ccall f_9209(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9209,3,t0,t1,t2);}
t3=C_i_assq(lf[274],t2);
t4=C_i_cdr(t3);
t5=C_a_i_list(&a,2,lf[275],t4);
/* expand.scm:1260: simplify */
t6=((C_word*)((C_word*)t0)[2])[1];
f_9201(t6,t1,t5);}

/* k4296 in k4227 in k4217 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4298,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[51],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,3,lf[52],t6,((C_word*)t0)[3]);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=*((C_word*)lf[53]+1);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4246,a[2]=t7,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4248,a[2]=t11,a[3]=t15,a[4]=t9,a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_4248(t17,t13,((C_word*)t0)[5]);}

/* f_4290 in k4227 in k4217 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4290,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}

/* k8738 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in ... */
static void C_ccall f_8739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1344: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[257],C_SCHEME_END_OF_LIST,t1);}

/* k8732 in k8596 */
static void C_ccall f_8733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1359: c */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],t1,t2);}

/* k7874 in k7871 in k7860 */
static void C_ccall f_7875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:180: append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k7871 in k7860 */
static void C_ccall f_7872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7875,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[207],((C_word*)t0)[4],((C_word*)t0)[5]);
/* synrules.scm:189: process-pattern */
t5=((C_word*)((C_word*)t0)[6])[1];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t2,t3,t4,((C_word*)t0)[7],C_SCHEME_TRUE);}

/* k9225 in k9204 in simplify in k9048 in k9046 in k9044 */
static void C_ccall f_9226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9226,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li174),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1226: g2024 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9265,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1268: match-expression */
f_5918(t2,((C_word*)t0)[3],lf[277],lf[278]);}}

/* k8720 in k8601 in k8596 */
static void C_ccall f_8721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1399: ##sys#validate-exports */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[239]+1)))(4,*((C_word*)lf[239]+1),((C_word*)t0)[2],t1,lf[244]);}

/* f_9230 in k9225 in k9204 in simplify in k9048 in k9046 in k9044 */
static void C_ccall f_9230(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9230,3,t0,t1,t2);}
t3=C_i_assq(lf[276],t2);
t4=C_i_length(t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(32)))){
t5=C_i_assq(lf[274],t2);
t6=C_i_cdr(t5);
t7=C_i_cdr(t3);
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,lf[275],t8);
/* expand.scm:1265: simplify */
t10=((C_word*)((C_word*)t0)[2])[1];
f_9201(t10,t1,t9);}
else{
t5=((C_word*)t0)[3];
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k6742 in k6739 in rename in k6724 */
static void C_ccall f_6743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6743,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6739 in rename in k6724 */
static void C_ccall f_6740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6743,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* expand.scm:780: rename */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6727(3,t5,t2,t4);}

/* k7649 in k7646 in k7612 */
static void C_ccall f_7650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1439: ##sys#append */
t2=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_8304 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_8304(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8304,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(t2);
/* synrules.scm:296: ellipsis? */
t6=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t1,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k7646 in k7612 */
static void C_ccall f_7647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7650,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t4=((C_word*)t0)[5];
t5=C_u_i_cdr(t4);
/* synrules.scm:142: process-match */
t6=((C_word*)((C_word*)t0)[6])[1];
((C_proc5)C_fast_retrieve_proc(t6))(5,t6,t2,t3,t5,C_SCHEME_FALSE);}

/* k7643 in k7612 */
static void C_ccall f_7644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7644,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,1,t4));}

/* k6758 in rename in k6724 */
static void C_ccall f_6759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:782: list->vector */
t2=*((C_word*)lf[176]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* rename in k6724 */
static void C_ccall f_6727(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(7);
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)tr3,(void*)f_6727,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6740,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:780: rename */
t13=t3;
t14=t5;
t1=t13;
t2=t14;
c=3;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6759,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6762,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:782: vector->list */
t5=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6774,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:775: g1377 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6785,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:788: lookup */
f_3368(t4,t2,((C_word*)t0)[4]);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}}

/* k6724 */
static void C_ccall f_6725(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6725,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6727,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6861,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7079,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7103,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word)li125),tmp=(C_word)a,a+=8,tmp));
if(C_truep(((C_word*)t0)[5])){
/* expand.scm:888: handler */
t14=((C_word*)t0)[6];
((C_proc5)C_fast_retrieve_proc(t14))(5,t14,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t3)[1],((C_word*)t5)[1]);}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7217,a[2]=t9,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7220,a[2]=((C_word*)t0)[6],a[3]=t14,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:894: rename */
t16=((C_word*)t3)[1];
f_6727(3,t16,t15,((C_word*)t0)[8]);}}

/* f_6722 in make-er/ir-transformer in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6722,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6725,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t3))){
t8=t7;
f_6725(2,t8,C_SCHEME_UNDEFINED);}
else{
/* expand.scm:775: ##sys#error */
t8=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,lf[180],t3);}}

/* k9264 in k9225 in k9204 in simplify in k9048 in k9046 in k9044 */
static void C_ccall f_9265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9265,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9269,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1226: g2032 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_9269 in k9264 in k9225 in k9204 in simplify in k9048 in k9046 in k9044 */
static void C_ccall f_9269(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9269,3,t0,t1,t2);}
t3=C_i_assq(lf[274],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}

/* k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4205,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4210,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_pairp(((C_word*)t4)[1]))){
t6=t5;
f_4210(t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4388,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4394,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:270: ##sys#macro-environment */
t8=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* f_8345 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_8345(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8345,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8354,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li150),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8354(t7,t1,t3);}

/* map-loop1934 in k9340 in k9322 in k9302 in k9293 */
static void C_fcall f_9375(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9375,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9400,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1216: g1940 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4217 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4218,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:275: ##sys#check-syntax */
t4=*((C_word*)lf[55]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t3,lf[56],((C_word*)t0)[2],lf[57],C_SCHEME_FALSE,((C_word*)t0)[4]);}
else{
/* expand.scm:286: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4210(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4210,NULL,2,t0,t1);}
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[50]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4218,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:272: ##sys#check-syntax */
t4=*((C_word*)lf[55]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t3,lf[56],((C_word*)t0)[3],lf[58],C_SCHEME_FALSE,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[11])){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4378,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:287: g649 */
t5=t4;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)((C_word*)t0)[2])[1],lf[60]);}
else{
t4=t3;
f_4336(2,t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4336(2,t4,C_SCHEME_FALSE);}}}

/* k9371 in k9340 in k9322 in k9302 in k9293 */
static void C_ccall f_9373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9373,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[54],t2);
t4=C_a_i_list(&a,3,lf[99],((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,4,lf[286],((C_word*)t0)[4],((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[50],((C_word*)t0)[2],((C_word*)t0)[7],t5));}

/* k8332 */
static void C_ccall f_8334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8334,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* synrules.scm:302: segment-depth */
t4=((C_word*)((C_word*)t0)[4])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}}

/* k4227 in k4217 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4228(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4228,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4290,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(t2,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4303,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4303(t13,t9,t2);}

/* k6761 in rename in k6724 */
static void C_ccall f_6762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:782: rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6727(3,t2,((C_word*)t0)[3],t1);}

/* f_8327 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_8327(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8327,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8334,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:301: segment-template? */
t4=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* f_5227 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5227(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5227,3,t0,t1,t2);}
t3=C_a_i_list(&a,1,lf[100]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,t2,t3));}

/* f_6774 in rename in k6724 */
static void C_ccall f_6774(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6774,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_cdr(t2));}

/* k4717 */
static void C_ccall f_4718(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4718,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[72],t1);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_truep(t3)?t3:((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t6))){
t7=((C_word*)t0)[4];
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=C_a_i_cons(&a,2,lf[73],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t4,t11);
t13=C_a_i_cons(&a,2,t2,t12);
t14=C_a_i_cons(&a,2,lf[74],t13);
t15=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list(&a,2,((C_word*)t0)[6],t14));}
else{
t7=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_a_i_cons(&a,2,lf[74],t8);
t10=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,2,((C_word*)t0)[6],t9));}}

/* k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5218(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5218,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5227,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5235,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t5,a[9]=t3,a[10]=t6,tmp=(C_word)a,a+=11,tmp);
C_apply(5,0,t7,*((C_word*)lf[71]+1),t1,((C_word*)t0)[5]);}

/* k4724 in k4722 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4726,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
f_4557(t4,C_a_i_list(&a,1,t3));}

/* map-loop746 in k4722 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4728,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4753,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:359: g752 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4720 */
static void C_ccall f_4721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(t1,C_fix(1));
/* expand.scm:339: string->keyword */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k4722 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4728,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4728(t6,t2,t1);}

/* k5206 in loop in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5172(2,t2,t1);}
else{
/* expand.scm:469: comp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5077(t2,((C_word*)t0)[2],lf[98],((C_word*)t0)[4]);}}

/* k9921 */
static void C_ccall f_9922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9922,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[104],t2));}

/* f_9919 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9919(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9919,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9922,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1054: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[309],t2,lf[310]);}

/* k9916 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1049: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[309],C_SCHEME_END_OF_LIST,t1);}

/* k4613 in k4567 in k4556 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4614,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:353: values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[6],t5);}

/* k5262 */
static void C_ccall f_5264(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5264,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[73],C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5278,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[3];
t9=C_i_check_list_2(t1,lf[16]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5286,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5288,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,a[6]=((C_word)li70),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_5288(t14,t10,t8,t1);}

/* k9903 in k9884 */
static void C_ccall f_9904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9904,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4628 in k4567 in k4556 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4629,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:353: values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[6],t5);}

/* k5251 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5253(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5256,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5258,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5360,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t4,a[6]=t7,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:490: reverse */
t9=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[5]);}

/* k5255 in k5251 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:447: ##sys#append */
t2=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5250,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5409,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li74),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5409(t6,t2,((C_word*)t0)[9],t1);}

/* k4752 in map-loop746 in k4722 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4753(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4753,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4728(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4728(t6,((C_word*)t0)[5],t5);}}

/* f_5258 in k5251 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5258,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[8]+1);
t9=t2;
t10=C_i_check_list_2(t9,lf[16]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5264,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5330,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,a[6]=((C_word)li71),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_5330(t15,t11,t9);}

/* f_5935 in mwalk in match-expression in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5935(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5935,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_equalp(((C_word*)t0)[2],t3));}

/* k5242 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5243,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[50],t2));}

/* f_5245 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5245,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[101],t2,t3));}

/* k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5243,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5245,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[3];
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5250,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=t4,a[8]=t7,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
/* expand.scm:480: reverse */
t10=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[7]);}

/* make-er/ir-transformer in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6716,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6722,a[2]=t3,a[3]=t2,a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record2(&a,2,lf[24],t4));}

/* k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5235,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[16]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5451,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word)li75),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5451(t7,t3,t1);}

/* match-expression in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5918(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5918,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5922,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5993,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:596: mwalk */
t11=((C_word*)t8)[1];
f_5922(t11,t10,t2,t3);}

/* k3928 in unregister-macro in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:187: ##sys#macro-environment */
t2=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* ##sys#unregister-macro in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3922(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3922,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3929,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3932,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:189: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6801 */
static void C_ccall f_6803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_6806(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6827,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:795: g1400 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[6],lf[178]);}}

/* k6804 in k6801 */
static void C_ccall f_6806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6806,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:796: macro-alias */
f_3386(t2,((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[6]);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[6]);}}

/* k6807 in k6804 in k6801 */
static void C_ccall f_6808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6808,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* k8797 in test in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1297: ##sys#feature? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[262]+1)))(3,*((C_word*)lf[262]+1),((C_word*)t0)[2],t1);}

/* loop in k3931 in unregister-macro in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3934(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3934,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_u_i_cdr(t5));}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3956,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:192: loop */
t12=t7;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}}

/* k3931 in unregister-macro in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3932,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3934,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3934(t5,((C_word*)t0)[3],t1);}

/* k8771 in k8769 in k8767 */
static void C_ccall f_8772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1291: r */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[225]);}

/* k8769 in k8767 */
static void C_ccall f_8770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1290: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[222]);}

/* k5298 in k5315 in map-loop1015 in k5262 */
static void C_fcall f_5299(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_5288(t5,((C_word*)t0)[7],t3,t4);}

/* k10192 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:948: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[135],C_SCHEME_END_OF_LIST,t1);}

/* f_7557 in k7560 in k7531 */
static void C_ccall f_7557(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7557,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7554 in k7548 in k7560 in k7531 */
static void C_ccall f_7555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:124: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),t1);}

/* test in k8773 in k8771 in k8769 in k8767 */
static void C_fcall f_8785(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8785,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8798,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1297: ##sys#strip-syntax */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8816,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1302: c */
t7=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[2],t3);}
else{
/* expand.scm:1298: err */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8776(t3,t1,t2);}}}

/* k7551 in k7548 in k7560 in k7531 */
static void C_ccall f_7552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7552,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,((C_word*)t0)[5],t2));}

/* f_8763 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in ... */
static void C_ccall f_8763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8763,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8768,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1288: r */
t7=t3;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,lf[216]);}

/* k8760 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in ... */
static void C_ccall f_8761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1282: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[260],C_SCHEME_END_OF_LIST,t1);}

/* k5284 in k5262 */
static void C_ccall f_5286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5286,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[73],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[102],((C_word*)t0)[4],t3));}

/* map-loop1015 in k5262 */
static void C_fcall f_5288(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5288,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5316,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:487: g1021 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7548 in k7560 in k7531 */
static void C_ccall f_7549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7552,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7555,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:126: meta-variables */
t4=((C_word*)((C_word*)t0)[7])[1];
((C_proc6)C_fast_retrieve_proc(t4))(6,t4,t3,((C_word*)t0)[8],C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* err in k8773 in k8771 in k8769 in k8767 */
static void C_fcall f_8776(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8776,NULL,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,lf[260],((C_word*)t0)[2]);
/* expand.scm:1293: ##sys#error */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[261],t2,t3);}

/* k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8774(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8774,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8776,a[2]=((C_word*)t0)[2],a[3]=((C_word)li164),tmp=(C_word)a,a+=4,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8785,a[2]=t1,a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li165),tmp=(C_word)a,a+=9,tmp));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8911,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word)li168),tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_8911(t11,((C_word*)t0)[7],((C_word*)t0)[2]);}

/* f_10195 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10195,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10198,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:953: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[135],t2,lf[332]);}

/* k10197 */
static void C_ccall f_10198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10198,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[204],t2));}

/* mwalk in match-expression in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5922(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5922,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5972,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=C_i_car(t3);
/* expand.scm:593: mwalk */
t14=t4;
t15=t6;
t16=t7;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=C_i_assq(t3,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5935,a[2]=t2,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:587: g1174 */
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t4);}
else{
if(C_truep(C_i_memq(t3,((C_word*)t0)[4]))){
t5=C_a_i_cons(&a,2,t3,t2);
t6=C_a_i_cons(&a,2,t5,((C_word*)((C_word*)t0)[3])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_TRUE);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(t2,t3));}}}}

/* f_5278 in k5262 */
static void C_ccall f_5278(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5278,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[101],t2,t3));}

/* k7115 in mirror-rename in k6724 */
static void C_ccall f_7116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7119,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* expand.scm:863: mirror-rename */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7103(t5,t2,t4);}

/* k6832 */
static void C_ccall f_6833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6833,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=t1;
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k7531 */
static void C_fcall f_7533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7533,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdar(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7561,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:120: process-match */
t5=((C_word*)((C_word*)t0)[10])[1];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t4,((C_word*)((C_word*)t0)[9])[1],t2,C_SCHEME_FALSE);}
else{
/* synrules.scm:127: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[5],lf[203],((C_word*)t0)[2]);}}

/* k7118 in k7115 in mirror-rename in k6724 */
static void C_ccall f_7119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7119,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k8767 */
static void C_ccall f_8768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8770,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1289: r */
t3=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[265]);}

/* mirror-rename in k6724 */
static void C_fcall f_7103(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7103,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7116,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:863: mirror-rename */
t11=t3;
t12=t5;
t1=t11;
t2=t12;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7135,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7138,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:865: vector->list */
t5=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7146,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:868: lookup */
f_3368(t3,t2,((C_word*)t0)[6]);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}}

/* k6846 in k6784 in rename in k6724 */
static void C_ccall f_6847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6847,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=t1;
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* f_7526 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_7526(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7526,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7533,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_cddr(t2);
t7=t3;
f_7533(t7,C_i_nullp(t6));}
else{
t6=t3;
f_7533(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_7533(t4,C_SCHEME_FALSE);}}

/* k7689 in k7612 */
static void C_ccall f_7690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7690,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,1,t4));}

/* k7514 in map-loop2270 */
static void C_ccall f_7515(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7515,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7490(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7490(t6,((C_word*)t0)[5],t5);}}

/* k7695 in k7612 */
static void C_ccall f_7696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:146: process-match */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_FALSE);}

/* k9279 in k9048 in k9046 in k9044 */
static void C_ccall f_9280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1272: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9051(t3,((C_word*)t0)[4],t2,C_fix(0));}

/* k6784 in rename in k6724 */
static void C_ccall f_6785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6785,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp);
/* expand.scm:775: g1384 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:809: macro-alias */
f_3386(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* f_6789 in k6784 in rename in k6724 */
static void C_ccall f_6789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6789,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6799,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:794: g1396 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[179]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:804: macro-alias */
f_3386(t3,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k9288 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in ... */
static void C_ccall f_9289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1193: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[284],C_SCHEME_END_OF_LIST,t1);}

/* f_6827 in k6801 */
static void C_ccall f_6827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6827,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k9293 */
static void C_ccall f_9294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9294,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9303,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1202: r */
t9=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t8,lf[288]);}

/* f_9291 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in ... */
static void C_ccall f_9291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9291,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9294,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1198: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[284],t2,lf[289]);}

/* k3955 in loop in k3931 in unregister-macro in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3956,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_6799 */
static void C_ccall f_6799(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6799,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* loop in expand-curried-define in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5999(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5999,NULL,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_car(t5));
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_cons(&a,2,lf[73],t9));}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=C_a_i_cons(&a,2,lf[73],t9);
t11=C_a_i_list(&a,1,t10);
/* expand.scm:608: loop */
t18=t1;
t19=t6;
t20=t11;
t1=t18;
t2=t19;
t3=t20;
goto loop;}}

/* k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9541(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9541,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1165: expand */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9523(t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9553,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9558,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1170: ##sys#strip-syntax */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9574,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word)li185),tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9586,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9588,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li186),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_9588(t13,t9,t7);}}}

/* k9542 in k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9543,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[99],t2));}

/* k5991 in match-expression in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##sys#expand-curried-define in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5995(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5995,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5999,a[2]=t6,a[3]=t8,a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6037,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:609: loop */
t11=((C_word*)t8)[1];
f_5999(t11,t10,t2,t3);}

/* k6880 in compare in k6724 */
static void C_ccall f_6882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:818: compare */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6861(4,t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9552 in k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1171: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9523(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k7134 in mirror-rename in k6724 */
static void C_ccall f_7135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:865: list->vector */
t2=*((C_word*)lf[176]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7137 in mirror-rename in k6724 */
static void C_ccall f_7138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:865: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7103(t2,((C_word*)t0)[3],t1);}

/* k9992 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:998: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[97],C_SCHEME_END_OF_LIST,t1);}

/* f_9995 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9995(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9995,5,t0,t1,t2,t3,t4);}
t5=C_i_cadr(t2);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
if(C_truep(C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10034,a[2]=t5,a[3]=t8,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1013: ##sys#check-syntax */
t10=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[97],t5,lf[321]);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10008,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1006: ##sys#check-syntax */
t10=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[97],t5,lf[160]);}}

/* k4407 in expand in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4408(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4408,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4419,a[2]=t1,a[3]=t5,a[4]=t9,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4419(t11,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* ##sys#expand in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4404(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4404r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4404r(t0,t1,t2,t3);}}

static void C_ccall f_4404r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4408,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:306: ##sys#current-environment */
t5=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_4408(2,t5,C_i_car(t3));}}

/* expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_fcall f_9523(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9523,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9535,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1163: ##sys#check-syntax */
t8=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[291],t4,lf[295]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[296]);}}

/* k9520 in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9521,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[56],((C_word*)t0)[3],t1));}

/* k9554 in k9552 in k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[292]);}

/* k9557 in k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1168: ##sys#notice */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[293]+1)))(4,*((C_word*)lf[293]+1),((C_word*)t0)[2],lf[294],t1);}

/* compare in k6724 */
static void C_ccall f_6861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)tr4,(void*)f_6861,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6882,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=t3;
t8=C_u_i_car(t7);
/* expand.scm:817: compare */
t22=t4;
t23=t6;
t24=t8;
t1=t22;
t2=t23;
t3=t24;
c=4;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_i_vectorp(t2))){
if(C_truep(C_i_vectorp(t3))){
t4=t2;
t5=C_block_size(t4);
t6=t3;
t7=C_block_size(t6);
t8=C_eqp(t5,t7);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6918,a[2]=t5,a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word)li113),tmp=(C_word)a,a+=8,tmp));
t12=((C_word*)t10)[1];
f_6918(t12,t1,C_fix(0),C_SCHEME_TRUE);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=C_i_symbolp(t2);
t5=(C_truep(t4)?C_i_symbolp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6957,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6961,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:827: g1448 */
t8=t6;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t2,lf[5]);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t2,t3));}}}}

/* k8117 in k7989 */
static void C_ccall f_8118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8118,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t1));}

/* k8553 in k8551 in k8549 */
static void C_ccall f_8554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[236]);}

/* k8551 in k8549 */
static void C_ccall f_8552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* expand.scm:1433: ##sys#add-to-export-list */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[237]+1)))(4,*((C_word*)lf[237]+1),t2,t1,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[236]);}}

/* k8549 */
static void C_ccall f_8550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8552,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1431: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[238]+1)))(2,*((C_word*)lf[238]+1),t2);}

/* k10128 in loop in k10075 */
static void C_ccall f_10129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:992: ##sys#expand-curried-define */
t3=*((C_word*)lf[106]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k4761 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:354: ##sys#append */
t2=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* f_8547 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in ... */
static void C_ccall f_8547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8547,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8550,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8560,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* expand.scm:1429: ##sys#strip-syntax */
t8=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k8544 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in ... */
static void C_ccall f_8545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1422: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[235],C_SCHEME_END_OF_LIST,t1);}

/* k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* expand.scm:1164: c */
t4=((C_word*)t0)[10];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[11],t3);}

/* k10136 in loop in k10075 */
static void C_ccall f_10137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10137,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,lf[73],t5);
t7=C_a_i_list3(&a,3,t2,t3,t6);
/* expand.scm:995: loop */
t8=((C_word*)((C_word*)t0)[5])[1];
f_10081(t8,((C_word*)t0)[6],t7);}

/* k10134 in k10128 in loop in k10075 */
static void C_ccall f_10135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:992: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10081(t2,((C_word*)t0)[3],t1);}

/* f_4430 in loop in k4407 in expand in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4430,4,t0,t1,t2,t3);}
if(C_truep(t3)){
/* expand.scm:310: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4419(t4,t1,t2);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k8532 in k8518 */
static void C_ccall f_8533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
/* synrules.scm:58: ##sys#process-syntax-rules */
t7=*((C_word*)lf[186]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7612 */
static void C_ccall f_7614(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7614,2,t0,t1);}
if(C_truep(t1)){
/* synrules.scm:137: process-segment-match */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7644,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7647,a[2]=t5,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
t7=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[12])[1],((C_word*)((C_word*)t0)[6])[1]);
t8=((C_word*)t0)[5];
t9=C_u_i_car(t8);
/* synrules.scm:141: process-match */
t10=((C_word*)((C_word*)t0)[11])[1];
((C_proc5)C_fast_retrieve_proc(t10))(5,t10,t6,t7,t9,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[6])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7690,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)((C_word*)t0)[6])[1]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7696,a[2]=((C_word*)t0)[11],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:147: vector->list */
t8=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[5]);}
else{
t2=C_i_nullp(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7707,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[16],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_7707(t4,t2);}
else{
t4=C_booleanp(((C_word*)t0)[5]);
t5=t3;
f_7707(t5,(C_truep(t4)?t4:C_charp(((C_word*)t0)[5])));}}}}}

/* k4631 in k4567 in k4556 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4632,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,t2);
/* expand.scm:378: ##sys#append */
t4=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_a_i_list1(&a,1,t3);
/* expand.scm:378: ##sys#append */
t5=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t1,t4);}}

/* f_8126 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_8126(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8126,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}
else{
t6=C_a_i_cons(&a,2,t2,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,t6,t4));}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8151,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:251: segment-pattern? */
t7=((C_word*)((C_word*)t0)[4])[1];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,t2,t5);}}

/* k9963 */
static void C_ccall f_9964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9964,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[50],t3));}

/* f_9961 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9961,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9964,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9972,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(t2);
if(C_truep(C_i_pairp(t7))){
t8=C_i_cadr(t2);
t9=t6;
f_9972(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_9972(t8,C_SCHEME_FALSE);}}

/* k8120 in k7989 */
static void C_ccall f_8121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:240: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9958 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1023: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[56],C_SCHEME_END_OF_LIST,t1);}

/* k8513 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in ... */
static void C_ccall f_8514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:44: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[231],C_SCHEME_END_OF_LIST,t1);}

/* f_7152 in k7145 in mirror-rename in k6724 */
static void C_ccall f_7152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7152,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}

/* k9930 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1041: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[311],C_SCHEME_END_OF_LIST,t1);}

/* f_9933 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9933,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9936,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1046: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[311],t2,lf[313]);}

/* k8518 */
static void C_ccall f_8519(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8519,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[232];
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_symbolp(((C_word*)t3)[1]))){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8533,a[2]=t9,a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:54: ##sys#check-syntax */
t11=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,lf[231],((C_word*)t0)[2],lf[233]);}
else{
/* synrules.scm:58: ##sys#process-syntax-rules */
t10=*((C_word*)lf[186]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,((C_word*)t0)[3],((C_word*)t9)[1],((C_word*)t7)[1],((C_word*)t3)[1],((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* f_8516 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in ... */
static void C_ccall f_8516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8516,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8519,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:49: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[231],t2,lf[234]);}

/* k8510 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in ... */
static void C_ccall f_8511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1465: ##sys#fixup-macro-environment */
t2=*((C_word*)lf[227]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8503 in k8499 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in ... */
static void C_ccall f_8505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[229]+1 /* (set! ##sys#meta-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k7560 in k7531 */
static void C_ccall f_7561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7561,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7549,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7557,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:121: process-pattern */
t5=((C_word*)((C_word*)t0)[9])[1];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t3,((C_word*)t0)[8],((C_word*)((C_word*)t0)[10])[1],t4,C_SCHEME_FALSE);}

/* k8507 in k8499 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in ... */
static void C_ccall f_8508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1467: make-parameter */
t2=*((C_word*)lf[230]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9944 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1033: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[314],C_SCHEME_END_OF_LIST,t1);}

/* k7145 in mirror-rename in k6724 */
static void C_ccall f_7146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7146,2,t0,t1);}
t2=f_7079(((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7152,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:868: g1523 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[5],t2);}
else{
t3=t1;
if(C_truep(t3)){
if(C_truep(C_i_pairp(t1))){
/* expand.scm:875: rename */
t4=((C_word*)((C_word*)t0)[6])[1];
f_6727(3,t4,((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7184,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7188,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:876: g1536 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[3],lf[7]);}}
else{
/* expand.scm:873: rename */
t4=((C_word*)((C_word*)t0)[6])[1];
f_6727(3,t4,((C_word*)t0)[5],((C_word*)t0)[3]);}}}

/* k8179 in k8149 */
static void C_ccall f_8180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:255: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,C_SCHEME_FALSE);}

/* k8499 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in ... */
static void C_ccall f_8501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8501,2,t0,t1);}
t2=C_mutate((C_word*)lf[228]+1 /* (set! ##sys#default-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8505,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8508,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1467: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k9935 */
static void C_ccall f_9936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9936,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[312],t2));}

/* k3980 in call-handler in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:204: g527 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_3986 in call-handler in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3986(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3986,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3991,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4080,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li42),tmp=(C_word)a,a+=10,tmp);
/* expand.scm:204: with-exception-handler */
t5=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* f_4674 in k4553 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4674(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4674,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4721,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:362: ##sys#strip-syntax */
t6=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* f_9947 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9947,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9950,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1038: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[314],t2,lf[315]);}

/* k5970 in mwalk in match-expression in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:594: mwalk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5922(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_3991 */
static void C_ccall f_3991(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3991,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3996,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:204: k523 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_3996 */
static void C_ccall f_3996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4005,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[33]))){
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=t2;
f_4005(t4,C_i_memq(lf[40],t3));}
else{
t3=t2;
f_4005(t3,C_SCHEME_FALSE);}}

/* k9970 */
static void C_fcall f_9972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* expand.scm:1029: ##sys#check-syntax */
t2=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[56],((C_word*)t0)[3],lf[316]);}
else{
/* expand.scm:1030: ##sys#check-syntax */
t2=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[56],((C_word*)t0)[3],lf[317]);}}

/* k9949 */
static void C_ccall f_9950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9950,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[52],t2));}

/* k10169 */
static void C_ccall f_10170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10170,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[99],t2));}

/* k8149 */
static void C_ccall f_8151(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8151,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8163,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:253: meta-variables */
t6=((C_word*)((C_word*)t0)[4])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t4,t5,((C_word*)t0)[3],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8180,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:256: meta-variables */
t7=((C_word*)((C_word*)t0)[4])[1];
((C_proc6)C_fast_retrieve_proc(t7))(6,t7,t4,t6,((C_word*)t0)[3],((C_word*)t0)[6],C_SCHEME_FALSE);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8194,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:258: vector->list */
t3=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}}}}

/* k10164 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:964: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[329],C_SCHEME_END_OF_LIST,t1);}

/* f_10167 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10167,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10170,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:969: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[329],t2,lf[330]);}

/* f_10181 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10181,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10184,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:961: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[302],t2,lf[331]);}

/* k5419 in k5436 in map-loop926 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5420(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_5409(t5,((C_word*)t0)[7],t3,t4);}

/* k8101 in k8098 in k7989 */
static void C_ccall f_8102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8102,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t1));}

/* k10178 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:956: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[302],C_SCHEME_END_OF_LIST,t1);}

/* k10110 in k10096 in k10094 in loop in k10075 */
static void C_ccall f_10112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* expand.scm:986: ##sys#defjam-error */
t2=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_10099(2,t2,C_SCHEME_UNDEFINED);}}

/* k8570 */
static void C_ccall f_8571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[99],t3);
/* expand.scm:1419: ##sys#register-meta-expression */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[242]+1)))(3,*((C_word*)lf[242]+1),t2,t4);}

/* k3901 in k3893 in k3890 in macro? in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_i_pairp(t1):C_SCHEME_FALSE));}

/* k8572 in k8570 */
static void C_ccall f_8573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8573,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,lf[99],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[241],t4));}

/* k10183 */
static void C_ccall f_10184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10184,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[286],t2));}

/* k10120 in k10094 in loop in k10075 */
static void C_ccall f_10121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:984: ##sys#register-export */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[322]+1)))(4,*((C_word*)lf[322]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k8565 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in ... */
static void C_ccall f_8566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1413: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[240],C_SCHEME_END_OF_LIST,t1);}

/* f_8568 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in ... */
static void C_ccall f_8568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8568,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8571,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1418: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[240],t2,lf[243]);}

/* k3910 in k3893 in k3890 in macro? in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:183: lookup */
f_3368(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k8559 */
static void C_ccall f_8560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1428: ##sys#validate-exports */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[239]+1)))(4,*((C_word*)lf[239]+1),((C_word*)t0)[2],t1,lf[235]);}

/* k8162 in k8149 */
static void C_ccall f_8163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:252: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,C_SCHEME_FALSE);}

/* k10117 in k10096 in k10094 in loop in k10075 */
static void C_ccall f_10118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:985: c */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* map-loop926 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5409(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5409,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5437,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:480: g932 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4488 in loop in extended-lambda-list? in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4490(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* expand.scm:333: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4473(t4,((C_word*)t0)[2],t3);}}

/* ##sys#undefine-macro! in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3963(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3963,3,t0,t1,t2);}
/* expand.scm:195: ##sys#unregister-macro */
t3=*((C_word*)lf[30]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_7192 in k7186 in k7145 in mirror-rename in k6724 */
static void C_ccall f_7192(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7192,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##sys#expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3969(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[22],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3969,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3973,a[2]=t3,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4147,a[2]=t6,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4188,a[2]=t3,a[3]=t8,a[4]=t12,a[5]=t6,a[6]=t4,a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t14=((C_word*)t12)[1];
f_4188(t14,t1,t2);}

/* k9584 in k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9586,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[99],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9570,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1178: expand */
t6=((C_word*)((C_word*)t0)[5])[1];
f_9523(t6,t5,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7186 in k7145 in mirror-rename in k6724 */
static void C_ccall f_7188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7188,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7192,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:868: g1540 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t1);}
else{
/* expand.scm:882: rename */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6727(3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* call-handler in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3973(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3973,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3981,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3986,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[2],a[8]=((C_word)li43),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:204: call-with-current-continuation */
t9=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* f_7184 in k7145 in mirror-rename in k6724 */
static void C_ccall f_7184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7184,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5142(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5142,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_nullp(t2);
t8=(C_truep(t7)?C_i_nullp(t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5154,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5154(t12,t1,t6,C_SCHEME_END_OF_LIST);}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5218,a[2]=t1,a[3]=t6,a[4]=t5,a[5]=t4,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:474: reverse */
t10=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}}

/* k5177 in k5170 in loop in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5178,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[99],t1));}

/* map-loop2087 in expand in k8773 in k8771 in k8769 in k8767 */
static void C_fcall f_8933(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8933,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8958,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1320: g2093 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8929 in expand in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[25]+1),lf[263],t1);}

/* map-loop1842 in k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_fcall f_9588(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9588,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9613,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1174: g1848 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5170 in loop in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5172,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5181,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:472: reverse */
t4=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* expand.scm:473: loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_5154(t5,((C_word*)t0)[2],t3,t4);}}

/* k10206 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:940: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[205],C_SCHEME_END_OF_LIST,t1);}

/* f_10209 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10209,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10212,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:945: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[205],t2,lf[333]);}

/* k9804 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in ... */
static void C_ccall f_9805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1083: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[216],C_SCHEME_END_OF_LIST,t1);}

/* f_9807 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in ... */
static void C_ccall f_9807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9807,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t5);
t7=C_u_i_car(t5);
if(C_truep(C_i_nullp(t6))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9827,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1095: r */
t9=t3;
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t8,lf[78]);}}}

/* f_7583 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_7583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7583,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_symbolp(t3))){
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
t5=C_a_i_list(&a,2,lf[204],t3);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],t2,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,1,t7));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}
else{
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7614,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* synrules.scm:136: segment-pattern? */
t6=((C_word*)((C_word*)t0)[17])[1];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,t3,t4);}}

/* k9569 in k9584 in k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9570,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[286],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* f_9574 in k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9574(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9574,3,t0,t1,t2);}
t3=C_a_i_list(&a,2,lf[205],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t3));}

/* loop in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5154(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5154,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5172,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t4))){
t6=C_u_i_car(t4);
if(C_truep(C_i_symbolp(t6))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5207,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:468: comp */
t8=((C_word*)((C_word*)t0)[4])[1];
f_5077(t8,t7,lf[96],t6);}
else{
t7=t5;
f_5172(2,t7,C_SCHEME_FALSE);}}
else{
t6=t5;
f_5172(2,t6,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[99],((C_word*)t0)[5]));}}

/* k5186 in k5180 in k5170 in loop in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5187,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* expand.scm:472: ##sys#append */
t3=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k3820 in ensure-transformer in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(1)));}

/* k9826 */
static void C_ccall f_9827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9827,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9842,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1097: r */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[216]);}

/* k5180 in k5170 in loop in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5187,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:472: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5655(t3,t2,((C_word*)t0)[4]);}

/* f_10237 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10237,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[336]+1);
/* expand.scm:926: g1627 */
((C_proc10)C_fast_retrieve_proc(*((C_word*)lf[336]+1)))(10,*((C_word*)lf[336]+1),t1,t2,t3,t4,*((C_word*)lf[1]+1),*((C_word*)lf[19]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[335]);}

/* k10234 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:923: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[335],C_SCHEME_END_OF_LIST,t1);}

/* loop in extended-lambda-list? in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4473(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4473,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_eqp(t3,lf[65]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4490,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4490(t6,t4);}
else{
t6=C_eqp(t3,lf[66]);
t7=t5;
f_4490(t7,(C_truep(t6)?t6:C_eqp(t3,lf[67])));}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k10243 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:916: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[337],C_SCHEME_END_OF_LIST,t1);}

/* f_10246 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10246(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10246,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[336]+1);
/* expand.scm:919: g1613 */
((C_proc10)C_fast_retrieve_proc(*((C_word*)lf[336]+1)))(10,*((C_word*)lf[336]+1),t1,t2,t3,t4,*((C_word*)lf[2]+1),*((C_word*)lf[229]+1),C_SCHEME_TRUE,C_SCHEME_FALSE,lf[337]);}

/* k3848 in k3846 in k3844 in extend-macro-environment in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3849,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:162: g468 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3867,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
/* expand.scm:172: ##sys#macro-environment */
t6=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}}

/* k3846 in k3844 in extend-macro-environment in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3849,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:165: lookup */
f_3368(t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3844 in extend-macro-environment in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:164: ##sys#ensure-transformer */
t3=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* ##sys#extend-macro-environment in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3841,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3845,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:163: ##sys#macro-environment */
t6=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* loop in k4407 in expand in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4419(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4419,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4425,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4430,a[2]=((C_word*)t0)[4],a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:306: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k10211 */
static void C_ccall f_10212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10212,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[72],t2));}

/* f_3853 in k3848 in k3846 in k3844 in extend-macro-environment in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3853,3,t0,t1,t2);}
t3=C_i_set_car(t2,((C_word*)t0)[2]);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_i_set_car(t5,((C_word*)t0)[3]);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}

/* f_8196 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_8196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8196,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_assq(t2,t4);
if(C_truep(t6)){
t7=C_i_cdr(t6);
t8=t3;
t9=C_fixnum_greater_or_equal_p(t7,t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_truep(t9)?C_a_i_cons(&a,2,t2,t5):t5));}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t5);}}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8235,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:270: segment-template? */
t7=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,t2);}}

/* k8193 in k8149 */
static void C_ccall f_8194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:258: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k10225 */
static void C_ccall f_10226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10226,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[73],t2));}

/* f_10223 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10223(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10223,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10226,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:937: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[218],t2,lf[334]);}

/* f_4425 in loop in k4407 in expand in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4425,2,t0,t1);}
/* expand.scm:308: ##sys#expand-0 */
t2=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10220 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:932: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[218],C_SCHEME_END_OF_LIST,t1);}

/* k9499 */
static void C_ccall f_9500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9500,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9506,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1153: r */
t7=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,lf[78]);}

/* k3526 in walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3527(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3527,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3536,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li8),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_3536(t8,((C_word*)t0)[6],C_fix(0));}

/* k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:1156: r */
t3=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[222]);}

/* k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9512(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9512,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9521,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9523,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word)li187),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_9523(t8,t4,((C_word*)t0)[8],C_SCHEME_FALSE);}

/* k9505 in k9499 */
static void C_ccall f_9506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9508,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1154: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[216]);}

/* k9507 in k9505 in k9499 */
static void C_ccall f_9508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:1155: r */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[297]);}

/* doloop294 in k3526 in walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3536(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3536,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3554,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* expand.scm:122: walk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3445(t5,t3,t4);}}

/* k9884 */
static void C_ccall f_9885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9885,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_a_i_list(&a,2,lf[307],t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9904,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_u_i_cdr(t2);
t8=C_a_i_list(&a,1,t3);
/* expand.scm:1057: ##sys#append */
t9=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[101],t2,t3));}}

/* k9879 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1057: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[306],C_SCHEME_END_OF_LIST,t1);}

/* f_9882 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_9882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9882,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9885,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1062: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[306],t2,lf[308]);}

/* f_10255 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10255(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10255,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[336]+1);
/* expand.scm:913: g1599 */
((C_proc10)C_fast_retrieve_proc(*((C_word*)lf[336]+1)))(10,*((C_word*)lf[336]+1),t1,t2,t3,t4,*((C_word*)lf[1]+1),*((C_word*)lf[19]+1),C_SCHEME_FALSE,C_SCHEME_FALSE,lf[338]);}

/* k3505 in k3511 in walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k7989 */
static void C_ccall f_7991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7991,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:211: segment-depth */
t3=((C_word*)((C_word*)t0)[11])[1];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8099,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
/* synrules.scm:236: process-template */
t5=((C_word*)((C_word*)t0)[5])[1];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t2,t4,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8118,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8121,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:240: vector->list */
t4=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)t0)[4]));}}}}

/* k7992 in k7989 */
static void C_ccall f_7993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7993,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7997,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* synrules.scm:214: free-meta-variables */
t5=((C_word*)((C_word*)t0)[10])[1];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t3,t4,t2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k10252 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:910: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[338],C_SCHEME_END_OF_LIST,t1);}

/* k7996 in k7992 in k7989 */
static void C_ccall f_7997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7997,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
/* synrules.scm:216: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[209],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* synrules.scm:217: process-template */
t5=((C_word*)((C_word*)t0)[4])[1];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t2,t4,((C_word*)t0)[11],((C_word*)t0)[6]);}}

/* k8596 */
static void C_ccall f_8597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(4)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8733,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1359: r */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[246]);}
else{
t3=t2;
f_8603(2,t3,C_SCHEME_FALSE);}}

/* f_8592 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in ... */
static void C_ccall f_8592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8592,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8597,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1358: ##sys#check-syntax */
t7=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[244],t2,lf[256]);}

/* k8589 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in ... */
static void C_ccall f_8590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1352: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[244],C_SCHEME_END_OF_LIST,t1);}

/* ##sys#extended-lambda-list? in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4467(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4467,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4473,a[2]=t4,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4473(t6,t1,t2);}

/* k3511 in walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3512,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* expand.scm:114: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3445(t6,t3,t5);}

/* k5315 in map-loop1015 in k5262 */
static void C_ccall f_5316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5316,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5299,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_5299(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_5299(t5,t4);}}

/* k9841 in k9826 */
static void C_ccall f_9842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9842,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[286],((C_word*)t0)[3],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[50],((C_word*)t0)[5],t3));}

/* k9847 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 in ... */
static void C_ccall f_9848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1069: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[225],C_SCHEME_END_OF_LIST,t1);}

/* f_7955 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_7955(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7955,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_symbolp(t2))){
t5=C_i_assq(t2,t4);
if(C_truep(t5)){
t6=C_i_cdr(t5);
t7=t3;
if(C_truep(C_fixnum_less_or_equal_p(t6,t7))){
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
/* synrules.scm:207: ##sys#syntax-error-hook */
t8=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[208],t2);}}
else{
t6=C_a_i_list(&a,2,lf[204],t2);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],t6));}}
else{
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7991,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* synrules.scm:210: segment-template? */
t6=((C_word*)((C_word*)t0)[12])[1];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t2);}}

/* k7949 in k7860 */
static void C_ccall f_7950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7950,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
/* synrules.scm:195: process-pattern */
t3=((C_word*)((C_word*)t0)[4])[1];
((C_proc6)C_fast_retrieve_proc(t3))(6,t3,((C_word*)t0)[5],t1,t2,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* f_9850 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 in ... */
static void C_ccall f_9850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9850,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_TRUE);}
else{
t6=C_i_cdr(t5);
t7=C_u_i_car(t5);
if(C_truep(C_i_nullp(t6))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9877,a[2]=t6,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1081: r */
t9=t3;
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t8,lf[225]);}}}

/* k9876 */
static void C_ccall f_9877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9877,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,lf[286],((C_word*)t0)[4],t2,C_SCHEME_FALSE));}

/* map-loop899 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5451(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5451,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5476,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:477: g905 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7927 in k7924 in k7860 */
static void C_ccall f_7928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:192: append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k7924 in k7860 */
static void C_ccall f_7925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7928,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);
/* synrules.scm:193: process-pattern */
t6=((C_word*)((C_word*)t0)[6])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t2,t4,t5,((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in ... */
static void C_ccall f_7389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7389,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7393,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[2],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:84: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[220]);}

/* k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in ... */
static void C_ccall f_7383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7383,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[197]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[198]);
t5=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7389,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[2],a[26]=((C_word*)t0)[28],a[27]=((C_word*)t0)[29],a[28]=((C_word*)t0)[30],a[29]=((C_word*)t0)[31],a[30]=((C_word*)t0)[32],a[31]=((C_word*)t0)[33],a[32]=((C_word*)t0)[34],a[33]=((C_word*)t0)[35],a[34]=((C_word*)t0)[36],a[35]=((C_word*)t0)[37],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[4],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:83: r */
t6=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[221]);}

/* k8988 in expand in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8990,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[264]:C_a_i_cons(&a,2,lf[99],t2)));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1333: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_8785(t3,t2,((C_word*)t0)[7]);}}

/* k3589 in k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3591,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3596,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3604,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li15),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3604(t12,t8,t7,((C_word*)t0)[5]);}

/* k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in ... */
static void C_ccall f_7378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7378,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[196]);
t4=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7383,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[25],a[24]=((C_word*)t0)[26],a[25]=((C_word*)t0)[27],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[3],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:80: r */
t5=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[222]);}

/* f_3596 in k3589 in k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3596,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in ... */
static void C_ccall f_7374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7374,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7378,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:78: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[223]);}

/* loop in k3735 in loop1 in globalize in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3758(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3758,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* expand.scm:146: ##sys#alias-global-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t1,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3774,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=C_u_i_cdr(t7);
t9=t3;
f_3774(t9,C_i_symbolp(t8));}
else{
t6=t3;
f_3774(t6,C_SCHEME_FALSE);}}}

/* k5436 in map-loop926 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5437,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5420,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_5420(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_5420(t5,t4);}}

/* ##sys#extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_3563r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3563r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3563r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3568,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=*((C_word*)lf[8]+1);
t11=t3;
t12=C_i_check_list_2(t11,lf[16]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3686,a[2]=t9,a[3]=t14,a[4]=t7,a[5]=t10,a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_3686(t16,t5,t11);}
else{
t6=t5;
f_3568(2,t6,C_i_car(t4));}}

/* f_3569 in k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3569,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3571,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3575,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:130: g359 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[7]);}

/* loop1 in globalize in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3725(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3725,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3733,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3737,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:141: g423 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[5]);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3568(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3568,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3569,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t1,lf[14]);
t5=C_i_check_list_2(t3,lf[14]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3646,a[2]=t8,a[3]=t2,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3646(t10,t6,t1,t3);}

/* f_3576 in k3573 */
static void C_ccall f_3576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3576,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* k3573 */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3576,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
/* expand.scm:131: g363 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],((C_word*)t0)[3],lf[7],t3);}
else{
t3=((C_word*)t0)[4];
/* expand.scm:131: g363 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],((C_word*)t0)[3],lf[7],t3);}}

/* loop in fini/syntax in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5496(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5496,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[103]+1);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5512,a[2]=t2,a[3]=t1,a[4]=t8,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:500: reverse */
t11=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5560,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
if(C_truep(C_i_listp(t6))){
t7=t2;
t8=C_u_i_car(t7);
t9=C_i_length(t8);
if(C_truep(C_fixnum_greater_or_equal_p(C_fix(3),t9))){
t10=C_i_caar(t2);
if(C_truep(C_i_symbolp(t10))){
t11=t2;
t12=C_u_i_car(t11);
t13=C_u_i_car(t12);
/* expand.scm:505: comp */
t14=((C_word*)((C_word*)t0)[3])[1];
f_5077(t14,t5,lf[97],t13);}
else{
t11=t5;
f_5560(2,t11,C_SCHEME_FALSE);}}
else{
t10=t5;
f_5560(2,t10,C_SCHEME_FALSE);}}
else{
t7=t5;
f_5560(2,t7,C_SCHEME_FALSE);}}
else{
/* expand.scm:501: loop */
t21=t1;
t22=t2;
t23=t3;
t24=C_SCHEME_TRUE;
t1=t21;
t2=t22;
t3=t23;
t4=t24;
goto loop;}}}

/* k5493 in fini/syntax in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:496: fini */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5142(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* f_3571 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3571,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k3735 in loop1 in globalize in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3737,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:138: g427 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3758,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3758(t5,((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* f_3733 in loop1 in globalize in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3733,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k8957 in map-loop2087 in expand in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8958(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8958,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8933(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8933(t6,((C_word*)t0)[5],t5);}}

/* fini/syntax in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5487(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5487,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5494,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5496,a[2]=t9,a[3]=((C_word*)t0)[3],a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5496(t11,t7,t6,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k3553 in doloop294 in k3526 in walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3536(t4,((C_word*)t0)[5],t3);}

/* k5475 in map-loop899 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5476(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5476,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5451(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5451(t6,((C_word*)t0)[5],t5);}}

/* k3866 in k3848 in k3846 in k3844 in extend-macro-environment in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* ##sys#copy-macro in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3875,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3879,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3885,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:177: ##sys#macro-environment */
t6=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3878 in copy-macro in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[27]+1),((C_word*)t0)[3],t1);}

/* k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in ... */
static void C_ccall f_7397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7397,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7401,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[2],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:86: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[218]);}

/* k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in ... */
static void C_ccall f_7393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7393,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7397,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[2],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:85: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[219]);}

/* ##sys#macro? in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3887(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3887r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3887r(t0,t1,t2,t3);}}

static void C_ccall f_3887r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3892,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:180: ##sys#current-environment */
t5=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_3892(2,t5,C_i_car(t3));}}

/* k3884 in copy-macro in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:177: lookup */
f_3368(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3890 in macro? in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:181: lookup */
f_3368(t2,((C_word*)t0)[3],t1);}

/* f_3741 in k3735 in loop1 in globalize in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3741(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3741,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* expand.scm:142: loop1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3725(t3,t1,t2);}
else{
t3=((C_word*)t0)[3];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3893 in k3890 in macro? in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3894,2,t0,t1);}
t2=C_i_pairp(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3911,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:183: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* expand in k8773 in k8771 in k8769 in k8767 */
static void C_fcall f_8911(C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8911,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8923,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
t9=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8931,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8933,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,a[6]=((C_word)li167),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_8933(t14,t10,((C_word*)t0)[2]);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t4))){
t7=C_i_car(t4);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8990,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1328: c */
t9=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t8,t7,((C_word*)t0)[6]);}
else{
/* expand.scm:1326: err */
t7=((C_word*)((C_word*)t0)[7])[1];
f_8776(t7,t1,t4);}}
else{
/* expand.scm:1321: err */
t4=((C_word*)((C_word*)t0)[7])[1];
f_8776(t4,t1,t2);}}}

/* k9731 in k9728 in k9697 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9732,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[73],C_SCHEME_END_OF_LIST,t2);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,3,lf[210],t4,t1);
t6=C_i_cadddr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[210],t6,t1);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9753,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1140: expand */
t9=((C_word*)((C_word*)t0)[4])[1];
f_9644(t9,t8,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k9728 in k9697 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9730,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1133: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[78]);}
else{
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[99],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9772,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1143: expand */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9644(t6,t5,((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* k9715 in k9700 in k9697 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9716,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[286],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[50],((C_word*)t0)[5],t2));}

/* f_8923 in expand in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8923(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8923,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}

/* k4171 in expand in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:258: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* expand in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4147(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4147,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_listp(t3))){
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4172,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(t4);
t7=t4;
t8=C_u_i_car(t7);
/* expand.scm:260: call-handler */
t9=((C_word*)((C_word*)t0)[2])[1];
f_3973(t9,t5,t2,t6,t3,t8,C_SCHEME_FALSE);}
else{
/* expand.scm:262: values */
C_values(4,0,t1,t3,C_SCHEME_FALSE);}}
else{
/* expand.scm:256: ##sys#syntax-error-hook */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[49],t3);}}

/* k4144 */
static void C_ccall f_4145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tmp22852 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6326 in k6314 in err in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:701: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[143],((C_word*)t0)[3],lf[144],t1,lf[145],((C_word*)t0)[4]);}

/* k6320 in k6314 in err in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:699: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5354 in map-loop986 */
static void C_ccall f_5355(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5355,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5330(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5330(t6,((C_word*)t0)[5],t5);}}

/* map-loop962 in k5361 in k5359 in k5251 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5367(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5367,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5395,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:481: g968 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4966 in k4799 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4968(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4968,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
switch(t2){
case C_fix(0):
/* expand.scm:422: err */
t3=((C_word*)t0)[3];
f_4515(t3,((C_word*)t0)[4],lf[83]);
case C_fix(1):
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* expand.scm:423: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4541(t4,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);
case C_fix(2):
/* expand.scm:424: err */
t3=((C_word*)t0)[3];
f_4515(t3,((C_word*)t0)[4],lf[84]);
default:
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[10]);
/* expand.scm:425: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4541(t4,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[8],((C_word*)t0)[6],t3,((C_word*)t0)[9]);}}
else{
/* expand.scm:426: err */
t2=((C_word*)t0)[3];
f_4515(t2,((C_word*)t0)[4],lf[85]);}}

/* k6304 in test in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* expand.scm:694: err */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6311(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3800(C_word c,C_word t0,C_word t1){
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
C_word ab[78],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3800,2,t0,t1);}
t2=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#macro-environment ...) */,t1);
t3=C_set_block_item(lf[20] /* ##sys#chicken-macro-environment */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[21] /* ##sys#chicken-ffi-macro-environment */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate((C_word*)lf[22]+1 /* (set! ##sys#ensure-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3804,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#extend-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3841,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#copy-macro ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3875,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#macro? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3887,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[30]+1 /* (set! ##sys#unregister-macro ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3922,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#undefine-macro! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3963,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[32]+1 /* (set! ##sys#expand-0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3969,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(lf[59] /* ##sys#compiler-syntax-hook */,0,C_SCHEME_FALSE);
t13=C_set_block_item(lf[61] /* ##sys#enable-runtime-macros */,0,C_SCHEME_FALSE);
t14=C_mutate((C_word*)lf[62]+1 /* (set! ##sys#expand ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4404,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[63]+1 /* (set! expand ...) */,*((C_word*)lf[62]+1));
t16=C_mutate((C_word*)lf[64]+1 /* (set! ##sys#extended-lambda-list? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4467,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t17=*((C_word*)lf[68]+1);
t18=C_mutate((C_word*)lf[69]+1 /* (set! ##sys#expand-extended-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4511,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[90]+1 /* (set! ##sys#defjam-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5056,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t20=C_set_block_item(lf[92] /* ##sys#define-definition */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[93] /* ##sys#define-syntax-definition */,0,C_SCHEME_UNDEFINED);
t22=C_set_block_item(lf[94] /* ##sys#define-values-definition */,0,C_SCHEME_UNDEFINED);
t23=C_mutate((C_word*)lf[95]+1 /* (set! ##sys#canonicalize-body ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5065,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[114] /* (set! match-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5918,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[106]+1 /* (set! ##sys#expand-curried-define ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5995,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t26=C_set_block_item(lf[115] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t27=C_set_block_item(lf[116] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
t28=C_set_block_item(lf[117] /* ##sys#syntax-context */,0,C_SCHEME_END_OF_LIST);
t29=C_mutate((C_word*)lf[41]+1 /* (set! ##sys#syntax-error-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6045,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[120]+1 /* (set! ##sys#syntax-error/context ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6054,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[139]+1 /* (set! syntax-error ...) */,*((C_word*)lf[41]+1));
t32=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6244,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[141]+1 /* (set! get-line-number ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6250,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[55]+1 /* (set! ##sys#check-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6287,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[175]+1 /* (set! make-er/ir-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6716,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[23]+1 /* (set! ##sys#er-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7228,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[181]+1 /* (set! ##sys#ir-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7234,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[182]+1 /* (set! er-macro-transformer ...) */,*((C_word*)lf[23]+1));
t39=C_mutate((C_word*)lf[183]+1 /* (set! ir-macro-transformer ...) */,*((C_word*)lf[181]+1));
t40=C_mutate((C_word*)lf[184]+1 /* (set! ##sys#mark-primitive ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7242,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10253,a[2]=t41,tmp=(C_word)a,a+=3,tmp);
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10255,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:912: ##sys#er-transformer */
t44=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t44+1)))(3,t44,t42,t43);}

/* ##sys#ensure-transformer in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_3804r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3804r(t0,t1,t2,t3);}}

static void C_ccall f_3804r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(C_i_closurep(t2))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3821,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:158: ##sys#er-transformer */
t7=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
if(C_truep(C_i_structurep(t2,lf[24]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_slot(t2,C_fix(1)));}
else{
/* expand.scm:160: ##sys#error */
t6=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t5,lf[26],t2);}}}

/* k9752 in k9731 in k9728 in k9697 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9753,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[302],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,3,lf[73],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[102],((C_word*)t0)[6],t3));}

/* map-loop986 */
static void C_fcall f_5330(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5330,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:482: g992 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6118,a[2]=t1,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6124,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6132,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,a[7]=((C_word)li93),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_6132(t7,t3,*((C_word*)lf[117]+1));}

/* outstr in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6118(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6118,NULL,3,t0,t1,t2);}
/* expand.scm:635: ##sys#print */
t3=*((C_word*)lf[121]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4188(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4188,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_i_symbolp(t4))){
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4205,a[2]=t4,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:268: lookup */
f_3368(t7,t4,((C_word*)t0)[2]);}
else{
/* expand.scm:296: values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}
else{
/* expand.scm:297: values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}

/* f_6613 in walk in k6420 in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6613(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6613,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6616,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(t2))){
/* expand.scm:759: lookup */
f_3368(t3,t2,((C_word*)t0)[3]);}
else{
t4=t3;
f_6616(2,t4,C_SCHEME_FALSE);}}

/* k6615 */
static void C_ccall f_6616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_i_symbolp(t1))){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(t2,((C_word*)t0)[3]));}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(t2,((C_word*)t0)[3]));}}

/* k6123 in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6130,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:670: get-output-string */
t3=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5394 in map-loop962 in k5361 in k5359 in k5251 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5395,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_5378(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_5378(t5,t4);}}

/* f_4124 */
static void C_ccall f_4124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4124,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k6203 in k6179 in k6177 in k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:660: outstr */
t2=((C_word*)t0)[2];
f_6118(t2,((C_word*)t0)[3],t1);}

/* k6206 in k6179 in k6177 in k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:661: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[128],t1);}

/* loop in k6179 in k6177 in k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6209(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6209,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[129]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6222,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* expand.scm:667: symbol->string */
t5=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* ##sys#process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in ... */
static void C_ccall f_7351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[143],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_7351,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_SCHEME_UNDEFINED;
t38=(*a=C_VECTOR_TYPE|1,a[1]=t37,tmp=(C_word)a,a+=2,tmp);
t39=C_SCHEME_UNDEFINED;
t40=(*a=C_VECTOR_TYPE|1,a[1]=t39,tmp=(C_word)a,a+=2,tmp);
t41=C_SCHEME_UNDEFINED;
t42=(*a=C_VECTOR_TYPE|1,a[1]=t41,tmp=(C_word)a,a+=2,tmp);
t43=C_SCHEME_UNDEFINED;
t44=(*a=C_VECTOR_TYPE|1,a[1]=t43,tmp=(C_word)a,a+=2,tmp);
t45=C_SCHEME_UNDEFINED;
t46=(*a=C_VECTOR_TYPE|1,a[1]=t45,tmp=(C_word)a,a+=2,tmp);
t47=C_SCHEME_UNDEFINED;
t48=(*a=C_VECTOR_TYPE|1,a[1]=t47,tmp=(C_word)a,a+=2,tmp);
t49=C_SCHEME_UNDEFINED;
t50=(*a=C_VECTOR_TYPE|1,a[1]=t49,tmp=(C_word)a,a+=2,tmp);
t51=C_SCHEME_UNDEFINED;
t52=(*a=C_VECTOR_TYPE|1,a[1]=t51,tmp=(C_word)a,a+=2,tmp);
t53=C_SCHEME_UNDEFINED;
t54=(*a=C_VECTOR_TYPE|1,a[1]=t53,tmp=(C_word)a,a+=2,tmp);
t55=C_SCHEME_UNDEFINED;
t56=(*a=C_VECTOR_TYPE|1,a[1]=t55,tmp=(C_word)a,a+=2,tmp);
t57=C_SCHEME_UNDEFINED;
t58=(*a=C_VECTOR_TYPE|1,a[1]=t57,tmp=(C_word)a,a+=2,tmp);
t59=C_SCHEME_UNDEFINED;
t60=(*a=C_VECTOR_TYPE|1,a[1]=t59,tmp=(C_word)a,a+=2,tmp);
t61=C_SCHEME_UNDEFINED;
t62=(*a=C_VECTOR_TYPE|1,a[1]=t61,tmp=(C_word)a,a+=2,tmp);
t63=C_SCHEME_UNDEFINED;
t64=(*a=C_VECTOR_TYPE|1,a[1]=t63,tmp=(C_word)a,a+=2,tmp);
t65=C_SCHEME_UNDEFINED;
t66=(*a=C_VECTOR_TYPE|1,a[1]=t65,tmp=(C_word)a,a+=2,tmp);
t67=C_SCHEME_UNDEFINED;
t68=(*a=C_VECTOR_TYPE|1,a[1]=t67,tmp=(C_word)a,a+=2,tmp);
t69=C_SCHEME_UNDEFINED;
t70=(*a=C_VECTOR_TYPE|1,a[1]=t69,tmp=(C_word)a,a+=2,tmp);
t71=C_SCHEME_UNDEFINED;
t72=(*a=C_VECTOR_TYPE|1,a[1]=t71,tmp=(C_word)a,a+=2,tmp);
t73=C_SCHEME_UNDEFINED;
t74=(*a=C_VECTOR_TYPE|1,a[1]=t73,tmp=(C_word)a,a+=2,tmp);
t75=C_SCHEME_UNDEFINED;
t76=(*a=C_VECTOR_TYPE|1,a[1]=t75,tmp=(C_word)a,a+=2,tmp);
t77=C_SCHEME_UNDEFINED;
t78=(*a=C_VECTOR_TYPE|1,a[1]=t77,tmp=(C_word)a,a+=2,tmp);
t79=C_SCHEME_UNDEFINED;
t80=(*a=C_VECTOR_TYPE|1,a[1]=t79,tmp=(C_word)a,a+=2,tmp);
t81=C_SCHEME_UNDEFINED;
t82=(*a=C_VECTOR_TYPE|1,a[1]=t81,tmp=(C_word)a,a+=2,tmp);
t83=C_SCHEME_UNDEFINED;
t84=(*a=C_VECTOR_TYPE|1,a[1]=t83,tmp=(C_word)a,a+=2,tmp);
t85=C_SCHEME_UNDEFINED;
t86=(*a=C_VECTOR_TYPE|1,a[1]=t85,tmp=(C_word)a,a+=2,tmp);
t87=C_SCHEME_UNDEFINED;
t88=(*a=C_VECTOR_TYPE|1,a[1]=t87,tmp=(C_word)a,a+=2,tmp);
t89=C_SCHEME_UNDEFINED;
t90=(*a=C_VECTOR_TYPE|1,a[1]=t89,tmp=(C_word)a,a+=2,tmp);
t91=C_SCHEME_UNDEFINED;
t92=(*a=C_VECTOR_TYPE|1,a[1]=t91,tmp=(C_word)a,a+=2,tmp);
t93=C_SCHEME_UNDEFINED;
t94=(*a=C_VECTOR_TYPE|1,a[1]=t93,tmp=(C_word)a,a+=2,tmp);
t95=C_SCHEME_UNDEFINED;
t96=(*a=C_VECTOR_TYPE|1,a[1]=t95,tmp=(C_word)a,a+=2,tmp);
t97=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7359,a[2]=t8,a[3]=t10,a[4]=t12,a[5]=t14,a[6]=t16,a[7]=t18,a[8]=t20,a[9]=t22,a[10]=t24,a[11]=t26,a[12]=t28,a[13]=t30,a[14]=t32,a[15]=t34,a[16]=t36,a[17]=t38,a[18]=t40,a[19]=t42,a[20]=t44,a[21]=t46,a[22]=t48,a[23]=t50,a[24]=t52,a[25]=t54,a[26]=t56,a[27]=t58,a[28]=t60,a[29]=t62,a[30]=t64,a[31]=t66,a[32]=t68,a[33]=t70,a[34]=t72,a[35]=t6,a[36]=t74,a[37]=t76,a[38]=t84,a[39]=t86,a[40]=t82,a[41]=t78,a[42]=t4,a[43]=t80,a[44]=t90,a[45]=t96,a[46]=t88,a[47]=t94,a[48]=t92,a[49]=t1,a[50]=t3,a[51]=t5,a[52]=t2,tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:65: r */
t98=t5;
((C_proc3)C_fast_retrieve_proc(t98))(3,t98,t97,lf[225]);}

/* k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in ... */
static void C_ccall f_7359(C_word c,C_word t0,C_word t1){
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
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7359,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[187]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[188]);
t5=C_mutate(((C_word *)((C_word*)t0)[5])+1,lf[189]);
t6=C_mutate(((C_word *)((C_word*)t0)[6])+1,lf[190]);
t7=C_mutate(((C_word *)((C_word*)t0)[7])+1,lf[191]);
t8=C_mutate(((C_word *)((C_word*)t0)[8])+1,lf[192]);
t9=C_mutate(((C_word *)((C_word*)t0)[9])+1,lf[193]);
t10=C_mutate(((C_word *)((C_word*)t0)[10])+1,lf[194]);
t11=C_mutate(((C_word *)((C_word*)t0)[11])+1,lf[195]);
t12=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7374,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[19],a[10]=((C_word*)t0)[20],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[22],a[13]=((C_word*)t0)[23],a[14]=((C_word*)t0)[24],a[15]=((C_word*)t0)[25],a[16]=((C_word*)t0)[26],a[17]=((C_word*)t0)[27],a[18]=((C_word*)t0)[28],a[19]=((C_word*)t0)[29],a[20]=((C_word*)t0)[30],a[21]=((C_word*)t0)[31],a[22]=((C_word*)t0)[32],a[23]=((C_word*)t0)[33],a[24]=((C_word*)t0)[34],a[25]=((C_word*)t0)[35],a[26]=((C_word*)t0)[36],a[27]=((C_word*)t0)[4],a[28]=((C_word*)t0)[37],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[38],a[31]=((C_word*)t0)[39],a[32]=((C_word*)t0)[40],a[33]=((C_word*)t0)[41],a[34]=((C_word*)t0)[42],a[35]=((C_word*)t0)[43],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[6],a[38]=((C_word*)t0)[7],a[39]=((C_word*)t0)[44],a[40]=((C_word*)t0)[5],a[41]=((C_word*)t0)[9],a[42]=((C_word*)t0)[10],a[43]=((C_word*)t0)[11],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[8],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:77: r */
t13=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t13))(3,t13,t12,lf[224]);}

/* k6104 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:626: ##sys#get */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(4,*((C_word*)lf[136]+1),((C_word*)t0)[2],t1,lf[137]);}

/* k6154 in k6146 in k6144 in k6142 in k6140 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:642: ##sys#print */
t2=*((C_word*)lf[121]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k5363 in k5361 in k5359 in k5251 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:447: ##sys#append */
t2=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5361 in k5359 in k5251 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5367,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5367(t6,t2,((C_word*)t0)[7],t1);}

/* k5359 in k5251 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:491: reverse */
t3=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6162,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6170,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:648: outstr */
t3=((C_word*)t0)[2];
f_6118(t3,t2,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[8];
t3=C_u_i_cdr(t2);
/* expand.scm:669: loop */
t4=((C_word*)((C_word*)t0)[9])[1];
f_6132(t4,((C_word*)t0)[3],t3);}}

/* k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6065,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6105,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:626: ##sys#strip-syntax */
t6=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k5377 in k5394 in map-loop962 in k5361 in k5359 in k5251 in k5249 in k5238 in k5234 in k5217 in fini in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5378(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_5367(t5,((C_word*)t0)[7],t3,t4);}

/* f_4114 */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4114,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_4119 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4119,2,t0,t1);}
/* expand.scm:235: handler */
t2=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* f_6273 in k6268 in get-line-number in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6273(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6273,3,t0,t1,t2);}
t3=C_i_assq(((C_word*)t0)[2],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_i_cdr(t3):C_SCHEME_FALSE));}

/* loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6132(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6132,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6141,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:638: outstr */
t4=((C_word*)t0)[2];
f_6118(t4,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6160,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
/* expand.scm:645: ##sys#strip-syntax */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k6129 in k6123 in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:670: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6666 in walk in k6420 in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:767: walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6426(t6,((C_word*)t0)[5],t3,t5);}

/* k3600 in k3589 in k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:133: append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* map-loop381 in k3589 in k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3604(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3604,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3632,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:133: g387 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* ##sys#syntax-rules-mismatch in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6244(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6244,3,t0,t1,t2);}
/* expand.scm:675: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[140],t2);}

/* k7738 */
static void C_ccall f_7739(C_word c,C_word t0,C_word t1){
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
C_word ab[75],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7739,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cddr(((C_word*)t0)[6]);
t7=C_i_length(t6);
t8=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[5])[1],t7);
t9=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[8])[1],((C_word*)t0)[3]);
t10=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[5])[1]);
t11=C_a_i_list(&a,2,t9,t10);
t12=((C_word*)t0)[6];
t13=C_u_i_cdr(t12);
t14=C_u_i_cdr(t13);
t15=C_i_length(t14);
t16=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[5])[1],t15);
t17=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_7799,a[2]=t16,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=t11,a[9]=t8,a[10]=t5,a[11]=t2,a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[5],a[17]=t1,tmp=(C_word)a,a+=18,tmp);
t18=((C_word*)t0)[6];
t19=C_u_i_cdr(t18);
t20=C_u_i_cdr(t19);
/* synrules.scm:162: process-match */
t21=((C_word*)((C_word*)t0)[18])[1];
((C_proc5)C_fast_retrieve_proc(t21))(5,t21,t17,((C_word*)((C_word*)t0)[8])[1],t20,C_SCHEME_TRUE);}

/* f_7735 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_7735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7735,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_7739,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=t1,a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],tmp=(C_word)a,a+=19,tmp);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[16])[1],((C_word*)((C_word*)t0)[6])[1]);
t6=C_i_car(t3);
/* synrules.scm:154: process-match */
t7=((C_word*)((C_word*)t0)[15])[1];
((C_proc5)C_fast_retrieve_proc(t7))(5,t7,t4,t5,t6,C_SCHEME_FALSE);}

/* k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5693,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:534: ##sys#check-syntax */
t3=*((C_word*)lf[55]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[96],((C_word*)t0)[10],lf[111],C_SCHEME_FALSE,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5796,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* expand.scm:560: comp */
t3=((C_word*)((C_word*)t0)[16])[1];
f_5077(t3,t2,lf[97],((C_word*)t0)[13]);}}

/* k5694 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5695,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5700,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li80),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_5700(t5,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k6140 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:639: outstr */
t3=((C_word*)t0)[2];
f_6118(t3,t2,lf[125]);}

/* k6146 in k6144 in k6142 in k6140 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6155,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(*((C_word*)lf[117]+1));
/* expand.scm:642: ##sys#strip-syntax */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6148 in k6146 in k6144 in k6142 in k6140 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:643: outstr */
t2=((C_word*)t0)[2];
f_6118(t2,((C_word*)t0)[3],lf[123]);}

/* f_4136 */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4136,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k6142 in k6140 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:640: ##sys#print */
t3=*((C_word*)lf[121]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k3772 in loop in k3735 in loop1 in globalize in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3774(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_cdr(t3));}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* expand.scm:148: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3758(t4,((C_word*)t0)[3],t3);}}

/* k3614 in k3631 in map-loop381 in k3589 in k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_3604(t5,((C_word*)t0)[7],t3,t4);}

/* k6144 in k6142 in k6140 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6145,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:641: outstr */
t3=((C_word*)t0)[2];
f_6118(t3,t2,lf[124]);}

/* get-line-number in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6250,3,t0,t1,t2);}
if(C_truep(*((C_word*)lf[115]+1))){
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6269,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:682: ##sys#hash-table-ref */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[142]+1)))(4,*((C_word*)lf[142]+1),t5,*((C_word*)lf[115]+1),t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_4131 */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4131r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4131r(t0,t1,t2);}}

static void C_ccall f_4131r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4136,a[2]=t2,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:204: k523 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7305,2,t0,t1);}
t2=C_mutate((C_word*)lf[92]+1 /* (set! ##sys#define-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9993,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9995,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1001: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k6191 in k6179 in k6177 in k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:655: outstr */
t2=((C_word*)t0)[2];
f_6118(t2,((C_word*)t0)[3],t1);}

/* k6194 in k6179 in k6177 in k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:656: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[126],t1,lf[127]);}

/* k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7305,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10071,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10073,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:976: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7309,2,t0,t1);}
t2=C_mutate((C_word*)lf[93]+1 /* (set! ##sys#define-syntax-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7311,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9959,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9961,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1026: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* f_4108 */
static void C_ccall f_4108(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4108,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t3)[1];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}

/* k6221 in loop in k6179 in k6177 in k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6225,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* expand.scm:668: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6209(t5,t2,t4);}

/* k6224 in k6221 in loop in k6179 in k6177 in k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:666: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[130],((C_word*)t0)[3],lf[131],t1);}

/* k4100 in k4084 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:239: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[42],t1,lf[43]);}

/* k4903 in k4799 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4886(t3,t2);}

/* f_9630 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in ... */
static void C_ccall f_9630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9630,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9635,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1105: r */
t7=t3;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,lf[305]);}

/* k9638 in k9636 in k9634 */
static void C_ccall f_9639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9639,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9644,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word)li189),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_9644(t5,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k9634 */
static void C_ccall f_9635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9635,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1106: r */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[216]);}

/* k9636 in k9634 */
static void C_ccall f_9637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9637,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9639,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1107: r */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[222]);}

/* k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:650: ##sys#print */
t3=*((C_word*)lf[121]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:649: outstr */
t3=((C_word*)t0)[3];
f_6118(t3,t2,lf[134]);}

/* k6177 in k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:653: outstr */
t3=((C_word*)t0)[3];
f_6118(t3,t2,lf[132]);}

/* k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:652: ##sys#print */
t3=*((C_word*)lf[121]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:651: outstr */
t3=((C_word*)t0)[3];
f_6118(t3,t2,lf[133]);}

/* ##sys#check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_6287r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6287r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6287r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6295,a[2]=t9,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t4,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t9))){
/* expand.scm:691: ##sys#current-environment */
t11=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
t11=t10;
f_6295(2,t11,C_i_car(t9));}}

/* k6179 in k6177 in k6175 in k6173 in k6171 in k6169 in k6161 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6180(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6180,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6192,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6195,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(((C_word*)t0)[2]);
/* expand.scm:658: symbol->string */
t7=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6204,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6207,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6209,a[2]=t7,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6209(t9,t5,((C_word*)t0)[2]);}}

/* k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6295(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6295,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6299,a[2]=t7,a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t14=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6335,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t15=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6395,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t16=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6421,a[2]=t7,a[3]=t5,a[4]=t11,a[5]=t9,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t17=C_mutate((C_word*)lf[116]+1 /* (set! ##sys#syntax-error-culprit ...) */,((C_word*)t0)[7]);
t18=t16;
f_6421(t18,t17);}
else{
t17=t16;
f_6421(t17,C_SCHEME_UNDEFINED);}}

/* test in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6299(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6299,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6306,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:694: pred */
t6=t3;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t2);}

/* map-loop593 in k4227 in k4217 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4303(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4303,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4328,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:282: g599 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8447 */
static void C_ccall f_8448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_car(((C_word*)t0)[3],t1));}

/* k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* expand.scm:1114: c */
t4=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[11],t3);}

/* k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in ... */
static void C_ccall f_7343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8566,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8568,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1416: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in ... */
static void C_ccall f_7341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8590,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8592,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1355: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* proper-list? in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6395(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6395,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6401,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_6401(t2));}

/* k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in ... */
static void C_ccall f_7347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8514,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8516,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:47: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in ... */
static void C_ccall f_7345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7347,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8545,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8547,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1425: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in ... */
static void C_ccall f_7349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7349,2,t0,t1);}
t2=C_mutate((C_word*)lf[186]+1 /* (set! ##sys#process-syntax-rules ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7351,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[226]+1 /* (set! ##sys#macro-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8380,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[227]+1 /* (set! ##sys#fixup-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8426,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8511,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1465: ##sys#macro-environment */
t7=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k6268 in get-line-number in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6269,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6273,a[2]=((C_word*)t0)[2],a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:677: g1261 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9627 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in ... */
static void C_ccall f_9628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1099: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[223],C_SCHEME_END_OF_LIST,t1);}

/* k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in ... */
static void C_ccall f_7333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9023,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9025,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1277: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in ... */
static void C_ccall f_7331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7333,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9040,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9042,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1225: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in ... */
static void C_ccall f_7337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8750,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8752,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1339: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in ... */
static void C_ccall f_7335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8761,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8763,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1285: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8011 in k8009 in k8007 in k7996 in k7992 in k7989 */
static void C_ccall f_8012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8030,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* synrules.scm:231: segment-tail */
t3=((C_word*)((C_word*)t0)[6])[1];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}

/* ##sys#globalize in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3719,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3725,a[2]=t5,a[3]=t3,a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3725(t7,t1,t2);}

/* k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in ... */
static void C_ccall f_7339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7341,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8739,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8741,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1347: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8009 in k8007 in k7996 in k7992 in k7989 */
static void C_fcall f_8010(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8010,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8032,a[2]=t4,a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_8032(t6,t2,((C_word*)t0)[8],t1);}

/* k3710 in map-loop318 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3711,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3686(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3686(t6,((C_word*)t0)[5],t5);}}

/* f_4340 in k4335 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4340(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4340,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:289: call-handler */
t7=((C_word*)((C_word*)t0)[7])[1];
f_3973(t7,t3,((C_word*)t0)[4],t4,((C_word*)t0)[2],t6,C_SCHEME_TRUE);}

/* k8007 in k7996 in k7992 in k7989 */
static void C_ccall f_8008(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8051,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[10]))){
t4=((C_word*)t0)[10];
t5=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t5))){
if(C_truep(C_i_symbolp(t1))){
t6=((C_word*)t0)[10];
t7=C_u_i_car(t6);
t8=t3;
f_8051(t8,C_eqp(t1,t7));}
else{
t6=t3;
f_8051(t6,C_SCHEME_FALSE);}}
else{
t6=t3;
f_8051(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_8051(t4,C_SCHEME_FALSE);}}

/* k9771 in k9728 in k9697 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9772,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[286],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* walk in k6420 in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6426(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6426,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
t5=C_block_size(t3);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_vector_ref(t3,C_fix(1)):C_fix(0));
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6441,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t9=C_eqp(t5,C_fix(1));
if(C_truep(t9)){
t10=t8;
f_6441(t10,C_fix(1));}
else{
t10=C_fixnum_greaterp(t5,C_fix(2));
t11=t8;
f_6441(t11,(C_truep(t10)?C_i_vector_ref(t3,C_fix(2)):C_fix(99999)));}}
else{
if(C_truep(C_immp(t3))){
t4=C_eqp(t3,t2);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* expand.scm:744: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6311(t5,t1,lf[152]);}}
else{
if(C_truep(C_i_symbolp(t3))){
t4=t3;
t5=C_eqp(t4,lf[153]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_TRUE);}
else{
t6=C_eqp(t4,lf[154]);
if(C_truep(t6)){
/* expand.scm:748: test */
t7=((C_word*)((C_word*)t0)[4])[1];
f_6299(t7,t1,t2,*((C_word*)lf[155]+1),lf[156]);}
else{
t7=C_eqp(t4,lf[157]);
if(C_truep(t7)){
/* expand.scm:749: test */
t8=((C_word*)((C_word*)t0)[4])[1];
f_6299(t8,t1,t2,*((C_word*)lf[158]+1),lf[159]);}
else{
t8=C_eqp(t4,lf[160]);
if(C_truep(t8)){
/* expand.scm:750: test */
t9=((C_word*)((C_word*)t0)[4])[1];
f_6299(t9,t1,t2,*((C_word*)lf[158]+1),lf[161]);}
else{
t9=C_eqp(t4,lf[162]);
if(C_truep(t9)){
/* expand.scm:751: test */
t10=((C_word*)((C_word*)t0)[4])[1];
f_6299(t10,t1,t2,((C_word*)((C_word*)t0)[5])[1],lf[163]);}
else{
t10=C_eqp(t4,lf[164]);
if(C_truep(t10)){
/* expand.scm:752: test */
t11=((C_word*)((C_word*)t0)[4])[1];
f_6299(t11,t1,t2,*((C_word*)lf[165]+1),lf[166]);}
else{
t11=C_eqp(t4,lf[167]);
if(C_truep(t11)){
/* expand.scm:753: test */
t12=((C_word*)((C_word*)t0)[4])[1];
f_6299(t12,t1,t2,*((C_word*)lf[168]+1),lf[169]);}
else{
t12=C_eqp(t4,lf[170]);
if(C_truep(t12)){
/* expand.scm:754: test */
t13=((C_word*)((C_word*)t0)[4])[1];
f_6299(t13,t1,t2,((C_word*)((C_word*)t0)[6])[1],lf[171]);}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6613,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:756: test */
t14=((C_word*)((C_word*)t0)[4])[1];
f_6299(t14,t1,t2,t13,lf[172]);}}}}}}}}}
else{
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6667,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* expand.scm:766: walk */
t27=t4;
t28=t5;
t29=t6;
t1=t27;
t2=t28;
t3=t29;
goto loop;}
else{
/* expand.scm:764: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6311(t4,t1,lf[173]);}}
else{
/* expand.scm:763: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6311(t4,t1,lf[174]);}}}}}

/* k6420 in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6421,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6426,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li106),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_6426(t5,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in ... */
static void C_ccall f_7323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9628,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9630,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1102: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in ... */
static void C_ccall f_7325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9495,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9497,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1148: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 in ... */
static void C_ccall f_7321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7323,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9805,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9807,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1086: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in ... */
static void C_ccall f_7327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9451,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9453,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1183: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in ... */
static void C_ccall f_7329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7331,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9289,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9291,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1196: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k10007 */
static void C_ccall f_10008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1007: ##sys#check-syntax */
t3=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[97],((C_word*)t0)[2],lf[323]);}

/* k4335 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4336,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li49),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:271: g653 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[8],t1);}
else{
/* expand.scm:295: expand */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4147(t2,((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}}

/* expand in k9638 in k9636 in k9634 */
static void C_fcall f_9644(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9644,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9656,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1113: ##sys#check-syntax */
t8=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[223],t4,lf[303]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[304]);}}

/* k8412 in loop in k8392 in macro-subset in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in ... */
static void C_ccall f_8413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8413,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9931,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9933,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1044: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9917,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9919,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1052: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9945,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9947,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1036: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9880,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9882,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1060: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9848,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9850,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1072: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4342 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4343,2,t0,t1);}
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
/* expand.scm:290: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4147(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4354,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[59]+1))){
/* expand.scm:293: ##sys#compiler-syntax-hook */
t4=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],t1);}
else{
/* expand.scm:294: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4188(t4,((C_word*)t0)[4],t1);}}}

/* k8026 in k8029 in k8011 in k8009 in k8007 in k7996 in k7992 in k7989 */
static void C_ccall f_8027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:233: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* loop in proper-list? in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static C_word C_fcall f_6401(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
return(t2);}
else{
if(C_truep(C_i_pairp(t1))){
t3=t1;
t4=C_u_i_cdr(t3);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k8023 in k8029 in k8011 in k8009 in k8007 in k7996 in k7992 in k7989 */
static void C_ccall f_8024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8024,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[71],((C_word*)t0)[3],t1));}

/* f_8434 in k8432 in fixup-macro-environment in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in ... */
static void C_ccall f_8434(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8434,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8448,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
if(C_truep(C_i_nullp(t7))){
t8=((C_word*)t0)[2];
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_i_set_car(t5,t8));}
else{
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_u_i_car(t9);
/* expand.scm:1460: ##sys#append */
t11=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t6,t10,((C_word*)t0)[2]);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k8432 in fixup-macro-environment in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in ... */
static void C_ccall f_8433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8434,a[2]=t1,a[3]=((C_word)li155),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[14]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8468,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8470,a[2]=t7,a[3]=t2,a[4]=((C_word)li156),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8470(t9,t5,t3);}

/* k6365 in loop in k6338 in lambda-list? in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k10037 in k10035 in k10033 */
static void C_ccall f_10038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10038,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[73],t4);
t6=C_a_i_list(&a,2,lf[23],t5);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[318],t2,t6));}

/* k10035 in k10033 */
static void C_ccall f_10036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=C_u_i_car(t3);
t5=C_i_car(((C_word*)t0)[2]);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
/* expand.scm:1016: ##sys#syntax-error-hook */
t7=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,lf[319],((C_word*)t0)[5]);}
else{
t7=t2;
f_10038(2,t7,C_SCHEME_UNDEFINED);}}

/* k10033 */
static void C_ccall f_10034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1014: ##sys#check-syntax */
t3=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[97],((C_word*)t0)[3],lf[320]);}

/* k10031 in k10009 in k10007 */
static void C_ccall f_10032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1008: ##sys#register-export */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[322]+1)))(4,*((C_word*)lf[322]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5661(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5661,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_pairp(t2))){
t7=C_i_car(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=(C_truep(C_i_pairp(t7))?C_u_i_car(t7):C_SCHEME_FALSE);
t11=(C_truep(t10)?(C_truep(C_i_symbolp(t10))?t10:C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(C_i_symbolp(t11))){
t12=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5693,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t9,a[7]=t5,a[8]=t6,a[9]=t1,a[10]=t7,a[11]=((C_word*)t0)[4],a[12]=t2,a[13]=t11,a[14]=((C_word*)t0)[5],a[15]=((C_word*)t0)[6],a[16]=((C_word*)t0)[7],tmp=(C_word)a,a+=17,tmp);
/* expand.scm:533: comp */
t13=((C_word*)((C_word*)t0)[7])[1];
f_5077(t13,t12,lf[96],t11);}
else{
/* expand.scm:531: fini */
t12=((C_word*)((C_word*)t0)[5])[1];
f_5142(t12,t1,t3,t4,t5,t6,t2);}}
else{
/* expand.scm:525: fini */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5142(t7,t1,t3,t4,t5,t6,t2);}}

/* ##sys#fixup-macro-environment in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in ... */
static void C_ccall f_8426(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_8426r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8426r(t0,t1,t2,t3);}}

static void C_ccall f_8426r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8433,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* expand.scm:1452: ##sys#append */
t7=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t5);}
else{
t7=t6;
f_8433(2,t7,t2);}}

/* k6332 in k6314 in err in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:702: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[146],t1,lf[147],((C_word*)t0)[3]);}

/* lambda-list? in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6335(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6335,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6339,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:706: ##sys#extended-lambda-list? */
t4=*((C_word*)lf[64]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6338 in lambda-list? in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6339,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6347,a[2]=t3,a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6347(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k7271 in for-each-loop1566 in mark-primitive in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7263(t3,((C_word*)t0)[4],t2);}

/* expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5655,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5661,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li81),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_5661(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k6338 in lambda-list? in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6347(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6347,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_symbolp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6366,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:709: keyword? */
t5=*((C_word*)lf[148]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
if(C_truep(C_i_symbolp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6385,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:712: keyword? */
t7=*((C_word*)lf[148]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}}

/* k10013 in k10011 in k10009 in k10007 */
static void C_ccall f_10014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10014,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[318],((C_word*)t0)[4],t2));}

/* k10009 in k10007 */
static void C_ccall f_10010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10010,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10032,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1008: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[238]+1)))(2,*((C_word*)lf[238]+1),t3);}

/* k10011 in k10009 in k10007 */
static void C_ccall f_10012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10023,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10029,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1009: r */
t5=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[97]);}

/* k6314 in err in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6327,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:701: symbol->string */
t4=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6333,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:702: symbol->string */
t4=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}}

/* err in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6311(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6311,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[116]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6315,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:698: get-line-number */
t5=*((C_word*)lf[141]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,*((C_word*)lf[116]+1));}

/* k10028 in k10011 in k10009 in k10007 */
static void C_ccall f_10029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1009: c */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k10021 in k10011 in k10009 in k10007 */
static void C_ccall f_10023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10023,2,t0,t1);}
if(C_truep(t1)){
/* expand.scm:1010: ##sys#defjam-error */
t2=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_i_car(((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[318],((C_word*)t0)[6],t2));}}

/* k10075 */
static void C_ccall f_10076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10076,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10081,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li199),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10081(t5,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k7780 in k7798 in k7738 */
static void C_ccall f_7781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7781,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=C_a_i_list(&a,4,((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],t4);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[9],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[11],t7);
t9=((C_word*)t0)[12];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,1,t8));}

/* f_10073 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10073(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10073,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10076,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:978: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[96],t2,lf[328]);}

/* k10070 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_10071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:973: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[96],C_SCHEME_END_OF_LIST,t1);}

/* k9700 in k9697 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9701,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[2]);
t6=C_a_i_list(&a,2,t5,t1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9716,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1130: expand */
t8=((C_word*)((C_word*)t0)[4])[1];
f_9644(t8,t7,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* loop in k10075 */
static void C_fcall f_10081(C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10081,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t3))){
t7=C_i_car(t3);
if(C_truep(C_i_pairp(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10129,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:991: ##sys#check-syntax */
t9=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[96],t2,lf[324]);}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10137,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:994: ##sys#check-syntax */
t9=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[96],t2,lf[325]);}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10095,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:983: ##sys#check-syntax */
t8=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[96],t2,lf[327]);}}

/* k6383 in loop in k6338 in lambda-list? in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* expand.scm:713: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6347(t4,((C_word*)t0)[2],t3);}}

/* k8029 in k8011 in k8009 in k8007 in k7996 in k7992 in k7989 */
static void C_ccall f_8030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8030,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8027,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:233: segment-tail */
t4=((C_word*)((C_word*)t0)[7])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[8]);}}

/* doloop2401 in k8009 in k8007 in k7996 in k7992 in k7989 */
static void C_fcall f_8032(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8032,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(t4,C_fix(1));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_fixnum_difference(t2,C_fix(1));
t7=C_a_i_list(&a,3,lf[210],lf[71],t3);
t10=t1;
t11=t6;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10165,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10167,a[2]=((C_word)li201),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:967: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10193,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10195,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:951: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7299,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10179,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10181,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:959: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7291,2,t0,t1);}
t2=C_mutate((C_word*)lf[185]+1 /* (set! ##sys#initial-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7293,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10221,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10223,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:935: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10207,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10209,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:943: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7798 in k7738 */
static void C_ccall f_7799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7799,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7781,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[14])[1]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[15])[1],((C_word*)((C_word*)t0)[16])[1],C_fix(-1));
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],t4,t5);
t7=C_a_i_list(&a,1,t6);
/* synrules.scm:61: ##sys#append */
t8=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,((C_word*)t0)[17],t7);}

/* k3631 in map-loop381 in k3589 in k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3632,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3615,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_3615(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_3615(t5,t4);}}

/* k8049 in k8007 in k7996 in k7992 in k7989 */
static void C_fcall f_8051(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8051,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_8010(t2,((C_word*)t0)[3]);}
else{
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[2];
f_8010(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t3));}}

/* k7286 in k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7287,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:930: ##sys#macro-environment */
t3=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7284 in k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10235,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10237,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:925: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7282 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7285,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10244,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10246,a[2]=((C_word)li207),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:918: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* for-each-loop344 in k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3646(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3646,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3655,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:127: g345 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3654 in for-each-loop344 in k3566 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3646(t4,((C_word*)t0)[5],t2,t3);}

/* k10098 in k10096 in k10094 in loop in k10075 */
static void C_ccall f_10099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10099,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[101],((C_word*)t0)[4],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[101],((C_word*)t0)[4],lf[326]));}}

/* k10094 in loop in k10075 */
static void C_ccall f_10095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10121,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:984: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[238]+1)))(2,*((C_word*)lf[238]+1),t3);}

/* k10096 in k10094 in loop in k10075 */
static void C_ccall f_10097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10112,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10118,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:985: r */
t5=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[96]);}

/* k4393 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:270: lookup */
f_3368(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* k8478 in for-each-loop2542 in k8432 in fixup-macro-environment in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in ... */
static void C_ccall f_8479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8470(t3,((C_word*)t0)[4],t2);}

/* for-each-loop2542 in k8432 in fixup-macro-environment in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in ... */
static void C_fcall f_8470(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8470,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8479,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1451: g2543 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9121 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9123,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[72],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9132,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* expand.scm:1246: walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_9051(t5,t3,((C_word*)t0)[6],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9141,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t3=C_u_i_car(((C_word*)t0)[7]);
/* expand.scm:1247: c */
t4=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[8],t3);}
else{
t3=t2;
f_9141(2,t3,C_SCHEME_FALSE);}}}

/* k7705 in k7612 */
static void C_fcall f_7707(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7707,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[205],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,1,t3));}
else{
t2=C_a_i_list(&a,2,lf[205],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,1,t3));}}

/* k9673 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9674,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1121: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9644(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k9675 in k9673 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[299]);}

/* k9678 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1118: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[300]+1)))(4,*((C_word*)lf[300]+1),((C_word*)t0)[2],lf[301],t1);}

/* k8466 in k8432 in fixup-macro-environment in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in ... */
static void C_ccall f_8468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* map-loop318 in extend-se in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3686(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3686,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:127: g324 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9101 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(((C_word*)t0)[3]));}

/* k9692 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9693,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k9697 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9699,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1126: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[78]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t3=C_u_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(4));
if(C_truep(t4)){
t5=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1132: c */
t6=((C_word*)t0)[7];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t2,((C_word*)t0)[8],t5);}
else{
t5=t2;
f_9730(2,t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_9730(2,t3,C_SCHEME_FALSE);}}}

/* k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9662(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9662,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1115: expand */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9644(t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9674,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9679,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1120: ##sys#strip-syntax */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9693,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1124: expand */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9644(t5,t4,((C_word*)t0)[5],C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1125: c */
t5=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[10],t4);}}}}

/* k9663 in k9660 in k9655 in expand in k9638 in k9636 in k9634 */
static void C_ccall f_9664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9664,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[99],t2));}

/* k9166 in k9172 in k9139 in k9121 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9167,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[196],((C_word*)t0)[3],t1));}

/* k9157 in k9148 in k9139 in k9121 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9158,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[71],((C_word*)t0)[3],t1));}

/* k6463 in doloop1335 in k6440 in walk in k6420 in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6446(t4,((C_word*)t0)[5],t2,t3);}

/* f_4378 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4378,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k9131 in k9121 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9132,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,lf[196],((C_word*)t0)[3],t1));}

/* k4387 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_4210(t4,t3);}
else{
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_4210(t4,t3);}}

/* k9139 in k9121 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9141,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1249: ##sys#check-syntax */
t4=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[272],((C_word*)t0)[3],lf[273]);}
else{
t3=C_a_i_list(&a,2,lf[72],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9173,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t5=C_i_cdr(((C_word*)t0)[3]);
t6=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1254: walk */
t7=((C_word*)((C_word*)t0)[5])[1];
f_9051(t7,t4,t5,t6);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9185,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1257: walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9051(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* for-each-loop1566 in mark-primitive in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_7263(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7263,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7272,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:905: g1567 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* doloop1335 in k6440 in walk in k6420 in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6446(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6446,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
/* expand.scm:737: err */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6311(t5,t1,lf[149]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6464,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
/* expand.scm:739: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6311(t6,t5,lf[150]);}
else{
if(C_truep(C_i_pairp(t2))){
t6=C_i_car(t2);
/* expand.scm:742: walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_6426(t7,t5,t6,((C_word*)t0)[7]);}
else{
/* expand.scm:741: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6311(t6,t5,lf[151]);}}}}

/* k6440 in walk in k6420 in k6294 in check-syntax in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6441(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6441,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li104),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_6446(t5,((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}

/* k9113 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9114,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,lf[196],((C_word*)t0)[3],t1));}

/* k9148 in k9139 in k9121 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9149,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9158,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1250: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9051(t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k8098 in k7989 */
static void C_ccall f_8099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* synrules.scm:237: process-template */
t5=((C_word*)((C_word*)t0)[5])[1];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t2,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k4327 in map-loop593 in k4227 in k4217 in k4209 in k4204 in loop in expand-0 in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4328(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4328,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4303(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4303(t6,((C_word*)t0)[5],t5);}}

/* ##sys#mark-primitive in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7242(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_7242,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7245,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_list_2(t2,lf[14]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7263,a[2]=t6,a[3]=t3,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7263(t8,t1,t2);}

/* f_7247 */
static void C_ccall f_7247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7247,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* f_7245 in mark-primitive in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7245(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7245,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7247,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
t4=C_i_cdr(t2);
t5=t2;
t6=C_u_i_car(t5);
/* expand.scm:907: g1577 */
t7=t3;
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t4,lf[178],t6);}

/* k9612 in map-loop1842 in k9539 in k9534 in expand in k9511 in k9509 in k9507 in k9505 in k9499 */
static void C_ccall f_9613(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9613,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9588(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9588(t6,((C_word*)t0)[5],t5);}}

/* k4353 in k4342 */
static void C_ccall f_4354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:294: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4188(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* map-loop1900 in k9302 in k9293 */
static void C_fcall f_9420(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9420,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9445,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1205: g1906 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4799 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4800(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4800,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[66]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4812,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t4,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
t7=t6;
f_4812(t7,C_SCHEME_UNDEFINED);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4828,a[2]=((C_word*)t0)[9],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:395: macro-alias */
f_3386(t7,lf[78],((C_word*)t0)[10]);}}
else{
t6=C_eqp(t2,lf[65]);
if(C_truep(t6)){
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[4],C_fix(1)))){
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4846,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t4))){
t8=C_u_i_car(t4);
t9=t7;
f_4846(t9,C_i_symbolp(t8));}
else{
t8=t7;
f_4846(t8,C_SCHEME_FALSE);}}
else{
/* expand.scm:407: err */
t7=((C_word*)t0)[8];
f_4515(t7,((C_word*)t0)[6],lf[80]);}}
else{
t7=C_eqp(t2,lf[67]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[12],a[7]=t4,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=((C_word*)((C_word*)t0)[9])[1];
if(C_truep(t9)){
t10=t8;
f_4886(t10,C_SCHEME_UNDEFINED);}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4905,a[2]=((C_word*)t0)[9],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:409: macro-alias */
f_3386(t10,lf[78],((C_word*)t0)[10]);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t8=((C_word*)t0)[4];
switch(t8){
case C_fix(0):
t9=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[7]);
/* expand.scm:416: loop */
t10=((C_word*)((C_word*)t0)[5])[1];
f_4541(t10,((C_word*)t0)[6],C_fix(0),t9,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4);
case C_fix(1):
t9=C_a_i_list2(&a,2,((C_word*)t0)[2],C_SCHEME_FALSE);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[12]);
/* expand.scm:417: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4541(t11,((C_word*)t0)[6],C_fix(1),((C_word*)t0)[7],t10,C_SCHEME_END_OF_LIST,t4);
case C_fix(2):
/* expand.scm:418: err */
t9=((C_word*)t0)[8];
f_4515(t9,((C_word*)t0)[6],lf[82]);
default:
t9=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[13]);
/* expand.scm:419: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4541(t11,((C_word*)t0)[6],C_fix(3),((C_word*)t0)[7],((C_word*)t0)[12],t10,t4);}}
else{
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4968,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=t4,a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t9=C_u_i_length(((C_word*)t0)[2]);
t10=C_eqp(C_fix(2),t9);
if(C_truep(t10)){
t11=C_i_car(((C_word*)t0)[2]);
t12=t8;
f_4968(t12,C_i_symbolp(t11));}
else{
t11=t8;
f_4968(t11,C_SCHEME_FALSE);}}
else{
t9=t8;
f_4968(t9,C_SCHEME_FALSE);}}}}}}

/* k9444 in map-loop1900 in k9302 in k9293 */
static void C_ccall f_9445(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9445,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9420(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9420(t6,((C_word*)t0)[5],t5);}}

/* k9450 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in ... */
static void C_ccall f_9451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1180: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[89],C_SCHEME_END_OF_LIST,t1);}

/* f_9453 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in ... */
static void C_ccall f_9453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9453,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9456,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1185: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[89],t2,lf[290]);}

/* k9455 */
static void C_ccall f_9456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9456,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9465,a[2]=t5,a[3]=t7,a[4]=((C_word)li183),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_9465(t9,((C_word*)t0)[3],t2);}

/* k4826 in k4799 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4812(t3,t2);}

/* map-loop1079 in k5511 in loop in fini/syntax in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5517(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5517,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* ##sys#ir-transformer in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7234(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7234,3,t0,t1,t2);}
/* expand.scm:897: make-er/ir-transformer */
t3=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_FALSE);}

/* k4847 in k4844 in k4799 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4848(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:405: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4541(t5,((C_word*)t0)[5],C_fix(2),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_END_OF_LIST,t4);}

/* k4844 in k4799 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4846(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4846,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t3)){
t4=t2;
f_4848(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,t4);
t6=t2;
f_4848(t6,t5);}}
else{
/* expand.scm:406: err */
t2=((C_word*)t0)[9];
f_4515(t2,((C_word*)t0)[5],lf[79]);}}

/* k5511 in loop in fini/syntax in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5517,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5517(t6,t2,t1);}

/* k5513 in k5511 in loop in fini/syntax in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5515,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[104],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,1,t3));}

/* k7219 in k6724 */
static void C_ccall f_7220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:894: handler */
t2=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]);}

/* ##sys#er-transformer in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_7228(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7228,3,t0,t1,t2);}
/* expand.scm:896: make-er/ir-transformer */
t3=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_TRUE);}

/* k5580 in k5558 in loop in fini/syntax in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5581(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5581,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,lf[73],t7);
t9=C_a_i_list(&a,2,lf[23],t8);
t10=C_a_i_list(&a,3,lf[97],t1,t9);
t11=C_a_i_cons(&a,2,t10,((C_word*)t0)[3]);
/* expand.scm:507: loop */
t12=((C_word*)((C_word*)t0)[4])[1];
f_5496(t12,((C_word*)t0)[5],((C_word*)t0)[6],t11,C_SCHEME_FALSE);}

/* doloop1434 in compare in k6724 */
static void C_fcall f_6918(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6918,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
t5=(C_truep(t4)?t4:C_i_not(t3));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_fixnum_plus(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6936,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_i_vector_ref(((C_word*)t0)[4],t2);
t9=C_i_vector_ref(((C_word*)t0)[5],t2);
/* expand.scm:824: compare */
t10=((C_word*)((C_word*)t0)[6])[1];
f_6861(4,t10,t7,t8,t9);}}

/* k8896 in k8889 in k8850 in k8814 in test in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k7216 in k6724 */
static void C_ccall f_7217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:894: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7103(t2,((C_word*)t0)[3],t1);}

/* k8889 in k8850 in k8814 in test in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8891,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* expand.scm:1314: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8785(t4,t2,t3);}
else{
/* expand.scm:1315: err */
t2=((C_word*)((C_word*)t0)[5])[1];
f_8776(t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k5571 in k5558 in loop in fini/syntax in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5572,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* expand.scm:507: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5496(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,C_SCHEME_FALSE);}

/* k3405 in k3398 in k3396 in k3393 in k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3407,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3411,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:85: g244 */
t5=t3;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[3],lf[5],((C_word*)t0)[5]);}

/* f_3403 in k3398 in k3396 in k3393 in k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3403,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* f_7011 in k7022 in k6970 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_7011(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7011,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(t3,((C_word*)t0)[2]));}

/* k5558 in loop in fini/syntax in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5560(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5560,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cadr(t3);
if(C_truep(C_i_pairp(t7))){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5581,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:511: caadr */
t9=*((C_word*)lf[105]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
t8=C_u_i_car(t3);
t9=C_u_i_cdr(t3);
t10=C_u_i_car(t9);
t11=C_eqp(t8,t10);
if(C_truep(t11)){
/* expand.scm:517: ##sys#defjam-error */
t12=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t6,t3);}
else{
t12=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* expand.scm:507: loop */
t13=((C_word*)((C_word*)t0)[4])[1];
f_5496(t13,((C_word*)t0)[5],t5,t12,C_SCHEME_FALSE);}}}
else{
/* expand.scm:521: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5496(t2,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}}

/* f_7451 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_7451(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[50],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7451,3,t0,t1,t2);}
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],t4);
t6=C_a_i_list(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7473,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t6,a[5]=((C_word*)t0)[9],a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)((C_word*)t0)[10])[1];
t13=C_i_check_list_2(t2,lf[16]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[11],a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7490,a[2]=t11,a[3]=t16,a[4]=t9,a[5]=t12,a[6]=((C_word)li135),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_7490(t18,t14,t2);}

/* k5851 in k5828 in k5805 in k5794 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5852,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* expand.scm:574: fini */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5142(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[10]);
/* expand.scm:575: loop */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5661(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* f_7445 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_7445(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7445,3,t0,t1,t2);}
/* synrules.scm:104: c */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in ... */
static void C_ccall f_7443(C_word c,C_word t0,C_word t1){
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
C_word ab[119],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7443,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7445,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li134),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7451,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word)li136),tmp=(C_word)a,a+=13,tmp));
t5=C_mutate(((C_word *)((C_word*)t0)[14])+1,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7526,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[18],a[5]=((C_word*)t0)[19],a[6]=((C_word*)t0)[20],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[21],a[9]=((C_word)li138),tmp=(C_word)a,a+=10,tmp));
t6=C_mutate(((C_word *)((C_word*)t0)[21])+1,(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_7583,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[23],a[6]=((C_word*)t0)[24],a[7]=((C_word*)t0)[25],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[26],a[13]=((C_word*)t0)[27],a[14]=((C_word*)t0)[28],a[15]=((C_word*)t0)[29],a[16]=((C_word*)t0)[30],a[17]=((C_word*)t0)[31],a[18]=((C_word)li139),tmp=(C_word)a,a+=19,tmp));
t7=C_mutate(((C_word *)((C_word*)t0)[23])+1,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_7735,a[2]=((C_word*)t0)[32],a[3]=((C_word*)t0)[33],a[4]=((C_word*)t0)[34],a[5]=((C_word*)t0)[35],a[6]=((C_word*)t0)[36],a[7]=((C_word*)t0)[37],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[38],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[39],a[15]=((C_word*)t0)[21],a[16]=((C_word*)t0)[26],a[17]=((C_word)li140),tmp=(C_word)a,a+=18,tmp));
t8=C_mutate(((C_word *)((C_word*)t0)[20])+1,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7834,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[24],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[40],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[26],a[9]=((C_word*)t0)[28],a[10]=((C_word*)t0)[31],a[11]=((C_word)li142),tmp=(C_word)a,a+=12,tmp));
t9=C_mutate(((C_word *)((C_word*)t0)[18])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7955,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[18],a[4]=((C_word*)t0)[41],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[42],a[7]=((C_word*)t0)[43],a[8]=((C_word*)t0)[44],a[9]=((C_word*)t0)[45],a[10]=((C_word*)t0)[46],a[11]=((C_word*)t0)[47],a[12]=((C_word*)t0)[48],a[13]=((C_word)li144),tmp=(C_word)a,a+=14,tmp));
t10=C_mutate(((C_word *)((C_word*)t0)[19])+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8126,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[31],a[5]=((C_word)li145),tmp=(C_word)a,a+=6,tmp));
t11=C_mutate(((C_word *)((C_word*)t0)[43])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8196,a[2]=((C_word*)t0)[43],a[3]=((C_word*)t0)[48],a[4]=((C_word)li146),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate(((C_word *)((C_word*)t0)[31])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8277,a[2]=((C_word*)t0)[48],a[3]=((C_word)li147),tmp=(C_word)a,a+=4,tmp));
t13=C_mutate(((C_word *)((C_word*)t0)[48])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8304,a[2]=((C_word*)t0)[3],a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate(((C_word *)((C_word*)t0)[44])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8327,a[2]=((C_word*)t0)[44],a[3]=((C_word*)t0)[48],a[4]=((C_word)li149),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate(((C_word *)((C_word*)t0)[41])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8345,a[2]=((C_word*)t0)[3],a[3]=((C_word)li151),tmp=(C_word)a,a+=4,tmp));
/* synrules.scm:314: make-transformer */
t16=((C_word*)((C_word*)t0)[5])[1];
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,((C_word*)t0)[49],((C_word*)t0)[50]);}

/* f_6957 in compare in k6724 */
static void C_ccall f_6957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6957,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in ... */
static void C_ccall f_7438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7438,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|50,a[1]=(C_word)f_7443,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[2],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],tmp=(C_word)a,a+=51,tmp);
/* synrules.scm:101: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[52]);}

/* k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in ... */
static void C_ccall f_7434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7434,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7438,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:99: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[213]);}

/* k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in ... */
static void C_ccall f_7430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7430,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7434,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:98: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[214]);}

/* k8850 in k8814 in test in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8852,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8866,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1311: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8785(t5,t3,t4);}
else{
/* expand.scm:1313: err */
t3=((C_word*)((C_word*)t0)[6])[1];
f_8776(t3,((C_word*)t0)[3],((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8891,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1314: c */
t3=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* k5828 in k5805 in k5794 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5830,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_cdr(((C_word*)t0)[8]);
/* expand.scm:568: ##sys#append */
t4=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[9]);}
else{
t2=C_i_memq(((C_word*)t0)[10],((C_word*)t0)[4]);
t3=(C_truep(t2)?t2:C_i_memq(((C_word*)t0)[10],((C_word*)t0)[6]));
if(C_truep(t3)){
/* expand.scm:571: fini */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5142(t4,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[12]);}
else{
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:572: ##sys#expand-0 */
t5=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[8],((C_word*)t0)[13],((C_word*)t0)[14]);}}}

/* k7022 in k6970 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_7023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7023,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7011,a[2]=((C_word*)t0)[3],a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:834: g1487 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[4],t2);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in ... */
static void C_ccall f_7426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7426,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7430,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[2],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:97: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[215]);}

/* k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in ... */
static void C_ccall f_7421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7421,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[202]);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7426,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:96: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[205]);}

/* k5835 in k5828 in k5805 in k5794 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:568: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5661(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3445(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(15);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3445,NULL,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}
else{
if(C_truep(C_i_symbolp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3462,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3466,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:105: g274 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[5]);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t5=C_a_i_cons(&a,2,t2,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)((C_word*)t0)[2])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3512,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_u_i_car(t9);
/* expand.scm:113: walk */
t16=t8;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t4=C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3527,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:118: make-vector */
t6=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}}}

/* k6935 in doloop1434 in compare in k6724 */
static void C_ccall f_6936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_6918(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k9172 in k9139 in k9121 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9173,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[196],((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9167,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1255: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9051(t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in ... */
static void C_ccall f_7414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7414,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[200]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[201]);
t5=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7421,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[31],a[29]=((C_word*)t0)[32],a[30]=((C_word*)t0)[33],a[31]=((C_word*)t0)[34],a[32]=((C_word*)t0)[35],a[33]=((C_word*)t0)[36],a[34]=((C_word*)t0)[37],a[35]=((C_word*)t0)[38],a[36]=((C_word*)t0)[39],a[37]=((C_word*)t0)[40],a[38]=((C_word*)t0)[41],a[39]=((C_word*)t0)[2],a[40]=((C_word*)t0)[42],a[41]=((C_word*)t0)[3],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[4],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:94: r */
t6=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[216]);}

/* k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in ... */
static void C_ccall f_7409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7409,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[199]);
t4=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7414,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[2],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:90: r */
t5=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[217]);}

/* k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in ... */
static void C_ccall f_7401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7401,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7405,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[2],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:87: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[56]);}

/* k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in ... */
static void C_ccall f_7405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7405,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7409,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[2],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:88: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[89]);}

/* k9486 in expand in k9455 */
static void C_ccall f_9487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9487,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[50],((C_word*)t0)[3],t1));}

/* k8865 in k8850 in k8814 in test in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8866,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* expand.scm:1312: test */
t4=((C_word*)((C_word*)t0)[5])[1];
f_8785(t4,((C_word*)t0)[2],t3);}}

/* k6991 in k6970 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_6993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6993,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6998,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7002,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:836: g1482 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],lf[178]);}

/* k9494 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in ... */
static void C_ccall f_9495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1145: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[291],C_SCHEME_END_OF_LIST,t1);}

/* f_9497 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in k7282 in k3798 in k3364 in ... */
static void C_ccall f_9497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9497,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9500,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1150: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[291],t2,lf[298]);}

/* f_6998 in k6991 in k6970 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_6998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6998,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k8814 in test in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8816,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1305: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8785(t5,t3,t4);}
else{
/* expand.scm:1307: err */
t3=((C_word*)((C_word*)t0)[6])[1];
f_8776(t3,((C_word*)t0)[3],((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:1308: c */
t3=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[11]);}}

/* k9187 in k9184 in k9139 in k9121 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9188,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[196],((C_word*)t0)[3],t1));}

/* k9184 in k9139 in k9121 in k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9188,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1257: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9051(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9092 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9094(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9094,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9102,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1240: ##sys#check-syntax */
t4=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[270],((C_word*)t0)[5],lf[271]);}
else{
t3=C_a_i_list(&a,2,lf[72],((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9114,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1243: walk */
t6=((C_word*)((C_word*)t0)[7])[1];
f_9051(t6,t4,((C_word*)t0)[4],t5);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9123,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1244: c */
t3=((C_word*)t0)[11];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[9]);}}

/* k6970 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_fcall f_6972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6972,NULL,2,t0,t1);}
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
if(C_truep(C_i_symbolp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6989,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:835: g1475 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[178]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7023,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:837: ##sys#macro-environment */
t3=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
if(C_truep(C_i_symbolp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7047,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:841: ##sys#macro-environment */
t3=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[2],t1));}}}

/* k4043 in k4033 in copy in k4003 */
static void C_ccall f_4044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4044,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[35],t3));}

/* k8831 in k8814 in test in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_8833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8833,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
/* expand.scm:1306: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8785(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7046 in k6970 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_7047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7047,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7035,a[2]=((C_word*)t0)[3],a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:841: g1495 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[4],t2);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_6989 in k6970 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_6989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6989,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k4097 in k4084 */
static void C_ccall f_4098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:238: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5805 in k5794 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5807,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:565: ##sys#check-syntax */
t3=*((C_word*)lf[55]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[98],((C_word*)t0)[2],lf[113],C_SCHEME_FALSE,((C_word*)t0)[10]);}
else{
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5830,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* expand.scm:567: comp */
t3=((C_word*)((C_word*)t0)[15])[1];
f_5077(t3,t2,lf[99],((C_word*)t0)[11]);}}

/* k5808 in k5805 in k5794 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5809,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
/* expand.scm:566: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5661(t6,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t3,t5);}

/* k8624 in k8622 in k8604 in k8601 in k8596 */
static void C_ccall f_8625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8625,2,t0,t1);}
t2=C_i_cddddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[245],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t7=C_a_i_list(&a,4,t1,((C_word*)t0)[5],lf[246],t6);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[99],t5,t7));}

/* k8622 in k8604 in k8601 in k8596 */
static void C_ccall f_8623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8623,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8625,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1382: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[244]);}

/* k8655 in k8604 in k8601 in k8596 */
static void C_ccall f_8656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:1392: ##sys#instantiate-functor */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[252]+1)))(5,*((C_word*)lf[252]+1),((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);}

/* k7051 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_7052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_6972(t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
f_6972(t3,t2);}}

/* k8651 in k8604 in k8601 in k8596 */
static void C_ccall f_8652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1379: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[248]+1)))(4,*((C_word*)lf[248]+1),((C_word*)t0)[2],lf[249],t1);}

/* k7056 in k6959 in compare in k6724 */
static void C_ccall f_7057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_6964(t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
f_6964(t3,t2);}}

/* k8653 in k8604 in k8601 in k8596 */
static void C_ccall f_8654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[250]);}

/* f_4082 */
static void C_ccall f_4082(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4085,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4108,a[2]=((C_word*)t0)[3],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4114,a[2]=t6,a[3]=t4,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4119,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li37),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4124,a[2]=t4,a[3]=t6,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:234: ##sys#dynamic-wind */
t10=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t2,t7,t8,t9);}
else{
/* expand.scm:236: handler */
t3=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* k4084 */
static void C_ccall f_4085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=(C_truep(t3)?C_SCHEME_FALSE:C_eqp(((C_word*)t0)[4],t1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4098,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4101,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:240: symbol->string */
t7=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[5]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}}

/* k4086 in k4084 */
static void C_ccall f_4087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_4080 */
static void C_ccall f_4080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li39),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4131,a[2]=((C_word*)t0)[8],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4145,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12851 */
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k8648 in k8604 in k8601 in k8596 */
static void C_ccall f_8649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1378: string->symbol */
t2=*((C_word*)lf[247]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9399 in map-loop1934 in k9340 in k9322 in k9302 in k9293 */
static void C_ccall f_9400(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9400,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9375(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9375(t6,((C_word*)t0)[5],t5);}}

/* k7000 in k6991 in k6970 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_7002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(((C_word*)t0)[3],t2));}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(((C_word*)t0)[3],t2));}}

/* err in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4515(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4515,NULL,3,t0,t1,t2);}
/* expand.scm:338: errh */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* k5750 in loop2 in k5694 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5751,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[4]);
/* expand.scm:551: ##sys#expand-curried-define */
t4=*((C_word*)lf[106]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k9072 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9073,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[192],t1));}

/* ##sys#expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4511(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[18],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4511,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4515,a[2]=t4,a[3]=t2,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4530,a[2]=t8,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=t5,a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:342: macro-alias */
f_3386(t11,lf[89],t5);}

/* k7472 */
static void C_ccall f_7473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7473,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],t3);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[23],t4));}

/* f_7035 in k7046 in k6970 in k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_7035(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7035,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(((C_word*)t0)[2],t3));}

/* k9075 in walk1 in k9048 in k9046 in k9044 */
static void C_ccall f_9076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1233: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9051(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k7477 */
static void C_ccall f_7479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7479,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[45],((C_word*)((C_word*)t0)[2])[1]);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,1,t3);
/* synrules.scm:61: ##sys#append */
t5=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],t1,t4);}

/* k6036 in expand-curried-define in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6037,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,lf[96],((C_word*)((C_word*)t0)[3])[1],t1));}

/* k5756 in k5750 in loop2 in k5694 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:550: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5700(t2,((C_word*)t0)[3],t1);}

/* k4885 in k4799 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4886(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[2],C_fix(2)))){
/* expand.scm:411: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4541(t2,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}
else{
/* expand.scm:412: err */
t2=((C_word*)t0)[8];
f_4515(t2,((C_word*)t0)[4],lf[81]);}}

/* k4013 in k4003 */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4014,2,t0,t1);}
t2=C_a_i_record3(&a,3,lf[33],((C_word*)t0)[2],t1);
/* expand.scm:207: ##sys#abort */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* copy in k4003 */
static void C_fcall f_4019(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4019,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4035,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_equalp(lf[39],t3))){
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_car(t5);
t8=t6;
f_4035(t8,C_i_stringp(t7));}
else{
t7=t6;
f_4035(t7,C_SCHEME_FALSE);}}
else{
t7=t6;
f_4035(t7,C_SCHEME_FALSE);}}}

/* f_7834 in k7441 in k7436 in k7432 in k7428 in k7424 in k7419 in k7412 in k7407 in k7403 in k7399 in k7395 in k7391 in k7387 in k7381 in k7376 in k7372 in k7357 in process-syntax-rules in k7348 in k7346 in k7344 in ... */
static void C_ccall f_7834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_7834,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7856,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* synrules.scm:174: mapit */
t7=t4;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,t3);}}
else{
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7862,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* synrules.scm:175: segment-pattern? */
t7=((C_word*)((C_word*)t0)[10])[1];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,t2,t5);}}

/* loop in k6064 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_6070(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6070,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
t4=C_eqp(lf[135],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6089,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:629: cadar */
t6=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:630: loop */
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* k6959 in compare in k6724 */
static void C_ccall f_6961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6961,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_6964(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7057,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
/* expand.scm:849: lookup */
f_3368(t3,t4,t5);}}

/* k6962 in k6959 in compare in k6724 */
static void C_fcall f_6964(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6964,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6965,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6969,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:830: g1458 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[5]);}

/* f_6965 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_6965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6965,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k4033 in copy in k4003 */
static void C_fcall f_4035(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4035,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_i_car(((C_word*)t0)[2]);
/* expand.scm:223: string-append */
t5=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,lf[37],t3,lf[38],t4);}
else{
/* expand.scm:229: copy */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4019(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k6967 in k6962 in k6959 in compare in k6724 */
static void C_ccall f_6969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_6972(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7052,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
/* expand.scm:849: lookup */
f_3368(t3,t4,t5);}}

/* expand in k9455 */
static void C_fcall f_9465(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9465,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,lf[50],t4));}
else{
t4=C_i_car(t2);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9487,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* expand.scm:1191: expand */
t11=t6;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}

/* k6051 in syntax-error-hook in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[118]+1),lf[119],t1);}

/* k4003 */
static void C_fcall f_4005(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4005,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4014,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4019,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4019(t8,t3,t4);}
else{
t2=((C_word*)t0)[2];
/* expand.scm:207: ##sys#abort */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}}

/* ##sys#syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6054,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(*((C_word*)lf[117]+1)))){
/* expand.scm:632: ##sys#syntax-error-hook */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6116,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:633: open-output-string */
t5=*((C_word*)lf[138]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5761 in loop2 in k5694 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5762,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_i_cddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,lf[73],t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[5]);
/* expand.scm:556: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_5661(t9,((C_word*)t0)[7],((C_word*)t0)[8],t3,t8,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k6064 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6065,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6070,a[2]=t4,a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6070(t6,((C_word*)t0)[2],t2);}

/* k4811 in k4799 in loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
/* expand.scm:397: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4541(t3,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[5],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);}
else{
/* expand.scm:398: err */
t3=((C_word*)t0)[7];
f_4515(t3,((C_word*)t0)[4],lf[77]);}}

/* k8243 in k8233 */
static void C_ccall f_8244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:271: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* ##sys#syntax-error-hook in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6045(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6045r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6045r(t0,t1,t2);}}

static void C_ccall f_6045r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6052,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:621: ##sys#strip-syntax */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k8233 */
static void C_ccall f_8235(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8235,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8244,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:273: free-meta-variables */
t5=((C_word*)((C_word*)t0)[3])[1];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8261,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:278: free-meta-variables */
t7=((C_word*)((C_word*)t0)[3])[1];
((C_proc6)C_fast_retrieve_proc(t7))(6,t7,t4,t6,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8275,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:281: vector->list */
t3=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}}}}

/* k6091 in k6088 in loop in k6064 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6092,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_3416 in k3413 in k3405 in k3398 in k3396 in k3393 in k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3416,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* f_3411 in k3405 in k3398 in k3396 in k3393 in k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3411,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* k8688 in k8665 in k8601 in k8596 */
static void C_fcall f_8690(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8690,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[254],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,lf[255],t6));}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[255],t3));}}

/* k3413 in k3405 in k3398 in k3396 in k3393 in k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3416,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:86: g249 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],lf[7],((C_word*)t0)[4]);}

/* k8386 in macro-subset in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in ... */
static void C_ccall f_8387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1449: ##sys#fixup-macro-environment */
t2=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3418 in k3413 in k3405 in k3398 in k3396 in k3393 in k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8260 in k8233 */
static void C_ccall f_8261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:276: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* k5711 in loop2 in k5694 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
t5=C_eqp(t4,((C_word*)t0)[2]);
if(C_truep(t5)){
/* expand.scm:540: ##sys#defjam-error */
t6=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t2,((C_word*)t0)[4]);}
else{
t6=t2;
f_5714(2,t6,C_SCHEME_UNDEFINED);}}

/* k5713 in k5711 in loop2 in k5694 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5714,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[4]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
/* expand.scm:541: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_5661(t6,((C_word*)t0)[7],((C_word*)t0)[8],t2,t5,((C_word*)t0)[9],((C_word*)t0)[10]);}
else{
t4=C_a_i_cons(&a,2,lf[109],((C_word*)t0)[5]);
/* expand.scm:541: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_5661(t5,((C_word*)t0)[7],((C_word*)t0)[8],t2,t4,((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* assq-reverse in k6724 */
static C_word C_fcall f_7079(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_cdar(t2);
t4=C_eqp(t3,t1);
if(C_truep(t4)){
t5=t2;
return(C_u_i_car(t5));}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* ##sys#strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3438(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3438,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3445,a[2]=t4,a[3]=t6,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3445(t8,t1,t2);}

/* loop2 in k5694 in k5691 in loop in expand in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5700(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5700,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5751,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:548: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t5,lf[96],t2,lf[107],C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5762,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:553: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t5,lf[96],t2,lf[108],C_SCHEME_FALSE,((C_word*)t0)[3]);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5712,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:538: ##sys#check-syntax */
t5=*((C_word*)lf[55]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t4,lf[96],t2,lf[110],C_SCHEME_FALSE,((C_word*)t0)[3]);}}

/* f_9042 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in ... */
static void C_ccall f_9042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9042,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9045,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1227: r */
t6=t3;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[269]);}

/* k9039 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in k7284 in ... */
static void C_ccall f_9040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1222: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[269],C_SCHEME_END_OF_LIST,t1);}

/* k9046 in k9044 */
static void C_ccall f_9047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9049,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1229: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[272]);}

/* k9044 */
static void C_ccall f_9045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9047,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1228: r */
t3=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[270]);}

/* k9048 in k9046 in k9044 */
static void C_ccall f_9049(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9049,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9051,a[2]=t7,a[3]=t5,a[4]=((C_word)li171),tmp=(C_word)a,a+=5,tmp));
t9=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9060,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word)li172),tmp=(C_word)a,a+=8,tmp));
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9201,a[2]=t7,a[3]=((C_word)li176),tmp=(C_word)a,a+=4,tmp));
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9280,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1271: ##sys#check-syntax */
t12=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,lf[269],((C_word*)t0)[5],lf[283]);}

/* k6088 in loop in k6064 in k6159 in loop in k6115 in syntax-error/context in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_6089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6092,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* expand.scm:629: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6070(t5,t2,t4);}

/* ##sys#canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5065r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5065r(t0,t1,t2,t3);}}

static void C_ccall f_5065r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5069,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:448: ##sys#current-environment */
t5=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_5069(2,t5,C_i_car(t3));}}

/* k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5069,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5077,a[2]=t1,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t17=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5142,a[2]=t15,a[3]=t9,a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp));
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5487,a[2]=t11,a[3]=t9,a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5655,a[2]=t1,a[3]=t13,a[4]=t11,a[5]=t5,a[6]=t9,a[7]=((C_word)li82),tmp=(C_word)a,a+=8,tmp));
/* expand.scm:577: expand */
t20=((C_word*)t15)[1];
f_5655(t20,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* walk in k9048 in k9046 in k9044 */
static void C_fcall f_9051(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9051,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9058,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1230: walk1 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9060(t5,t4,t2,t3);}

/* k9057 in walk in k9048 in k9046 in k9044 */
static void C_ccall f_9058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1230: simplify */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9201(t2,((C_word*)t0)[3],t1);}

/* map-loop2270 */
static void C_fcall f_7490(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7490,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7515,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* synrules.scm:110: g2276 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9322 in k9302 in k9293 */
static void C_ccall f_9324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9324,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_eqp(t3,C_SCHEME_END_OF_LIST);
t5=(C_truep(t4)?lf[285]:C_a_i_cons(&a,2,lf[99],t3));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9341,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_eqp(((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=t6;
f_9341(t8,lf[287]);}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);
t9=t6;
f_9341(t9,C_a_i_cons(&a,2,lf[50],t8));}}

/* walk1 in k9048 in k9046 in k9044 */
static void C_fcall f_9060(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9060,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9073,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9076,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1233: vector->list */
t6=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9094,a[2]=t3,a[3]=t1,a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1238: c */
t8=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t7,((C_word*)t0)[3],t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[72],t2));}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_expand_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_expand_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("expand_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(4231)){
C_save(t1);
C_rereclaim2(4231*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,340);
lf[0]=C_h_intern(&lf[0],12,"\003sysfeatures");
lf[1]=C_h_intern(&lf[1],23,"\003syscurrent-environment");
lf[2]=C_h_intern(&lf[2],28,"\003syscurrent-meta-environment");
lf[3]=C_h_intern(&lf[3],27,"\003sysactive-eval-environment");
lf[5]=C_h_intern(&lf[5],16,"\004coremacro-alias");
lf[7]=C_h_intern(&lf[7],14,"\004corereal-name");
lf[8]=C_h_intern(&lf[8],6,"gensym");
lf[9]=C_h_intern(&lf[9],21,"\003sysqualified-symbol\077");
lf[10]=C_h_intern(&lf[10],16,"\003sysstrip-syntax");
lf[11]=C_h_intern(&lf[11],11,"make-vector");
lf[12]=C_h_intern(&lf[12],12,"strip-syntax");
lf[13]=C_h_intern(&lf[13],13,"\003sysextend-se");
lf[14]=C_h_intern(&lf[14],8,"for-each");
lf[15]=C_h_intern(&lf[15],6,"append");
lf[16]=C_h_intern(&lf[16],3,"map");
lf[17]=C_h_intern(&lf[17],13,"\003sysglobalize");
lf[18]=C_h_intern(&lf[18],21,"\003sysalias-global-hook");
lf[19]=C_h_intern(&lf[19],21,"\003sysmacro-environment");
lf[20]=C_h_intern(&lf[20],29,"\003syschicken-macro-environment");
lf[21]=C_h_intern(&lf[21],33,"\003syschicken-ffi-macro-environment");
lf[22]=C_h_intern(&lf[22],22,"\003sysensure-transformer");
lf[23]=C_h_intern(&lf[23],18,"\003syser-transformer");
lf[24]=C_h_intern(&lf[24],11,"transformer");
lf[25]=C_h_intern(&lf[25],9,"\003syserror");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000$expected syntax-transformer, but got");
lf[27]=C_h_intern(&lf[27],28,"\003sysextend-macro-environment");
lf[28]=C_h_intern(&lf[28],14,"\003syscopy-macro");
lf[29]=C_h_intern(&lf[29],10,"\003sysmacro\077");
lf[30]=C_h_intern(&lf[30],20,"\003sysunregister-macro");
lf[31]=C_h_intern(&lf[31],19,"\003sysundefine-macro!");
lf[32]=C_h_intern(&lf[32],12,"\003sysexpand-0");
lf[33]=C_h_intern(&lf[33],9,"condition");
lf[34]=C_h_intern(&lf[34],9,"\003sysabort");
lf[35]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message");
lf[36]=C_h_intern(&lf[36],13,"string-append");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\025during expansion of (");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\010 ...) - ");
lf[39]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message");
lf[40]=C_h_intern(&lf[40],3,"exn");
lf[41]=C_h_intern(&lf[41],21,"\003syssyntax-error-hook");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\030syntax transformer for `");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000@\047 returns original form, which would result in endless expansion");
lf[44]=C_h_intern(&lf[44],14,"symbol->string");
lf[45]=C_h_intern(&lf[45],25,"\003syssyntax-rules-mismatch");
lf[46]=C_h_intern(&lf[46],16,"\003sysdynamic-wind");
lf[47]=C_h_intern(&lf[47],22,"with-exception-handler");
lf[48]=C_h_intern(&lf[48],30,"call-with-current-continuation");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid syntax in macro form");
lf[50]=C_h_intern(&lf[50],8,"\004corelet");
lf[51]=C_h_intern(&lf[51],16,"\004coreloop-lambda");
lf[52]=C_h_intern(&lf[52],11,"\004coreletrec");
lf[53]=C_h_intern(&lf[53],4,"cadr");
lf[54]=C_h_intern(&lf[54],8,"\004coreapp");
lf[55]=C_h_intern(&lf[55],16,"\003syscheck-syntax");
lf[56]=C_h_intern(&lf[56],3,"let");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[58]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[59]=C_h_intern(&lf[59],24,"\003syscompiler-syntax-hook");
lf[60]=C_h_intern(&lf[60],24,"\010compilercompiler-syntax");
lf[61]=C_h_intern(&lf[61],25,"\003sysenable-runtime-macros");
lf[62]=C_h_intern(&lf[62],10,"\003sysexpand");
lf[63]=C_h_intern(&lf[63],6,"expand");
lf[64]=C_h_intern(&lf[64],25,"\003sysextended-lambda-list\077");
lf[65]=C_h_intern(&lf[65],6,"#!rest");
lf[66]=C_h_intern(&lf[66],10,"#!optional");
lf[67]=C_h_intern(&lf[67],5,"#!key");
lf[68]=C_h_intern(&lf[68],7,"reverse");
lf[69]=C_h_intern(&lf[69],31,"\003sysexpand-extended-lambda-list");
lf[70]=C_h_intern(&lf[70],5,"cadar");
lf[71]=C_h_intern(&lf[71],10,"\003sysappend");
lf[72]=C_h_intern(&lf[72],10,"\004corequote");
lf[73]=C_h_intern(&lf[73],11,"\004corelambda");
lf[74]=C_h_intern(&lf[74],15,"\003sysget-keyword");
lf[75]=C_h_intern(&lf[75],15,"string->keyword");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000+rest argument list specified more than once");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000-`#!optional\047 argument marker in wrong context");
lf[78]=C_h_intern(&lf[78],3,"tmp");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000#invalid syntax of `#!rest\047 argument");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000)`#!rest\047 argument marker in wrong context");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000(`#!key\047 argument marker in wrong context");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\0000invalid lambda list syntax after `#!rest\047 marker");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000 invalid required argument syntax");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\0000invalid lambda list syntax after `#!rest\047 marker");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid lambda list syntax");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid lambda list syntax");
lf[87]=C_h_intern(&lf[87],14,"let-optionals\052");
lf[88]=C_h_intern(&lf[88],8,"optional");
lf[89]=C_h_intern(&lf[89],4,"let\052");
lf[90]=C_h_intern(&lf[90],16,"\003sysdefjam-error");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000,redefinition of currently used defining form");
lf[92]=C_h_intern(&lf[92],21,"\003sysdefine-definition");
lf[93]=C_h_intern(&lf[93],28,"\003sysdefine-syntax-definition");
lf[94]=C_h_intern(&lf[94],28,"\003sysdefine-values-definition");
lf[95]=C_h_intern(&lf[95],21,"\003syscanonicalize-body");
lf[96]=C_h_intern(&lf[96],6,"define");
lf[97]=C_h_intern(&lf[97],13,"define-syntax");
lf[98]=C_h_intern(&lf[98],13,"define-values");
lf[99]=C_h_intern(&lf[99],10,"\004corebegin");
lf[100]=C_h_intern(&lf[100],14,"\004coreundefined");
lf[101]=C_h_intern(&lf[101],9,"\004coreset!");
lf[102]=C_h_intern(&lf[102],20,"\003syscall-with-values");
lf[103]=C_h_intern(&lf[103],3,"cdr");
lf[104]=C_h_intern(&lf[104],18,"\004coreletrec-syntax");
lf[105]=C_h_intern(&lf[105],5,"caadr");
lf[106]=C_h_intern(&lf[106],25,"\003sysexpand-curried-define");
lf[107]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[108]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[109]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[110]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[111]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[112]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[113]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[115]=C_h_intern(&lf[115],24,"\003sysline-number-database");
lf[116]=C_h_intern(&lf[116],24,"\003syssyntax-error-culprit");
lf[117]=C_h_intern(&lf[117],18,"\003syssyntax-context");
lf[118]=C_h_intern(&lf[118],15,"\003syssignal-hook");
lf[119]=C_h_intern(&lf[119],13,"\000syntax-error");
lf[120]=C_h_intern(&lf[120],24,"\003syssyntax-error/context");
lf[121]=C_h_intern(&lf[121],9,"\003sysprint");
lf[122]=C_h_intern(&lf[122],17,"get-output-string");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\006 ...)\047");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\025\012inside expression `(");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\027  Suggesting: `(import ");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\025  Suggesting one of:\012");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\017\012      (import ");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000# ...)\047 without importing it first.\012");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000-\012\012  Perhaps you intended to use the syntax `(");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[135]=C_h_intern(&lf[135],6,"syntax");
lf[136]=C_h_intern(&lf[136],7,"\003sysget");
lf[137]=C_h_intern(&lf[137],7,"\004coredb");
lf[138]=C_h_intern(&lf[138],18,"open-output-string");
lf[139]=C_h_intern(&lf[139],12,"syntax-error");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\024no rule matches form");
lf[141]=C_h_intern(&lf[141],15,"get-line-number");
lf[142]=C_h_intern(&lf[142],18,"\003syshash-table-ref");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\006) in `");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\004\047 - ");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\004in `");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\004\047 - ");
lf[148]=C_h_intern(&lf[148],8,"keyword\077");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\024not enough arguments");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\022too many arguments");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\021not a proper list");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\021unexpected object");
lf[153]=C_h_intern(&lf[153],1,"_");
lf[154]=C_h_intern(&lf[154],4,"pair");
lf[155]=C_h_intern(&lf[155],5,"pair\077");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\015pair expected");
lf[157]=C_h_intern(&lf[157],8,"variable");
lf[158]=C_h_intern(&lf[158],7,"symbol\077");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\023identifier expected");
lf[160]=C_h_intern(&lf[160],6,"symbol");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\017symbol expected");
lf[162]=C_h_intern(&lf[162],4,"list");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\024proper list expected");
lf[164]=C_h_intern(&lf[164],6,"number");
lf[165]=C_h_intern(&lf[165],7,"number\077");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\017number expected");
lf[167]=C_h_intern(&lf[167],6,"string");
lf[168]=C_h_intern(&lf[168],7,"string\077");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\017string expected");
lf[170]=C_h_intern(&lf[170],11,"lambda-list");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\024lambda-list expected");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\017missing keyword");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\015pair expected");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\017incomplete form");
lf[175]=C_h_intern(&lf[175],22,"make-er/ir-transformer");
lf[176]=C_h_intern(&lf[176],12,"list->vector");
lf[177]=C_h_intern(&lf[177],12,"vector->list");
lf[178]=C_h_intern(&lf[178],14,"\004coreprimitive");
lf[179]=C_h_intern(&lf[179],12,"\004corealiased");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\033(expand.scm:777) not a list");
lf[181]=C_h_intern(&lf[181],18,"\003sysir-transformer");
lf[182]=C_h_intern(&lf[182],20,"er-macro-transformer");
lf[183]=C_h_intern(&lf[183],20,"ir-macro-transformer");
lf[184]=C_h_intern(&lf[184],18,"\003sysmark-primitive");
lf[185]=C_h_intern(&lf[185],29,"\003sysinitial-macro-environment");
lf[186]=C_h_intern(&lf[186],24,"\003sysprocess-syntax-rules");
lf[187]=C_h_intern(&lf[187],7,"\003syscar");
lf[188]=C_h_intern(&lf[188],7,"\003syscdr");
lf[189]=C_h_intern(&lf[189],10,"\003syslength");
lf[190]=C_h_intern(&lf[190],11,"\003sysvector\077");
lf[191]=C_h_intern(&lf[191],16,"\003sysvector->list");
lf[192]=C_h_intern(&lf[192],16,"\003syslist->vector");
lf[193]=C_h_intern(&lf[193],6,"\003sys>=");
lf[194]=C_h_intern(&lf[194],5,"\003sys=");
lf[195]=C_h_intern(&lf[195],5,"\003sys+");
lf[196]=C_h_intern(&lf[196],8,"\003syscons");
lf[197]=C_h_intern(&lf[197],7,"\003syseq\077");
lf[198]=C_h_intern(&lf[198],10,"\003sysequal\077");
lf[199]=C_h_intern(&lf[199],9,"\003syslist\077");
lf[200]=C_h_intern(&lf[200],7,"\003sysmap");
lf[201]=C_h_intern(&lf[201],9,"\003sysmap-n");
lf[202]=C_h_intern(&lf[202],9,"\003syspair\077");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\026ill-formed syntax rule");
lf[204]=C_h_intern(&lf[204],11,"\004coresyntax");
lf[205]=C_h_intern(&lf[205],5,"quote");
lf[206]=C_h_intern(&lf[206],14,"\003sysdrop-right");
lf[207]=C_h_intern(&lf[207],14,"\003systake-right");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000,template dimension error (too few ellipses\077)");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\021too many ellipses");
lf[210]=C_h_intern(&lf[210],9,"\003sysapply");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000%Only one segment per level is allowed");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\047Cannot combine dotted tail and ellipsis");
lf[213]=C_h_intern(&lf[213],4,"temp");
lf[214]=C_h_intern(&lf[214],4,"tail");
lf[215]=C_h_intern(&lf[215],6,"rename");
lf[216]=C_h_intern(&lf[216],2,"or");
lf[217]=C_h_intern(&lf[217],4,"loop");
lf[218]=C_h_intern(&lf[218],6,"lambda");
lf[219]=C_h_intern(&lf[219],3,"len");
lf[220]=C_h_intern(&lf[220],1,"l");
lf[221]=C_h_intern(&lf[221],5,"input");
lf[222]=C_h_intern(&lf[222],4,"else");
lf[223]=C_h_intern(&lf[223],4,"cond");
lf[224]=C_h_intern(&lf[224],7,"compare");
lf[225]=C_h_intern(&lf[225],3,"and");
lf[226]=C_h_intern(&lf[226],16,"\003sysmacro-subset");
lf[227]=C_h_intern(&lf[227],27,"\003sysfixup-macro-environment");
lf[228]=C_h_intern(&lf[228],29,"\003sysdefault-macro-environment");
lf[229]=C_h_intern(&lf[229],26,"\003sysmeta-macro-environment");
lf[230]=C_h_intern(&lf[230],14,"make-parameter");
lf[231]=C_h_intern(&lf[231],12,"syntax-rules");
lf[232]=C_h_intern(&lf[232],3,"...");
lf[233]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[234]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[235]=C_h_intern(&lf[235],6,"export");
lf[236]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[237]=C_h_intern(&lf[237],22,"\003sysadd-to-export-list");
lf[238]=C_h_intern(&lf[238],18,"\003syscurrent-module");
lf[239]=C_h_intern(&lf[239],20,"\003sysvalidate-exports");
lf[240]=C_h_intern(&lf[240],16,"begin-for-syntax");
lf[241]=C_h_intern(&lf[241],24,"\004coreelaborationtimeonly");
lf[242]=C_h_intern(&lf[242],28,"\003sysregister-meta-expression");
lf[243]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[244]=C_h_intern(&lf[244],6,"module");
lf[245]=C_h_intern(&lf[245],1,"\052");
lf[246]=C_h_intern(&lf[246],1,"=");
lf[247]=C_h_intern(&lf[247],14,"string->symbol");
lf[248]=C_h_intern(&lf[248],17,"\003sysstring-append");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\001_");
lf[250]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[251]=C_h_intern(&lf[251],25,"\003sysregister-module-alias");
lf[252]=C_h_intern(&lf[252],23,"\003sysinstantiate-functor");
lf[253]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001\376\377\016"
);
lf[254]=C_h_intern(&lf[254],12,"\004coreinclude");
lf[255]=C_h_intern(&lf[255],11,"\004coremodule");
lf[256]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[257]=C_h_intern(&lf[257],17,"require-extension");
lf[258]=C_h_intern(&lf[258],22,"\004corerequire-extension");
lf[259]=C_h_intern(&lf[259],15,"require-library");
lf[260]=C_h_intern(&lf[260],11,"cond-expand");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\042syntax error in `cond-expand\047 form");
lf[262]=C_h_intern(&lf[262],12,"\003sysfeature\077");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000(no matching clause in `cond-expand\047 form");
lf[264]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[265]=C_h_intern(&lf[265],3,"not");
lf[266]=C_h_intern(&lf[266],5,"delay");
lf[267]=C_h_intern(&lf[267],16,"\003sysmake-promise");
lf[268]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[269]=C_h_intern(&lf[269],10,"quasiquote");
lf[270]=C_h_intern(&lf[270],7,"unquote");
lf[271]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[272]=C_h_intern(&lf[272],16,"unquote-splicing");
lf[273]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[274]=C_h_intern(&lf[274],1,"a");
lf[275]=C_h_intern(&lf[275],8,"\003syslist");
lf[276]=C_h_intern(&lf[276],1,"b");
lf[277]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\003sysappend\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[278]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\377\016");
lf[279]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\003syslist\376\001\000\000\001b\376\377\016");
lf[280]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\001\000\000\001b\376\377\016");
lf[281]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[282]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\377\016");
lf[283]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[284]=C_h_intern(&lf[284],2,"do");
lf[285]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[286]=C_h_intern(&lf[286],7,"\004coreif");
lf[287]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[288]=C_h_intern(&lf[288],6,"doloop");
lf[289]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001"
"\000\000\000\001");
lf[290]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[291]=C_h_intern(&lf[291],4,"case");
lf[292]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[293]=C_h_intern(&lf[293],10,"\003sysnotice");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\0003non-`else\047 clause following `else\047 clause in `case\047");
lf[295]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[296]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[297]=C_h_intern(&lf[297],4,"eqv\077");
lf[298]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[299]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[300]=C_h_intern(&lf[300],8,"\003syswarn");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\0003non-`else\047 clause following `else\047 clause in `cond\047");
lf[302]=C_h_intern(&lf[302],2,"if");
lf[303]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[304]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[305]=C_h_intern(&lf[305],2,"=>");
lf[306]=C_h_intern(&lf[306],4,"set!");
lf[307]=C_h_intern(&lf[307],10,"\003syssetter");
lf[308]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[309]=C_h_intern(&lf[309],13,"letrec-syntax");
lf[310]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[311]=C_h_intern(&lf[311],10,"let-syntax");
lf[312]=C_h_intern(&lf[312],15,"\004corelet-syntax");
lf[313]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[314]=C_h_intern(&lf[314],6,"letrec");
lf[315]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[316]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[317]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[318]=C_h_intern(&lf[318],18,"\004coredefine-syntax");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000@redefinition of `define-syntax\047 not allowed in syntax-definition");
lf[320]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[321]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list");
lf[322]=C_h_intern(&lf[322],19,"\003sysregister-export");
lf[323]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[324]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[325]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[326]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[327]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[328]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[329]=C_h_intern(&lf[329],5,"begin");
lf[330]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[331]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_");
lf[332]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[333]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[334]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[335]=C_h_intern(&lf[335],8,"reexport");
lf[336]=C_h_intern(&lf[336],17,"\003sysexpand-import");
lf[337]=C_h_intern(&lf[337],17,"import-for-syntax");
lf[338]=C_h_intern(&lf[338],6,"import");
lf[339]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\020\000hygienic-macros\376\003\000\000\002\376\001\000\000\015\000syntax-rules\376\003\000\000\002\376\001\000\000\007\000srfi-0\376\003\000\000\002\376\001\000\000\007\000srf"
"i-2\376\003\000\000\002\376\001\000\000\007\000srfi-6\376\003\000\000\002\376\001\000\000\007\000srfi-9\376\003\000\000\002\376\001\000\000\010\000srfi-46\376\003\000\000\002\376\001\000\000\010\000srfi-55\376\003\000\000\002\376\001"
"\000\000\010\000srfi-61\376\377\016");
C_register_lf2(lf,340,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3354,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:46: append */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[339],*((C_word*)lf[0]+1));}

/* k3464 in walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3466,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3467,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3471,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:106: g284 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[7]);}

/* f_3462 in walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3462,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* f_3467 in k3464 in walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3467,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* f_9308 in k9302 in k9293 */
static void C_ccall f_9308(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9308,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_i_car(t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list2(&a,2,t3,t6));}

/* k3469 in k3464 in walk in strip-syntax in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
if(C_truep(t2)){
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}}}

/* comp in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_5077(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5077,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5081,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:450: lookup */
f_3368(t4,t3,((C_word*)t0)[2]);}

/* k9302 in k9293 */
static void C_ccall f_9303(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9303,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9308,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9324,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9420,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li181),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9420(t12,t8,((C_word*)t0)[2]);}

/* k9004 in k8988 in expand in k8773 in k8771 in k8769 in k8767 */
static void C_ccall f_9006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9006,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[99],t2));}
else{
/* expand.scm:1334: expand */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8911(t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* ##sys#macro-subset in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in ... */
static void C_ccall f_8380(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_8380r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8380r(t0,t1,t2,t3);}}

static void C_ccall f_8380r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8387,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8393,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1445: ##sys#macro-environment */
t8=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}

/* k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_3395(t3,t1);}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_block_size(t3);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t5=C_subchar(t3,C_fix(0));
t6=t2;
f_3395(t6,C_i_char_equalp(C_make_character(35),t5));}
else{
t5=t2;
f_3395(t5,C_SCHEME_FALSE);}}}

/* k3393 in k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_3395(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3395,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:82: gensym */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k3396 in k3393 in k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3397,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3399,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:83: lookup */
f_3368(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3398 in k3396 in k3393 in k3391 in macro-alias in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_3399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3399,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3403,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:84: g240 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],lf[7]);}

/* k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4534,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:345: macro-alias */
f_3386(t2,lf[87],((C_word*)t0)[7]);}

/* k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4534,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:346: macro-alias */
f_3386(t2,lf[56],((C_word*)t0)[8]);}

/* k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4536,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word*)t0)[9],a[12]=((C_word)li62),tmp=(C_word)a,a+=13,tmp));
t5=((C_word*)t3)[1];
f_4541(t5,((C_word*)t0)[10],C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[11]);}

/* k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_4530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:344: macro-alias */
f_3386(t2,lf[88],((C_word*)t0)[6]);}

/* loop in k8392 in macro-subset in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in ... */
static void C_fcall f_8395(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8395,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?t3:C_eqp(t2,((C_word*)t0)[2]));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8413,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* expand.scm:1448: loop */
t10=t6;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k8392 in macro-subset in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in ... */
static void C_ccall f_8393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8393,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8395,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li153),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8395(t5,((C_word*)t0)[3],t1);}

/* ##sys#defjam-error in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5056(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5056,3,t0,t1,t2);}
/* expand.scm:434: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[91],t2);}

/* loop in k4535 in k4533 in k4531 in k4529 in expand-extended-lambda-list in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_fcall f_4541(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4541,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_nullp(t6))){
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4554,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4762,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:354: reverse */
t9=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
/* expand.scm:354: reverse */
t8=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}}
else{
if(C_truep(C_i_symbolp(t6))){
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
/* expand.scm:382: err */
t7=((C_word*)t0)[9];
f_4515(t7,t1,lf[76]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t7=C_mutate(((C_word *)((C_word*)t0)[5])+1,t6);
/* expand.scm:386: loop */
t16=t1;
t17=C_fix(4);
t18=t3;
t19=t4;
t20=C_SCHEME_END_OF_LIST;
t21=C_SCHEME_END_OF_LIST;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
t5=t20;
t6=t21;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[5])+1,t6);
/* expand.scm:386: loop */
t16=t1;
t17=C_fix(4);
t18=t3;
t19=t4;
t20=C_SCHEME_END_OF_LIST;
t21=C_SCHEME_END_OF_LIST;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
t5=t20;
t6=t21;
goto loop;}}}
else{
if(C_truep(C_i_pairp(t6))){
t7=C_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4800,a[2]=t7,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[10],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[5],a[12]=t4,a[13]=t5,tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_symbolp(t7))){
t9=C_eqp(C_fix(3),t2);
if(C_truep(t9)){
t10=t8;
f_4800(2,t10,C_SCHEME_FALSE);}
else{
/* expand.scm:391: lookup */
f_3368(t8,t7,((C_word*)t0)[11]);}}
else{
t9=t8;
f_4800(2,t9,C_SCHEME_FALSE);}}
else{
/* expand.scm:388: err */
t7=((C_word*)t0)[9];
f_4515(t7,t1,lf[86]);}}}}

/* k9022 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in ... */
static void C_ccall f_9023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1274: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[266],C_SCHEME_END_OF_LIST,t1);}

/* f_9025 in k7332 in k7330 in k7328 in k7326 in k7324 in k7322 in k7320 in k7318 in k7316 in k7314 in k7312 in k7310 in k7307 in k7303 in k7300 in k7298 in k7296 in k7294 in k7292 in k7289 in k7286 in ... */
static void C_ccall f_9025(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9025,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9028,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1279: ##sys#check-syntax */
t6=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[266],t2,lf[268]);}

/* k9027 */
static void C_ccall f_9028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9028,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[73],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[267],t3));}

/* k8601 in k8596 */
static void C_ccall f_8603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8603,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1360: ##sys#strip-syntax */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8666,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8721,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_caddr(((C_word*)t0)[5]);
/* expand.scm:1400: ##sys#strip-syntax */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k5080 in comp in k5068 in canonicalize-body in k3798 in k3364 in k3360 in k3356 in k3352 */
static void C_ccall f_5081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)t0)[2];
t4=C_eqp(t3,lf[96]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t1)?C_eqp(t1,*((C_word*)lf[92]+1)):C_eqp(((C_word*)t0)[2],((C_word*)t0)[4])));}
else{
t5=C_eqp(t3,lf[97]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t1)?C_eqp(t1,*((C_word*)lf[93]+1)):C_eqp(((C_word*)t0)[2],((C_word*)t0)[4])));}
else{
t6=C_eqp(t3,lf[98]);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?(C_truep(t1)?C_eqp(t1,*((C_word*)lf[94]+1)):C_eqp(((C_word*)t0)[2],((C_word*)t0)[4])):C_eqp(((C_word*)t0)[2],((C_word*)t0)[4])));}}}}

/* k8604 in k8601 in k8596 */
static void C_ccall f_8605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8605,2,t0,t1);}
t2=C_i_cadr(t1);
t3=C_i_cadddr(t1);
if(C_truep(C_i_symbolp(t3))){
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],C_fix(4)))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8623,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8649,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8652,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1381: symbol->string */
t7=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8654,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1387: ##sys#register-module-alias */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[251]+1)))(4,*((C_word*)lf[251]+1),t4,t2,t3);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8656,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1390: ##sys#check-syntax */
t5=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[244],t1,lf[253]);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[704] = {
{"f_4557:expand_2escm",(void*)f_4557},
{"f_4554:expand_2escm",(void*)f_4554},
{"f_9349:expand_2escm",(void*)f_9349},
{"f_5796:expand_2escm",(void*)f_5796},
{"f_4569:expand_2escm",(void*)f_4569},
{"f_9341:expand_2escm",(void*)f_9341},
{"f_5798:expand_2escm",(void*)f_5798},
{"f_8284:expand_2escm",(void*)f_8284},
{"f_8277:expand_2escm",(void*)f_8277},
{"f_8275:expand_2escm",(void*)f_8275},
{"f_4593:expand_2escm",(void*)f_4593},
{"f_8666:expand_2escm",(void*)f_8666},
{"f_7856:expand_2escm",(void*)f_7856},
{"f_4248:expand_2escm",(void*)f_4248},
{"f_4246:expand_2escm",(void*)f_4246},
{"f_7885:expand_2escm",(void*)f_7885},
{"f_8361:expand_2escm",(void*)f_8361},
{"f_3377:expand_2escm",(void*)f_3377},
{"f_8750:expand_2escm",(void*)f_8750},
{"f_3386:expand_2escm",(void*)f_3386},
{"f_3381:expand_2escm",(void*)f_3381},
{"f_7862:expand_2escm",(void*)f_7862},
{"f_3354:expand_2escm",(void*)f_3354},
{"f_3358:expand_2escm",(void*)f_3358},
{"f_8340:expand_2escm",(void*)f_8340},
{"f_8752:expand_2escm",(void*)f_8752},
{"f_8354:expand_2escm",(void*)f_8354},
{"f_3366:expand_2escm",(void*)f_3366},
{"f_3362:expand_2escm",(void*)f_3362},
{"f_3368:expand_2escm",(void*)f_3368},
{"f_9205:expand_2escm",(void*)f_9205},
{"f_8741:expand_2escm",(void*)f_8741},
{"f_9201:expand_2escm",(void*)f_9201},
{"f_9209:expand_2escm",(void*)f_9209},
{"f_4298:expand_2escm",(void*)f_4298},
{"f_4290:expand_2escm",(void*)f_4290},
{"f_8739:expand_2escm",(void*)f_8739},
{"f_8733:expand_2escm",(void*)f_8733},
{"f_7875:expand_2escm",(void*)f_7875},
{"f_7872:expand_2escm",(void*)f_7872},
{"f_9226:expand_2escm",(void*)f_9226},
{"f_8721:expand_2escm",(void*)f_8721},
{"f_9230:expand_2escm",(void*)f_9230},
{"f_6743:expand_2escm",(void*)f_6743},
{"f_6740:expand_2escm",(void*)f_6740},
{"f_7650:expand_2escm",(void*)f_7650},
{"f_8304:expand_2escm",(void*)f_8304},
{"f_7647:expand_2escm",(void*)f_7647},
{"f_7644:expand_2escm",(void*)f_7644},
{"f_6759:expand_2escm",(void*)f_6759},
{"f_6727:expand_2escm",(void*)f_6727},
{"f_6725:expand_2escm",(void*)f_6725},
{"f_6722:expand_2escm",(void*)f_6722},
{"f_9265:expand_2escm",(void*)f_9265},
{"f_9269:expand_2escm",(void*)f_9269},
{"f_4205:expand_2escm",(void*)f_4205},
{"f_8345:expand_2escm",(void*)f_8345},
{"f_9375:expand_2escm",(void*)f_9375},
{"f_4218:expand_2escm",(void*)f_4218},
{"f_4210:expand_2escm",(void*)f_4210},
{"f_9373:expand_2escm",(void*)f_9373},
{"f_8334:expand_2escm",(void*)f_8334},
{"f_4228:expand_2escm",(void*)f_4228},
{"f_6762:expand_2escm",(void*)f_6762},
{"f_8327:expand_2escm",(void*)f_8327},
{"f_5227:expand_2escm",(void*)f_5227},
{"f_6774:expand_2escm",(void*)f_6774},
{"f_4718:expand_2escm",(void*)f_4718},
{"f_5218:expand_2escm",(void*)f_5218},
{"f_4726:expand_2escm",(void*)f_4726},
{"f_4728:expand_2escm",(void*)f_4728},
{"f_4721:expand_2escm",(void*)f_4721},
{"f_4723:expand_2escm",(void*)f_4723},
{"f_5207:expand_2escm",(void*)f_5207},
{"f_9922:expand_2escm",(void*)f_9922},
{"f_9919:expand_2escm",(void*)f_9919},
{"f_9917:expand_2escm",(void*)f_9917},
{"f_4614:expand_2escm",(void*)f_4614},
{"f_5264:expand_2escm",(void*)f_5264},
{"f_9904:expand_2escm",(void*)f_9904},
{"f_4629:expand_2escm",(void*)f_4629},
{"f_5253:expand_2escm",(void*)f_5253},
{"f_5256:expand_2escm",(void*)f_5256},
{"f_5250:expand_2escm",(void*)f_5250},
{"f_4753:expand_2escm",(void*)f_4753},
{"f_5258:expand_2escm",(void*)f_5258},
{"f_5935:expand_2escm",(void*)f_5935},
{"f_5243:expand_2escm",(void*)f_5243},
{"f_5245:expand_2escm",(void*)f_5245},
{"f_5240:expand_2escm",(void*)f_5240},
{"f_6716:expand_2escm",(void*)f_6716},
{"f_5235:expand_2escm",(void*)f_5235},
{"f_5918:expand_2escm",(void*)f_5918},
{"f_3929:expand_2escm",(void*)f_3929},
{"f_3922:expand_2escm",(void*)f_3922},
{"f_6803:expand_2escm",(void*)f_6803},
{"f_6806:expand_2escm",(void*)f_6806},
{"f_6808:expand_2escm",(void*)f_6808},
{"f_8798:expand_2escm",(void*)f_8798},
{"f_3934:expand_2escm",(void*)f_3934},
{"f_3932:expand_2escm",(void*)f_3932},
{"f_8772:expand_2escm",(void*)f_8772},
{"f_8770:expand_2escm",(void*)f_8770},
{"f_5299:expand_2escm",(void*)f_5299},
{"f_10193:expand_2escm",(void*)f_10193},
{"f_7557:expand_2escm",(void*)f_7557},
{"f_7555:expand_2escm",(void*)f_7555},
{"f_8785:expand_2escm",(void*)f_8785},
{"f_7552:expand_2escm",(void*)f_7552},
{"f_8763:expand_2escm",(void*)f_8763},
{"f_8761:expand_2escm",(void*)f_8761},
{"f_5286:expand_2escm",(void*)f_5286},
{"f_5288:expand_2escm",(void*)f_5288},
{"f_7549:expand_2escm",(void*)f_7549},
{"f_8776:expand_2escm",(void*)f_8776},
{"f_8774:expand_2escm",(void*)f_8774},
{"f_10195:expand_2escm",(void*)f_10195},
{"f_10198:expand_2escm",(void*)f_10198},
{"f_5922:expand_2escm",(void*)f_5922},
{"f_5278:expand_2escm",(void*)f_5278},
{"f_7116:expand_2escm",(void*)f_7116},
{"f_6833:expand_2escm",(void*)f_6833},
{"f_7533:expand_2escm",(void*)f_7533},
{"f_7119:expand_2escm",(void*)f_7119},
{"f_8768:expand_2escm",(void*)f_8768},
{"f_7103:expand_2escm",(void*)f_7103},
{"f_6847:expand_2escm",(void*)f_6847},
{"f_7526:expand_2escm",(void*)f_7526},
{"f_7690:expand_2escm",(void*)f_7690},
{"f_7515:expand_2escm",(void*)f_7515},
{"f_7696:expand_2escm",(void*)f_7696},
{"f_9280:expand_2escm",(void*)f_9280},
{"f_6785:expand_2escm",(void*)f_6785},
{"f_6789:expand_2escm",(void*)f_6789},
{"f_9289:expand_2escm",(void*)f_9289},
{"f_6827:expand_2escm",(void*)f_6827},
{"f_9294:expand_2escm",(void*)f_9294},
{"f_9291:expand_2escm",(void*)f_9291},
{"f_3956:expand_2escm",(void*)f_3956},
{"f_6799:expand_2escm",(void*)f_6799},
{"f_5999:expand_2escm",(void*)f_5999},
{"f_9541:expand_2escm",(void*)f_9541},
{"f_9543:expand_2escm",(void*)f_9543},
{"f_5993:expand_2escm",(void*)f_5993},
{"f_5995:expand_2escm",(void*)f_5995},
{"f_6882:expand_2escm",(void*)f_6882},
{"f_9553:expand_2escm",(void*)f_9553},
{"f_7135:expand_2escm",(void*)f_7135},
{"f_7138:expand_2escm",(void*)f_7138},
{"f_9993:expand_2escm",(void*)f_9993},
{"f_9995:expand_2escm",(void*)f_9995},
{"f_4408:expand_2escm",(void*)f_4408},
{"f_4404:expand_2escm",(void*)f_4404},
{"f_9523:expand_2escm",(void*)f_9523},
{"f_9521:expand_2escm",(void*)f_9521},
{"f_9555:expand_2escm",(void*)f_9555},
{"f_9558:expand_2escm",(void*)f_9558},
{"f_6861:expand_2escm",(void*)f_6861},
{"f_8118:expand_2escm",(void*)f_8118},
{"f_8554:expand_2escm",(void*)f_8554},
{"f_8552:expand_2escm",(void*)f_8552},
{"f_8550:expand_2escm",(void*)f_8550},
{"f_10129:expand_2escm",(void*)f_10129},
{"f_4762:expand_2escm",(void*)f_4762},
{"f_8547:expand_2escm",(void*)f_8547},
{"f_8545:expand_2escm",(void*)f_8545},
{"f_9535:expand_2escm",(void*)f_9535},
{"f_10137:expand_2escm",(void*)f_10137},
{"f_10135:expand_2escm",(void*)f_10135},
{"f_4430:expand_2escm",(void*)f_4430},
{"f_8533:expand_2escm",(void*)f_8533},
{"f_7614:expand_2escm",(void*)f_7614},
{"f_4632:expand_2escm",(void*)f_4632},
{"f_8126:expand_2escm",(void*)f_8126},
{"f_9964:expand_2escm",(void*)f_9964},
{"f_9961:expand_2escm",(void*)f_9961},
{"f_8121:expand_2escm",(void*)f_8121},
{"f_9959:expand_2escm",(void*)f_9959},
{"f_8514:expand_2escm",(void*)f_8514},
{"f_7152:expand_2escm",(void*)f_7152},
{"f_9931:expand_2escm",(void*)f_9931},
{"f_9933:expand_2escm",(void*)f_9933},
{"f_8519:expand_2escm",(void*)f_8519},
{"f_8516:expand_2escm",(void*)f_8516},
{"f_8511:expand_2escm",(void*)f_8511},
{"f_8505:expand_2escm",(void*)f_8505},
{"f_7561:expand_2escm",(void*)f_7561},
{"f_8508:expand_2escm",(void*)f_8508},
{"f_9945:expand_2escm",(void*)f_9945},
{"f_7146:expand_2escm",(void*)f_7146},
{"f_8180:expand_2escm",(void*)f_8180},
{"f_8501:expand_2escm",(void*)f_8501},
{"f_9936:expand_2escm",(void*)f_9936},
{"f_3981:expand_2escm",(void*)f_3981},
{"f_3986:expand_2escm",(void*)f_3986},
{"f_4674:expand_2escm",(void*)f_4674},
{"f_9947:expand_2escm",(void*)f_9947},
{"f_5972:expand_2escm",(void*)f_5972},
{"f_3991:expand_2escm",(void*)f_3991},
{"f_3996:expand_2escm",(void*)f_3996},
{"f_9972:expand_2escm",(void*)f_9972},
{"f_9950:expand_2escm",(void*)f_9950},
{"f_10170:expand_2escm",(void*)f_10170},
{"f_8151:expand_2escm",(void*)f_8151},
{"f_10165:expand_2escm",(void*)f_10165},
{"f_10167:expand_2escm",(void*)f_10167},
{"f_10181:expand_2escm",(void*)f_10181},
{"f_5420:expand_2escm",(void*)f_5420},
{"f_8102:expand_2escm",(void*)f_8102},
{"f_10179:expand_2escm",(void*)f_10179},
{"f_10112:expand_2escm",(void*)f_10112},
{"f_8571:expand_2escm",(void*)f_8571},
{"f_3902:expand_2escm",(void*)f_3902},
{"f_8573:expand_2escm",(void*)f_8573},
{"f_10184:expand_2escm",(void*)f_10184},
{"f_10121:expand_2escm",(void*)f_10121},
{"f_8566:expand_2escm",(void*)f_8566},
{"f_8568:expand_2escm",(void*)f_8568},
{"f_3911:expand_2escm",(void*)f_3911},
{"f_8560:expand_2escm",(void*)f_8560},
{"f_8163:expand_2escm",(void*)f_8163},
{"f_10118:expand_2escm",(void*)f_10118},
{"f_5409:expand_2escm",(void*)f_5409},
{"f_4490:expand_2escm",(void*)f_4490},
{"f_3963:expand_2escm",(void*)f_3963},
{"f_7192:expand_2escm",(void*)f_7192},
{"f_3969:expand_2escm",(void*)f_3969},
{"f_9586:expand_2escm",(void*)f_9586},
{"f_7188:expand_2escm",(void*)f_7188},
{"f_3973:expand_2escm",(void*)f_3973},
{"f_7184:expand_2escm",(void*)f_7184},
{"f_5142:expand_2escm",(void*)f_5142},
{"f_5178:expand_2escm",(void*)f_5178},
{"f_8933:expand_2escm",(void*)f_8933},
{"f_8931:expand_2escm",(void*)f_8931},
{"f_9588:expand_2escm",(void*)f_9588},
{"f_5172:expand_2escm",(void*)f_5172},
{"f_10207:expand_2escm",(void*)f_10207},
{"f_10209:expand_2escm",(void*)f_10209},
{"f_9805:expand_2escm",(void*)f_9805},
{"f_9807:expand_2escm",(void*)f_9807},
{"f_7583:expand_2escm",(void*)f_7583},
{"f_9570:expand_2escm",(void*)f_9570},
{"f_9574:expand_2escm",(void*)f_9574},
{"f_5154:expand_2escm",(void*)f_5154},
{"f_5187:expand_2escm",(void*)f_5187},
{"f_3821:expand_2escm",(void*)f_3821},
{"f_9827:expand_2escm",(void*)f_9827},
{"f_5181:expand_2escm",(void*)f_5181},
{"f_10237:expand_2escm",(void*)f_10237},
{"f_10235:expand_2escm",(void*)f_10235},
{"f_4473:expand_2escm",(void*)f_4473},
{"f_10244:expand_2escm",(void*)f_10244},
{"f_10246:expand_2escm",(void*)f_10246},
{"f_3849:expand_2escm",(void*)f_3849},
{"f_3847:expand_2escm",(void*)f_3847},
{"f_3845:expand_2escm",(void*)f_3845},
{"f_3841:expand_2escm",(void*)f_3841},
{"f_4419:expand_2escm",(void*)f_4419},
{"f_10212:expand_2escm",(void*)f_10212},
{"f_3853:expand_2escm",(void*)f_3853},
{"f_8196:expand_2escm",(void*)f_8196},
{"f_8194:expand_2escm",(void*)f_8194},
{"f_10226:expand_2escm",(void*)f_10226},
{"f_10223:expand_2escm",(void*)f_10223},
{"f_4425:expand_2escm",(void*)f_4425},
{"f_10221:expand_2escm",(void*)f_10221},
{"f_9500:expand_2escm",(void*)f_9500},
{"f_3527:expand_2escm",(void*)f_3527},
{"f_9510:expand_2escm",(void*)f_9510},
{"f_9512:expand_2escm",(void*)f_9512},
{"f_9506:expand_2escm",(void*)f_9506},
{"f_9508:expand_2escm",(void*)f_9508},
{"f_3536:expand_2escm",(void*)f_3536},
{"f_9885:expand_2escm",(void*)f_9885},
{"f_9880:expand_2escm",(void*)f_9880},
{"f_9882:expand_2escm",(void*)f_9882},
{"f_10255:expand_2escm",(void*)f_10255},
{"f_3506:expand_2escm",(void*)f_3506},
{"f_7991:expand_2escm",(void*)f_7991},
{"f_7993:expand_2escm",(void*)f_7993},
{"f_10253:expand_2escm",(void*)f_10253},
{"f_7997:expand_2escm",(void*)f_7997},
{"f_8597:expand_2escm",(void*)f_8597},
{"f_8592:expand_2escm",(void*)f_8592},
{"f_8590:expand_2escm",(void*)f_8590},
{"f_4467:expand_2escm",(void*)f_4467},
{"f_3512:expand_2escm",(void*)f_3512},
{"f_5316:expand_2escm",(void*)f_5316},
{"f_9842:expand_2escm",(void*)f_9842},
{"f_9848:expand_2escm",(void*)f_9848},
{"f_7955:expand_2escm",(void*)f_7955},
{"f_7950:expand_2escm",(void*)f_7950},
{"f_9850:expand_2escm",(void*)f_9850},
{"f_9877:expand_2escm",(void*)f_9877},
{"f_5451:expand_2escm",(void*)f_5451},
{"f_7928:expand_2escm",(void*)f_7928},
{"f_7925:expand_2escm",(void*)f_7925},
{"f_7389:expand_2escm",(void*)f_7389},
{"f_7383:expand_2escm",(void*)f_7383},
{"f_8990:expand_2escm",(void*)f_8990},
{"f_3591:expand_2escm",(void*)f_3591},
{"f_7378:expand_2escm",(void*)f_7378},
{"f_3596:expand_2escm",(void*)f_3596},
{"f_7374:expand_2escm",(void*)f_7374},
{"f_3758:expand_2escm",(void*)f_3758},
{"f_5437:expand_2escm",(void*)f_5437},
{"f_3563:expand_2escm",(void*)f_3563},
{"f_3569:expand_2escm",(void*)f_3569},
{"f_3725:expand_2escm",(void*)f_3725},
{"f_3568:expand_2escm",(void*)f_3568},
{"f_3576:expand_2escm",(void*)f_3576},
{"f_3575:expand_2escm",(void*)f_3575},
{"f_5496:expand_2escm",(void*)f_5496},
{"f_5494:expand_2escm",(void*)f_5494},
{"f_3571:expand_2escm",(void*)f_3571},
{"f_3737:expand_2escm",(void*)f_3737},
{"f_3733:expand_2escm",(void*)f_3733},
{"f_8958:expand_2escm",(void*)f_8958},
{"f_5487:expand_2escm",(void*)f_5487},
{"f_3554:expand_2escm",(void*)f_3554},
{"f_5476:expand_2escm",(void*)f_5476},
{"f_3867:expand_2escm",(void*)f_3867},
{"f_3875:expand_2escm",(void*)f_3875},
{"f_3879:expand_2escm",(void*)f_3879},
{"f_7397:expand_2escm",(void*)f_7397},
{"f_7393:expand_2escm",(void*)f_7393},
{"f_3887:expand_2escm",(void*)f_3887},
{"f_3885:expand_2escm",(void*)f_3885},
{"f_3892:expand_2escm",(void*)f_3892},
{"f_3741:expand_2escm",(void*)f_3741},
{"f_3894:expand_2escm",(void*)f_3894},
{"f_8911:expand_2escm",(void*)f_8911},
{"f_9732:expand_2escm",(void*)f_9732},
{"f_9730:expand_2escm",(void*)f_9730},
{"f_9716:expand_2escm",(void*)f_9716},
{"f_8923:expand_2escm",(void*)f_8923},
{"f_4172:expand_2escm",(void*)f_4172},
{"f_4147:expand_2escm",(void*)f_4147},
{"f_4145:expand_2escm",(void*)f_4145},
{"f_6327:expand_2escm",(void*)f_6327},
{"f_6321:expand_2escm",(void*)f_6321},
{"f_5355:expand_2escm",(void*)f_5355},
{"f_5367:expand_2escm",(void*)f_5367},
{"f_4968:expand_2escm",(void*)f_4968},
{"f_6306:expand_2escm",(void*)f_6306},
{"f_3800:expand_2escm",(void*)f_3800},
{"f_3804:expand_2escm",(void*)f_3804},
{"f_9753:expand_2escm",(void*)f_9753},
{"f_5330:expand_2escm",(void*)f_5330},
{"f_6116:expand_2escm",(void*)f_6116},
{"f_6118:expand_2escm",(void*)f_6118},
{"f_4188:expand_2escm",(void*)f_4188},
{"f_6613:expand_2escm",(void*)f_6613},
{"f_6616:expand_2escm",(void*)f_6616},
{"f_6124:expand_2escm",(void*)f_6124},
{"f_5395:expand_2escm",(void*)f_5395},
{"f_4124:expand_2escm",(void*)f_4124},
{"f_6204:expand_2escm",(void*)f_6204},
{"f_6207:expand_2escm",(void*)f_6207},
{"f_6209:expand_2escm",(void*)f_6209},
{"f_7351:expand_2escm",(void*)f_7351},
{"f_7359:expand_2escm",(void*)f_7359},
{"f_6105:expand_2escm",(void*)f_6105},
{"f_6155:expand_2escm",(void*)f_6155},
{"f_5365:expand_2escm",(void*)f_5365},
{"f_5362:expand_2escm",(void*)f_5362},
{"f_5360:expand_2escm",(void*)f_5360},
{"f_6162:expand_2escm",(void*)f_6162},
{"f_6160:expand_2escm",(void*)f_6160},
{"f_5378:expand_2escm",(void*)f_5378},
{"f_4114:expand_2escm",(void*)f_4114},
{"f_4119:expand_2escm",(void*)f_4119},
{"f_6273:expand_2escm",(void*)f_6273},
{"f_6132:expand_2escm",(void*)f_6132},
{"f_6130:expand_2escm",(void*)f_6130},
{"f_6667:expand_2escm",(void*)f_6667},
{"f_3602:expand_2escm",(void*)f_3602},
{"f_3604:expand_2escm",(void*)f_3604},
{"f_6244:expand_2escm",(void*)f_6244},
{"f_7739:expand_2escm",(void*)f_7739},
{"f_7735:expand_2escm",(void*)f_7735},
{"f_5693:expand_2escm",(void*)f_5693},
{"f_5695:expand_2escm",(void*)f_5695},
{"f_6141:expand_2escm",(void*)f_6141},
{"f_6147:expand_2escm",(void*)f_6147},
{"f_6149:expand_2escm",(void*)f_6149},
{"f_4136:expand_2escm",(void*)f_4136},
{"f_6143:expand_2escm",(void*)f_6143},
{"f_3774:expand_2escm",(void*)f_3774},
{"f_3615:expand_2escm",(void*)f_3615},
{"f_6145:expand_2escm",(void*)f_6145},
{"f_6250:expand_2escm",(void*)f_6250},
{"f_4131:expand_2escm",(void*)f_4131},
{"f_7305:expand_2escm",(void*)f_7305},
{"f_6192:expand_2escm",(void*)f_6192},
{"f_6195:expand_2escm",(void*)f_6195},
{"f_7301:expand_2escm",(void*)f_7301},
{"f_7309:expand_2escm",(void*)f_7309},
{"f_4108:expand_2escm",(void*)f_4108},
{"f_6222:expand_2escm",(void*)f_6222},
{"f_6225:expand_2escm",(void*)f_6225},
{"f_4101:expand_2escm",(void*)f_4101},
{"f_4905:expand_2escm",(void*)f_4905},
{"f_9630:expand_2escm",(void*)f_9630},
{"f_9639:expand_2escm",(void*)f_9639},
{"f_9635:expand_2escm",(void*)f_9635},
{"f_9637:expand_2escm",(void*)f_9637},
{"f_6172:expand_2escm",(void*)f_6172},
{"f_6170:expand_2escm",(void*)f_6170},
{"f_6178:expand_2escm",(void*)f_6178},
{"f_6176:expand_2escm",(void*)f_6176},
{"f_6174:expand_2escm",(void*)f_6174},
{"f_6287:expand_2escm",(void*)f_6287},
{"f_6180:expand_2escm",(void*)f_6180},
{"f_6295:expand_2escm",(void*)f_6295},
{"f_6299:expand_2escm",(void*)f_6299},
{"f_4303:expand_2escm",(void*)f_4303},
{"f_8448:expand_2escm",(void*)f_8448},
{"f_9656:expand_2escm",(void*)f_9656},
{"f_7343:expand_2escm",(void*)f_7343},
{"f_7341:expand_2escm",(void*)f_7341},
{"f_6395:expand_2escm",(void*)f_6395},
{"f_7347:expand_2escm",(void*)f_7347},
{"f_7345:expand_2escm",(void*)f_7345},
{"f_7349:expand_2escm",(void*)f_7349},
{"f_6269:expand_2escm",(void*)f_6269},
{"f_9628:expand_2escm",(void*)f_9628},
{"f_7333:expand_2escm",(void*)f_7333},
{"f_7331:expand_2escm",(void*)f_7331},
{"f_7337:expand_2escm",(void*)f_7337},
{"f_7335:expand_2escm",(void*)f_7335},
{"f_8012:expand_2escm",(void*)f_8012},
{"f_3719:expand_2escm",(void*)f_3719},
{"f_7339:expand_2escm",(void*)f_7339},
{"f_8010:expand_2escm",(void*)f_8010},
{"f_3711:expand_2escm",(void*)f_3711},
{"f_4340:expand_2escm",(void*)f_4340},
{"f_8008:expand_2escm",(void*)f_8008},
{"f_9772:expand_2escm",(void*)f_9772},
{"f_6426:expand_2escm",(void*)f_6426},
{"f_6421:expand_2escm",(void*)f_6421},
{"f_7323:expand_2escm",(void*)f_7323},
{"f_7325:expand_2escm",(void*)f_7325},
{"f_7321:expand_2escm",(void*)f_7321},
{"f_7327:expand_2escm",(void*)f_7327},
{"f_7329:expand_2escm",(void*)f_7329},
{"f_10008:expand_2escm",(void*)f_10008},
{"f_4336:expand_2escm",(void*)f_4336},
{"f_9644:expand_2escm",(void*)f_9644},
{"f_8413:expand_2escm",(void*)f_8413},
{"f_7313:expand_2escm",(void*)f_7313},
{"f_7315:expand_2escm",(void*)f_7315},
{"f_7311:expand_2escm",(void*)f_7311},
{"f_7317:expand_2escm",(void*)f_7317},
{"f_7319:expand_2escm",(void*)f_7319},
{"f_4343:expand_2escm",(void*)f_4343},
{"f_8027:expand_2escm",(void*)f_8027},
{"f_6401:expand_2escm",(void*)f_6401},
{"f_8024:expand_2escm",(void*)f_8024},
{"f_8434:expand_2escm",(void*)f_8434},
{"f_8433:expand_2escm",(void*)f_8433},
{"f_6366:expand_2escm",(void*)f_6366},
{"f_10038:expand_2escm",(void*)f_10038},
{"f_10036:expand_2escm",(void*)f_10036},
{"f_10034:expand_2escm",(void*)f_10034},
{"f_10032:expand_2escm",(void*)f_10032},
{"f_5661:expand_2escm",(void*)f_5661},
{"f_8426:expand_2escm",(void*)f_8426},
{"f_6333:expand_2escm",(void*)f_6333},
{"f_6335:expand_2escm",(void*)f_6335},
{"f_6339:expand_2escm",(void*)f_6339},
{"f_7272:expand_2escm",(void*)f_7272},
{"f_5655:expand_2escm",(void*)f_5655},
{"f_6347:expand_2escm",(void*)f_6347},
{"f_10014:expand_2escm",(void*)f_10014},
{"f_10010:expand_2escm",(void*)f_10010},
{"f_10012:expand_2escm",(void*)f_10012},
{"f_6315:expand_2escm",(void*)f_6315},
{"f_6311:expand_2escm",(void*)f_6311},
{"f_10029:expand_2escm",(void*)f_10029},
{"f_10023:expand_2escm",(void*)f_10023},
{"f_10076:expand_2escm",(void*)f_10076},
{"f_7781:expand_2escm",(void*)f_7781},
{"f_10073:expand_2escm",(void*)f_10073},
{"f_10071:expand_2escm",(void*)f_10071},
{"f_9701:expand_2escm",(void*)f_9701},
{"f_10081:expand_2escm",(void*)f_10081},
{"f_6385:expand_2escm",(void*)f_6385},
{"f_8030:expand_2escm",(void*)f_8030},
{"f_8032:expand_2escm",(void*)f_8032},
{"f_7299:expand_2escm",(void*)f_7299},
{"f_7295:expand_2escm",(void*)f_7295},
{"f_7297:expand_2escm",(void*)f_7297},
{"f_7291:expand_2escm",(void*)f_7291},
{"f_7293:expand_2escm",(void*)f_7293},
{"f_7799:expand_2escm",(void*)f_7799},
{"f_3632:expand_2escm",(void*)f_3632},
{"f_8051:expand_2escm",(void*)f_8051},
{"f_7287:expand_2escm",(void*)f_7287},
{"f_7285:expand_2escm",(void*)f_7285},
{"f_7283:expand_2escm",(void*)f_7283},
{"f_3646:expand_2escm",(void*)f_3646},
{"f_3655:expand_2escm",(void*)f_3655},
{"f_10099:expand_2escm",(void*)f_10099},
{"f_10095:expand_2escm",(void*)f_10095},
{"f_10097:expand_2escm",(void*)f_10097},
{"f_4394:expand_2escm",(void*)f_4394},
{"f_8479:expand_2escm",(void*)f_8479},
{"f_8470:expand_2escm",(void*)f_8470},
{"f_9123:expand_2escm",(void*)f_9123},
{"f_7707:expand_2escm",(void*)f_7707},
{"f_9674:expand_2escm",(void*)f_9674},
{"f_9676:expand_2escm",(void*)f_9676},
{"f_9679:expand_2escm",(void*)f_9679},
{"f_8468:expand_2escm",(void*)f_8468},
{"f_3686:expand_2escm",(void*)f_3686},
{"f_9102:expand_2escm",(void*)f_9102},
{"f_9693:expand_2escm",(void*)f_9693},
{"f_9699:expand_2escm",(void*)f_9699},
{"f_9662:expand_2escm",(void*)f_9662},
{"f_9664:expand_2escm",(void*)f_9664},
{"f_9167:expand_2escm",(void*)f_9167},
{"f_9158:expand_2escm",(void*)f_9158},
{"f_6464:expand_2escm",(void*)f_6464},
{"f_4378:expand_2escm",(void*)f_4378},
{"f_9132:expand_2escm",(void*)f_9132},
{"f_4388:expand_2escm",(void*)f_4388},
{"f_9141:expand_2escm",(void*)f_9141},
{"f_7263:expand_2escm",(void*)f_7263},
{"f_6446:expand_2escm",(void*)f_6446},
{"f_6441:expand_2escm",(void*)f_6441},
{"f_9114:expand_2escm",(void*)f_9114},
{"f_9149:expand_2escm",(void*)f_9149},
{"f_8099:expand_2escm",(void*)f_8099},
{"f_4328:expand_2escm",(void*)f_4328},
{"f_7242:expand_2escm",(void*)f_7242},
{"f_7247:expand_2escm",(void*)f_7247},
{"f_7245:expand_2escm",(void*)f_7245},
{"f_9613:expand_2escm",(void*)f_9613},
{"f_4354:expand_2escm",(void*)f_4354},
{"f_9420:expand_2escm",(void*)f_9420},
{"f_4800:expand_2escm",(void*)f_4800},
{"f_9445:expand_2escm",(void*)f_9445},
{"f_9451:expand_2escm",(void*)f_9451},
{"f_9453:expand_2escm",(void*)f_9453},
{"f_9456:expand_2escm",(void*)f_9456},
{"f_4828:expand_2escm",(void*)f_4828},
{"f_5517:expand_2escm",(void*)f_5517},
{"f_7234:expand_2escm",(void*)f_7234},
{"f_4848:expand_2escm",(void*)f_4848},
{"f_4846:expand_2escm",(void*)f_4846},
{"f_5512:expand_2escm",(void*)f_5512},
{"f_5515:expand_2escm",(void*)f_5515},
{"f_7220:expand_2escm",(void*)f_7220},
{"f_7228:expand_2escm",(void*)f_7228},
{"f_5581:expand_2escm",(void*)f_5581},
{"f_6918:expand_2escm",(void*)f_6918},
{"f_8897:expand_2escm",(void*)f_8897},
{"f_7217:expand_2escm",(void*)f_7217},
{"f_8891:expand_2escm",(void*)f_8891},
{"f_5572:expand_2escm",(void*)f_5572},
{"f_3407:expand_2escm",(void*)f_3407},
{"f_3403:expand_2escm",(void*)f_3403},
{"f_7011:expand_2escm",(void*)f_7011},
{"f_5560:expand_2escm",(void*)f_5560},
{"f_7451:expand_2escm",(void*)f_7451},
{"f_5852:expand_2escm",(void*)f_5852},
{"f_7445:expand_2escm",(void*)f_7445},
{"f_7443:expand_2escm",(void*)f_7443},
{"f_6957:expand_2escm",(void*)f_6957},
{"f_7438:expand_2escm",(void*)f_7438},
{"f_7434:expand_2escm",(void*)f_7434},
{"f_7430:expand_2escm",(void*)f_7430},
{"f_8852:expand_2escm",(void*)f_8852},
{"f_5830:expand_2escm",(void*)f_5830},
{"f_7023:expand_2escm",(void*)f_7023},
{"f_7426:expand_2escm",(void*)f_7426},
{"f_7421:expand_2escm",(void*)f_7421},
{"f_5836:expand_2escm",(void*)f_5836},
{"f_3445:expand_2escm",(void*)f_3445},
{"f_6936:expand_2escm",(void*)f_6936},
{"f_9173:expand_2escm",(void*)f_9173},
{"f_7414:expand_2escm",(void*)f_7414},
{"f_7409:expand_2escm",(void*)f_7409},
{"f_7401:expand_2escm",(void*)f_7401},
{"f_7405:expand_2escm",(void*)f_7405},
{"f_9487:expand_2escm",(void*)f_9487},
{"f_8866:expand_2escm",(void*)f_8866},
{"f_6993:expand_2escm",(void*)f_6993},
{"f_9495:expand_2escm",(void*)f_9495},
{"f_9497:expand_2escm",(void*)f_9497},
{"f_6998:expand_2escm",(void*)f_6998},
{"f_8816:expand_2escm",(void*)f_8816},
{"f_9188:expand_2escm",(void*)f_9188},
{"f_9185:expand_2escm",(void*)f_9185},
{"f_9094:expand_2escm",(void*)f_9094},
{"f_6972:expand_2escm",(void*)f_6972},
{"f_4044:expand_2escm",(void*)f_4044},
{"f_8833:expand_2escm",(void*)f_8833},
{"f_7047:expand_2escm",(void*)f_7047},
{"f_6989:expand_2escm",(void*)f_6989},
{"f_4098:expand_2escm",(void*)f_4098},
{"f_5807:expand_2escm",(void*)f_5807},
{"f_5809:expand_2escm",(void*)f_5809},
{"f_8625:expand_2escm",(void*)f_8625},
{"f_8623:expand_2escm",(void*)f_8623},
{"f_8656:expand_2escm",(void*)f_8656},
{"f_7052:expand_2escm",(void*)f_7052},
{"f_8652:expand_2escm",(void*)f_8652},
{"f_7057:expand_2escm",(void*)f_7057},
{"f_8654:expand_2escm",(void*)f_8654},
{"f_4082:expand_2escm",(void*)f_4082},
{"f_4085:expand_2escm",(void*)f_4085},
{"f_4087:expand_2escm",(void*)f_4087},
{"f_4080:expand_2escm",(void*)f_4080},
{"f_8649:expand_2escm",(void*)f_8649},
{"f_9400:expand_2escm",(void*)f_9400},
{"f_7002:expand_2escm",(void*)f_7002},
{"f_4515:expand_2escm",(void*)f_4515},
{"f_5751:expand_2escm",(void*)f_5751},
{"f_9073:expand_2escm",(void*)f_9073},
{"f_4511:expand_2escm",(void*)f_4511},
{"f_7473:expand_2escm",(void*)f_7473},
{"f_7035:expand_2escm",(void*)f_7035},
{"f_9076:expand_2escm",(void*)f_9076},
{"f_7479:expand_2escm",(void*)f_7479},
{"f_6037:expand_2escm",(void*)f_6037},
{"f_5757:expand_2escm",(void*)f_5757},
{"f_4886:expand_2escm",(void*)f_4886},
{"f_4014:expand_2escm",(void*)f_4014},
{"f_4019:expand_2escm",(void*)f_4019},
{"f_7834:expand_2escm",(void*)f_7834},
{"f_6070:expand_2escm",(void*)f_6070},
{"f_6961:expand_2escm",(void*)f_6961},
{"f_6964:expand_2escm",(void*)f_6964},
{"f_6965:expand_2escm",(void*)f_6965},
{"f_4035:expand_2escm",(void*)f_4035},
{"f_6969:expand_2escm",(void*)f_6969},
{"f_9465:expand_2escm",(void*)f_9465},
{"f_6052:expand_2escm",(void*)f_6052},
{"f_4005:expand_2escm",(void*)f_4005},
{"f_6054:expand_2escm",(void*)f_6054},
{"f_5762:expand_2escm",(void*)f_5762},
{"f_6065:expand_2escm",(void*)f_6065},
{"f_4812:expand_2escm",(void*)f_4812},
{"f_8244:expand_2escm",(void*)f_8244},
{"f_6045:expand_2escm",(void*)f_6045},
{"f_8235:expand_2escm",(void*)f_8235},
{"f_6092:expand_2escm",(void*)f_6092},
{"f_3416:expand_2escm",(void*)f_3416},
{"f_3411:expand_2escm",(void*)f_3411},
{"f_8690:expand_2escm",(void*)f_8690},
{"f_3415:expand_2escm",(void*)f_3415},
{"f_8387:expand_2escm",(void*)f_8387},
{"f_3420:expand_2escm",(void*)f_3420},
{"f_8261:expand_2escm",(void*)f_8261},
{"f_5712:expand_2escm",(void*)f_5712},
{"f_5714:expand_2escm",(void*)f_5714},
{"f_7079:expand_2escm",(void*)f_7079},
{"f_3438:expand_2escm",(void*)f_3438},
{"f_5700:expand_2escm",(void*)f_5700},
{"f_9042:expand_2escm",(void*)f_9042},
{"f_9040:expand_2escm",(void*)f_9040},
{"f_9047:expand_2escm",(void*)f_9047},
{"f_9045:expand_2escm",(void*)f_9045},
{"f_9049:expand_2escm",(void*)f_9049},
{"f_6089:expand_2escm",(void*)f_6089},
{"f_5065:expand_2escm",(void*)f_5065},
{"f_5069:expand_2escm",(void*)f_5069},
{"f_9051:expand_2escm",(void*)f_9051},
{"f_9058:expand_2escm",(void*)f_9058},
{"f_7490:expand_2escm",(void*)f_7490},
{"f_9324:expand_2escm",(void*)f_9324},
{"f_9060:expand_2escm",(void*)f_9060},
{"toplevel:expand_2escm",(void*)C_expand_toplevel},
{"f_3466:expand_2escm",(void*)f_3466},
{"f_3462:expand_2escm",(void*)f_3462},
{"f_3467:expand_2escm",(void*)f_3467},
{"f_9308:expand_2escm",(void*)f_9308},
{"f_3471:expand_2escm",(void*)f_3471},
{"f_5077:expand_2escm",(void*)f_5077},
{"f_9303:expand_2escm",(void*)f_9303},
{"f_9006:expand_2escm",(void*)f_9006},
{"f_8380:expand_2escm",(void*)f_8380},
{"f_3392:expand_2escm",(void*)f_3392},
{"f_3395:expand_2escm",(void*)f_3395},
{"f_3397:expand_2escm",(void*)f_3397},
{"f_3399:expand_2escm",(void*)f_3399},
{"f_4532:expand_2escm",(void*)f_4532},
{"f_4534:expand_2escm",(void*)f_4534},
{"f_4536:expand_2escm",(void*)f_4536},
{"f_4530:expand_2escm",(void*)f_4530},
{"f_8395:expand_2escm",(void*)f_8395},
{"f_8393:expand_2escm",(void*)f_8393},
{"f_5056:expand_2escm",(void*)f_5056},
{"f_4541:expand_2escm",(void*)f_4541},
{"f_9023:expand_2escm",(void*)f_9023},
{"f_9025:expand_2escm",(void*)f_9025},
{"f_9028:expand_2escm",(void*)f_9028},
{"f_8603:expand_2escm",(void*)f_8603},
{"f_5081:expand_2escm",(void*)f_5081},
{"f_8605:expand_2escm",(void*)f_8605},
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
S|  ##sys#map		6
S|  for-each		3
S|  map		10
o|eliminated procedure checks: 522 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (zero? fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  2 (vector-length vector)
o|  8 (eqv? (not float) *)
o|  2 (cadr (pair * pair))
o|  8 (cddr (pair * pair))
o|  1 (cdadr (pair * (pair pair *)))
o|  1 (caar (pair pair *))
o|  1 (>= fixnum fixnum)
o|  2 (length list)
o|  15 (eqv? * (not float))
o|  1 (##sys#call-with-values (procedure () *) *)
o|  2 (cdar (pair pair *))
o|  11 (##sys#check-list (or pair list) *)
o|  1 (set-cdr! pair *)
o|  70 (cdr pair)
o|  1 (set-car! pair *)
o|  50 (car pair)
o|Removed `not' forms: 35 
o|inlining procedure: k3371 
o|inlining procedure: k3371 
o|inlining procedure: k3389 
o|inlining procedure: k3389 
o|removed call to pure procedure with unused result: "(expand.scm:87) void" 
o|inlining procedure: k3427 
o|inlining procedure: k3427 
o|inlining procedure: k3450 
o|inlining procedure: k3450 
o|inlining procedure: k3472 
o|inlining procedure: k3472 
o|contracted procedure: k3478 
o|inlining procedure: k3481 
o|inlining procedure: k3481 
o|inlining procedure: k3487 
o|inlining procedure: k3487 
o|inlining procedure: k3539 
o|inlining procedure: k3539 
o|inlining procedure: k3582 
o|inlining procedure: k3582 
o|inlining procedure: k3607 
o|inlining procedure: k3607 
o|inlining procedure: k3649 
o|inlining procedure: k3649 
o|inlining procedure: k3689 
o|inlining procedure: k3689 
o|inlining procedure: k3728 
o|inlining procedure: k3743 
o|inlining procedure: k3743 
o|inlining procedure: k3761 
o|inlining procedure: k3761 
o|inlining procedure: k3728 
o|inlining procedure: k3810 
o|inlining procedure: k3810 
o|inlining procedure: k3850 
o|inlining procedure: k3850 
o|inlining procedure: k3898 
o|inlining procedure: k3898 
o|removed unused formal parameters: (me2501) 
o|inlining procedure: k3937 
o|inlining procedure: k3937 
o|removed unused parameter to known procedure: me2501 loop499 
o|inlining procedure: k4001 
o|inlining procedure: k4022 
o|inlining procedure: k4022 
o|inlining procedure: k4059 
o|inlining procedure: k4059 
o|inlining procedure: k4001 
o|removed call to pure procedure with unused result: "(expand.scm:243) void" 
o|inlining procedure: k4086 
o|inlining procedure: k4086 
o|contracted procedure: k4102 
o|removed call to pure procedure with unused result: "(expand.scm:203) void" 
o|removed call to pure procedure with unused result: "(expand.scm:200) void" 
o|inlining procedure: k4152 
o|inlining procedure: k4152 
o|removed call to pure procedure with unused result: "(expand.scm:200) void" 
o|inlining procedure: k4191 
o|inlining procedure: k4211 
o|inlining procedure: k4251 
o|inlining procedure: k4251 
o|inlining procedure: k4306 
o|inlining procedure: k4306 
o|inlining procedure: k4211 
o|inlining procedure: k4344 
o|inlining procedure: k4344 
o|inlining procedure: k4372 
o|inlining procedure: k4372 
o|inlining procedure: k4389 
o|inlining procedure: k4389 
o|inlining procedure: k4191 
o|inlining procedure: k4432 
o|inlining procedure: k4432 
o|inlining procedure: k4476 
o|inlining procedure: k4498 
o|inlining procedure: k4498 
o|substituted constant variable: a4505 
o|substituted constant variable: a4507 
o|substituted constant variable: a4509 
o|inlining procedure: k4476 
o|inlining procedure: k4544 
o|inlining procedure: k4558 
o|inlining procedure: k4558 
o|inlining procedure: k4594 
o|inlining procedure: k4594 
o|inlining procedure: k4637 
o|inlining procedure: k4637 
o|contracted procedure: k4640 
o|contracted procedure: k4646 
o|inlining procedure: k4649 
o|inlining procedure: k4649 
o|inlining procedure: k4698 
o|substituted constant variable: %lambda727 
o|inlining procedure: k4698 
o|contracted procedure: "(expand.scm:362) ->keyword721" 
o|inlining procedure: k4731 
o|inlining procedure: k4731 
o|inlining procedure: k4544 
o|inlining procedure: k4772 
o|inlining procedure: k4772 
o|inlining procedure: k4788 
o|inlining procedure: k4813 
o|inlining procedure: k4813 
o|inlining procedure: k4829 
o|inlining procedure: k4841 
o|contracted procedure: k4858 
o|inlining procedure: k4841 
o|inlining procedure: k4829 
o|inlining procedure: k4887 
o|inlining procedure: k4887 
o|contracted procedure: k4899 
o|inlining procedure: k4906 
o|inlining procedure: k4924 
o|inlining procedure: k4924 
o|substituted constant variable: a4958 
o|substituted constant variable: a4960 
o|substituted constant variable: a4962 
o|inlining procedure: k4906 
o|inlining procedure: k4969 
o|inlining procedure: k4969 
o|inlining procedure: k4990 
o|inlining procedure: k4990 
o|substituted constant variable: a5006 
o|substituted constant variable: a5008 
o|substituted constant variable: a5010 
o|inlining procedure: k5017 
o|inlining procedure: k5017 
o|substituted constant variable: a5032 
o|substituted constant variable: a5034 
o|substituted constant variable: a5036 
o|inlining procedure: k5040 
o|inlining procedure: k5040 
o|inlining procedure: k4788 
o|inlining procedure: k5084 
o|inlining procedure: k5084 
o|inlining procedure: k5093 
o|inlining procedure: k5093 
o|inlining procedure: k5102 
o|inlining procedure: k5102 
o|inlining procedure: k5123 
o|inlining procedure: k5123 
o|substituted constant variable: a5136 
o|substituted constant variable: a5138 
o|substituted constant variable: a5140 
o|inlining procedure: k5145 
o|inlining procedure: k5157 
o|inlining procedure: k5200 
o|inlining procedure: k5200 
o|inlining procedure: k5157 
o|inlining procedure: k5145 
o|removed call to pure procedure with unused result: "(expand.scm:474) void" 
o|inlining procedure: k5291 
o|inlining procedure: k5291 
o|inlining procedure: k5333 
o|inlining procedure: k5333 
o|inlining procedure: k5370 
o|inlining procedure: k5370 
o|inlining procedure: k5412 
o|inlining procedure: k5412 
o|inlining procedure: k5454 
o|inlining procedure: k5454 
o|inlining procedure: k5499 
o|inlining procedure: k5520 
o|inlining procedure: k5520 
o|inlining procedure: k5499 
o|inlining procedure: k5555 
o|inlining procedure: k5571 
o|inlining procedure: k5571 
o|inlining procedure: k5555 
o|inlining procedure: k5621 
o|inlining procedure: k5621 
o|substituted constant variable: a5642 
o|inlining procedure: k5664 
o|inlining procedure: k5688 
o|inlining procedure: k5705 
o|inlining procedure: k5705 
o|inlining procedure: k5725 
o|inlining procedure: k5725 
o|inlining procedure: k5688 
o|inlining procedure: k5802 
o|inlining procedure: k5802 
o|inlining procedure: k5840 
o|inlining procedure: k5840 
o|inlining procedure: k5874 
o|inlining procedure: k5874 
o|inlining procedure: k5664 
o|inlining procedure: k5925 
o|inlining procedure: k5967 
o|inlining procedure: k5967 
o|inlining procedure: k5925 
o|inlining procedure: k5945 
o|inlining procedure: k5945 
o|inlining procedure: k5988 
o|inlining procedure: k5988 
o|inlining procedure: k6002 
o|inlining procedure: k6002 
o|inlining procedure: k6106 
o|inlining procedure: k6106 
o|inlining procedure: k6135 
o|inlining procedure: k6135 
o|inlining procedure: k6181 
o|inlining procedure: k6181 
o|inlining procedure: k6212 
o|inlining procedure: k6212 
o|contracted procedure: "(expand.scm:646) syntax-imports1205" 
o|inlining procedure: k6073 
o|inlining procedure: k6073 
o|inlining procedure: k6253 
o|inlining procedure: k6262 
o|inlining procedure: k6277 
o|inlining procedure: k6277 
o|inlining procedure: k6262 
o|inlining procedure: k6253 
o|inlining procedure: k6302 
o|inlining procedure: k6302 
o|inlining procedure: k6320 
o|inlining procedure: k6320 
o|propagated global variable: sexp1294 ##sys#syntax-error-culprit 
o|inlining procedure: k6340 
o|inlining procedure: k6340 
o|inlining procedure: k6352 
o|inlining procedure: k6352 
o|inlining procedure: k6367 
o|inlining procedure: k6380 
o|inlining procedure: k6380 
o|inlining procedure: k6367 
o|inlining procedure: k6406 
o|inlining procedure: k6406 
o|inlining procedure: k6429 
o|inlining procedure: k6449 
o|inlining procedure: k6449 
o|inlining procedure: k6480 
o|inlining procedure: k6480 
o|inlining procedure: k6501 
o|inlining procedure: k6501 
o|inlining procedure: k6429 
o|inlining procedure: k6522 
o|inlining procedure: k6522 
o|inlining procedure: k6534 
o|inlining procedure: k6546 
o|inlining procedure: k6546 
o|inlining procedure: k6564 
o|inlining procedure: k6564 
o|inlining procedure: k6582 
o|inlining procedure: k6582 
o|inlining procedure: k6600 
o|inlining procedure: k6600 
o|inlining procedure: k6621 
o|inlining procedure: k6621 
o|substituted constant variable: a6633 
o|substituted constant variable: a6635 
o|substituted constant variable: a6637 
o|substituted constant variable: a6639 
o|substituted constant variable: a6641 
o|substituted constant variable: a6643 
o|substituted constant variable: a6645 
o|substituted constant variable: a6647 
o|inlining procedure: k6534 
o|inlining procedure: k6657 
o|inlining procedure: k6657 
o|inlining procedure: k6730 
o|inlining procedure: k6730 
o|inlining procedure: k6763 
o|removed call to pure procedure with unused result: "(expand.scm:785) void" 
o|inlining procedure: k6791 
o|removed call to pure procedure with unused result: "(expand.scm:796) void" 
o|removed call to pure procedure with unused result: "(expand.scm:800) void" 
o|inlining procedure: k6791 
o|removed call to pure procedure with unused result: "(expand.scm:804) void" 
o|inlining procedure: k6786 
o|inlining procedure: k6786 
o|removed call to pure procedure with unused result: "(expand.scm:809) void" 
o|inlining procedure: k6763 
o|removed call to pure procedure with unused result: "(expand.scm:775) void" 
o|inlining procedure: k6864 
o|inlining procedure: k6877 
o|inlining procedure: k6877 
o|inlining procedure: k6864 
o|inlining procedure: k6900 
o|inlining procedure: k6921 
o|inlining procedure: k6921 
o|inlining procedure: k6900 
o|inlining procedure: k6951 
o|inlining procedure: k6979 
o|inlining procedure: k7003 
o|inlining procedure: k7003 
o|inlining procedure: k6979 
o|inlining procedure: k7024 
o|inlining procedure: k7024 
o|inlining procedure: k7053 
o|inlining procedure: k7053 
o|removed unused parameter to known procedure: n1501 "(expand.scm:831) lookup21368" 
o|inlining procedure: k7058 
o|inlining procedure: k7058 
o|removed unused parameter to known procedure: n1501 "(expand.scm:828) lookup21368" 
o|inlining procedure: k6951 
o|removed unused formal parameters: (n1501) 
o|removed call to pure procedure with unused result: "(expand.scm:775) void" 
o|inlining procedure: k7082 
o|inlining procedure: k7082 
o|inlining procedure: k7106 
o|inlining procedure: k7106 
o|inlining procedure: k7139 
o|removed call to pure procedure with unused result: "(expand.scm:870) void" 
o|contracted procedure: k7165 
o|inlining procedure: k7162 
o|removed call to pure procedure with unused result: "(expand.scm:875) void" 
o|removed call to pure procedure with unused result: "(expand.scm:877) void" 
o|inlining procedure: k7189 
o|inlining procedure: k7189 
o|removed call to pure procedure with unused result: "(expand.scm:882) void" 
o|inlining procedure: k7162 
o|removed call to pure procedure with unused result: "(expand.scm:873) void" 
o|inlining procedure: k7139 
o|inlining procedure: k7206 
o|inlining procedure: k7206 
o|inlining procedure: k7266 
o|inlining procedure: k7266 
o|removed side-effect free assignment to unused variable: %vector-length2218 
o|removed side-effect free assignment to unused variable: %vector-ref2219 
o|removed side-effect free assignment to unused variable: %null?2241 
o|removed side-effect free assignment to unused variable: %or2242 
o|removed side-effect free assignment to unused variable: %syntax-error2248 
o|inlining procedure: k7493 
o|inlining procedure: k7493 
o|inlining procedure: k7529 
o|inlining procedure: k7529 
o|inlining procedure: k7568 
o|inlining procedure: k7568 
o|inlining procedure: k7586 
o|inlining procedure: k7586 
o|inlining procedure: k7618 
o|inlining procedure: k7618 
o|inlining procedure: k7700 
o|inlining procedure: k7700 
o|inlining procedure: k7728 
o|inlining procedure: k7728 
o|inlining procedure: k7837 
o|inlining procedure: k7837 
o|inlining procedure: k7890 
o|inlining procedure: k7890 
o|inlining procedure: k7914 
o|inlining procedure: k7914 
o|inlining procedure: k7958 
o|inlining procedure: k7968 
o|inlining procedure: k7968 
o|inlining procedure: k7958 
o|inlining procedure: k7998 
o|inlining procedure: k7998 
o|substituted constant variable: %append2211 
o|inlining procedure: k8035 
o|inlining procedure: k8035 
o|substituted constant variable: %apply2212 
o|substituted constant variable: %append2211 
o|inlining procedure: k8064 
o|inlining procedure: k8064 
o|inlining procedure: k8088 
o|inlining procedure: k8088 
o|inlining procedure: k8129 
o|inlining procedure: k8129 
o|inlining procedure: k8167 
o|inlining procedure: k8167 
o|inlining procedure: k8199 
o|inlining procedure: k8218 
o|inlining procedure: k8218 
o|inlining procedure: k8199 
o|inlining procedure: k8248 
o|inlining procedure: k8248 
o|inlining procedure: k8280 
o|inlining procedure: k8291 
o|inlining procedure: k8291 
o|inlining procedure: k8280 
o|inlining procedure: k8307 
o|inlining procedure: k8307 
o|inlining procedure: k8330 
o|inlining procedure: k8330 
o|inlining procedure: k8357 
o|inlining procedure: k8357 
o|inlining procedure: k8398 
o|inlining procedure: k8398 
o|inlining procedure: k8436 
o|inlining procedure: k8447 
o|inlining procedure: k8447 
o|inlining procedure: k8436 
o|inlining procedure: k8473 
o|inlining procedure: k8473 
o|inlining procedure: k8553 
o|inlining procedure: k8553 
o|inlining procedure: k8598 
o|inlining procedure: k8616 
o|inlining procedure: k8616 
o|inlining procedure: k8598 
o|inlining procedure: k8685 
o|inlining procedure: k8685 
o|inlining procedure: k8703 
o|inlining procedure: k8703 
o|inlining procedure: k8788 
o|inlining procedure: k8788 
o|inlining procedure: k8811 
o|inlining procedure: k8822 
o|inlining procedure: k8822 
o|inlining procedure: k8811 
o|inlining procedure: k8853 
o|inlining procedure: k8853 
o|inlining procedure: k8867 
o|inlining procedure: k8867 
o|inlining procedure: k8886 
o|inlining procedure: k8886 
o|inlining procedure: k8914 
o|inlining procedure: k8936 
o|inlining procedure: k8936 
o|inlining procedure: k8914 
o|inlining procedure: k8974 
o|inlining procedure: k8992 
o|inlining procedure: k8992 
o|inlining procedure: k9001 
o|inlining procedure: k9001 
o|inlining procedure: k8974 
o|inlining procedure: k9063 
o|inlining procedure: k9063 
o|inlining procedure: k9089 
o|inlining procedure: k9089 
o|inlining procedure: k9136 
o|inlining procedure: k9136 
o|inlining procedure: k9206 
o|inlining procedure: k9206 
o|inlining procedure: k9234 
o|inlining procedure: k9234 
o|inlining procedure: k9266 
o|inlining procedure: k9266 
o|inlining procedure: k9351 
o|inlining procedure: k9351 
o|inlining procedure: k9378 
o|inlining procedure: k9378 
o|inlining procedure: k9423 
o|inlining procedure: k9423 
o|inlining procedure: k9468 
o|inlining procedure: k9468 
o|inlining procedure: k9526 
o|inlining procedure: k9549 
o|inlining procedure: k9549 
o|inlining procedure: k9591 
o|inlining procedure: k9591 
o|inlining procedure: k9526 
o|inlining procedure: k9647 
o|inlining procedure: k9670 
o|inlining procedure: k9670 
o|inlining procedure: k9694 
o|inlining procedure: k9694 
o|inlining procedure: k9778 
o|inlining procedure: k9778 
o|inlining procedure: k9647 
o|inlining procedure: k9811 
o|inlining procedure: k9811 
o|inlining procedure: k9854 
o|inlining procedure: k9854 
o|inlining procedure: k9890 
o|inlining procedure: k9890 
o|inlining procedure: k10001 
o|inlining procedure: k10001 
o|inlining procedure: k10088 
o|inlining procedure: k10088 
o|inlining procedure: k10104 
o|inlining procedure: k10104 
o|propagated global variable: g16271628 ##sys#expand-import 
o|propagated global variable: g16131614 ##sys#expand-import 
o|propagated global variable: g15991600 ##sys#expand-import 
o|replaced variables: 981 
o|removed binding forms: 250 
o|contracted procedure: k3421 
o|substituted constant variable: r342810265 
o|substituted constant variable: f_393610298 
o|contracted procedure: k3976 
o|contracted procedure: k3978 
o|substituted constant variable: f_402110301 
o|substituted constant variable: r406010304 
o|contracted procedure: k4088 
o|removed call to pure procedure with unused result: "(expand.scm:243) void" 
o|contracted procedure: k4150 
o|inlining procedure: k4353 
o|substituted constant variable: r437310326 
o|substituted constant variable: f_447510337 
o|substituted constant variable: r465010350 
o|substituted constant variable: a469710352 
o|substituted constant variable: r501810376 
o|substituted constant variable: r504110377 
o|converted assignments to bindings: (err720) 
o|substituted constant variable: r520110391 
o|contracted procedure: k5221 
o|inlining procedure: k5571 
o|substituted constant variable: r562210413 
o|substituted constant variable: a572410419 
o|substituted constant variable: r587510426 
o|substituted constant variable: r596810430 
o|substituted constant variable: r594610432 
o|substituted constant variable: r598910435 
o|substituted constant variable: f_621110444 
o|substituted constant variable: f_607210446 
o|converted assignments to bindings: (outstr1217) 
o|substituted constant variable: r627810451 
o|substituted constant variable: r626310452 
o|substituted constant variable: f_625210453 
o|substituted constant variable: r638110463 
o|substituted constant variable: r636810465 
o|substituted constant variable: r650210474 
o|contracted procedure: k6776 
o|contracted procedure: k6809 
o|contracted procedure: k6818 
o|contracted procedure: k6834 
o|contracted procedure: k6848 
o|contracted procedure: k6866 
o|substituted constant variable: r687810505 
o|substituted constant variable: r690110513 
o|contracted procedure: k7076 
o|substituted constant variable: f_708110528 
o|contracted procedure: k7154 
o|contracted procedure: k7179 
o|contracted procedure: k7194 
o|contracted procedure: k7201 
o|contracted procedure: k7168 
o|removed side-effect free assignment to unused variable: %append2211 
o|removed side-effect free assignment to unused variable: %apply2212 
o|substituted constant variable: r756910547 
o|substituted constant variable: r806510571 
o|substituted constant variable: r821910580 
o|substituted constant variable: r829210585 
o|substituted constant variable: f_827910587 
o|substituted constant variable: f_830610589 
o|substituted constant variable: f_832910591 
o|substituted constant variable: f_839710594 
o|substituted constant variable: r861710606 
o|substituted constant variable: r870410613 
o|substituted constant variable: r885410620 
o|substituted constant variable: r899310631 
o|substituted constant variable: r955010657 
o|substituted constant variable: f_952510661 
o|substituted constant variable: r967110663 
o|substituted constant variable: r977910668 
o|substituted constant variable: f_964610669 
o|substituted constant variable: r981210670 
o|substituted constant variable: r985510672 
o|substituted constant variable: a1010310681 
o|simplifications: ((let . 2)) 
o|replaced variables: 12 
o|removed binding forms: 909 
o|contracted procedure: k408810313 
o|inlining procedure: k4781 
o|inlining procedure: k4781 
o|inlining procedure: k6864 
o|inlining procedure: k6864 
o|inlining procedure: k6864 
o|inlining procedure: k6864 
o|inlining procedure: k6864 
o|inlining procedure: k6864 
o|inlining procedure: "(expand.scm:831) lookup21368" 
o|inlining procedure: "(expand.scm:828) lookup21368" 
o|inlining procedure: k8207 
o|inlining procedure: k8207 
o|inlining procedure: k8524 
o|inlining procedure: k8524 
o|replaced variables: 3 
o|removed binding forms: 85 
o|substituted constant variable: result142510912 
o|substituted constant variable: result142510914 
o|substituted constant variable: result142510918 
o|substituted constant variable: result142510920 
o|substituted constant variable: result142510922 
o|substituted constant variable: result142510924 
o|removed side-effect free assignment to unused variable: lookup21368 
o|substituted constant variable: r820810946 
o|substituted constant variable: r820810947 
o|replaced variables: 10 
o|removed binding forms: 18 
o|removed conditional forms: 2 
o|inlining procedure: k7051 
o|inlining procedure: k7056 
o|replaced variables: 4 
o|removed binding forms: 13 
o|removed binding forms: 4 
o|simplifications: ((if . 45) (##core#call . 940)) 
o|  call simplifications:
o|    fx-	2
o|    cdddr
o|    cadddr	2
o|    cddddr
o|    >=
o|    +	3
o|    =
o|    -
o|    <=
o|    boolean?
o|    char?
o|    cdar	2
o|    ##sys#immediate?
o|    vector-ref	5
o|    fx<	2
o|    not	3
o|    fx=	3
o|    memq	7
o|    caddr	8
o|    length	7
o|    fx<=	2
o|    ##sys#call-with-values
o|    cddr	10
o|    ##sys#list	154
o|    ##sys#cons	85
o|    list?	6
o|    cadr	27
o|    values	8
o|    ##sys#apply	2
o|    memv
o|    equal?	2
o|    string?	2
o|    ##sys#make-structure	2
o|    apply	3
o|    list	13
o|    set-car!	4
o|    procedure?
o|    ##sys#structure?	2
o|    caar	5
o|    eq?	73
o|    null?	47
o|    car	62
o|    ##sys#check-list	13
o|    assq	12
o|    symbol?	41
o|    vector?	12
o|    fx>=	5
o|    fx+	4
o|    cons	63
o|    ##sys#setslot	19
o|    pair?	87
o|    ##sys#slot	58
o|    ##sys#size	5
o|    fx>	5
o|    char=?
o|    cdr	50
o|contracted procedure: k3400 
o|contracted procedure: k3408 
o|contracted procedure: k3423 
o|contracted procedure: k3425 
o|contracted procedure: k3430 
o|contracted procedure: k3448 
o|contracted procedure: k3459 
o|contracted procedure: k3484 
o|contracted procedure: k3490 
o|contracted procedure: k3493 
o|contracted procedure: k3516 
o|contracted procedure: k3496 
o|contracted procedure: k3499 
o|contracted procedure: k3501 
o|contracted procedure: k3521 
o|contracted procedure: k3524 
o|contracted procedure: k3559 
o|contracted procedure: k3529 
o|contracted procedure: k3541 
o|contracted procedure: k3544 
o|contracted procedure: k3550 
o|contracted procedure: k3556 
o|contracted procedure: k3585 
o|contracted procedure: k3587 
o|contracted procedure: k3639 
o|contracted procedure: k3609 
o|contracted procedure: k3612 
o|contracted procedure: k3621 
o|contracted procedure: k3624 
o|contracted procedure: k3634 
o|contracted procedure: k3637 
o|contracted procedure: k3671 
o|contracted procedure: k3651 
o|contracted procedure: k3660 
o|contracted procedure: k3663 
o|contracted procedure: k3666 
o|contracted procedure: k3669 
o|contracted procedure: k3677 
o|contracted procedure: k3680 
o|contracted procedure: k3691 
o|contracted procedure: k3694 
o|contracted procedure: k3703 
o|contracted procedure: k3713 
o|contracted procedure: k3730 
o|contracted procedure: k3745 
o|contracted procedure: k3763 
o|contracted procedure: k3792 
o|contracted procedure: k3782 
o|contracted procedure: k3834 
o|contracted procedure: k3807 
o|contracted procedure: k3813 
o|contracted procedure: k3825 
o|contracted procedure: k3855 
o|contracted procedure: k3857 
o|contracted procedure: k3864 
o|contracted procedure: k3872 
o|contracted procedure: k3869 
o|contracted procedure: k3895 
o|contracted procedure: k3912 
o|contracted procedure: k3939 
o|contracted procedure: k3960 
o|contracted procedure: k3945 
o|contracted procedure: k4010 
o|contracted procedure: k4001 
o|contracted procedure: k4016 
o|contracted procedure: k4024 
o|contracted procedure: k4027 
o|contracted procedure: k4040 
o|contracted procedure: k4048 
o|contracted procedure: k4051 
o|contracted procedure: k4056 
o|contracted procedure: k4062 
o|contracted procedure: k4070 
o|contracted procedure: k4077 
o|contracted procedure: k4090 
o|contracted procedure: k4155 
o|contracted procedure: k4164 
o|contracted procedure: k4174 
o|contracted procedure: k4193 
o|contracted procedure: k4201 
o|contracted procedure: k4206 
o|contracted procedure: k4214 
o|contracted procedure: k4219 
o|contracted procedure: k4224 
o|contracted procedure: k4229 
o|contracted procedure: k4294 
o|contracted procedure: k4300 
o|contracted procedure: k4287 
o|contracted procedure: k4284 
o|contracted procedure: k4281 
o|contracted procedure: k4278 
o|contracted procedure: k4241 
o|contracted procedure: k4238 
o|contracted procedure: k4235 
o|contracted procedure: k4253 
o|contracted procedure: k4275 
o|contracted procedure: k4272 
o|contracted procedure: k4256 
o|contracted procedure: k4265 
o|contracted procedure: k4308 
o|contracted procedure: k4311 
o|contracted procedure: k4320 
o|contracted procedure: k4330 
o|contracted procedure: k4347 
o|contracted procedure: k4362 
o|contracted procedure: k4375 
o|contracted procedure: k4383 
o|contracted procedure: k4450 
o|contracted procedure: k4409 
o|contracted procedure: k4444 
o|contracted procedure: k4411 
o|contracted procedure: k4438 
o|contracted procedure: k4413 
o|contracted procedure: k4456 
o|contracted procedure: k4478 
o|contracted procedure: k4481 
o|contracted procedure: k4486 
o|contracted procedure: k4496 
o|contracted procedure: k4546 
o|contracted procedure: k4561 
o|contracted procedure: k4586 
o|contracted procedure: k4589 
o|contracted procedure: k4583 
o|contracted procedure: k4580 
o|contracted procedure: k4577 
o|contracted procedure: k4574 
o|inlining procedure: k4558 
o|contracted procedure: k4597 
o|contracted procedure: k4610 
o|contracted procedure: k4607 
o|contracted procedure: k4604 
o|inlining procedure: k4558 
o|contracted procedure: k4625 
o|contracted procedure: k4622 
o|contracted procedure: k4619 
o|inlining procedure: k4558 
o|inlining procedure: k4634 
o|inlining procedure: k4634 
o|contracted procedure: k4652 
o|contracted procedure: k4659 
o|contracted procedure: k4661 
o|contracted procedure: k4676 
o|contracted procedure: k4688 
o|contracted procedure: k4685 
o|contracted procedure: k4682 
o|contracted procedure: k4694 
o|contracted procedure: k4700 
o|contracted procedure: k4710 
o|contracted procedure: k4707 
o|contracted procedure: k4698 
o|contracted procedure: k4527 
o|contracted procedure: k4671 
o|contracted procedure: k4668 
o|contracted procedure: k4733 
o|contracted procedure: k4736 
o|contracted procedure: k4745 
o|contracted procedure: k4755 
o|contracted procedure: k4769 
o|contracted procedure: k4775 
o|contracted procedure: k4791 
o|contracted procedure: k4797 
o|contracted procedure: k4801 
o|contracted procedure: k4808 
o|contracted procedure: k4816 
o|contracted procedure: k4832 
o|contracted procedure: k4838 
o|contracted procedure: k4850 
o|contracted procedure: k4862 
o|contracted procedure: k4868 
o|contracted procedure: k4882 
o|contracted procedure: k4890 
o|contracted procedure: k4909 
o|contracted procedure: k4915 
o|contracted procedure: k4922 
o|contracted procedure: k4927 
o|contracted procedure: k4937 
o|contracted procedure: k4934 
o|contracted procedure: k4942 
o|contracted procedure: k4955 
o|contracted procedure: k4952 
o|contracted procedure: k4972 
o|contracted procedure: k4981 
o|contracted procedure: k4988 
o|contracted procedure: k4993 
o|contracted procedure: k5003 
o|contracted procedure: k5014 
o|contracted procedure: k5020 
o|contracted procedure: k5027 
o|contracted procedure: k5037 
o|contracted procedure: k5043 
o|contracted procedure: k5902 
o|contracted procedure: k5070 
o|contracted procedure: k5896 
o|contracted procedure: k5072 
o|contracted procedure: k5890 
o|contracted procedure: k5074 
o|contracted procedure: k5082 
o|contracted procedure: k5090 
o|contracted procedure: k5105 
o|contracted procedure: k5120 
o|contracted procedure: k5480 
o|contracted procedure: k5147 
o|contracted procedure: k5159 
o|contracted procedure: k5165 
o|contracted procedure: k5183 
o|contracted procedure: k5194 
o|contracted procedure: k5196 
o|contracted procedure: k5203 
o|contracted procedure: k5232 
o|contracted procedure: k5236 
o|contracted procedure: k5224 
o|contracted procedure: k5260 
o|contracted procedure: k5269 
o|contracted procedure: k5282 
o|contracted procedure: k5275 
o|contracted procedure: k5272 
o|contracted procedure: k5323 
o|contracted procedure: k5293 
o|contracted procedure: k5296 
o|contracted procedure: k5305 
o|contracted procedure: k5308 
o|contracted procedure: k5318 
o|contracted procedure: k5321 
o|contracted procedure: k5335 
o|contracted procedure: k5338 
o|contracted procedure: k5347 
o|contracted procedure: k5357 
o|contracted procedure: k5402 
o|contracted procedure: k5372 
o|contracted procedure: k5375 
o|contracted procedure: k5384 
o|contracted procedure: k5387 
o|contracted procedure: k5397 
o|contracted procedure: k5400 
o|contracted procedure: k5444 
o|contracted procedure: k5414 
o|contracted procedure: k5417 
o|contracted procedure: k5426 
o|contracted procedure: k5429 
o|contracted procedure: k5439 
o|contracted procedure: k5442 
o|contracted procedure: k5456 
o|contracted procedure: k5459 
o|contracted procedure: k5468 
o|contracted procedure: k5478 
o|contracted procedure: k5508 
o|contracted procedure: k5505 
o|contracted procedure: k5522 
o|contracted procedure: k5544 
o|contracted procedure: k5541 
o|contracted procedure: k5525 
o|contracted procedure: k5534 
o|contracted procedure: k5549 
o|inlining procedure: k5568 
o|contracted procedure: k5613 
o|contracted procedure: k5573 
o|contracted procedure: k5589 
o|contracted procedure: k5586 
o|contracted procedure: k5583 
o|contracted procedure: k5601 
o|inlining procedure: k5568 
o|contracted procedure: k5649 
o|contracted procedure: k5618 
o|contracted procedure: k5644 
o|contracted procedure: k5624 
o|contracted procedure: k5640 
o|contracted procedure: k5630 
o|contracted procedure: k5666 
o|contracted procedure: k5672 
o|contracted procedure: k5682 
o|contracted procedure: k5703 
o|contracted procedure: k5708 
o|contracted procedure: k5786 
o|contracted procedure: k5747 
o|contracted procedure: k5759 
o|contracted procedure: k5767 
o|contracted procedure: k5781 
o|contracted procedure: k5776 
o|contracted procedure: k5773 
o|contracted procedure: k5770 
o|contracted procedure: k5719 
o|contracted procedure: k5734 
o|contracted procedure: k5727 
o|contracted procedure: k5725 
o|inlining procedure: k5722 
o|inlining procedure: k5722 
o|contracted procedure: k5736 
o|contracted procedure: k5823 
o|contracted procedure: k5814 
o|contracted procedure: k5820 
o|contracted procedure: k5817 
o|contracted procedure: k5838 
o|contracted procedure: k5843 
o|contracted procedure: k5845 
o|contracted procedure: k5856 
o|contracted procedure: k5866 
o|contracted procedure: k5877 
o|contracted procedure: k5880 
o|contracted procedure: k5908 
o|contracted procedure: k5927 
o|contracted procedure: k5964 
o|contracted procedure: k5983 
o|contracted procedure: k5930 
o|contracted procedure: k5940 
o|contracted procedure: k5948 
o|contracted procedure: k5956 
o|contracted procedure: k5952 
o|contracted procedure: k6034 
o|contracted procedure: k6004 
o|contracted procedure: k6013 
o|contracted procedure: k6029 
o|contracted procedure: k6026 
o|contracted procedure: k6023 
o|contracted procedure: k6109 
o|contracted procedure: k6137 
o|contracted procedure: k6157 
o|contracted procedure: k6166 
o|contracted procedure: k6232 
o|contracted procedure: k6184 
o|contracted procedure: k6197 
o|contracted procedure: k6214 
o|contracted procedure: k6229 
o|contracted procedure: k6066 
o|contracted procedure: k6075 
o|contracted procedure: k6101 
o|contracted procedure: k6081 
o|contracted procedure: k6240 
o|contracted procedure: k6258 
o|contracted procedure: k6265 
o|contracted procedure: k6275 
o|contracted procedure: k6709 
o|contracted procedure: k6290 
o|contracted procedure: k6703 
o|contracted procedure: k6292 
o|contracted procedure: k6688 
o|contracted procedure: k6296 
o|contracted procedure: k6350 
o|contracted procedure: k6358 
o|contracted procedure: k6370 
o|contracted procedure: k6377 
o|contracted procedure: k6404 
o|contracted procedure: k6412 
o|contracted procedure: k6431 
o|contracted procedure: k6434 
o|contracted procedure: k6436 
o|contracted procedure: k6510 
o|contracted procedure: k6438 
o|contracted procedure: k6451 
o|contracted procedure: k6457 
o|contracted procedure: k6469 
o|contracted procedure: k6472 
o|contracted procedure: k6474 
o|contracted procedure: k6483 
o|contracted procedure: k6493 
o|contracted procedure: k6498 
o|contracted procedure: k6504 
o|contracted procedure: k6519 
o|contracted procedure: k6525 
o|contracted procedure: k6537 
o|contracted procedure: k6543 
o|contracted procedure: k6549 
o|contracted procedure: k6558 
o|contracted procedure: k6567 
o|contracted procedure: k6576 
o|contracted procedure: k6585 
o|contracted procedure: k6594 
o|contracted procedure: k6603 
o|contracted procedure: k6623 
o|contracted procedure: k6626 
o|contracted procedure: k6651 
o|contracted procedure: k6660 
o|contracted procedure: k6676 
o|contracted procedure: k6679 
o|contracted procedure: k6694 
o|contracted procedure: k6732 
o|contracted procedure: k6751 
o|contracted procedure: k6766 
o|contracted procedure: k6769 
o|contracted procedure: k6793 
o|contracted procedure: k6816 
o|contracted procedure: k6812 
o|contracted procedure: k6825 
o|contracted procedure: k6821 
o|contracted procedure: k6841 
o|contracted procedure: k6837 
o|contracted procedure: k6855 
o|contracted procedure: k6851 
o|contracted procedure: k6868 
o|contracted procedure: k6874 
o|contracted procedure: k6897 
o|contracted procedure: k6903 
o|contracted procedure: k6906 
o|contracted procedure: k6947 
o|contracted procedure: k6911 
o|contracted procedure: k6923 
o|contracted procedure: k6925 
o|contracted procedure: k6932 
o|contracted procedure: k6938 
o|contracted procedure: k6941 
o|contracted procedure: k7064 
o|contracted procedure: k6954 
o|contracted procedure: k6976 
o|contracted procedure: k6982 
o|contracted procedure: k6994 
o|contracted procedure: k7006 
o|contracted procedure: k7016 
o|contracted procedure: k7027 
o|contracted procedure: k7030 
o|contracted procedure: k7040 
o|contracted procedure: k7084 
o|contracted procedure: k7100 
o|contracted procedure: k7090 
o|contracted procedure: k7108 
o|contracted procedure: k7127 
o|contracted procedure: k7142 
o|contracted procedure: k7176 
o|contracted procedure: k7221 
o|contracted procedure: k7253 
o|contracted procedure: k7257 
o|contracted procedure: k7268 
o|contracted procedure: k7277 
o|contracted procedure: k7280 
o|contracted procedure: k7460 
o|contracted procedure: k7523 
o|contracted procedure: k7520 
o|contracted procedure: k7466 
o|contracted procedure: k7469 
o|contracted procedure: k7463 
o|contracted procedure: k7457 
o|contracted procedure: k7475 
o|contracted procedure: k7487 
o|contracted procedure: k7484 
o|contracted procedure: k7481 
o|contracted procedure: k7495 
o|contracted procedure: k7498 
o|contracted procedure: k7507 
o|contracted procedure: k7517 
o|contracted procedure: k7534 
o|contracted procedure: k7536 
o|contracted procedure: k7542 
o|contracted procedure: k7545 
o|contracted procedure: k7565 
o|contracted procedure: k7571 
o|contracted procedure: k7578 
o|contracted procedure: k7588 
o|contracted procedure: k7594 
o|contracted procedure: k7607 
o|contracted procedure: k7604 
o|contracted procedure: k7601 
o|contracted procedure: k7621 
o|contracted procedure: k7662 
o|contracted procedure: k7631 
o|contracted procedure: k7640 
o|contracted procedure: k7637 
o|contracted procedure: k7634 
o|contracted procedure: k7628 
o|contracted procedure: k7652 
o|contracted procedure: k7657 
o|contracted procedure: k7667 
o|contracted procedure: k7698 
o|contracted procedure: k7677 
o|contracted procedure: k7686 
o|contracted procedure: k7683 
o|contracted procedure: k7680 
o|contracted procedure: k7674 
o|contracted procedure: k7692 
o|contracted procedure: k7703 
o|contracted procedure: k7715 
o|contracted procedure: k7712 
o|contracted procedure: k7724 
o|contracted procedure: k7721 
o|contracted procedure: k7726 
o|contracted procedure: k7747 
o|contracted procedure: k7825 
o|contracted procedure: k7822 
o|contracted procedure: k7753 
o|contracted procedure: k7819 
o|contracted procedure: k7816 
o|contracted procedure: k7759 
o|contracted procedure: k7810 
o|contracted procedure: k7813 
o|contracted procedure: k7765 
o|contracted procedure: k7804 
o|contracted procedure: k7795 
o|contracted procedure: k7771 
o|contracted procedure: k7777 
o|contracted procedure: k7774 
o|contracted procedure: k7768 
o|contracted procedure: k7762 
o|contracted procedure: k7756 
o|contracted procedure: k7750 
o|contracted procedure: k7744 
o|contracted procedure: k7789 
o|contracted procedure: k7792 
o|contracted procedure: k7786 
o|contracted procedure: k7783 
o|contracted procedure: k7828 
o|contracted procedure: k7831 
o|contracted procedure: k7839 
o|contracted procedure: k7845 
o|contracted procedure: k7852 
o|contracted procedure: k7912 
o|contracted procedure: k7863 
o|contracted procedure: k7904 
o|contracted procedure: k7865 
o|contracted procedure: k7877 
o|contracted procedure: k7880 
o|contracted procedure: k7892 
o|contracted procedure: k7902 
o|contracted procedure: k7899 
o|contracted procedure: k7890 
o|contracted procedure: k7917 
o|contracted procedure: k7932 
o|contracted procedure: k7937 
o|contracted procedure: k7942 
o|contracted procedure: k7952 
o|contracted procedure: k7960 
o|contracted procedure: k7963 
o|contracted procedure: k7978 
o|contracted procedure: k7971 
o|contracted procedure: k7984 
o|contracted procedure: k7994 
o|contracted procedure: k8001 
o|contracted procedure: k8016 
o|contracted procedure: k8037 
o|substituted constant variable: g11467 
o|contracted procedure: k8044 
o|contracted procedure: k8047 
o|contracted procedure: k8059 
o|contracted procedure: k8056 
o|contracted procedure: k8061 
o|contracted procedure: k8067 
o|contracted procedure: k8073 
o|contracted procedure: k8086 
o|contracted procedure: k8091 
o|contracted procedure: k8110 
o|contracted procedure: k8131 
o|contracted procedure: k8137 
o|contracted procedure: k8144 
o|contracted procedure: k8156 
o|contracted procedure: k8159 
o|contracted procedure: k8165 
o|contracted procedure: k8170 
o|contracted procedure: k8186 
o|contracted procedure: k8201 
o|contracted procedure: k8213 
o|contracted procedure: k8216 
o|contracted procedure: k8225 
o|contracted procedure: k8207 
o|contracted procedure: k8240 
o|contracted procedure: k8246 
o|contracted procedure: k8251 
o|contracted procedure: k8267 
o|contracted procedure: k8294 
o|contracted procedure: k8309 
o|contracted procedure: k8315 
o|contracted procedure: k8322 
o|contracted procedure: k8342 
o|contracted procedure: k8351 
o|contracted procedure: k8366 
o|contracted procedure: k8368 
o|contracted procedure: k8419 
o|contracted procedure: k8383 
o|contracted procedure: k8400 
o|contracted procedure: k8402 
o|contracted procedure: k8409 
o|contracted procedure: k8492 
o|contracted procedure: k8429 
o|contracted procedure: k8462 
o|contracted procedure: k8438 
o|contracted procedure: k8459 
o|contracted procedure: k8449 
o|contracted procedure: k8464 
o|contracted procedure: k8475 
o|contracted procedure: k8484 
o|contracted procedure: k8487 
o|contracted procedure: k8520 
o|contracted procedure: k8529 
o|contracted procedure: k8536 
o|contracted procedure: k8540 
o|contracted procedure: k8562 
o|contracted procedure: k8578 
o|contracted procedure: k8586 
o|contracted procedure: k8583 
o|contracted procedure: k8594 
o|contracted procedure: k8606 
o|contracted procedure: k8608 
o|contracted procedure: k8613 
o|contracted procedure: k8619 
o|contracted procedure: k8645 
o|contracted procedure: k8642 
o|contracted procedure: k8639 
o|contracted procedure: k8630 
o|contracted procedure: k8636 
o|contracted procedure: k8633 
o|contracted procedure: k8661 
o|contracted procedure: k8674 
o|contracted procedure: k8671 
o|contracted procedure: k8716 
o|contracted procedure: k8680 
o|contracted procedure: k8683 
o|contracted procedure: k8698 
o|contracted procedure: k8695 
o|contracted procedure: k8685 
o|contracted procedure: k8700 
o|contracted procedure: k8706 
o|contracted procedure: k8723 
o|contracted procedure: k8725 
o|contracted procedure: k8735 
o|contracted procedure: k8743 
o|contracted procedure: k8754 
o|contracted procedure: k8765 
o|contracted procedure: k8782 
o|contracted procedure: k8790 
o|contracted procedure: k8802 
o|contracted procedure: k8808 
o|contracted procedure: k8817 
o|contracted procedure: k8825 
o|contracted procedure: k8838 
o|contracted procedure: k8856 
o|contracted procedure: k8862 
o|contracted procedure: k8874 
o|contracted procedure: k8899 
o|contracted procedure: k8916 
o|contracted procedure: k8927 
o|contracted procedure: k8938 
o|contracted procedure: k8941 
o|contracted procedure: k8950 
o|contracted procedure: k8960 
o|contracted procedure: k8965 
o|contracted procedure: k8971 
o|contracted procedure: k8977 
o|contracted procedure: k8983 
o|contracted procedure: k8995 
o|contracted procedure: k9036 
o|contracted procedure: k9033 
o|contracted procedure: k9065 
o|contracted procedure: k9080 
o|contracted procedure: k9086 
o|contracted procedure: k9098 
o|contracted procedure: k9110 
o|contracted procedure: k9116 
o|contracted procedure: k9128 
o|contracted procedure: k9134 
o|contracted procedure: k9145 
o|contracted procedure: k9154 
o|contracted procedure: k9169 
o|contracted procedure: k9163 
o|contracted procedure: k9175 
o|contracted procedure: k9178 
o|contracted procedure: k9189 
o|contracted procedure: k9220 
o|contracted procedure: k9217 
o|contracted procedure: k9214 
o|contracted procedure: k9232 
o|contracted procedure: k9259 
o|contracted procedure: k9237 
o|contracted procedure: k9256 
o|contracted procedure: k9250 
o|contracted procedure: k9253 
o|contracted procedure: k9247 
o|contracted procedure: k9244 
o|contracted procedure: k9274 
o|contracted procedure: k9285 
o|contracted procedure: k9295 
o|contracted procedure: k9297 
o|contracted procedure: k9313 
o|contracted procedure: k9316 
o|contracted procedure: k9320 
o|contracted procedure: k9329 
o|contracted procedure: k9413 
o|contracted procedure: k9333 
o|contracted procedure: k9369 
o|contracted procedure: k9366 
o|contracted procedure: k9353 
o|contracted procedure: k9361 
o|contracted procedure: k9346 
o|contracted procedure: k9343 
o|contracted procedure: k9337 
o|contracted procedure: k9326 
o|contracted procedure: k9380 
o|contracted procedure: k9383 
o|contracted procedure: k9392 
o|contracted procedure: k9402 
o|contracted procedure: k9404 
o|contracted procedure: k9411 
o|contracted procedure: k9425 
o|contracted procedure: k9428 
o|contracted procedure: k9437 
o|contracted procedure: k9447 
o|contracted procedure: k9457 
o|contracted procedure: k9470 
o|contracted procedure: k9477 
o|contracted procedure: k9491 
o|contracted procedure: k9483 
o|contracted procedure: k9501 
o|contracted procedure: k9624 
o|contracted procedure: k9517 
o|contracted procedure: k9528 
o|contracted procedure: k9531 
o|contracted procedure: k9579 
o|contracted procedure: k9582 
o|contracted procedure: k9563 
o|contracted procedure: k9566 
o|contracted procedure: k9593 
o|contracted procedure: k9596 
o|contracted procedure: k9605 
o|contracted procedure: k9615 
o|contracted procedure: k9618 
o|contracted procedure: k9632 
o|contracted procedure: k9649 
o|contracted procedure: k9652 
o|contracted procedure: k9683 
o|contracted procedure: k9721 
o|contracted procedure: k9706 
o|contracted procedure: k9718 
o|contracted procedure: k9712 
o|contracted procedure: k9709 
o|contracted procedure: k9737 
o|contracted procedure: k9758 
o|contracted procedure: k9746 
o|contracted procedure: k9755 
o|contracted procedure: k9749 
o|contracted procedure: k9743 
o|contracted procedure: k9740 
o|contracted procedure: k9768 
o|contracted procedure: k9775 
o|contracted procedure: k9781 
o|contracted procedure: k9788 
o|contracted procedure: k9793 
o|contracted procedure: k9798 
o|contracted procedure: k9809 
o|contracted procedure: k9814 
o|contracted procedure: k9817 
o|contracted procedure: k9823 
o|contracted procedure: k9844 
o|contracted procedure: k9832 
o|contracted procedure: k9838 
o|contracted procedure: k9835 
o|contracted procedure: k9852 
o|contracted procedure: k9857 
o|contracted procedure: k9860 
o|contracted procedure: k9866 
o|contracted procedure: k9873 
o|contracted procedure: k9886 
o|contracted procedure: k9888 
o|contracted procedure: k9893 
o|contracted procedure: k9900 
o|contracted procedure: k9908 
o|contracted procedure: k9927 
o|contracted procedure: k9941 
o|contracted procedure: k9955 
o|contracted procedure: k9989 
o|contracted procedure: k9979 
o|contracted procedure: k9986 
o|contracted procedure: k9997 
o|contracted procedure: k10004 
o|contracted procedure: k10051 
o|contracted procedure: k10048 
o|contracted procedure: k10045 
o|contracted procedure: k10064 
o|contracted procedure: k10055 
o|contracted procedure: k10019 
o|contracted procedure: k10084 
o|contracted procedure: k10091 
o|contracted procedure: k10158 
o|contracted procedure: k10125 
o|contracted procedure: k10145 
o|contracted procedure: k10153 
o|contracted procedure: k10150 
o|contracted procedure: k10142 
o|contracted procedure: k10106 
o|contracted procedure: k10175 
o|contracted procedure: k10189 
o|contracted procedure: k10203 
o|contracted procedure: k10217 
o|contracted procedure: k10231 
o|simplifications: ((let . 181)) 
o|replaced variables: 2 
o|removed binding forms: 767 
o|inlining procedure: k3696 
o|inlining procedure: k3696 
o|inlining procedure: k4258 
o|inlining procedure: k4258 
o|inlining procedure: k4313 
o|inlining procedure: k4313 
o|inlining procedure: k4691 
o|inlining procedure: k4691 
o|inlining procedure: k4738 
o|inlining procedure: k4738 
o|inlining procedure: k5340 
o|inlining procedure: k5340 
o|inlining procedure: k5461 
o|inlining procedure: k5461 
o|inlining procedure: k5527 
o|inlining procedure: k5527 
o|inlining procedure: k5571 
o|inlining procedure: k7500 
o|inlining procedure: k7500 
o|inlining procedure: k8677 
o|inlining procedure: k8677 
o|inlining procedure: k8943 
o|inlining procedure: k8943 
o|inlining procedure: k9385 
o|inlining procedure: k9385 
o|inlining procedure: k9430 
o|inlining procedure: k9430 
o|inlining procedure: k9598 
o|inlining procedure: k9598 
o|inlining procedure: k10013 
o|replaced variables: 57 
o|removed binding forms: 7 
o|simplifications: ((if . 3)) 
o|removed binding forms: 80 
o|contracted procedure: k5675 
o|removed binding forms: 1 
o|replaced variables: 1 
o|simplifications: ((if . 2)) 
o|removed binding forms: 1 
o|contracted procedure: k5677 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop1313 0 
o|direct leaf routine/allocation: assq-reverse1369 0 
o|converted assignments to bindings: (loop1313) 
o|contracted procedure: "(expand.scm:869) k7147" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (loop1668 k9970 expand1779 map-loop18421863 expand1823 expand1878 map-loop19001918 k9340 map-loop19341952 match-expression walk1966 walk11967 simplify1968 expand2080 map-loop20872105 err2054 test2055 k8688 for-each-loop25422553 loop2520 loop2449 k8049 k8009 doloop24012402 k7705 k7531 map-loop22702287 for-each-loop15661582 mirror-rename1370 k6962 k6970 doloop14341435 k6420 test1286 k6440 walk1322 doloop13351336 loop1300 err1287 loop1207 loop1219 loop1234 outstr1217 loop1185 mwalk1163 fini/syntax862 loop1115 loop21131 loop1067 map-loop10791096 fini861 map-loop899917 k5419 map-loop926950 k5377 map-loop9621049 map-loop9861003 k5298 map-loop10151039 comp860 loop881 expand863 k4966 k4885 k4844 k4847 macro-alias k4811 loop731 err720 map-loop746774 k4556 k4567 k4488 loop699 loop685 k4209 loop568 expand513 map-loop593611 map-loop620637 call-handler512 k4003 k4033 copy532 loop499 k3772 loop430 loop1416 map-loop318335 for-each-loop344371 k3614 map-loop381402 doloop294295 walk266 k3393 lookup) 
o|calls to known targets: 358 
o|identified direct recursive calls: f_3445 1 
o|identified direct recursive calls: f_3934 1 
o|identified direct recursive calls: f_4248 2 
o|identified direct recursive calls: f_4541 2 
o|identified direct recursive calls: f_5517 2 
o|identified direct recursive calls: f_5496 1 
o|identified direct recursive calls: f_5922 1 
o|identified direct recursive calls: f_5999 1 
o|identified direct recursive calls: f_6070 1 
o|identified direct recursive calls: f_6401 1 
o|identified direct recursive calls: f_6426 1 
o|identified direct recursive calls: f_6727 1 
o|identified direct recursive calls: f_6861 1 
o|identified direct recursive calls: f_7079 1 
o|identified direct recursive calls: f_7103 1 
o|identified direct recursive calls: f_8032 1 
o|identified direct recursive calls: f_8395 1 
o|identified direct recursive calls: f_9465 1 
o|fast box initializations: 69 
o|fast global references: 26 
o|fast global assignments: 3 
o|dropping unused closure argument: f_3386 
o|dropping unused closure argument: f_3368 
o|dropping unused closure argument: f_5918 
o|dropping unused closure argument: f_6401 
o|dropping unused closure argument: f_7079 
*/
/* end of file */
