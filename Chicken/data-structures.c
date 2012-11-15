/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-09-24 17:49
   Version 4.8.0 (rev 0db1908)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file data-structures.c
   unit: data_2dstructures
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[113];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,105,100,101,110,116,105,116,121,32,120,54,50,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,54,55,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,102,95,49,52,52,48,32,120,54,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,19),40,99,111,110,106,111,105,110,32,46,32,112,114,101,100,115,54,52,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,55,57,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,102,95,49,52,55,49,32,120,55,55,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,100,105,115,106,111,105,110,32,46,32,112,114,101,100,115,55,54,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,102,95,49,53,49,50,32,46,32,95,57,48,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,102,95,49,53,49,53,32,46,32,95,57,49,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,99,111,110,115,116,97,110,116,108,121,32,46,32,120,115,56,56,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,102,95,49,53,50,54,32,120,57,52,32,121,57,53,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,102,108,105,112,32,112,114,111,99,57,51,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,17),40,102,95,49,53,51,52,32,46,32,97,114,103,115,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,99,111,109,112,108,101,109,101,110,116,32,112,57,55,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,102,95,49,53,54,48,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,18),40,102,95,49,53,53,52,32,46,32,97,114,103,115,49,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,102,48,49,48,50,32,46,32,102,110,115,49,48,51,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,18),40,99,111,109,112,111,115,101,32,46,32,102,110,115,49,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,48,50,32,120,49,49,50,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,49,48,57,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,12),40,111,32,46,32,102,110,115,49,48,55,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,50,48,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,15),40,102,95,49,54,49,55,32,108,115,116,49,49,56,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,18),40,108,105,115,116,45,111,102,63,32,112,114,101,100,49,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,15),40,102,95,49,54,54,48,32,46,32,95,49,51,48,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,112,114,111,99,115,49,51,51,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,18),40,102,95,49,54,55,52,32,46,32,97,114,103,115,49,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,17),40,101,97,99,104,32,46,32,112,114,111,99,115,49,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,11),40,97,110,121,63,32,120,49,51,57,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,12),40,110,111,110,101,63,32,120,49,52,49,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,16),40,97,108,119,97,121,115,63,32,46,32,95,49,52,51,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,15),40,110,101,118,101,114,63,32,46,32,95,49,52,53,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,97,116,111,109,63,32,120,49,52,55,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,17),40,116,97,105,108,63,32,120,49,52,57,32,121,49,53,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,110,115,49,54,53,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,25),40,105,110,116,101,114,115,112,101,114,115,101,32,108,115,116,49,54,50,32,120,49,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,55,49,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,16),40,98,117,116,108,97,115,116,32,108,115,116,49,54,57,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,105,115,116,115,49,55,57,32,114,101,115,116,49,56,48,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,102,108,97,116,116,101,110,32,46,32,108,105,115,116,115,48,49,55,55,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,28),40,100,111,108,111,111,112,49,57,55,32,104,100,49,57,57,32,116,108,50,48,48,32,99,50,48,49,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,115,116,49,57,50,32,105,49,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,18),40,99,104,111,112,32,108,115,116,49,56,56,32,110,49,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,115,50,49,49,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,23),40,106,111,105,110,32,108,115,116,115,50,48,55,32,46,32,108,115,116,50,48,56,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,108,115,116,50,50,52,32,108,115,116,50,50,53,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,25),40,99,111,109,112,114,101,115,115,32,98,108,115,116,50,50,48,32,108,115,116,50,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,51,55,32,103,50,52,57,50,56,52,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,57,49,32,120,50,55,51,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,18),40,102,95,50,49,48,50,32,120,50,56,49,32,121,50,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,53,54,32,103,50,54,56,50,55,53,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,24),40,115,104,117,102,102,108,101,32,108,50,51,50,32,114,97,110,100,111,109,50,51,51,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,49,50,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,102,95,50,49,55,57,32,120,51,48,57,32,108,115,116,51,49,48,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,44),40,97,108,105,115,116,45,117,112,100,97,116,101,33,32,120,50,57,54,32,121,50,57,55,32,108,115,116,50,57,56,32,46,32,116,109,112,50,57,53,50,57,57,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,51,53,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,43),40,97,108,105,115,116,45,117,112,100,97,116,101,32,107,51,50,53,32,118,51,50,54,32,108,115,116,51,50,55,32,46,32,116,109,112,51,50,52,51,50,56,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,54,55,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,20),40,102,95,50,51,52,48,32,120,51,54,52,32,108,115,116,51,54,53,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,35),40,97,108,105,115,116,45,114,101,102,32,120,51,52,55,32,108,115,116,51,52,56,32,46,32,116,109,112,51,52,54,51,52,57,41,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,51,55,57,41,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,29),40,114,97,115,115,111,99,32,120,51,55,52,32,108,115,116,51,55,53,32,46,32,116,115,116,51,55,54,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,107,51,57,53,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,29),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,51,56,56,32,105,51,56,57,41,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,28),40,114,101,118,101,114,115,101,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,51,56,54,41,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,15),40,45,62,115,116,114,105,110,103,32,120,52,48,48,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,49,48,32,103,52,50,50,52,50,56,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,16),40,99,111,110,99,32,46,32,97,114,103,115,52,48,55,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,105,115,116,97,114,116,52,52,51,32,105,101,110,100,52,52,52,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,52),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,52,51,53,32,119,104,101,114,101,52,51,54,32,115,116,97,114,116,52,51,55,32,116,101,115,116,52,51,56,32,108,111,99,52,51,57,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,18),40,102,95,50,54,51,57,32,105,52,53,53,32,108,52,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,52,53,50,32,119,104,101,114,101,52,53,51,32,115,116,97,114,116,52,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,18),40,102,95,50,54,52,56,32,105,52,54,48,32,108,52,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,52,53,55,32,119,104,101,114,101,52,53,56,32,115,116,97,114,116,52,53,57,41,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,47),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,52,55,48,32,119,104,101,114,101,52,55,49,32,46,32,116,109,112,52,54,57,52,55,50,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,50),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,52,56,52,32,119,104,101,114,101,52,56,53,32,46,32,116,109,112,52,56,51,52,56,54,41,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,29),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,32,115,49,52,57,51,32,115,50,52,57,52,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,45,99,105,32,115,49,53,48,50,32,115,50,53,48,51,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,56),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,53,49,49,32,115,50,53,49,50,32,115,116,97,114,116,49,53,49,51,32,115,116,97,114,116,50,53,49,52,32,110,53,49,53,41};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,37),40,115,117,98,115,116,114,105,110,103,61,63,32,115,49,53,51,48,32,115,50,53,51,49,32,46,32,116,109,112,53,50,57,53,51,50,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,59),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,53,52,54,32,115,50,53,52,55,32,115,116,97,114,116,49,53,52,56,32,115,116,97,114,116,50,53,52,57,32,110,53,53,48,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,40),40,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,53,54,53,32,115,50,53,54,54,32,46,32,116,109,112,53,54,52,53,54,55,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,27),40,97,100,100,32,102,114,111,109,53,56,57,32,116,111,53,57,48,32,108,97,115,116,53,57,49,41,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,54,49,48,41,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,105,53,57,53,32,108,97,115,116,53,57,54,32,102,114,111,109,53,57,55,41,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,42),40,115,116,114,105,110,103,45,115,112,108,105,116,32,115,116,114,53,56,49,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,53,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,110,50,54,52,54,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,49,32,115,115,54,51,56,32,110,54,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,40),40,115,116,114,105,110,103,45,105,110,116,101,114,115,112,101,114,115,101,32,115,116,114,115,54,50,57,32,46,32,116,109,112,54,50,56,54,51,48,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,50,50,32,99,54,54,55,41,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,15),40,105,110,115,116,114,105,110,103,32,115,54,54,53,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,105,54,57,50,32,106,54,57,51,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,13),40,102,95,51,50,55,54,32,99,54,55,56,41,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,41),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,32,115,116,114,54,54,49,32,102,114,111,109,54,54,50,32,46,32,116,111,54,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,109,97,112,55,49,53,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,37),40,99,111,108,108,101,99,116,32,105,55,49,48,32,102,114,111,109,55,49,49,32,116,111,116,97,108,55,49,50,32,102,115,55,49,51,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,34),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,42,32,115,116,114,55,48,54,32,115,109,97,112,55,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,116,111,116,97,108,55,51,49,32,112,111,115,55,51,50,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,27),40,115,116,114,105,110,103,45,99,104,111,112,32,115,116,114,55,50,55,32,108,101,110,55,50,56,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,33),40,115,116,114,105,110,103,45,99,104,111,109,112,32,115,116,114,55,52,53,32,46,32,116,109,112,55,52,52,55,52,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,54,53,32,105,55,54,55,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,97,115,116,55,55,51,32,110,101,120,116,55,55,52,41,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,25),40,115,111,114,116,101,100,63,32,115,101,113,55,53,57,32,108,101,115,115,63,55,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,120,55,56,56,32,97,55,56,57,32,121,55,57,48,32,98,55,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,109,101,114,103,101,32,97,55,56,49,32,98,55,56,50,32,108,101,115,115,63,55,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,114,56,48,49,32,97,56,48,50,32,98,56,48,51,41,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,27),40,109,101,114,103,101,33,32,97,55,57,52,32,98,55,57,53,32,108,101,115,115,63,55,57,54,41,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,11),40,115,116,101,112,32,110,56,49,51,41,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,56,51,51,32,112,56,51,53,32,105,56,51,54,41,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,23),40,115,111,114,116,33,32,115,101,113,56,49,48,32,108,101,115,115,63,56,49,49,41,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,22),40,115,111,114,116,32,115,101,113,56,52,50,32,108,101,115,115,63,56,52,51,41,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,97,116,56,54,53,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,18),40,105,110,115,101,114,116,32,120,56,54,50,32,121,56,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,97,116,56,55,50,41,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,13),40,108,111,111,107,117,112,32,120,56,55,48,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,13),40,102,95,52,48,49,50,32,118,56,57,49,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,56,49,32,103,56,56,56,56,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,24),40,118,105,115,105,116,32,117,56,55,55,32,97,100,106,45,108,105,115,116,56,55,56,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,15),40,102,95,52,48,54,49,32,100,101,102,57,48,53,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,15),40,102,95,52,48,55,57,32,100,101,102,57,50,51,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,49,51,32,103,57,50,48,57,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,53,49,32,103,56,53,56,57,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,33),40,116,111,112,111,108,111,103,105,99,97,108,45,115,111,114,116,32,100,97,103,56,52,53,32,112,114,101,100,56,52,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,112,115,57,52,50,32,112,101,57,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,30),40,98,105,110,97,114,121,45,115,101,97,114,99,104,32,118,101,99,57,51,55,32,112,114,111,99,57,51,56,41,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,12),40,109,97,107,101,45,113,117,101,117,101,41,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,13),40,113,117,101,117,101,63,32,120,57,53,54,41,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,108,101,110,103,116,104,32,113,57,53,56,41,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,101,109,112,116,121,63,32,113,57,54,49,41,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,18),40,113,117,101,117,101,45,102,105,114,115,116,32,113,57,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,17),40,113,117,101,117,101,45,108,97,115,116,32,113,57,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,26),40,113,117,101,117,101,45,97,100,100,33,32,113,57,55,52,32,100,97,116,117,109,57,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,20),40,113,117,101,117,101,45,114,101,109,111,118,101,33,32,113,57,56,53,41,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,108,115,116,57,57,54,32,108,115,116,50,57,57,55,41,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,18),40,113,117,101,117,101,45,62,108,105,115,116,32,113,57,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,49,48,48,50,32,108,115,116,49,48,48,52,41,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,22),40,108,105,115,116,45,62,113,117,101,117,101,32,108,115,116,48,49,48,48,49,41,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,33),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,33,32,113,49,48,49,50,32,105,116,101,109,49,48,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,49,48,50,54,41,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,17),40,102,95,52,53,50,53,32,108,115,116,48,49,48,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,42),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,45,108,105,115,116,33,32,113,49,48,49,57,32,105,116,101,109,108,105,115,116,49,48,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2233)
static void C_fcall f_2233(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3414)
static void C_fcall f_3414(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3616)
static void C_fcall f_3616(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2185)
static void C_fcall f_2185(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1861)
static void C_fcall f_1861(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3442)
static void C_ccall f_3442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3675)
static void C_fcall f_3675(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4311)
static void C_fcall f_4311(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4007)
static void C_fcall f_4007(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3981)
static void C_fcall f_3981(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1790)
static void C_fcall f_1790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2829)
static void C_fcall f_2829(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1817)
static void C_fcall f_1817(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4451)
static void C_fcall f_4451(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_fcall f_3339(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_fcall f_2346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2025)
static void C_ccall f_2025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1758)
static void C_fcall f_1758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2048)
static void C_ccall f_2048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1737)
static C_word C_fcall f_1737(C_word t0,C_word t1);
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4109)
static void C_fcall f_4109(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2964)
static void C_fcall f_2964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1721)
static void C_ccall f_1721(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1967)
static void C_ccall f_1967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2113)
static void C_fcall f_2113(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3975)
static void C_fcall f_3975(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2102)
static void C_ccall f_2102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_fcall f_2921(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3940)
static void C_fcall f_3940(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2939)
static void C_fcall f_2939(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2445)
static void C_ccall f_2445(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2449)
static void C_fcall f_2449(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2592)
static void C_fcall f_2592(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1928)
static void C_fcall f_1928(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3934)
static void C_fcall f_3934(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1935)
static void C_fcall f_1935(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externexport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1985)
static void C_fcall f_1985(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3128)
static C_word C_fcall f_3128(C_word t0,C_word t1);
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2469)
static C_word C_fcall f_2469(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3117)
static void C_fcall f_3117(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4431)
static void C_fcall f_4431(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1445)
static void C_fcall f_1445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_fcall f_2562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4413)
static void C_ccall f_4413(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4389)
static void C_fcall f_4389(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4042)
static void C_fcall f_4042(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1431)
static void C_ccall f_1431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1680)
static void C_fcall f_1680(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2316)
static void C_fcall f_2316(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3369)
static void C_fcall f_3369(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3560)
static void C_fcall f_3560(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2061)
static void C_fcall f_2061(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3309)
static void C_fcall f_3309(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3792)
static void C_fcall f_3792(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1622)
static void C_fcall f_1622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_fcall f_3165(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4159)
static void C_fcall f_4159(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4530)
static C_word C_fcall f_4530(C_word t0);
C_noret_decl(f_1589)
static void C_fcall f_1589(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4377)
static void C_ccall f_4377(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4079)
static void C_ccall f_4079(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4135)
static void C_fcall f_4135(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2413)
static void C_fcall f_2413(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2408)
static void C_fcall f_2408(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3873)
static void C_fcall f_3873(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2138)
static void C_ccall f_2138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2152)
static void C_ccall f_2152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2150)
static void C_fcall f_2150(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_fcall f_2609(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1546)
static void C_ccall f_1546(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1546)
static void C_ccall f_1546r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1554)
static void C_ccall f_1554(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1554)
static void C_ccall f_1554r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2744)
static void C_fcall f_2744(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3041)
static void C_fcall f_3041(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3517)
static void C_fcall f_3517(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1476)
static void C_fcall f_1476(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3055)
static C_word C_fcall f_3055(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4180)
static void C_ccall f_4180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4172)
static void C_fcall f_4172(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1882)
static void C_fcall f_1882(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2233)
static void C_fcall trf_2233(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2233(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2233(t0,t1,t2);}

C_noret_decl(trf_3414)
static void C_fcall trf_3414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3414(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3414(t0,t1,t2,t3);}

C_noret_decl(trf_3616)
static void C_fcall trf_3616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3616(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3616(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2185)
static void C_fcall trf_2185(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2185(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2185(t0,t1,t2);}

C_noret_decl(trf_1861)
static void C_fcall trf_1861(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1861(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1861(t0,t1,t2,t3);}

C_noret_decl(trf_3675)
static void C_fcall trf_3675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3675(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3675(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4311)
static void C_fcall trf_4311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4311(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4311(t0,t1);}

C_noret_decl(trf_4007)
static void C_fcall trf_4007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4007(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4007(t0,t1,t2,t3);}

C_noret_decl(trf_3981)
static void C_fcall trf_3981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3981(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3981(t0,t1,t2);}

C_noret_decl(trf_1790)
static void C_fcall trf_1790(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1790(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1790(t0,t1,t2);}

C_noret_decl(trf_2829)
static void C_fcall trf_2829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2829(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2829(t0,t1);}

C_noret_decl(trf_1817)
static void C_fcall trf_1817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1817(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1817(t0,t1,t2,t3);}

C_noret_decl(trf_4451)
static void C_fcall trf_4451(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4451(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4451(t0,t1);}

C_noret_decl(trf_3339)
static void C_fcall trf_3339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3339(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3339(t0,t1,t2);}

C_noret_decl(trf_2346)
static void C_fcall trf_2346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2346(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2346(t0,t1,t2);}

C_noret_decl(trf_1758)
static void C_fcall trf_1758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1758(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1758(t0,t1,t2);}

C_noret_decl(trf_4109)
static void C_fcall trf_4109(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4109(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4109(t0,t1,t2);}

C_noret_decl(trf_2964)
static void C_fcall trf_2964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2964(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2964(t0,t1,t2);}

C_noret_decl(trf_2113)
static void C_fcall trf_2113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2113(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2113(t0,t1,t2);}

C_noret_decl(trf_3975)
static void C_fcall trf_3975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3975(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3975(t0,t1,t2);}

C_noret_decl(trf_2921)
static void C_fcall trf_2921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2921(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2921(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3940)
static void C_fcall trf_3940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3940(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3940(t0,t1,t2);}

C_noret_decl(trf_2939)
static void C_fcall trf_2939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2939(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2939(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2449)
static void C_fcall trf_2449(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2449(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2449(t0,t1,t2,t3);}

C_noret_decl(trf_2592)
static void C_fcall trf_2592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2592(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2592(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1928)
static void C_fcall trf_1928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1928(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1928(t0,t1);}

C_noret_decl(trf_3934)
static void C_fcall trf_3934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3934(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3934(t0,t1,t2,t3);}

C_noret_decl(trf_1935)
static void C_fcall trf_1935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1935(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1935(t0,t1,t2);}

C_noret_decl(trf_1985)
static void C_fcall trf_1985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1985(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1985(t0,t1,t2,t3);}

C_noret_decl(trf_3117)
static void C_fcall trf_3117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3117(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3117(t0,t1);}

C_noret_decl(trf_4431)
static void C_fcall trf_4431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4431(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4431(t0,t1,t2);}

C_noret_decl(trf_1445)
static void C_fcall trf_1445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1445(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1445(t0,t1,t2);}

C_noret_decl(trf_2562)
static void C_fcall trf_2562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2562(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2562(t0,t1,t2);}

C_noret_decl(trf_4389)
static void C_fcall trf_4389(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4389(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4389(t0,t1,t2,t3);}

C_noret_decl(trf_4042)
static void C_fcall trf_4042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4042(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4042(t0,t1,t2);}

C_noret_decl(trf_1680)
static void C_fcall trf_1680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1680(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1680(t0,t1,t2);}

C_noret_decl(trf_2316)
static void C_fcall trf_2316(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2316(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2316(t0,t1);}

C_noret_decl(trf_3369)
static void C_fcall trf_3369(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3369(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3369(t0,t1);}

C_noret_decl(trf_3560)
static void C_fcall trf_3560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3560(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3560(t0,t1,t2,t3);}

C_noret_decl(trf_2061)
static void C_fcall trf_2061(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2061(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2061(t0,t1,t2);}

C_noret_decl(trf_3309)
static void C_fcall trf_3309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3309(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3309(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3792)
static void C_fcall trf_3792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3792(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3792(t0,t1,t2);}

C_noret_decl(trf_1622)
static void C_fcall trf_1622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1622(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1622(t0,t1,t2);}

C_noret_decl(trf_3165)
static void C_fcall trf_3165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3165(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3165(t0,t1,t2,t3);}

C_noret_decl(trf_4159)
static void C_fcall trf_4159(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4159(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4159(t0,t1);}

C_noret_decl(trf_1589)
static void C_fcall trf_1589(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1589(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1589(t0,t1,t2);}

C_noret_decl(trf_4135)
static void C_fcall trf_4135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4135(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4135(t0,t1,t2);}

C_noret_decl(trf_2413)
static void C_fcall trf_2413(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2413(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2413(t0,t1,t2);}

C_noret_decl(trf_2408)
static void C_fcall trf_2408(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2408(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2408(t0,t1);}

C_noret_decl(trf_3873)
static void C_fcall trf_3873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3873(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3873(t0,t1,t2,t3);}

C_noret_decl(trf_2150)
static void C_fcall trf_2150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2150(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2150(t0,t1);}

C_noret_decl(trf_2609)
static void C_fcall trf_2609(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2609(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2609(t0,t1,t2,t3);}

C_noret_decl(trf_2744)
static void C_fcall trf_2744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2744(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2744(t0,t1);}

C_noret_decl(trf_3041)
static void C_fcall trf_3041(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3041(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3041(t0,t1,t2,t3);}

C_noret_decl(trf_3517)
static void C_fcall trf_3517(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3517(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3517(t0,t1,t2);}

C_noret_decl(trf_1476)
static void C_fcall trf_1476(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1476(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1476(t0,t1,t2);}

C_noret_decl(trf_4172)
static void C_fcall trf_4172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4172(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4172(t0,t1,t2,t3);}

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

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

/* k3621 in loop in merge in k1430 */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3623,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[6],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3641,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* data-structures.scm:624: loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_3616(t6,t2,((C_word*)t0)[3],((C_word*)t0)[4],t3,t5);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3664,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* data-structures.scm:628: loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_3616(t6,t2,t3,t5,((C_word*)t0)[6],((C_word*)t0)[2]);}}}

/* ##sys#substring=? in k1430 */
static void C_ccall f_2735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2735,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t2,lf[65]);
t8=C_i_check_string_2(t3,lf[65]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2744,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2744(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_2744(t14,C_i_fixnum_min(t11,t13));}}

/* f_2179 in alist-update! in k1430 */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2179,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2185,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2185(t7,t1,t3);}

/* loop in alist-update in k1430 */
static void C_fcall f_2233(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2233,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list1(&a,1,t3));}
else{
t3=C_slot(t2,C_fix(0));
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t5=C_slot(t3,C_fix(0));
/* data-structures.scm:237: cmp */
t6=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
/* data-structures.scm:236: error */
t4=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[43],lf[45],t3);}}}

/* alist-update in k1430 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_2223r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2223r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2223r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(9);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?*((C_word*)lf[37]+1):C_i_car(t5));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2233,a[2]=t2,a[3]=t3,a[4]=t9,a[5]=t7,a[6]=((C_word)li56),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_2233(t11,t1,t4);}

/* f_1526 in flip in k1430 */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1526,4,t0,t1,t2,t3);}
/* data-structures.scm:61: proc */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t3,t2);}

/* flip in k1430 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1523,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1526,a[2]=t2,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));}

/* loop in string-chop in k1430 */
static void C_fcall f_3414(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3414,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3433,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(t3,t2);
/* data-structures.scm:551: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t4,((C_word*)t0)[3],t3,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3442,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_fixnum_plus(t3,((C_word*)t0)[2]);
/* data-structures.scm:552: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t4,((C_word*)t0)[3],t3,t5);}}}

/* loop in merge in k1430 */
static void C_fcall f_3616(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3616,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3623,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:621: less? */
t7=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,t4,t2);}

/* loop */
static void C_fcall f_2185(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2185,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2200,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t5=C_slot(t3,C_fix(0));
/* data-structures.scm:220: cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[4]);}
else{
t5=t4;
f_2200(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3663 in k3621 in loop in merge in k1430 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3664,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* loop in k1853 in chop in k1430 */
static void C_fcall f_1861(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1861,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list1(&a,1,t2));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1882,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1882(t7,t1,C_SCHEME_END_OF_LIST,t2,((C_word*)t0)[2]);}}}

/* queue-remove! in k1430 */
static void C_ccall f_4338(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4338,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[96],lf[105]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4346,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm:844: ##sys#error */
t7=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[105],lf[106],t2);}
else{
t7=t5;
f_4346(2,t7,C_SCHEME_UNDEFINED);}}

/* k3441 in loop in string-chop in k1430 */
static void C_ccall f_3442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3445,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* data-structures.scm:552: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3414(t5,t2,t3,t4);}

/* k3444 in k3441 in loop in string-chop in k1430 */
static void C_ccall f_3445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3445,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* loop in merge! in k1430 */
static void C_fcall f_3675(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3675,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3682,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
t7=C_i_car(t3);
/* data-structures.scm:638: less? */
t8=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t5,t6,t7);}

/* merge! in k1430 */
static void C_ccall f_3671(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3671,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3675,a[2]=t6,a[3]=t4,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_nullp(t2))){
t8=t3;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
if(C_truep(C_i_nullp(t3))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3746,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t9=C_i_car(t3);
t10=C_i_car(t2);
/* data-structures.scm:653: less? */
t11=t4;
((C_proc4)C_fast_retrieve_proc(t11))(4,t11,t8,t9,t10);}}}

/* k3640 in k3621 in loop in merge in k1430 */
static void C_ccall f_3641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3641,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* chop in k1430 */
static void C_ccall f_1848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1848,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t3,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1854,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
/* data-structures.scm:161: ##sys#error */
t6=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[21],lf[24],t3);}
else{
t6=t5;
f_1854(2,t6,C_SCHEME_UNDEFINED);}}

/* k1845 in loop in flatten in k1430 */
static void C_ccall f_1846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1846,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4310 in queue-add! in k1430 */
static void C_fcall f_4311(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=C_fixnum_plus(t3,C_fix(1));
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(3),t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* k1839 in loop in flatten in k1430 */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:155: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1817(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_4012 in k4010 in visit in topological-sort in k1430 */
static void C_ccall f_4012(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4012,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4015,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:748: lookup */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3975(t4,t3,t2);}

/* k4010 in visit in topological-sort in k1430 */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li117),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_list_2(t3,lf[93]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4042,a[2]=t7,a[3]=t2,a[4]=((C_word)li118),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4042(t9,t5,t3);}

/* k4014 */
static void C_ccall f_4015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(t1,lf[92]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
if(C_truep(t3)){
/* data-structures.scm:750: visit */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4007(t4,((C_word*)t0)[2],((C_word*)t0)[4],t3);}
else{
/* data-structures.scm:750: visit */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4007(t4,((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}}}

/* k1853 in chop in k1430 */
static void C_ccall f_1854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1854,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1861,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1861(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* k4345 in queue-remove! in k1430 */
static void C_ccall f_4346(C_word c,C_word t0,C_word t1){
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
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=C_eqp(C_SCHEME_END_OF_LIST,t2);
t5=(C_truep(t4)?C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST):C_SCHEME_UNDEFINED);
t6=C_slot(((C_word*)t0)[3],C_fix(3));
t7=C_fixnum_difference(t6,C_fix(1));
t8=C_i_set_i_slot(((C_word*)t0)[3],C_fix(3),t7);
t9=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_slot(((C_word*)t0)[2],C_fix(0)));}

/* k3432 in loop in string-chop in k1430 */
static void C_ccall f_3433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3433,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list1(&a,1,t1));}

/* substring-ci=? in k1430 */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2850r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2850r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2850r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
if(C_truep(C_i_nullp(t12))){
/* data-structures.scm:395: ##sys#substring-ci=? */
t15=*((C_word*)lf[66]+1);
((C_proc7)(void*)(*((C_word*)t15+1)))(7,t15,t1,t2,t3,t6,t10,t14);}
else{
t15=C_i_cdr(t12);
/* data-structures.scm:395: ##sys#substring-ci=? */
t16=*((C_word*)lf[66]+1);
((C_proc7)(void*)(*((C_word*)t16+1)))(7,t16,t1,t2,t3,t6,t10,t14);}}

/* k3992 in loop in lookup in topological-sort in k1430 */
static void C_ccall f_3994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_cdar(((C_word*)t0)[3]));}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* data-structures.scm:741: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3981(t4,((C_word*)t0)[2],t3);}}

/* visit in topological-sort in k1430 */
static void C_fcall f_4007(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4007,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:745: insert */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3934(t5,t4,t2,lf[92]);}

/* loop in lookup in topological-sort in k1430 */
static void C_fcall f_3981(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3981,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3994,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
/* data-structures.scm:740: pred */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[4],t4);}}

/* loop in butlast in k1430 */
static void C_fcall f_1790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1790,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=(C_truep(C_blockp(t3))?C_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1809,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:145: loop */
t8=t6;
t9=t3;
t1=t8;
t2=t9;
goto loop;}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k1808 in loop in butlast in k1430 */
static void C_ccall f_1809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1809,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* ##sys#substring-ci=? in k1430 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2820,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t2,lf[67]);
t8=C_i_check_string_2(t3,lf[67]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2829,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2829(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_2829(t14,C_i_fixnum_min(t11,t13));}}

/* k2827 in substring-ci=? in k1430 */
static void C_fcall f_2829(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[67]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[67]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare_case_insensitive(((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[3],t1));}

/* loop in flatten in k1430 */
static void C_fcall f_1817(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1817,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
if(C_truep(C_i_listp(t4))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1840,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:155: loop */
t10=t6;
t11=t5;
t12=t3;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1846,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:156: loop */
t10=t6;
t11=t5;
t12=t3;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* flatten in k1430 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1811r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1811r(t0,t1,t2);}}

static void C_ccall f_1811r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1817,a[2]=t4,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1817(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* k1778 in loop in intersperse in k1430 */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1779,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* k4449 in doloop1002 in list->queue in k1430 */
static void C_fcall f_4451(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* data-structures.scm:869: ##sys#error-not-a-proper-list */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[108]);}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_4431(t3,((C_word*)t0)[6],t2);}}

/* string-chop in k1430 */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3401,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[81]);
t5=C_i_check_exact_2(t3,lf[81]);
t6=C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3414,a[2]=t3,a[3]=t2,a[4]=t8,a[5]=((C_word)li99),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3414(t10,t1,t6,C_fix(0));}

/* butlast in k1430 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1781,3,t0,t1,t2);}
t3=C_i_check_pair_2(t2,lf[19]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1790,a[2]=t5,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1790(t7,t1,t2);}

/* k2261 in loop in alist-update in k1430 */
static void C_ccall f_2263(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2263,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}
else{
t2=C_slot(((C_word*)t0)[6],C_fix(0));
t3=C_slot(((C_word*)t0)[6],C_fix(1));
t4=C_a_i_cons(&a,2,t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:241: loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_2233(t7,t5,t6);}}

/* k3333 in collect in string-translate* in k1430 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3334,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
/* data-structures.scm:520: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[80]+1)))(3,*((C_word*)lf[80]+1),((C_word*)t0)[3],t2);}

/* loop in collect in string-translate* in k1430 */
static void C_fcall f_3339(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3339,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:526: collect */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3309(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
t5=C_i_string_length(t4);
t6=C_u_i_cdr(t3);
if(C_truep(C_substring_compare(((C_word*)t0)[7],t4,((C_word*)t0)[2],C_fix(0),t5))){
t7=C_fixnum_plus(((C_word*)t0)[2],t5);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3369,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],((C_word*)t0)[5]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3391,a[2]=((C_word*)t0)[6],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:534: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t9,((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t9=t8;
f_3369(t9,C_SCHEME_UNDEFINED);}}
else{
t7=t2;
t8=C_u_i_cdr(t7);
/* data-structures.scm:539: loop */
t15=t1;
t16=t8;
t1=t15;
t2=t16;
goto loop;}}}

/* k4504 in queue-push-back-list! in k1430 */
static void C_ccall f_4505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t2;
f_4507(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4525,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:897: g1023 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t1);}}

/* k2280 in k2261 in loop in alist-update in k1430 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2281,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4506 in k4504 in queue-push-back-list! in k1430 */
static void C_ccall f_4507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t4=C_slot(((C_word*)t0)[2],C_fix(3));
t5=C_i_length(((C_word*)t0)[4]);
t6=C_fixnum_plus(t4,t5);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_set_i_slot(((C_word*)t0)[2],C_fix(3),t6));}

/* loop */
static void C_fcall f_2346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2346,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2361,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t5=C_slot(t3,C_fix(0));
/* data-structures.scm:252: cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[4]);}
else{
t5=t4;
f_2361(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_2340 in alist-ref in k1430 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2340,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2346,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2346(t7,t1,t3);}

/* k2024 in loop in compress in k1430 */
static void C_ccall f_2025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2025,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3321 in collect in string-translate* in k1430 */
static void C_ccall f_3322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:518: ##sys#fragments->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(4,*((C_word*)lf[79]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* string-split in k1430 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr3r,(void*)f_2905r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2905r(t0,t1,t2,t3);}}

static void C_ccall f_2905r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(20);
t4=C_i_check_string_2(t2,lf[68]);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?lf[69]:C_i_car(t3));
t7=t3;
t8=C_u_i_length(t7);
t9=C_eqp(t8,C_fix(2));
t10=(C_truep(t9)?C_i_cadr(t3):C_SCHEME_FALSE);
t11=C_block_size(t2);
t12=C_i_check_string_2(t6,lf[68]);
t13=C_block_size(t6);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2921,a[2]=t15,a[3]=t2,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2939,a[2]=t11,a[3]=t15,a[4]=t10,a[5]=t16,a[6]=t2,a[7]=t13,a[8]=t18,a[9]=t6,a[10]=((C_word)li85),tmp=(C_word)a,a+=11,tmp));
t20=((C_word*)t18)[1];
f_2939(t20,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* k2933 in add in string-split in k1430 */
static void C_ccall f_2934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2934,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* intersperse in k1430 */
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1752,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1758,a[2]=t3,a[3]=t5,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1758(t7,t1,t2);}

/* loop in intersperse in k1430 */
static void C_fcall f_1758(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1758,NULL,3,t0,t1,t2);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_cdr(t2);
if(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1779,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:138: loop */
t8=t5;
t9=t3;
t1=t8;
t2=t9;
goto loop;}}}

/* shuffle in k1430 */
static void C_ccall f_2048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[30],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2048,4,t0,t1,t2,t3);}
t4=C_i_length(t2);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[33]+1);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2054,a[2]=t8,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2091,a[2]=t3,a[3]=t4,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
t16=t2;
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2100,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2113,a[2]=t14,a[3]=t19,a[4]=t12,a[5]=t15,a[6]=((C_word)li51),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_2113(t21,t17,t16);}

/* k4117 in for-each-loop913 in k4077 in k4074 in topological-sort in k1430 */
static void C_ccall f_4118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4109(t3,((C_word*)t0)[4],t2);}

/* loop in tail? in k1430 */
static C_word C_fcall f_1737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:
if(C_truep(C_eqp(t1,C_SCHEME_END_OF_LIST))){
return(C_SCHEME_FALSE);}
else{
if(C_truep(C_eqp(((C_word*)t0)[2],t1))){
return(C_SCHEME_TRUE);}
else{
t2=C_slot(t1,C_fix(1));
t4=t2;
t1=t4;
goto loop;}}}

/* k4105 in k4077 in k4074 in topological-sort in k1430 */
static void C_ccall f_4107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* for-each-loop913 in k4077 in k4074 in topological-sort in k1430 */
static void C_fcall f_4109(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4109,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4118,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:761: g914 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* never? in k1430 */
static void C_ccall f_1717(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1717,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* always? in k1430 */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1713,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* scan in loop in string-split in k1430 */
static void C_fcall f_2964(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2964,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:422: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2939(t4,t1,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=C_subchar(((C_word*)t0)[7],t2);
t4=C_eqp(((C_word*)t0)[8],t3);
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t6=C_fixnum_greaterp(((C_word*)t0)[3],((C_word*)t0)[6]);
t7=(C_truep(t6)?t6:((C_word*)t0)[9]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:426: add */
t9=((C_word*)t0)[10];
f_2921(t9,t8,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
/* data-structures.scm:427: loop */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2939(t8,t1,t5,((C_word*)t0)[5],t5);}}
else{
t5=C_fixnum_plus(t2,C_fix(1));
/* data-structures.scm:428: scan */
t12=t1;
t13=t5;
t1=t12;
t2=t13;
goto loop;}}}

/* queue-push-back! in k1430 */
static void C_ccall f_4464(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4464,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[96],lf[109]);
t5=C_slot(t2,C_fix(1));
t6=C_a_i_cons(&a,2,t3,t5);
t7=C_i_setslot(t2,C_fix(1),t6);
t8=C_slot(t2,C_fix(2));
t9=C_eqp(C_SCHEME_END_OF_LIST,t8);
t10=(C_truep(t9)?C_i_setslot(t2,C_fix(2),t6):C_SCHEME_UNDEFINED);
t11=C_slot(t2,C_fix(3));
t12=C_fixnum_plus(t11,C_fix(1));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_i_set_i_slot(t2,C_fix(3),t12));}

/* tail? in k1430 */
static void C_ccall f_1725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1725,4,t0,t1,t2,t3);}
t4=C_i_check_list_2(t3,lf[17]);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1737,a[2]=t2,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_1737(t6,t3));}}

/* atom? in k1430 */
static void C_ccall f_1721(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1721,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_not_pair_p(t2));}

/* queue-push-back-list! in k1430 */
static void C_ccall f_4497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4497,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[96],lf[110]);
t5=C_i_check_list_2(t3,lf[110]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4505,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
/* data-structures.scm:894: append */
t8=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t3,t7);}

/* k1966 in loop in k1927 in join in k1430 */
static void C_ccall f_1967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:185: ##sys#append */
t2=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3958 in loop in insert in topological-sort in k1430 */
static void C_ccall f_3960(C_word c,C_word t0,C_word t1){
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
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_cdr(t3,((C_word*)t0)[4]));}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* data-structures.scm:735: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3940(t4,((C_word*)t0)[3],t3);}}

/* map-loop256 in shuffle in k1430 */
static void C_fcall f_2113(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2113,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2138,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:205: g262 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2428 in loop in k2407 in rassoc in k1430 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:269: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2413(t3,((C_word*)t0)[2],t2);}}

/* none? in k1430 */
static void C_ccall f_1709(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1709,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* any? in k1430 */
static void C_ccall f_1705(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1705,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* k2998 in scan in loop in string-split in k1430 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:426: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2939(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[4]);}

/* lookup in topological-sort in k1430 */
static void C_fcall f_3975(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3975,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3981,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3981(t6,t1,((C_word*)((C_word*)t0)[3])[1]);}

/* compress in k1430 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1976,4,t0,t1,t2,t3);}
t4=lf[29];
t5=C_i_check_list_2(t3,lf[28]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1985,a[2]=t7,a[3]=t4,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1985(t9,t1,t2,t3);}

/* k2359 in loop */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:254: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2346(t3,((C_word*)t0)[2],t2);}}

/* f_2102 in k2098 in shuffle in k1430 */
static void C_ccall f_2102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2102,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
t5=C_i_car(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_lessp(t4,t5));}

/* k2098 in shuffle in k1430 */
static void C_ccall f_2100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2102,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:205: sort! */
t3=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* add in string-split in k1430 */
static void C_fcall f_2921(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2921,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2934,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:410: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t5,((C_word*)t0)[3],t2,t3);}

/* loop in insert in topological-sort in k1430 */
static void C_fcall f_3940(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3940,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3960,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_i_caar(t2);
/* data-structures.scm:734: pred */
t5=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k2586 in map-loop410 in conc in k1430 */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2587,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2562(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2562(t6,((C_word*)t0)[5],t5);}}

/* loop in string-split in k1430 */
static void C_fcall f_2939(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2939,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[4]);
if(C_truep(t7)){
/* data-structures.scm:417: add */
t8=((C_word*)t0)[5];
f_2921(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[3])[1];
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?t8:C_SCHEME_END_OF_LIST));}}
else{
t5=C_subchar(((C_word*)t0)[6],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t7,a[12]=((C_word)li84),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_2964(t9,t1,C_fix(0));}}

/* reverse-string-append in k1430 */
static void C_ccall f_2445(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2445,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2449,a[2]=t4,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm:288: rev-string-append */
t6=((C_word*)t4)[1];
f_2449(t6,t1,t2,C_fix(0));}

/* rev-string-append in reverse-string-append in k1430 */
static void C_fcall f_2449(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2449,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_string_length(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2461,a[2]=t3,a[3]=t6,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_fixnum_plus(t3,t6);
/* data-structures.scm:280: rev-string-append */
t12=t7;
t13=t9;
t14=t10;
t1=t12;
t2=t13;
t3=t14;
goto loop;}
else{
/* data-structures.scm:287: make-string */
t4=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* traverse in k1430 */
static void C_fcall f_2592(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2592,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t2,t6);
t8=C_i_check_string_2(t3,t6);
t9=C_block_size(t3);
t10=C_block_size(t2);
t11=C_i_check_exact_2(t4,t6);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2609,a[2]=t9,a[3]=t13,a[4]=t5,a[5]=t10,a[6]=((C_word)li69),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_2609(t15,t1,t4,t10);}

/* topological-sort in k1430 */
static void C_ccall f_3925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[45],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3925,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3934,a[2]=t5,a[3]=t3,a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3975,a[2]=t3,a[3]=t5,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp));
t16=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4007,a[2]=t13,a[3]=t11,a[4]=t7,a[5]=t9,a[6]=((C_word)li119),tmp=(C_word)a,a+=7,tmp));
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4061,a[2]=t9,a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp);
t18=C_i_cdr(t2);
t19=C_i_check_list_2(t18,lf[93]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4076,a[2]=t13,a[3]=t11,a[4]=t2,a[5]=t7,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4135,a[2]=t22,a[3]=t17,a[4]=((C_word)li123),tmp=(C_word)a,a+=5,tmp));
t24=((C_word*)t22)[1];
f_4135(t24,t20,t18);}}

/* k3922 in sort in k1430 */
static void C_ccall f_3923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:718: sort! */
t2=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* join in k1430 */
static void C_ccall f_1924(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1924r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1924r(t0,t1,t2,t3);}}

static void C_ccall f_1924r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1928,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_1928(t6,C_u_i_car(t5));}
else{
t5=t4;
f_1928(t5,C_SCHEME_END_OF_LIST);}}

/* k1927 in join in k1430 */
static void C_fcall f_1928(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1928,NULL,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[25]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1935,a[2]=t1,a[3]=t4,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1935(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* sort! in k1430 */
static void C_ccall f_3788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3788,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3792,a[2]=t3,a[3]=t6,a[4]=t4,a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t8=C_i_vector_length(((C_word*)t4)[1]);
t9=((C_word*)t4)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3865,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t6,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:700: vector->list */
t11=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t4)[1]);}
else{
t8=C_i_length(((C_word*)t4)[1]);
/* data-structures.scm:706: step */
t9=((C_word*)t6)[1];
f_3792(t9,t1,t8);}}

/* insert in topological-sort in k1430 */
static void C_fcall f_3934(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3934,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3940,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=((C_word)li113),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_3940(t7,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in k1927 in join in k1430 */
static void C_fcall f_1935(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1935,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
if(C_truep(C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1967,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:185: loop */
t7=t5;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}
else{
/* data-structures.scm:179: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(3,*((C_word*)lf[27]+1),t1,t2);}}}

/* k2947 in loop in string-split in k1430 */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:C_SCHEME_END_OF_LIST));}

/* sort in k1430 */
static void C_ccall f_3901(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3901,4,t0,t1,t2,t3);}
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3914,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3917,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:717: vector->list */
t6=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3923,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:718: append */
t5=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_SCHEME_END_OF_LIST);}}

/* k3913 in sort in k1430 */
static void C_ccall f_3914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:717: list->vector */
t2=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_data_2dstructures_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("data_2dstructures_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1020)){
C_save(t1);
C_rereclaim2(1020*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,113);
lf[0]=C_h_intern(&lf[0],8,"identity");
lf[1]=C_h_intern(&lf[1],7,"conjoin");
lf[2]=C_h_intern(&lf[2],7,"disjoin");
lf[3]=C_h_intern(&lf[3],10,"constantly");
lf[4]=C_h_intern(&lf[4],4,"flip");
lf[5]=C_h_intern(&lf[5],10,"complement");
lf[6]=C_h_intern(&lf[6],7,"compose");
lf[7]=C_h_intern(&lf[7],6,"values");
lf[8]=C_h_intern(&lf[8],1,"o");
lf[9]=C_h_intern(&lf[9],8,"list-of\077");
lf[10]=C_h_intern(&lf[10],4,"each");
lf[11]=C_h_intern(&lf[11],19,"\003sysundefined-value");
lf[12]=C_h_intern(&lf[12],4,"any\077");
lf[13]=C_h_intern(&lf[13],5,"none\077");
lf[14]=C_h_intern(&lf[14],7,"always\077");
lf[15]=C_h_intern(&lf[15],6,"never\077");
lf[16]=C_h_intern(&lf[16],5,"atom\077");
lf[17]=C_h_intern(&lf[17],5,"tail\077");
lf[18]=C_h_intern(&lf[18],11,"intersperse");
lf[19]=C_h_intern(&lf[19],7,"butlast");
lf[20]=C_h_intern(&lf[20],7,"flatten");
lf[21]=C_h_intern(&lf[21],4,"chop");
lf[22]=C_h_intern(&lf[22],7,"reverse");
lf[23]=C_h_intern(&lf[23],9,"\003syserror");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid numeric argument");
lf[25]=C_h_intern(&lf[25],4,"join");
lf[26]=C_h_intern(&lf[26],10,"\003sysappend");
lf[27]=C_h_intern(&lf[27],27,"\003syserror-not-a-proper-list");
lf[28]=C_h_intern(&lf[28],8,"compress");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000%bad argument type - not a proper list");
lf[30]=C_h_intern(&lf[30],15,"\003syssignal-hook");
lf[31]=C_h_intern(&lf[31],11,"\000type-error");
lf[32]=C_h_intern(&lf[32],7,"shuffle");
lf[33]=C_h_intern(&lf[33],3,"cdr");
lf[34]=C_h_intern(&lf[34],3,"map");
lf[35]=C_h_intern(&lf[35],5,"sort!");
lf[36]=C_h_intern(&lf[36],13,"alist-update!");
lf[37]=C_h_intern(&lf[37],4,"eqv\077");
lf[38]=C_h_intern(&lf[38],3,"eq\077");
lf[39]=C_h_intern(&lf[39],4,"assq");
lf[40]=C_h_intern(&lf[40],4,"assv");
lf[41]=C_h_intern(&lf[41],6,"equal\077");
lf[42]=C_h_intern(&lf[42],5,"assoc");
lf[43]=C_h_intern(&lf[43],12,"alist-update");
lf[44]=C_h_intern(&lf[44],5,"error");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\021bad argument type");
lf[46]=C_h_intern(&lf[46],9,"alist-ref");
lf[47]=C_h_intern(&lf[47],6,"rassoc");
lf[48]=C_h_intern(&lf[48],21,"reverse-string-append");
lf[49]=C_h_intern(&lf[49],11,"make-string");
lf[50]=C_h_intern(&lf[50],8,"->string");
lf[51]=C_h_intern(&lf[51],14,"symbol->string");
lf[52]=C_h_intern(&lf[52],18,"\003sysnumber->string");
lf[53]=C_h_intern(&lf[53],17,"get-output-string");
lf[54]=C_h_intern(&lf[54],7,"display");
lf[55]=C_h_intern(&lf[55],18,"open-output-string");
lf[56]=C_h_intern(&lf[56],4,"conc");
lf[57]=C_h_intern(&lf[57],13,"string-append");
lf[58]=C_h_intern(&lf[58],19,"\003syssubstring-index");
lf[59]=C_h_intern(&lf[59],15,"substring-index");
lf[60]=C_h_intern(&lf[60],22,"\003syssubstring-index-ci");
lf[61]=C_h_intern(&lf[61],18,"substring-index-ci");
lf[62]=C_h_intern(&lf[62],15,"string-compare3");
lf[63]=C_h_intern(&lf[63],18,"string-compare3-ci");
lf[64]=C_h_intern(&lf[64],15,"\003syssubstring=\077");
lf[65]=C_h_intern(&lf[65],11,"substring=\077");
lf[66]=C_h_intern(&lf[66],18,"\003syssubstring-ci=\077");
lf[67]=C_h_intern(&lf[67],14,"substring-ci=\077");
lf[68]=C_h_intern(&lf[68],12,"string-split");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\003\011\012 ");
lf[70]=C_h_intern(&lf[70],13,"\003syssubstring");
lf[71]=C_h_intern(&lf[71],18,"string-intersperse");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[74]=C_h_intern(&lf[74],19,"\003sysallocate-vector");
lf[75]=C_h_intern(&lf[75],16,"string-translate");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid translation destination");
lf[77]=C_h_intern(&lf[77],16,"\003syslist->string");
lf[78]=C_h_intern(&lf[78],17,"string-translate\052");
lf[79]=C_h_intern(&lf[79],21,"\003sysfragments->string");
lf[80]=C_h_intern(&lf[80],16,"\003sysfast-reverse");
lf[81]=C_h_intern(&lf[81],11,"string-chop");
lf[82]=C_h_intern(&lf[82],12,"string-chomp");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[84]=C_h_intern(&lf[84],7,"sorted\077");
lf[85]=C_h_intern(&lf[85],5,"merge");
lf[86]=C_h_intern(&lf[86],6,"merge!");
lf[87]=C_h_intern(&lf[87],12,"vector->list");
lf[88]=C_h_intern(&lf[88],4,"sort");
lf[89]=C_h_intern(&lf[89],12,"list->vector");
lf[90]=C_h_intern(&lf[90],6,"append");
lf[91]=C_h_intern(&lf[91],16,"topological-sort");
lf[92]=C_h_intern(&lf[92],7,"colored");
lf[93]=C_h_intern(&lf[93],8,"for-each");
lf[94]=C_h_intern(&lf[94],13,"binary-search");
lf[95]=C_h_intern(&lf[95],10,"make-queue");
lf[96]=C_h_intern(&lf[96],5,"queue");
lf[97]=C_h_intern(&lf[97],6,"queue\077");
lf[98]=C_h_intern(&lf[98],12,"queue-length");
lf[99]=C_h_intern(&lf[99],12,"queue-empty\077");
lf[100]=C_h_intern(&lf[100],11,"queue-first");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[102]=C_h_intern(&lf[102],10,"queue-last");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[104]=C_h_intern(&lf[104],10,"queue-add!");
lf[105]=C_h_intern(&lf[105],13,"queue-remove!");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[107]=C_h_intern(&lf[107],11,"queue->list");
lf[108]=C_h_intern(&lf[108],11,"list->queue");
lf[109]=C_h_intern(&lf[109],16,"queue-push-back!");
lf[110]=C_h_intern(&lf[110],21,"queue-push-back-list!");
lf[111]=C_h_intern(&lf[111],17,"register-feature!");
lf[112]=C_h_intern(&lf[112],15,"data-structures");
C_register_lf2(lf,113,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1431,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:33: register-feature! */
t3=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[112]);}

/* k3916 in sort in k1430 */
static void C_ccall f_3917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:717: sort! */
t2=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3151 in k3149 in string-translate in k1430 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3152,2,t0,t1);}
t2=C_i_stringp(t1);
t3=(C_truep(t2)?C_block_size(t1):C_SCHEME_FALSE);
t4=C_i_check_string_2(((C_word*)t0)[2],lf[75]);
t5=C_block_size(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3160,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:491: make-string */
t7=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}

/* k3149 in string-translate in k1430 */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3150,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3152,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=C_slot(((C_word*)t0)[4],C_fix(0));
if(C_truep(C_charp(t3))){
t4=t2;
f_3152(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t3))){
/* list->string */
t4=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t4=C_i_check_string_2(t3,lf[75]);
t5=t2;
f_3152(2,t5,t3);}}}
else{
t3=t2;
f_3152(2,t3,C_SCHEME_FALSE);}}

/* loop in compress in k1430 */
static void C_fcall f_1985(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1985,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_slot(t2,C_fix(0)))){
t4=C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2025,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t2,C_fix(1));
t7=C_slot(t3,C_fix(1));
/* data-structures.scm:198: loop */
t11=t5;
t12=t6;
t13=t7;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t3,C_fix(1));
/* data-structures.scm:199: loop */
t11=t1;
t12=t4;
t13=t5;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}
else{
/* data-structures.scm:196: ##sys#signal-hook */
t4=*((C_word*)lf[30]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[31],lf[28],((C_word*)t0)[3],t3);}}
else{
/* data-structures.scm:194: ##sys#signal-hook */
t4=*((C_word*)lf[30]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[31],lf[28],((C_word*)t0)[3],t2);}}}

/* queue-first in k1430 */
static void C_ccall f_4265(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4265,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[96],lf[100]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4273,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm:819: ##sys#error */
t7=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[100],lf[101],t2);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_slot(t4,C_fix(0)));}}

/* f_3122 in instring in string-translate in k1430 */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3122,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3128(t3,C_fix(0)));}

/* loop */
static C_word C_fcall f_3128(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(C_SCHEME_FALSE);}
else{
t2=C_subchar(((C_word*)t0)[3],t1);
t3=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
return(t1);}
else{
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}}

/* queue-empty? in k1430 */
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4253,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[96],lf[99]);
t4=C_slot(t2,C_fix(1));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(C_SCHEME_END_OF_LIST,t4));}

/* loop in k2460 in rev-string-append in reverse-string-append in k1430 */
static C_word C_fcall f_2469(C_word t0,C_word t1,C_word t2){
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
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[2]))){
t3=C_i_string_ref(((C_word*)t0)[3],t1);
t4=C_i_string_set(((C_word*)t0)[4],t2,t3);
t5=C_fixnum_plus(t1,C_fix(1));
t6=C_fixnum_plus(t2,C_fix(1));
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=((C_word*)t0)[4];
return(t3);}}

/* k2460 in rev-string-append in reverse-string-append in k1430 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2461,2,t0,t1);}
t2=C_i_string_length(t1);
t3=C_fixnum_difference(t2,((C_word*)t0)[2]);
t4=C_fixnum_difference(t3,((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_2469(t5,C_fix(0),t4));}

/* string-translate in k1430 */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3113r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3113r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3113r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3117,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3150,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_charp(t3))){
t7=t6;
f_3150(2,t7,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3276,a[2]=t3,a[3]=((C_word)li94),tmp=(C_word)a,a+=4,tmp));}
else{
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3292,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* list->string */
t8=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t7=C_i_check_string_2(t3,lf[75]);
/* data-structures.scm:479: instring */
f_3117(t6,t3);}}}

/* instring in string-translate in k1430 */
static void C_fcall f_3117(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3117,NULL,2,t1,t2);}
t3=C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3122,a[2]=t3,a[3]=t2,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp));}

/* k2198 in loop */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:222: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2185(t3,((C_word*)t0)[2],t2);}}

/* queue-add! in k1430 */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4303,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[96],lf[104]);
t5=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4311,a[2]=t2,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
t8=C_eqp(C_SCHEME_END_OF_LIST,t7);
if(C_truep(t8)){
t9=t6;
f_4311(t9,C_i_setslot(t2,C_fix(1),t5));}
else{
t9=C_slot(t2,C_fix(2));
t10=t6;
f_4311(t10,C_i_setslot(t9,C_fix(1),t5));}}

/* string-compare3 in k1430 */
static void C_ccall f_2683(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2683,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[62]);
t5=C_i_check_string_2(t3,lf[62]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* k4422 in list->queue in k1430 */
static void C_ccall f_4423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4423,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[96],((C_word*)t0)[3],t1));}

/* k2544 in ->string in k1430 */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:300: display */
t3=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],t1);}

/* doloop1002 in list->queue in k1430 */
static void C_fcall f_4431(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4431,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4440,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_blockp(t2);
t7=C_i_not(t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4451,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_4451(t9,t7);}
else{
t9=C_pairp(t2);
t10=t8;
f_4451(t10,C_i_not(t9));}}}

/* loop */
static void C_fcall f_1445(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1445,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1460,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:41: g72 */
t6=t4;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[3]);}}

/* f_1440 in conjoin in k1430 */
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1440,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1445,a[2]=t4,a[3]=t2,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1445(t6,t1,((C_word*)t0)[2]);}

/* k2546 in k2544 in ->string in k1430 */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:301: get-output-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2558 in conc in k1430 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[57]+1),t1);}

/* map-loop410 in conc in k1430 */
static void C_fcall f_2562(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2562,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:305: g416 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4050 in for-each-loop881 in k4010 in visit in topological-sort in k1430 */
static void C_ccall f_4051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4042(t3,((C_word*)t0)[4],t2);}

/* list->queue in k1430 */
static void C_ccall f_4413(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4413,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[108]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4423,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record3(&a,3,lf[96],t2,C_SCHEME_END_OF_LIST));}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4431,a[2]=t7,a[3]=t2,a[4]=((C_word)li137),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4431(t9,t4,t2);}}

/* k4291 in queue-last in k1430 */
static void C_ccall f_4292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(0)));}

/* loop in queue->list in k1430 */
static void C_fcall f_4389(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4389,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* data-structures.scm:856: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[80]+1)))(3,*((C_word*)lf[80]+1),t1,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_a_i_cons(&a,2,t5,t3);
/* data-structures.scm:857: loop */
t8=t1;
t9=t4;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* conc in k1430 */
static void C_ccall f_2552(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr2r,(void*)f_2552r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2552r(t0,t1,t2);}}

static void C_ccall f_2552r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(16);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[50]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2560,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2562,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2562(t12,t8,t2);}

/* for-each-loop881 in k4010 in visit in topological-sort in k1430 */
static void C_fcall f_4042(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4042,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4051,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:747: g882 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* conjoin in k1430 */
static void C_ccall f_1437(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1437r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1437r(t0,t1,t2);}}

static void C_ccall f_1437r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1440,a[2]=t2,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));}

/* k4439 in doloop1002 in list->queue in k1430 */
static void C_ccall f_4440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4431(t3,((C_word*)t0)[4],t2);}

/* identity in k1430 */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1433,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* queue-last in k1430 */
static void C_ccall f_4284(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4284,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[96],lf[102]);
t4=C_slot(t2,C_fix(2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4292,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm:827: ##sys#error */
t7=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[102],lf[103],t2);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_slot(t4,C_fix(0)));}}

/* k1430 */
static void C_ccall f_1431(C_word c,C_word t0,C_word t1){
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
C_word ab[200],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1431,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! identity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1433,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[1]+1 /* (set! conjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1437,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[2]+1 /* (set! disjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1468,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[3]+1 /* (set! constantly ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[4]+1 /* (set! flip ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1523,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[5]+1 /* (set! complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1531,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[6]+1 /* (set! compose ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1542,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[8]+1 /* (set! o ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1577,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[9]+1 /* (set! list-of? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1614,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[10]+1 /* (set! each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1652,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[12]+1 /* (set! any? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1705,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[13]+1 /* (set! none? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1709,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[14]+1 /* (set! always? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1713,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[15]+1 /* (set! never? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1717,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[16]+1 /* (set! atom? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1721,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[17]+1 /* (set! tail? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1725,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[18]+1 /* (set! intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1752,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[19]+1 /* (set! butlast ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[20]+1 /* (set! flatten ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1811,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[21]+1 /* (set! chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1848,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[25]+1 /* (set! join ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1924,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[28]+1 /* (set! compress ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1976,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[32]+1 /* (set! shuffle ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2048,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[36]+1 /* (set! alist-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2143,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[43]+1 /* (set! alist-update ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2223,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[46]+1 /* (set! alist-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2304,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[47]+1 /* (set! rassoc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2402,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[48]+1 /* (set! reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2445,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[50]+1 /* (set! ->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2509,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[56]+1 /* (set! conc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2552,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2592,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t33=C_mutate((C_word*)lf[58]+1 /* (set! ##sys#substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=t32,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t34=C_mutate((C_word*)lf[60]+1 /* (set! ##sys#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2642,a[2]=t32,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp));
t35=C_mutate((C_word*)lf[59]+1 /* (set! substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2651,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[61]+1 /* (set! substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2667,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[62]+1 /* (set! string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2683,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[63]+1 /* (set! string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[64]+1 /* (set! ##sys#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2735,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[65]+1 /* (set! substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2765,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[66]+1 /* (set! ##sys#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[67]+1 /* (set! substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2850,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[68]+1 /* (set! string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2905,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[71]+1 /* (set! string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3025,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[75]+1 /* (set! string-translate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3113,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[78]+1 /* (set! string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3299,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[81]+1 /* (set! string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3401,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[82]+1 /* (set! string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3456,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[84]+1 /* (set! sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3491,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[85]+1 /* (set! merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3588,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[86]+1 /* (set! merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3671,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[35]+1 /* (set! sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3788,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[88]+1 /* (set! sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3901,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[91]+1 /* (set! topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3925,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[94]+1 /* (set! binary-search ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4155,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[95]+1 /* (set! make-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4232,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[97]+1 /* (set! queue? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4238,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[98]+1 /* (set! queue-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4244,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[99]+1 /* (set! queue-empty? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4253,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[100]+1 /* (set! queue-first ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4265,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[102]+1 /* (set! queue-last ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4284,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[104]+1 /* (set! queue-add! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4303,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[105]+1 /* (set! queue-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4338,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[107]+1 /* (set! queue->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4377,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[108]+1 /* (set! list->queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4413,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[109]+1 /* (set! queue-push-back! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4464,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[110]+1 /* (set! queue-push-back-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4497,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t68=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t68+1)))(2,t68,C_SCHEME_UNDEFINED);}

/* f_1674 in each in k1430 */
static void C_ccall f_1674(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_1674r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1674r(t0,t1,t2);}}

static void C_ccall f_1674r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1680,a[2]=t2,a[3]=t4,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1680(t6,t1,((C_word*)t0)[2]);}

/* k4034 in k4010 in visit in topological-sort in k1430 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4036,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4272 in queue-first in k1430 */
static void C_ccall f_4273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(0)));}

/* k2317 in k2315 in alist-ref in k1430 */
static void C_ccall f_2318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_slot(t1,C_fix(1)):((C_word*)t0)[3]));}

/* loop */
static void C_fcall f_1680(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1680,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
if(C_truep(C_i_nullp(t4))){
C_apply(4,0,t1,t3,((C_word*)t0)[2]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1697,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,t3,((C_word*)t0)[2]);}}

/* ->string in k1430 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2509,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_symbolp(t2))){
/* data-structures.scm:295: symbol->string */
t3=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
if(C_truep(C_charp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_string(&a,1,t2));}
else{
if(C_truep(C_i_numberp(t2))){
/* data-structures.scm:297: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(3,*((C_word*)lf[52]+1),t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2545,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:299: open-output-string */
t4=*((C_word*)lf[55]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}}}

/* k2315 in alist-ref in k1430 */
static void C_fcall f_2316(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2316,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:255: aq */
t3=t1;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3368 in loop in collect in string-translate* in k1430 */
static void C_fcall f_3369(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3369,NULL,2,t0,t1);}
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* data-structures.scm:535: collect */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3309(t5,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[7],t3,t4);}

/* k3571 in loop in sorted? in k1430 */
static void C_ccall f_3573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* data-structures.scm:605: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3560(t6,((C_word*)t0)[2],t3,t5);}}

/* merge in k1430 */
static void C_ccall f_3588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3588,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep(C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=C_i_car(t2);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_i_car(t3);
t9=t3;
t10=C_u_i_cdr(t9);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3616,a[2]=t12,a[3]=t4,a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_3616(t14,t1,t5,t7,t8,t10);}}}

/* alist-ref in k1430 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2304r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2304r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2304r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(10);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?*((C_word*)lf[37]+1):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2316,a[2]=t1,a[3]=t10,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t14=C_eqp(*((C_word*)lf[38]+1),t6);
if(C_truep(t14)){
t15=t13;
f_2316(t15,*((C_word*)lf[39]+1));}
else{
t15=C_eqp(*((C_word*)lf[37]+1),t6);
if(C_truep(t15)){
t16=*((C_word*)lf[40]+1);
t17=t13;
f_2316(t17,*((C_word*)lf[40]+1));}
else{
t16=C_eqp(*((C_word*)lf[41]+1),t6);
t17=t13;
f_2316(t17,(C_truep(t16)?*((C_word*)lf[42]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2340,a[2]=t6,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp)));}}}

/* k1696 in loop */
static void C_ccall f_1697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:109: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1680(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f_1660 in each in k1430 */
static void C_ccall f_1660(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1660,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[11]+1));}

/* loop in sorted? in k1430 */
static void C_fcall f_3560(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3560,NULL,4,t0,t1,t2,t3);}
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3573,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=C_i_car(t3);
/* data-structures.scm:604: less? */
t7=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,t6,t2);}}

/* map-loop237 in k2053 in shuffle in k1430 */
static void C_fcall f_2061(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2061,NULL,3,t0,t1,t2);}
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

/* k3390 in loop in collect in string-translate* in k1430 */
static void C_ccall f_3391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3391,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_3369(t4,t3);}

/* collect in string-translate* in k1430 */
static void C_fcall f_3309(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3309,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3322,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3334,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:522: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t8,((C_word*)t0)[3],t3,t2);}
else{
t8=((C_word*)t6)[1];
/* data-structures.scm:520: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[80]+1)))(3,*((C_word*)lf[80]+1),t7,t8);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3339,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=t8,a[9]=((C_word)li96),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_3339(t10,t1,((C_word*)t0)[5]);}}

/* step in sort! in k1430 */
static void C_fcall f_3792(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3792,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3801,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_quotient(4,0,t3,t2,C_fix(2));}
else{
if(C_truep(C_i_nequalp(t2,C_fix(2)))){
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_i_cadr(((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)((C_word*)t0)[4])[1];
t6=((C_word*)((C_word*)t0)[4])[1];
t7=C_u_i_cdr(t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_u_i_cdr(t7));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3832,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:685: less? */
t10=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t10))(4,t10,t9,t4,t3);}
else{
if(C_truep(C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}}}

/* k2053 in shuffle in k1430 */
static void C_ccall f_2054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2054,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[34]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2061,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2061(t6,((C_word*)t0)[4],t1);}

/* k1639 in loop */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* data-structures.scm:94: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1622(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##sys#substring-index in k1430 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2633,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2639,a[2]=t2,a[3]=t3,a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:325: traverse */
f_2592(t1,t2,t3,t4,t5,lf[59]);}

/* f_2639 in substring-index in k1430 */
static void C_ccall f_2639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2639,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3));}

/* loop */
static void C_fcall f_1622(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1622,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_not_pair_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1641,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:94: pred */
t5=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}}}

/* substring-index in k1430 */
static void C_ccall f_2651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2651r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2651r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2651r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:337: ##sys#substring-index */
t5=*((C_word*)lf[58]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_fix(0));}
else{
t5=C_i_car(t4);
/* data-structures.scm:337: ##sys#substring-index */
t6=*((C_word*)lf[58]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* binary-search in k1430 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4155,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4159,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4227,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:774: list->vector */
t7=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_4159(t6,C_i_check_vector_2(((C_word*)t4)[1],lf[94]));}}

/* k3159 in k3151 in k3149 in string-translate in k1430 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3160,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3165,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word)li93),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3165(t5,((C_word*)t0)[7],C_fix(0),C_fix(0));}

/* loop in k3159 in k3151 in k3149 in string-translate in k1430 */
static void C_fcall f_3165(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3165,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
if(C_truep(C_fixnum_lessp(t3,t2))){
/* data-structures.scm:495: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t1,((C_word*)t0)[3],C_fix(0),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}
else{
t4=C_subchar(((C_word*)t0)[4],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3183,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:498: from */
t6=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}

/* k4081 */
static void C_ccall f_4082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=C_eqp(t1,lf[92]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* data-structures.scm:764: visit */
t7=((C_word*)((C_word*)t0)[4])[1];
f_4007(t7,((C_word*)t0)[2],t4,t6);}}

/* k4158 in binary-search in k1430 */
static void C_fcall f_4159(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4159,NULL,2,t0,t1);}
t2=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4172,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li125),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4172(t6,((C_word*)t0)[4],C_fix(0),t2);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* doloop1026 */
static C_word C_fcall f_4530(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
t2=C_slot(t1,C_fix(1));
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
return(t4);}
else{
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}}

/* loop in o in k1430 */
static void C_fcall f_1589(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1589,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
if(C_truep(C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1602,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* ##sys#substring-index-ci in k1430 */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2642,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2648,a[2]=t2,a[3]=t3,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:331: traverse */
f_2592(t1,t2,t3,t4,t5,lf[61]);}

/* queue->list in k1430 */
static void C_ccall f_4377(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4377,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[96],lf[107]);
t4=C_slot(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4389,a[2]=t6,a[3]=((C_word)li135),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4389(t8,t1,t4,C_SCHEME_END_OF_LIST);}

/* k4143 in for-each-loop851 in topological-sort in k1430 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4135(t3,((C_word*)t0)[4],t2);}

/* k1608 */
static void C_ccall f_1609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:87: g113 */
t3=t1;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}

/* f_2648 in substring-index-ci in k1430 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2648,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare_case_insensitive(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3));}

/* k4074 in topological-sort in k1430 */
static void C_ccall f_4076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_caar(((C_word*)t0)[4]);
t4=((C_word*)t0)[4];
t5=C_u_i_car(t4);
t6=C_u_i_cdr(t5);
/* data-structures.scm:760: visit */
t7=((C_word*)((C_word*)t0)[2])[1];
f_4007(t7,t2,t3,t6);}

/* k4077 in k4074 in topological-sort in k1430 */
static void C_ccall f_4078(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
t5=C_i_check_list_2(t4,lf[93]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4107,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4109,a[2]=t8,a[3]=t2,a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4109(t10,t6,t4);}

/* f_4079 in k4077 in k4074 in topological-sort in k1430 */
static void C_ccall f_4079(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4079,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4082,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* data-structures.scm:762: lookup */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3975(t5,t3,t4);}

/* f_1602 in loop in o in k1430 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1602,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:87: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1589(t4,t3,((C_word*)t0)[4]);}

/* f_4525 in k4504 in queue-push-back-list! in k1430 */
static void C_ccall f_4525(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4525,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4530,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_4530(t2));}

/* for-each-loop851 in topological-sort in k1430 */
static void C_fcall f_4135(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4135,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4144,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:728: g852 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3182 in loop in k3159 in k3151 in k3149 in string-translate in k1430 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=t1;
if(C_truep(t2)){
t3=((C_word*)t0)[2];
if(C_truep(t3)){
if(C_truep(C_charp(((C_word*)t0)[2]))){
t4=C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);
t5=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t6=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:505: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3165(t7,((C_word*)t0)[7],t5,t6);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[8]))){
/* data-structures.scm:507: ##sys#error */
t4=*((C_word*)lf[23]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[7],lf[75],lf[76],((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t4=C_subchar(((C_word*)t0)[2],t1);
t5=C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t7=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:510: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_3165(t8,((C_word*)t0)[7],t6,t7);}}}
else{
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* data-structures.scm:502: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3165(t5,((C_word*)t0)[7],t4,((C_word*)t0)[4]);}}
else{
t3=C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[9]);
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:501: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3165(t6,((C_word*)t0)[7],t4,t5);}}

/* each in k1430 */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1652r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1652r(t0,t1,t2);}}

static void C_ccall f_1652r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1660,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(1));
t4=C_i_nullp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_slot(t2,C_fix(0)):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1674,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp)));}}

/* f_4061 in topological-sort in k1430 */
static void C_ccall f_4061(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4061,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
/* data-structures.scm:757: insert */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3934(t6,t1,t3,t5);}

/* loop in k2407 in rassoc in k1430 */
static void C_fcall f_2413(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2413,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_check_pair_2(t3,lf[47]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2430,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t6=C_slot(t3,C_fix(1));
/* data-structures.scm:267: tst */
t7=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[4],t6);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3863 in sort! in k1430 */
static void C_ccall f_3865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3865,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3871,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:701: step */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3792(t4,t3,((C_word*)t0)[6]);}

/* substring-index-ci in k1430 */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2667r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2667r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2667r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:340: ##sys#substring-index-ci */
t5=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_fix(0));}
else{
t5=C_i_car(t4);
/* data-structures.scm:340: ##sys#substring-index-ci */
t6=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* o in k1430 */
static void C_ccall f_1577(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1577r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1577r(t0,t1,t2);}}

static void C_ccall f_1577r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=*((C_word*)lf[0]+1);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[0]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1589,a[2]=t4,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1589(t6,t1,t2);}}

/* rassoc in k1430 */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2402r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2402r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2402r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=C_i_check_list_2(t3,lf[47]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2408,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t7=t4;
t8=t6;
f_2408(t8,C_u_i_car(t7));}
else{
t7=t6;
f_2408(t7,*((C_word*)lf[37]+1));}}

/* k2407 in rassoc in k1430 */
static void C_fcall f_2408(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2408,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2413,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2413(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* doloop833 in k3870 in k3863 in sort! in k1430 */
static void C_fcall f_3873(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3873,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=C_i_car(t2);
t5=C_i_vector_set(((C_word*)t0)[2],t3,t4);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_a_i_plus(&a,2,t3,C_fix(1));
t10=t1;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k3870 in k3863 in sort! in k1430 */
static void C_ccall f_3871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3871,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3873,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li110),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3873(t5,((C_word*)t0)[3],t1,C_fix(0));}

/* k2137 in map-loop256 in shuffle in k1430 */
static void C_ccall f_2138(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2138,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2113(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2113(t6,((C_word*)t0)[5],t5);}}

/* k2151 in k2149 in alist-update! in k1430 */
static void C_ccall f_2152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2152,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_setslot(t1,C_fix(1),((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[2]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,((C_word*)t0)[3]));}}

/* k2149 in alist-update! in k1430 */
static void C_fcall f_2150(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2150,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:223: aq */
t3=t1;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* loop in traverse in k1430 */
static void C_fcall f_2609(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2609,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greaterp(t3,((C_word*)t0)[2]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2622,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:319: test */
t5=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,t2,((C_word*)t0)[5]);}}

/* f_3276 in string-translate in k1430 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3276,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(t2,((C_word*)t0)[2]));}

/* sorted? in k1430 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3491,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_vectorp(t2))){
t4=t2;
t5=C_block_size(t4);
if(C_truep(C_fixnum_less_or_equal_p(t5,C_fix(1)))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_TRUE);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3517,a[2]=t5,a[3]=t7,a[4]=t2,a[5]=t3,a[6]=((C_word)li102),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_3517(t9,t1,C_fix(1));}}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3560,a[2]=t8,a[3]=t3,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3560(t10,t1,t4,t6);}}}

/* k3524 in doloop765 in sorted? in k1430 */
static void C_ccall f_3526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3526,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_nequalp(((C_word*)t0)[3],((C_word*)t0)[4]));}
else{
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_3517(t3,((C_word*)t0)[2],t2);}}

/* alist-update! in k1430 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr5r,(void*)f_2143r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2143r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2143r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(10);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?*((C_word*)lf[37]+1):C_i_car(t5));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2150,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_eqp(*((C_word*)lf[38]+1),t7);
if(C_truep(t9)){
t10=t8;
f_2150(t10,*((C_word*)lf[39]+1));}
else{
t10=C_eqp(*((C_word*)lf[37]+1),t7);
if(C_truep(t10)){
t11=*((C_word*)lf[40]+1);
t12=t8;
f_2150(t12,*((C_word*)lf[40]+1));}
else{
t11=C_eqp(*((C_word*)lf[41]+1),t7);
t12=t8;
f_2150(t12,(C_truep(t11)?*((C_word*)lf[42]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2179,a[2]=t7,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp)));}}}

/* f_1617 in list-of? in k1430 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1617,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1622,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1622(t6,t1,t2);}

/* list-of? in k1430 */
static void C_ccall f_1614(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1614,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1617,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));}

/* k1610 in k1608 */
static void C_ccall f_1612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:87: h */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k3764 in k3744 in merge! in k1430 */
static void C_ccall f_3765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2620 in loop in traverse in k1430 */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:321: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2609(t4,((C_word*)t0)[2],t2,t3);}}

/* k3830 in step in sort! in k1430 */
static void C_ccall f_3832(C_word c,C_word t0,C_word t1){
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
if(C_truep(t1)){
t2=C_i_setslot(((C_word*)t0)[2],C_fix(0),((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_i_set_car(t3,((C_word*)t0)[4]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_i_set_cdr(t5,C_SCHEME_END_OF_LIST);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,((C_word*)t0)[2]);}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}}

/* compose in k1430 */
static void C_ccall f_1542(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1542r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1542r(t0,t1,t2);}}

static void C_ccall f_1542r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1546,a[2]=t4,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
if(C_truep(C_i_nullp(t2))){
t6=*((C_word*)lf[7]+1);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,*((C_word*)lf[7]+1));}
else{
C_apply(4,0,t1,((C_word*)t4)[1],t2);}}

/* rec in compose in k1430 */
static void C_ccall f_1546(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1546r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1546r(t0,t1,t2,t3);}}

static void C_ccall f_1546r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1554,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1539 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k3747 in k3744 in merge! in k1430 */
static void C_ccall f_3748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3744 in merge! in k1430 */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3746,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[4];
t7=C_i_setslot(t5,C_fix(1),t6);
t8=((C_word*)t0)[2];
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* data-structures.scm:656: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3675(t7,t2,((C_word*)t0)[2],((C_word*)t0)[4],t6);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3765,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[2];
t7=C_i_setslot(t5,C_fix(1),t6);
t8=((C_word*)t0)[4];
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* data-structures.scm:661: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3675(t7,t2,((C_word*)t0)[4],t6,((C_word*)t0)[2]);}}}

/* k3802 in k3800 in step in sort! in k1430 */
static void C_ccall f_3803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3803,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3807,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:678: step */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3792(t4,t3,t2);}

/* k3806 in k3802 in k3800 in step in sort! in k1430 */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:679: merge! */
t2=*((C_word*)lf[86]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* f_1554 in rec in compose in k1430 */
static void C_ccall f_1554(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1554r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1554r(t0,t1,t2);}}

static void C_ccall f_1554r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1560,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:72: call-with-values */
C_call_with_values(4,0,t1,t3,((C_word*)t0)[4]);}

/* k3800 in step in sort! in k1430 */
static void C_ccall f_3801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3803,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:676: step */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3792(t3,t2,t1);}

/* queue-length in k1430 */
static void C_ccall f_4244(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4244,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[96],lf[98]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* k2096 */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2097,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,t1,((C_word*)t0)[3]));}

/* f_2091 in shuffle in k1430 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2091,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2097,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:205: random */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}

/* k1486 in loop */
static void C_ccall f_1488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:53: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1476(t3,((C_word*)t0)[2],t2);}}

/* string-chomp in k1430 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3456r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3456r(t0,t1,t2,t3);}}

static void C_ccall f_3456r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[83]:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[82]);
t7=C_i_check_string_2(t5,lf[82]);
t8=C_block_size(t2);
t9=C_block_size(t5);
t10=C_fixnum_difference(t8,t9);
t11=C_fixnum_greater_or_equal_p(t8,t9);
t12=(C_truep(t11)?C_substring_compare(t2,t5,t10,C_fix(0),t9):C_SCHEME_FALSE);
if(C_truep(t12)){
/* data-structures.scm:565: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t1,t2,C_fix(0),t10);}
else{
t13=t2;
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}}

/* k3680 in loop in merge! in k1430 */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_setslot(t5,C_fix(1),t6));}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* data-structures.scm:643: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3675(t7,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[4],t6);}}
else{
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[4]);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_setslot(t5,C_fix(1),t6));}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* data-structures.scm:649: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3675(t7,((C_word*)t0)[5],((C_word*)t0)[4],t6,((C_word*)t0)[3]);}}}

/* make-queue in k1430 */
static void C_ccall f_4232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4232,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record4(&a,4,lf[96],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_fix(0)));}

/* queue? in k1430 */
static void C_ccall f_4238(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4238,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[96]));}

/* k3291 in string-translate in k1430 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:476: instring */
f_3117(((C_word*)t0)[3],t1);}

/* f_1534 in complement in k1430 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1534r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1534r(t0,t1,t2);}}

static void C_ccall f_1534r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1540,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(4,0,t3,((C_word*)t0)[2],t2);}

/* k4225 in binary-search in k1430 */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4159(t3,t2);}

/* complement in k1430 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1531,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1534,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));}

/* string-translate* in k1430 */
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3299,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[78]);
t5=C_i_check_list_2(t3,lf[78]);
t6=C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3309,a[2]=t6,a[3]=t2,a[4]=t8,a[5]=t3,a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm:540: collect */
t10=((C_word*)t8)[1];
f_3309(t10,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* k2742 in substring=? in k1430 */
static void C_fcall f_2744(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[65]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[65]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare(((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[3],t1));}

/* disjoin in k1430 */
static void C_ccall f_1468(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1468r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1468r(t0,t1,t2);}}

static void C_ccall f_1468r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1471,a[2]=t2,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));}

/* k1458 in loop */
static void C_ccall f_1460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* data-structures.scm:46: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1445(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop1 in string-intersperse in k1430 */
static void C_fcall f_3041(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3041,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep(C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[73]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_fixnum_difference(t3,((C_word*)t0)[4]);
/* data-structures.scm:441: ##sys#allocate-vector */
t6=*((C_word*)lf[74]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,t5,C_SCHEME_TRUE,C_make_character(32),C_SCHEME_FALSE);}}
else{
t4=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=C_i_check_string_2(t5,lf[71]);
t7=C_slot(t2,C_fix(1));
t8=C_block_size(t5);
t9=C_fixnum_plus(((C_word*)t0)[4],t3);
t10=C_fixnum_plus(t8,t9);
/* data-structures.scm:456: loop1 */
t14=t1;
t15=t7;
t16=t10;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
/* data-structures.scm:458: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(3,*((C_word*)lf[27]+1),t1,((C_word*)t0)[2]);}}}

/* constantly in k1430 */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1502r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1502r(t0,t1,t2);}}

static void C_ccall f_1502r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(4);
t3=t2;
t4=C_u_i_length(t3);
t5=C_eqp(C_fix(1),t4);
if(C_truep(t5)){
t6=C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1512,a[2]=t6,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1515,a[2]=t2,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* doloop765 in sorted? in k1430 */
static void C_fcall f_3517(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3517,NULL,3,t0,t1,t2);}
t3=C_i_nequalp(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3526,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_3526(2,t5,t3);}
else{
t5=C_i_vector_ref(((C_word*)t0)[4],t2);
t6=C_a_i_minus(&a,2,t2,C_fix(1));
t7=C_i_vector_ref(((C_word*)t0)[4],t6);
/* data-structures.scm:598: less? */
t8=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t4,t5,t7);}}

/* loop */
static void C_fcall f_1476(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1476,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1488,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:48: g84 */
t5=t3;
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[3]);}}

/* f_1471 in disjoin in k1430 */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1471,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1476,a[2]=t4,a[3]=t2,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1476(t6,t1,((C_word*)t0)[2]);}

/* k3049 in loop1 in string-intersperse in k1430 */
static void C_ccall f_3050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3055,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_3055(t2,((C_word*)t0)[5],C_fix(0)));}

/* f_1515 in constantly in k1430 */
static void C_ccall f_1515(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1515,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* loop2 in k3049 in loop1 in string-intersperse in k1430 */
static C_word C_fcall f_3055(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_block_size(t3);
t6=C_substring_copy(t3,((C_word*)t0)[2],C_fix(0),t5,t2);
t7=C_fixnum_plus(t2,t5);
if(C_truep(C_eqp(t4,C_SCHEME_END_OF_LIST))){
t8=((C_word*)t0)[2];
return(t8);}
else{
t8=C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4],t7);
t9=C_fixnum_plus(t7,((C_word*)t0)[4]);
t12=t4;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}

/* f_1512 in constantly in k1430 */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1512,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4179 in loop in k4158 in binary-search in k1430 */
static void C_ccall f_4180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t3=C_eqp(((C_word*)t0)[4],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm:784: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4172(t4,((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[3]);}}
else{
t3=C_eqp(((C_word*)t0)[6],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm:785: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4172(t4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}}}}

/* substring=? in k1430 */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2765r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2765r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2765r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
if(C_truep(C_i_nullp(t12))){
/* data-structures.scm:381: ##sys#substring=? */
t15=*((C_word*)lf[64]+1);
((C_proc7)(void*)(*((C_word*)t15+1)))(7,t15,t1,t2,t3,t6,t10,t14);}
else{
t15=C_i_cdr(t12);
/* data-structures.scm:381: ##sys#substring=? */
t16=*((C_word*)lf[64]+1);
((C_proc7)(void*)(*((C_word*)t16+1)))(7,t16,t1,t2,t3,t6,t10,t14);}}

/* string-intersperse in k1430 */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_3025r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3025r(t0,t1,t2,t3);}}

static void C_ccall f_3025r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(9);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[72]:C_i_car(t3));
t6=C_i_check_list_2(t2,lf[71]);
t7=C_i_check_string_2(t5,lf[71]);
t8=C_block_size(t5);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3041,a[2]=t2,a[3]=t5,a[4]=t8,a[5]=t10,a[6]=((C_word)li88),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3041(t12,t1,t2,C_fix(0));}

/* k1565 */
static void C_ccall f_1566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_1560 */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1566,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}

/* loop in k4158 in binary-search in k1430 */
static void C_fcall f_4172(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4172,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(t3,t2);
t5=C_fixnum_shift_right(t4,C_fix(1));
t6=C_fixnum_plus(t2,t5);
t7=C_slot(((C_word*)((C_word*)t0)[2])[1],t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4180,a[2]=t1,a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:782: proc */
t9=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t8,t7);}

/* doloop197 in loop in k1853 in chop in k1430 */
static void C_fcall f_1882(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1882,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1895,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:171: reverse */
t7=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
t6=C_slot(t3,C_fix(0));
t7=C_a_i_cons(&a,2,t6,t2);
t8=C_slot(t3,C_fix(1));
t9=C_fixnum_difference(t4,C_fix(1));
t12=t1;
t13=t7;
t14=t8;
t15=t9;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}

/* string-compare3-ci in k1430 */
static void C_ccall f_2709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2709,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[63]);
t5=C_i_check_string_2(t3,lf[63]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare_case_insensitive(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* k1894 in doloop197 in loop in k1853 in chop in k1430 */
static void C_ccall f_1895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1898,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[4]);
/* data-structures.scm:171: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1861(t4,t2,((C_word*)t0)[6],t3);}

/* k1897 in k1894 in doloop197 in loop in k1853 in chop in k1430 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1898,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[244] = {
{"f_3623:data_2dstructures_2escm",(void*)f_3623},
{"f_2735:data_2dstructures_2escm",(void*)f_2735},
{"f_2179:data_2dstructures_2escm",(void*)f_2179},
{"f_2233:data_2dstructures_2escm",(void*)f_2233},
{"f_2223:data_2dstructures_2escm",(void*)f_2223},
{"f_1526:data_2dstructures_2escm",(void*)f_1526},
{"f_1523:data_2dstructures_2escm",(void*)f_1523},
{"f_3414:data_2dstructures_2escm",(void*)f_3414},
{"f_3616:data_2dstructures_2escm",(void*)f_3616},
{"f_2185:data_2dstructures_2escm",(void*)f_2185},
{"f_3664:data_2dstructures_2escm",(void*)f_3664},
{"f_1861:data_2dstructures_2escm",(void*)f_1861},
{"f_4338:data_2dstructures_2escm",(void*)f_4338},
{"f_3442:data_2dstructures_2escm",(void*)f_3442},
{"f_3445:data_2dstructures_2escm",(void*)f_3445},
{"f_3675:data_2dstructures_2escm",(void*)f_3675},
{"f_3671:data_2dstructures_2escm",(void*)f_3671},
{"f_3641:data_2dstructures_2escm",(void*)f_3641},
{"f_1848:data_2dstructures_2escm",(void*)f_1848},
{"f_1846:data_2dstructures_2escm",(void*)f_1846},
{"f_4311:data_2dstructures_2escm",(void*)f_4311},
{"f_1840:data_2dstructures_2escm",(void*)f_1840},
{"f_4012:data_2dstructures_2escm",(void*)f_4012},
{"f_4011:data_2dstructures_2escm",(void*)f_4011},
{"f_4015:data_2dstructures_2escm",(void*)f_4015},
{"f_1854:data_2dstructures_2escm",(void*)f_1854},
{"f_4346:data_2dstructures_2escm",(void*)f_4346},
{"f_3433:data_2dstructures_2escm",(void*)f_3433},
{"f_2850:data_2dstructures_2escm",(void*)f_2850},
{"f_3994:data_2dstructures_2escm",(void*)f_3994},
{"f_4007:data_2dstructures_2escm",(void*)f_4007},
{"f_3981:data_2dstructures_2escm",(void*)f_3981},
{"f_1790:data_2dstructures_2escm",(void*)f_1790},
{"f_1809:data_2dstructures_2escm",(void*)f_1809},
{"f_2820:data_2dstructures_2escm",(void*)f_2820},
{"f_2829:data_2dstructures_2escm",(void*)f_2829},
{"f_1817:data_2dstructures_2escm",(void*)f_1817},
{"f_1811:data_2dstructures_2escm",(void*)f_1811},
{"f_1779:data_2dstructures_2escm",(void*)f_1779},
{"f_4451:data_2dstructures_2escm",(void*)f_4451},
{"f_3401:data_2dstructures_2escm",(void*)f_3401},
{"f_1781:data_2dstructures_2escm",(void*)f_1781},
{"f_2263:data_2dstructures_2escm",(void*)f_2263},
{"f_3334:data_2dstructures_2escm",(void*)f_3334},
{"f_3339:data_2dstructures_2escm",(void*)f_3339},
{"f_4505:data_2dstructures_2escm",(void*)f_4505},
{"f_2281:data_2dstructures_2escm",(void*)f_2281},
{"f_4507:data_2dstructures_2escm",(void*)f_4507},
{"f_2346:data_2dstructures_2escm",(void*)f_2346},
{"f_2340:data_2dstructures_2escm",(void*)f_2340},
{"f_2025:data_2dstructures_2escm",(void*)f_2025},
{"f_3322:data_2dstructures_2escm",(void*)f_3322},
{"f_2905:data_2dstructures_2escm",(void*)f_2905},
{"f_2934:data_2dstructures_2escm",(void*)f_2934},
{"f_1752:data_2dstructures_2escm",(void*)f_1752},
{"f_1758:data_2dstructures_2escm",(void*)f_1758},
{"f_2048:data_2dstructures_2escm",(void*)f_2048},
{"f_4118:data_2dstructures_2escm",(void*)f_4118},
{"f_1737:data_2dstructures_2escm",(void*)f_1737},
{"f_4107:data_2dstructures_2escm",(void*)f_4107},
{"f_4109:data_2dstructures_2escm",(void*)f_4109},
{"f_1717:data_2dstructures_2escm",(void*)f_1717},
{"f_1713:data_2dstructures_2escm",(void*)f_1713},
{"f_2964:data_2dstructures_2escm",(void*)f_2964},
{"f_4464:data_2dstructures_2escm",(void*)f_4464},
{"f_1725:data_2dstructures_2escm",(void*)f_1725},
{"f_1721:data_2dstructures_2escm",(void*)f_1721},
{"f_4497:data_2dstructures_2escm",(void*)f_4497},
{"f_1967:data_2dstructures_2escm",(void*)f_1967},
{"f_3960:data_2dstructures_2escm",(void*)f_3960},
{"f_2113:data_2dstructures_2escm",(void*)f_2113},
{"f_2430:data_2dstructures_2escm",(void*)f_2430},
{"f_1709:data_2dstructures_2escm",(void*)f_1709},
{"f_1705:data_2dstructures_2escm",(void*)f_1705},
{"f_2999:data_2dstructures_2escm",(void*)f_2999},
{"f_3975:data_2dstructures_2escm",(void*)f_3975},
{"f_1976:data_2dstructures_2escm",(void*)f_1976},
{"f_2361:data_2dstructures_2escm",(void*)f_2361},
{"f_2102:data_2dstructures_2escm",(void*)f_2102},
{"f_2100:data_2dstructures_2escm",(void*)f_2100},
{"f_2921:data_2dstructures_2escm",(void*)f_2921},
{"f_3940:data_2dstructures_2escm",(void*)f_3940},
{"f_2587:data_2dstructures_2escm",(void*)f_2587},
{"f_2939:data_2dstructures_2escm",(void*)f_2939},
{"f_2445:data_2dstructures_2escm",(void*)f_2445},
{"f_2449:data_2dstructures_2escm",(void*)f_2449},
{"f_2592:data_2dstructures_2escm",(void*)f_2592},
{"f_3925:data_2dstructures_2escm",(void*)f_3925},
{"f_3923:data_2dstructures_2escm",(void*)f_3923},
{"f_1924:data_2dstructures_2escm",(void*)f_1924},
{"f_1928:data_2dstructures_2escm",(void*)f_1928},
{"f_3788:data_2dstructures_2escm",(void*)f_3788},
{"f_3934:data_2dstructures_2escm",(void*)f_3934},
{"f_1935:data_2dstructures_2escm",(void*)f_1935},
{"f_2948:data_2dstructures_2escm",(void*)f_2948},
{"f_3901:data_2dstructures_2escm",(void*)f_3901},
{"f_3914:data_2dstructures_2escm",(void*)f_3914},
{"toplevel:data_2dstructures_2escm",(void*)C_data_2dstructures_toplevel},
{"f_3917:data_2dstructures_2escm",(void*)f_3917},
{"f_3152:data_2dstructures_2escm",(void*)f_3152},
{"f_3150:data_2dstructures_2escm",(void*)f_3150},
{"f_1985:data_2dstructures_2escm",(void*)f_1985},
{"f_4265:data_2dstructures_2escm",(void*)f_4265},
{"f_3122:data_2dstructures_2escm",(void*)f_3122},
{"f_3128:data_2dstructures_2escm",(void*)f_3128},
{"f_4253:data_2dstructures_2escm",(void*)f_4253},
{"f_2469:data_2dstructures_2escm",(void*)f_2469},
{"f_2461:data_2dstructures_2escm",(void*)f_2461},
{"f_3113:data_2dstructures_2escm",(void*)f_3113},
{"f_3117:data_2dstructures_2escm",(void*)f_3117},
{"f_2200:data_2dstructures_2escm",(void*)f_2200},
{"f_4303:data_2dstructures_2escm",(void*)f_4303},
{"f_2683:data_2dstructures_2escm",(void*)f_2683},
{"f_4423:data_2dstructures_2escm",(void*)f_4423},
{"f_2545:data_2dstructures_2escm",(void*)f_2545},
{"f_4431:data_2dstructures_2escm",(void*)f_4431},
{"f_1445:data_2dstructures_2escm",(void*)f_1445},
{"f_1440:data_2dstructures_2escm",(void*)f_1440},
{"f_2547:data_2dstructures_2escm",(void*)f_2547},
{"f_2560:data_2dstructures_2escm",(void*)f_2560},
{"f_2562:data_2dstructures_2escm",(void*)f_2562},
{"f_4051:data_2dstructures_2escm",(void*)f_4051},
{"f_4413:data_2dstructures_2escm",(void*)f_4413},
{"f_4292:data_2dstructures_2escm",(void*)f_4292},
{"f_4389:data_2dstructures_2escm",(void*)f_4389},
{"f_2552:data_2dstructures_2escm",(void*)f_2552},
{"f_4042:data_2dstructures_2escm",(void*)f_4042},
{"f_1437:data_2dstructures_2escm",(void*)f_1437},
{"f_4440:data_2dstructures_2escm",(void*)f_4440},
{"f_1433:data_2dstructures_2escm",(void*)f_1433},
{"f_4284:data_2dstructures_2escm",(void*)f_4284},
{"f_1431:data_2dstructures_2escm",(void*)f_1431},
{"f_1674:data_2dstructures_2escm",(void*)f_1674},
{"f_4036:data_2dstructures_2escm",(void*)f_4036},
{"f_4273:data_2dstructures_2escm",(void*)f_4273},
{"f_2318:data_2dstructures_2escm",(void*)f_2318},
{"f_1680:data_2dstructures_2escm",(void*)f_1680},
{"f_2509:data_2dstructures_2escm",(void*)f_2509},
{"f_2316:data_2dstructures_2escm",(void*)f_2316},
{"f_3369:data_2dstructures_2escm",(void*)f_3369},
{"f_3573:data_2dstructures_2escm",(void*)f_3573},
{"f_3588:data_2dstructures_2escm",(void*)f_3588},
{"f_2304:data_2dstructures_2escm",(void*)f_2304},
{"f_1697:data_2dstructures_2escm",(void*)f_1697},
{"f_1660:data_2dstructures_2escm",(void*)f_1660},
{"f_3560:data_2dstructures_2escm",(void*)f_3560},
{"f_2061:data_2dstructures_2escm",(void*)f_2061},
{"f_3391:data_2dstructures_2escm",(void*)f_3391},
{"f_3309:data_2dstructures_2escm",(void*)f_3309},
{"f_3792:data_2dstructures_2escm",(void*)f_3792},
{"f_2054:data_2dstructures_2escm",(void*)f_2054},
{"f_1641:data_2dstructures_2escm",(void*)f_1641},
{"f_2633:data_2dstructures_2escm",(void*)f_2633},
{"f_2639:data_2dstructures_2escm",(void*)f_2639},
{"f_1622:data_2dstructures_2escm",(void*)f_1622},
{"f_2651:data_2dstructures_2escm",(void*)f_2651},
{"f_4155:data_2dstructures_2escm",(void*)f_4155},
{"f_3160:data_2dstructures_2escm",(void*)f_3160},
{"f_3165:data_2dstructures_2escm",(void*)f_3165},
{"f_4082:data_2dstructures_2escm",(void*)f_4082},
{"f_4159:data_2dstructures_2escm",(void*)f_4159},
{"f_4530:data_2dstructures_2escm",(void*)f_4530},
{"f_1589:data_2dstructures_2escm",(void*)f_1589},
{"f_2642:data_2dstructures_2escm",(void*)f_2642},
{"f_4377:data_2dstructures_2escm",(void*)f_4377},
{"f_4144:data_2dstructures_2escm",(void*)f_4144},
{"f_1609:data_2dstructures_2escm",(void*)f_1609},
{"f_2648:data_2dstructures_2escm",(void*)f_2648},
{"f_4076:data_2dstructures_2escm",(void*)f_4076},
{"f_4078:data_2dstructures_2escm",(void*)f_4078},
{"f_4079:data_2dstructures_2escm",(void*)f_4079},
{"f_1602:data_2dstructures_2escm",(void*)f_1602},
{"f_4525:data_2dstructures_2escm",(void*)f_4525},
{"f_4135:data_2dstructures_2escm",(void*)f_4135},
{"f_3183:data_2dstructures_2escm",(void*)f_3183},
{"f_1652:data_2dstructures_2escm",(void*)f_1652},
{"f_4061:data_2dstructures_2escm",(void*)f_4061},
{"f_2413:data_2dstructures_2escm",(void*)f_2413},
{"f_3865:data_2dstructures_2escm",(void*)f_3865},
{"f_2667:data_2dstructures_2escm",(void*)f_2667},
{"f_1577:data_2dstructures_2escm",(void*)f_1577},
{"f_2402:data_2dstructures_2escm",(void*)f_2402},
{"f_2408:data_2dstructures_2escm",(void*)f_2408},
{"f_3873:data_2dstructures_2escm",(void*)f_3873},
{"f_3871:data_2dstructures_2escm",(void*)f_3871},
{"f_2138:data_2dstructures_2escm",(void*)f_2138},
{"f_2152:data_2dstructures_2escm",(void*)f_2152},
{"f_2150:data_2dstructures_2escm",(void*)f_2150},
{"f_2609:data_2dstructures_2escm",(void*)f_2609},
{"f_3276:data_2dstructures_2escm",(void*)f_3276},
{"f_3491:data_2dstructures_2escm",(void*)f_3491},
{"f_3526:data_2dstructures_2escm",(void*)f_3526},
{"f_2143:data_2dstructures_2escm",(void*)f_2143},
{"f_1617:data_2dstructures_2escm",(void*)f_1617},
{"f_1614:data_2dstructures_2escm",(void*)f_1614},
{"f_1612:data_2dstructures_2escm",(void*)f_1612},
{"f_3765:data_2dstructures_2escm",(void*)f_3765},
{"f_2622:data_2dstructures_2escm",(void*)f_2622},
{"f_3832:data_2dstructures_2escm",(void*)f_3832},
{"f_1542:data_2dstructures_2escm",(void*)f_1542},
{"f_1546:data_2dstructures_2escm",(void*)f_1546},
{"f_1540:data_2dstructures_2escm",(void*)f_1540},
{"f_3748:data_2dstructures_2escm",(void*)f_3748},
{"f_3746:data_2dstructures_2escm",(void*)f_3746},
{"f_3803:data_2dstructures_2escm",(void*)f_3803},
{"f_3807:data_2dstructures_2escm",(void*)f_3807},
{"f_1554:data_2dstructures_2escm",(void*)f_1554},
{"f_3801:data_2dstructures_2escm",(void*)f_3801},
{"f_4244:data_2dstructures_2escm",(void*)f_4244},
{"f_2097:data_2dstructures_2escm",(void*)f_2097},
{"f_2091:data_2dstructures_2escm",(void*)f_2091},
{"f_1488:data_2dstructures_2escm",(void*)f_1488},
{"f_3456:data_2dstructures_2escm",(void*)f_3456},
{"f_3682:data_2dstructures_2escm",(void*)f_3682},
{"f_4232:data_2dstructures_2escm",(void*)f_4232},
{"f_4238:data_2dstructures_2escm",(void*)f_4238},
{"f_3292:data_2dstructures_2escm",(void*)f_3292},
{"f_1534:data_2dstructures_2escm",(void*)f_1534},
{"f_4227:data_2dstructures_2escm",(void*)f_4227},
{"f_1531:data_2dstructures_2escm",(void*)f_1531},
{"f_3299:data_2dstructures_2escm",(void*)f_3299},
{"f_2744:data_2dstructures_2escm",(void*)f_2744},
{"f_1468:data_2dstructures_2escm",(void*)f_1468},
{"f_1460:data_2dstructures_2escm",(void*)f_1460},
{"f_3041:data_2dstructures_2escm",(void*)f_3041},
{"f_1502:data_2dstructures_2escm",(void*)f_1502},
{"f_3517:data_2dstructures_2escm",(void*)f_3517},
{"f_1476:data_2dstructures_2escm",(void*)f_1476},
{"f_1471:data_2dstructures_2escm",(void*)f_1471},
{"f_3050:data_2dstructures_2escm",(void*)f_3050},
{"f_1515:data_2dstructures_2escm",(void*)f_1515},
{"f_3055:data_2dstructures_2escm",(void*)f_3055},
{"f_1512:data_2dstructures_2escm",(void*)f_1512},
{"f_4180:data_2dstructures_2escm",(void*)f_4180},
{"f_2765:data_2dstructures_2escm",(void*)f_2765},
{"f_3025:data_2dstructures_2escm",(void*)f_3025},
{"f_1566:data_2dstructures_2escm",(void*)f_1566},
{"f_1560:data_2dstructures_2escm",(void*)f_1560},
{"f_4172:data_2dstructures_2escm",(void*)f_4172},
{"f_1882:data_2dstructures_2escm",(void*)f_1882},
{"f_2709:data_2dstructures_2escm",(void*)f_2709},
{"f_1895:data_2dstructures_2escm",(void*)f_1895},
{"f_1898:data_2dstructures_2escm",(void*)f_1898},
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
S|  for-each		3
S|  map		3
o|eliminated procedure checks: 117 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (cdar (pair pair *))
o|  1 (set-car! pair *)
o|  1 (cddr (pair * pair))
o|  4 (set-cdr! pair *)
o|  1 (<= fixnum fixnum)
o|  1 (vector-length vector)
o|  25 (cdr pair)
o|  2 (##sys#check-list (or pair list) *)
o|  6 (car pair)
o|  2 (length list)
o|Removed `not' forms: 12 
o|inlining procedure: k1450 
o|inlining procedure: k1450 
o|inlining procedure: k1479 
o|inlining procedure: k1479 
o|inlining procedure: k1505 
o|inlining procedure: k1505 
o|inlining procedure: k1549 
o|inlining procedure: k1549 
o|inlining procedure: k1567 
o|propagated global variable: r15684561 values 
o|inlining procedure: k1567 
o|inlining procedure: k1580 
o|propagated global variable: f_15794563 identity 
o|inlining procedure: k1580 
o|inlining procedure: k1596 
o|inlining procedure: k1596 
o|inlining procedure: k1625 
o|inlining procedure: k1625 
o|inlining procedure: k1636 
o|inlining procedure: k1636 
o|inlining procedure: k1655 
o|inlining procedure: k1655 
o|inlining procedure: k1687 
o|inlining procedure: k1687 
o|inlining procedure: k1730 
o|inlining procedure: k1730 
o|inlining procedure: k1740 
o|inlining procedure: k1740 
o|inlining procedure: k1761 
o|inlining procedure: k1761 
o|inlining procedure: k1795 
o|inlining procedure: k1795 
o|inlining procedure: k1820 
o|inlining procedure: k1820 
o|inlining procedure: k1864 
o|inlining procedure: k1864 
o|inlining procedure: k1885 
o|inlining procedure: k1885 
o|inlining procedure: k1938 
o|inlining procedure: k1938 
o|inlining procedure: k1956 
o|inlining procedure: k1956 
o|inlining procedure: k1988 
o|inlining procedure: k1988 
o|inlining procedure: k2002 
o|inlining procedure: k2002 
o|inlining procedure: k2064 
o|inlining procedure: k2064 
o|inlining procedure: k2116 
o|inlining procedure: k2116 
o|inlining procedure: k2153 
o|inlining procedure: k2153 
o|inlining procedure: k2167 
o|propagated global variable: r21684603 assv 
o|inlining procedure: k2167 
o|inlining procedure: k2188 
o|inlining procedure: k2188 
o|inlining procedure: k2236 
o|inlining procedure: k2236 
o|inlining procedure: k2258 
o|inlining procedure: k2258 
o|inlining procedure: k2319 
o|inlining procedure: k2319 
o|inlining procedure: k2328 
o|propagated global variable: r23294613 assv 
o|inlining procedure: k2328 
o|inlining procedure: k2349 
o|inlining procedure: k2349 
o|inlining procedure: k2416 
o|inlining procedure: k2416 
o|inlining procedure: k2452 
o|inlining procedure: k2472 
o|inlining procedure: k2472 
o|inlining procedure: k2452 
o|inlining procedure: k2512 
o|inlining procedure: k2512 
o|inlining procedure: k2526 
o|inlining procedure: k2526 
o|inlining procedure: k2565 
o|inlining procedure: k2565 
o|inlining procedure: k2612 
o|inlining procedure: k2612 
o|inlining procedure: k2699 
o|inlining procedure: k2699 
o|inlining procedure: k2725 
o|inlining procedure: k2725 
o|inlining procedure: k2926 
o|inlining procedure: k2926 
o|inlining procedure: k2942 
o|inlining procedure: k2942 
o|inlining procedure: k2967 
o|inlining procedure: k2967 
o|inlining procedure: k2986 
o|inlining procedure: k2986 
o|inlining procedure: k3044 
o|inlining procedure: k3066 
o|inlining procedure: k3066 
o|inlining procedure: k3044 
o|inlining procedure: k3131 
o|inlining procedure: k3131 
o|inlining procedure: k3168 
o|inlining procedure: k3168 
o|contracted procedure: k3187 
o|contracted procedure: k3202 
o|inlining procedure: k3199 
o|inlining procedure: k3226 
o|inlining procedure: k3226 
o|inlining procedure: k3199 
o|inlining procedure: k3256 
o|inlining procedure: k3256 
o|inlining procedure: k3281 
o|inlining procedure: k3281 
o|inlining procedure: k3312 
o|inlining procedure: k3324 
o|inlining procedure: k3324 
o|inlining procedure: k3312 
o|inlining procedure: k3342 
o|inlining procedure: k3342 
o|inlining procedure: k3417 
o|inlining procedure: k3417 
o|inlining procedure: k3472 
o|inlining procedure: k3472 
o|inlining procedure: k3494 
o|inlining procedure: k3494 
o|inlining procedure: k3507 
o|inlining procedure: k3507 
o|inlining procedure: k3520 
o|inlining procedure: k3520 
o|substituted constant variable: a3549 
o|inlining procedure: k3565 
o|inlining procedure: k3565 
o|inlining procedure: k3591 
o|inlining procedure: k3591 
o|inlining procedure: k3619 
o|inlining procedure: k3619 
o|inlining procedure: k3678 
o|inlining procedure: k3678 
o|inlining procedure: k3729 
o|inlining procedure: k3729 
o|inlining procedure: k3741 
o|inlining procedure: k3741 
o|inlining procedure: k3795 
o|inlining procedure: k3795 
o|inlining procedure: k3842 
o|inlining procedure: k3842 
o|inlining procedure: k3854 
o|inlining procedure: k3876 
o|inlining procedure: k3876 
o|inlining procedure: k3854 
o|inlining procedure: k3904 
o|inlining procedure: k3904 
o|inlining procedure: k3928 
o|inlining procedure: k3943 
o|inlining procedure: k3943 
o|inlining procedure: k3984 
o|inlining procedure: k3984 
o|inlining procedure: k4016 
o|inlining procedure: k4016 
o|inlining procedure: k4026 
o|inlining procedure: k4026 
o|inlining procedure: k4045 
o|inlining procedure: k4045 
o|inlining procedure: k4083 
o|inlining procedure: k4083 
o|inlining procedure: k3928 
o|inlining procedure: k4112 
o|inlining procedure: k4112 
o|inlining procedure: k4138 
o|inlining procedure: k4138 
o|inlining procedure: k4162 
o|inlining procedure: k4181 
o|inlining procedure: k4181 
o|inlining procedure: k4193 
o|inlining procedure: k4193 
o|inlining procedure: k4205 
o|inlining procedure: k4205 
o|inlining procedure: k4162 
o|inlining procedure: k4272 
o|inlining procedure: k4272 
o|inlining procedure: k4291 
o|inlining procedure: k4291 
o|inlining procedure: k4392 
o|inlining procedure: k4392 
o|inlining procedure: k4422 
o|inlining procedure: k4422 
o|inlining procedure: k4434 
o|inlining procedure: k4434 
o|inlining procedure: k4533 
o|inlining procedure: k4533 
o|replaced variables: 391 
o|removed binding forms: 134 
o|substituted constant variable: f_14784555 
o|substituted constant variable: f_16244567 
o|substituted constant variable: r16374570 
o|substituted constant variable: f_17394577 
o|substituted constant variable: r17964582 
o|substituted constant variable: f_18634585 
o|substituted constant variable: f_19374589 
o|substituted constant variable: f_19874593 
o|substituted constant variable: f_21874606 
o|substituted constant variable: f_23484616 
o|substituted constant variable: f_24154618 
o|substituted constant variable: f_26114629 
o|converted assignments to bindings: (add588) 
o|substituted constant variable: f_31304647 
o|converted assignments to bindings: (instring664) 
o|substituted constant variable: f_34164665 
o|substituted constant variable: f_34934669 
o|substituted constant variable: r35084671 
o|substituted constant variable: r38434690 
o|substituted constant variable: f_39274697 
o|substituted constant variable: f_39834700 
o|substituted constant variable: r40274706 
o|substituted constant variable: r40274706 
o|substituted constant variable: r41944720 
o|substituted constant variable: r42064722 
o|substituted constant variable: r41634724 
o|substituted constant variable: a44214743 
o|converted assignments to bindings: (traverse434) 
o|simplifications: ((let . 3)) 
o|replaced variables: 10 
o|removed binding forms: 384 
o|inlining procedure: k2654 
o|inlining procedure: k2670 
o|inlining procedure: k2778 
o|inlining procedure: k2863 
o|inlining procedure: k2947 
o|inlining procedure: k4439 
o|removed binding forms: 35 
o|substituted constant variable: r26554964 
o|substituted constant variable: r26714965 
o|removed binding forms: 4 
o|removed binding forms: 2 
o|simplifications: ((if . 35) (##core#call . 522)) 
o|  call simplifications:
o|    ##sys#setislot	4
o|    ##sys#check-structure	9
o|    ##sys#structure?
o|    ##sys#make-structure	3
o|    ##sys#check-vector
o|    cdar
o|    caar	3
o|    vector-length
o|    vector-set!
o|    >
o|    set-car!
o|    quotient
o|    set-cdr!	5
o|    vector?	3
o|    -	2
o|    vector-ref	2
o|    +	2
o|    =	4
o|    list->string	2
o|    cadr	2
o|    fx>=	7
o|    fxmin	2
o|    ##sys#check-string	21
o|    ##sys#size	24
o|    fx>	6
o|    string?	2
o|    symbol?
o|    char?	4
o|    number?
o|    string
o|    string-length	4
o|    string-ref
o|    string-set!
o|    fx+	31
o|    <
o|    ##sys#setslot	19
o|    pair?	22
o|    ##sys#check-exact	7
o|    fx<=	4
o|    length	3
o|    fx<	6
o|    fx=	7
o|    fx-	15
o|    list	3
o|    list?
o|    ##sys#check-pair	2
o|    cdr	12
o|    cons	35
o|    ##sys#check-list	12
o|    void
o|    not-pair?
o|    call-with-values
o|    not	3
o|    eq?	23
o|    apply	8
o|    car	34
o|    null?	57
o|    ##sys#slot	90
o|contracted procedure: k1448 
o|contracted procedure: k1456 
o|contracted procedure: k1465 
o|contracted procedure: k1481 
o|contracted procedure: k1484 
o|contracted procedure: k1496 
o|contracted procedure: k1507 
o|contracted procedure: k1510 
o|contracted procedure: k1551 
o|contracted procedure: k1570 
o|contracted procedure: k1582 
o|contracted procedure: k1592 
o|contracted procedure: k1594 
o|contracted procedure: k1599 
o|contracted procedure: k1627 
o|contracted procedure: k1633 
o|contracted procedure: k1646 
o|contracted procedure: k1649 
o|contracted procedure: k1657 
o|contracted procedure: k1702 
o|contracted procedure: k1668 
o|contracted procedure: k1683 
o|contracted procedure: k1685 
o|contracted procedure: k1690 
o|contracted procedure: k1728 
o|contracted procedure: k1749 
o|contracted procedure: k1763 
o|contracted procedure: k1772 
o|contracted procedure: k1775 
o|contracted procedure: k1784 
o|contracted procedure: k1793 
o|contracted procedure: k1798 
o|contracted procedure: k1805 
o|contracted procedure: k1822 
o|contracted procedure: k1825 
o|contracted procedure: k1827 
o|contracted procedure: k1832 
o|contracted procedure: k1851 
o|contracted procedure: k1855 
o|contracted procedure: k1866 
o|contracted procedure: k1872 
o|contracted procedure: k1887 
o|contracted procedure: k1900 
o|contracted procedure: k1915 
o|contracted procedure: k1906 
o|contracted procedure: k1909 
o|contracted procedure: k1912 
o|contracted procedure: k1917 
o|contracted procedure: k1929 
o|contracted procedure: k1940 
o|contracted procedure: k1946 
o|contracted procedure: k1952 
o|contracted procedure: k1954 
o|contracted procedure: k1959 
o|contracted procedure: k1971 
o|contracted procedure: k1979 
o|contracted procedure: k1990 
o|contracted procedure: k1996 
o|contracted procedure: k2005 
o|contracted procedure: k2014 
o|contracted procedure: k2021 
o|contracted procedure: k2027 
o|contracted procedure: k2030 
o|contracted procedure: k2036 
o|contracted procedure: k2039 
o|contracted procedure: k2051 
o|contracted procedure: k2055 
o|contracted procedure: k2066 
o|contracted procedure: k2088 
o|contracted procedure: k2085 
o|contracted procedure: k2069 
o|contracted procedure: k2078 
o|contracted procedure: k2107 
o|contracted procedure: k2110 
o|contracted procedure: k2118 
o|contracted procedure: k2121 
o|contracted procedure: k2130 
o|contracted procedure: k2140 
o|contracted procedure: k2216 
o|contracted procedure: k2146 
o|contracted procedure: k2156 
o|contracted procedure: k2162 
o|contracted procedure: k2164 
o|contracted procedure: k2170 
o|contracted procedure: k2176 
o|contracted procedure: k2190 
o|contracted procedure: k2193 
o|contracted procedure: k2205 
o|contracted procedure: k2207 
o|contracted procedure: k2214 
o|contracted procedure: k2297 
o|contracted procedure: k2226 
o|contracted procedure: k2238 
o|contracted procedure: k2245 
o|contracted procedure: k2247 
o|contracted procedure: k2252 
o|contracted procedure: k2268 
o|contracted procedure: k2271 
o|contracted procedure: k2286 
o|contracted procedure: k2289 
o|contracted procedure: k2277 
o|contracted procedure: k2283 
o|contracted procedure: k2292 
o|contracted procedure: k2395 
o|contracted procedure: k2307 
o|contracted procedure: k2389 
o|contracted procedure: k2309 
o|contracted procedure: k2383 
o|contracted procedure: k2311 
o|contracted procedure: k2377 
o|contracted procedure: k2313 
o|contracted procedure: k2325 
o|contracted procedure: k2331 
o|contracted procedure: k2337 
o|contracted procedure: k2351 
o|contracted procedure: k2354 
o|contracted procedure: k2366 
o|contracted procedure: k2368 
o|contracted procedure: k2375 
o|contracted procedure: k2405 
o|contracted procedure: k2418 
o|contracted procedure: k2421 
o|contracted procedure: k2423 
o|contracted procedure: k2435 
o|contracted procedure: k2438 
o|contracted procedure: k2440 
o|contracted procedure: k2454 
o|contracted procedure: k2458 
o|contracted procedure: k2495 
o|contracted procedure: k2492 
o|contracted procedure: k2466 
o|contracted procedure: k2474 
o|contracted procedure: k2489 
o|contracted procedure: k2477 
o|contracted procedure: k2483 
o|contracted procedure: k2486 
o|contracted procedure: k2500 
o|contracted procedure: k2514 
o|contracted procedure: k2520 
o|contracted procedure: k2529 
o|contracted procedure: k2538 
o|contracted procedure: k2567 
o|contracted procedure: k2570 
o|contracted procedure: k2579 
o|contracted procedure: k2589 
o|contracted procedure: k2595 
o|contracted procedure: k2597 
o|contracted procedure: k2599 
o|contracted procedure: k2601 
o|contracted procedure: k2603 
o|contracted procedure: k2614 
o|contracted procedure: k2627 
o|contracted procedure: k2630 
o|contracted procedure: k2660 
o|contracted procedure: k2654 
o|contracted procedure: k2676 
o|contracted procedure: k2670 
o|contracted procedure: k2686 
o|contracted procedure: k2688 
o|contracted procedure: k2690 
o|contracted procedure: k2692 
o|contracted procedure: k2694 
o|contracted procedure: k2705 
o|contracted procedure: k2697 
o|contracted procedure: k2702 
o|contracted procedure: k2712 
o|contracted procedure: k2714 
o|contracted procedure: k2716 
o|contracted procedure: k2718 
o|contracted procedure: k2720 
o|contracted procedure: k2731 
o|contracted procedure: k2723 
o|contracted procedure: k2728 
o|contracted procedure: k2738 
o|contracted procedure: k2740 
o|contracted procedure: k2745 
o|contracted procedure: k2747 
o|contracted procedure: k2762 
o|contracted procedure: k2753 
o|contracted procedure: k2759 
o|contracted procedure: k2756 
o|contracted procedure: k2813 
o|contracted procedure: k2768 
o|contracted procedure: k2807 
o|contracted procedure: k2770 
o|contracted procedure: k2801 
o|contracted procedure: k2772 
o|contracted procedure: k2795 
o|contracted procedure: k2774 
o|contracted procedure: k2789 
o|contracted procedure: k2776 
o|contracted procedure: k2783 
o|contracted procedure: k2778 
o|contracted procedure: k2823 
o|contracted procedure: k2825 
o|contracted procedure: k2830 
o|contracted procedure: k2832 
o|contracted procedure: k2847 
o|contracted procedure: k2838 
o|contracted procedure: k2844 
o|contracted procedure: k2841 
o|contracted procedure: k2898 
o|contracted procedure: k2853 
o|contracted procedure: k2892 
o|contracted procedure: k2855 
o|contracted procedure: k2886 
o|contracted procedure: k2857 
o|contracted procedure: k2880 
o|contracted procedure: k2859 
o|contracted procedure: k2874 
o|contracted procedure: k2861 
o|contracted procedure: k2868 
o|contracted procedure: k2863 
o|contracted procedure: k2908 
o|contracted procedure: k3018 
o|contracted procedure: k2910 
o|contracted procedure: k3010 
o|contracted procedure: k2912 
o|contracted procedure: k2914 
o|contracted procedure: k2916 
o|contracted procedure: k2918 
o|contracted procedure: k2924 
o|contracted procedure: k2926 
o|contracted procedure: k2944 
o|contracted procedure: k2952 
o|contracted procedure: k2954 
o|contracted procedure: k2969 
o|contracted procedure: k2976 
o|contracted procedure: k2981 
o|contracted procedure: k2984 
o|contracted procedure: k2989 
o|contracted procedure: k2991 
o|contracted procedure: k3007 
o|contracted procedure: k3106 
o|contracted procedure: k3028 
o|contracted procedure: k3031 
o|contracted procedure: k3033 
o|contracted procedure: k3035 
o|contracted procedure: k3058 
o|contracted procedure: k3060 
o|contracted procedure: k3062 
o|contracted procedure: k3064 
o|contracted procedure: k3073 
o|contracted procedure: k3076 
o|contracted procedure: k3081 
o|contracted procedure: k3084 
o|contracted procedure: k3086 
o|contracted procedure: k3092 
o|contracted procedure: k3098 
o|contracted procedure: k3101 
o|contracted procedure: k3095 
o|contracted procedure: k3120 
o|contracted procedure: k3133 
o|contracted procedure: k3139 
o|contracted procedure: k3146 
o|contracted procedure: k3245 
o|contracted procedure: k3153 
o|contracted procedure: k3155 
o|contracted procedure: k3157 
o|contracted procedure: k3170 
o|contracted procedure: k3176 
o|contracted procedure: k3214 
o|contracted procedure: k3221 
o|contracted procedure: k3224 
o|contracted procedure: k3229 
o|contracted procedure: k3240 
o|contracted procedure: k3243 
o|contracted procedure: k3209 
o|contracted procedure: k3194 
o|contracted procedure: k3197 
o|contracted procedure: k3251 
o|contracted procedure: k3254 
o|contracted procedure: k3259 
o|contracted procedure: k3265 
o|contracted procedure: k3271 
o|contracted procedure: k3273 
o|contracted procedure: k3284 
o|contracted procedure: k3293 
o|contracted procedure: k3302 
o|contracted procedure: k3304 
o|contracted procedure: k3306 
o|contracted procedure: k3314 
o|contracted procedure: k3326 
o|contracted procedure: k3324 
o|contracted procedure: k3344 
o|contracted procedure: k3351 
o|contracted procedure: k3354 
o|contracted procedure: k3356 
o|contracted procedure: k3358 
o|contracted procedure: k3360 
o|contracted procedure: k3366 
o|contracted procedure: k3380 
o|contracted procedure: k3374 
o|contracted procedure: k3377 
o|contracted procedure: k3382 
o|contracted procedure: k3386 
o|contracted procedure: k3404 
o|contracted procedure: k3406 
o|contracted procedure: k3408 
o|contracted procedure: k3419 
o|contracted procedure: k3425 
o|contracted procedure: k3435 
o|contracted procedure: k3447 
o|contracted procedure: k3450 
o|contracted procedure: k3453 
o|contracted procedure: k3484 
o|contracted procedure: k3459 
o|contracted procedure: k3462 
o|contracted procedure: k3464 
o|contracted procedure: k3466 
o|contracted procedure: k3468 
o|contracted procedure: k3470 
o|contracted procedure: k3481 
o|contracted procedure: k3475 
o|contracted procedure: k3496 
o|contracted procedure: k3502 
o|contracted procedure: k3505 
o|contracted procedure: k3510 
o|contracted procedure: k3522 
o|contracted procedure: k3534 
o|contracted procedure: k3540 
o|contracted procedure: k3546 
o|contracted procedure: k3543 
o|contracted procedure: k3555 
o|contracted procedure: k3563 
o|contracted procedure: k3585 
o|contracted procedure: k3593 
o|contracted procedure: k3599 
o|contracted procedure: k3606 
o|contracted procedure: k3611 
o|contracted procedure: k3627 
o|contracted procedure: k3634 
o|contracted procedure: k3643 
o|contracted procedure: k3650 
o|contracted procedure: k3657 
o|contracted procedure: k3666 
o|contracted procedure: k3683 
o|contracted procedure: k3688 
o|contracted procedure: k3703 
o|contracted procedure: k3708 
o|contracted procedure: k3724 
o|contracted procedure: k3727 
o|contracted procedure: k3732 
o|contracted procedure: k3738 
o|contracted procedure: k3749 
o|inlining procedure: k3747 
o|contracted procedure: k3766 
o|inlining procedure: k3764 
o|contracted procedure: k3782 
o|contracted procedure: k3785 
o|contracted procedure: k3797 
o|contracted procedure: k3804 
o|contracted procedure: k3814 
o|contracted procedure: k3817 
o|contracted procedure: k3819 
o|contracted procedure: k3826 
o|contracted procedure: k3833 
o|contracted procedure: k3845 
o|contracted procedure: k3849 
o|contracted procedure: k3852 
o|contracted procedure: k3857 
o|contracted procedure: k3860 
o|contracted procedure: k3878 
o|contracted procedure: k3892 
o|contracted procedure: k3881 
o|contracted procedure: k3889 
o|contracted procedure: k3898 
o|contracted procedure: k3906 
o|contracted procedure: k3930 
o|contracted procedure: k3945 
o|contracted procedure: k3953 
o|contracted procedure: k3949 
o|contracted procedure: k3972 
o|contracted procedure: k3986 
o|contracted procedure: k4004 
o|contracted procedure: k4019 
o|contracted procedure: k4032 
o|contracted procedure: k4038 
o|contracted procedure: k4047 
o|contracted procedure: k4056 
o|contracted procedure: k4059 
o|contracted procedure: k4066 
o|contracted procedure: k4070 
o|contracted procedure: k4072 
o|contracted procedure: k4086 
o|contracted procedure: k4100 
o|contracted procedure: k4103 
o|contracted procedure: k4114 
o|contracted procedure: k4123 
o|contracted procedure: k4126 
o|contracted procedure: k4129 
o|contracted procedure: k4140 
o|contracted procedure: k4149 
o|contracted procedure: k4152 
o|contracted procedure: k4160 
o|contracted procedure: k4165 
o|contracted procedure: k4219 
o|contracted procedure: k4175 
o|contracted procedure: k4177 
o|contracted procedure: k4184 
o|contracted procedure: k4190 
o|contracted procedure: k4196 
o|contracted procedure: k4208 
o|contracted procedure: k4221 
o|contracted procedure: k4247 
o|contracted procedure: k4256 
o|contracted procedure: k4262 
o|contracted procedure: k4268 
o|contracted procedure: k4270 
o|contracted procedure: k4277 
o|contracted procedure: k4287 
o|contracted procedure: k4289 
o|contracted procedure: k4296 
o|contracted procedure: k4306 
o|contracted procedure: k4308 
o|contracted procedure: k4312 
o|contracted procedure: k4320 
o|contracted procedure: k4317 
o|contracted procedure: k4314 
o|contracted procedure: k4335 
o|contracted procedure: k4322 
o|contracted procedure: k4332 
o|contracted procedure: k4341 
o|contracted procedure: k4343 
o|contracted procedure: k4347 
o|contracted procedure: k4349 
o|contracted procedure: k4364 
o|contracted procedure: k4351 
o|contracted procedure: k4362 
o|contracted procedure: k4359 
o|contracted procedure: k4353 
o|contracted procedure: k4370 
o|contracted procedure: k4380 
o|contracted procedure: k4386 
o|contracted procedure: k4394 
o|contracted procedure: k4404 
o|contracted procedure: k4410 
o|contracted procedure: k4407 
o|contracted procedure: k4416 
o|contracted procedure: k4424 
o|contracted procedure: k4461 
o|contracted procedure: k4436 
o|contracted procedure: k4445 
o|contracted procedure: k4447 
o|contracted procedure: k44455017 
o|contracted procedure: k4467 
o|contracted procedure: k4494 
o|contracted procedure: k4469 
o|contracted procedure: k4471 
o|contracted procedure: k4491 
o|contracted procedure: k4484 
o|contracted procedure: k4473 
o|contracted procedure: k4482 
o|contracted procedure: k4479 
o|contracted procedure: k4500 
o|contracted procedure: k4502 
o|contracted procedure: k4508 
o|contracted procedure: k4510 
o|contracted procedure: k4519 
o|contracted procedure: k4516 
o|contracted procedure: k4522 
o|contracted procedure: k4545 
o|contracted procedure: k4535 
o|contracted procedure: k4542 
o|contracted procedure: k4551 
o|simplifications: ((let . 91)) 
o|removed binding forms: 463 
o|inlining procedure: k2071 
o|inlining procedure: k2071 
o|inlining procedure: k2123 
o|inlining procedure: k2123 
o|inlining procedure: k2572 
o|inlining procedure: k2572 
o|inlining procedure: k3824 
o|inlining procedure: k3824 
o|replaced variables: 16 
o|simplifications: ((if . 3)) 
o|removed binding forms: 22 
o|direct leaf routine/allocation: loop154 0 
o|direct leaf routine/allocation: loop393 0 
o|direct leaf routine/allocation: loop2644 0 
o|direct leaf routine/allocation: loop668 0 
o|direct leaf routine/allocation: doloop10261027 0 
o|converted assignments to bindings: (loop154) 
o|converted assignments to bindings: (loop393) 
o|converted assignments to bindings: (loop2644) 
o|converted assignments to bindings: (loop668) 
o|converted assignments to bindings: (doloop10261027) 
o|simplifications: ((let . 5)) 
o|customizable procedures: (k4449 doloop10021003 loop995 k4310 k4158 loop941 for-each-loop851906 for-each-loop913925 insert859 for-each-loop881896 lookup860 visit861 loop871 loop864 doloop833834 step812 loop800 loop787 loop772 doloop765766 loop730 loop714 k3368 collect709 instring664 loop691 loop1637 scan609 loop594 add588 k2827 k2742 traverse434 loop442 map-loop410427 rev-string-append387 k2407 loop378 loop366 k2315 loop334 loop311 k2149 map-loop256274 map-loop237283 loop223 k1927 loop210 doloop197198 loop191 loop178 loop170 loop164 loop132 loop119 loop108 loop78 loop66) 
o|calls to known targets: 149 
o|unused rest argument: _90 f_1512 
o|unused rest argument: _91 f_1515 
o|unused rest argument: _130 f_1660 
o|unused rest argument: _143 f_1713 
o|unused rest argument: _145 f_1717 
o|identified direct recursive calls: f_1737 1 
o|identified direct recursive calls: f_1758 1 
o|identified direct recursive calls: f_1790 1 
o|identified direct recursive calls: f_1817 2 
o|identified direct recursive calls: f_1882 1 
o|identified direct recursive calls: f_1935 1 
o|identified direct recursive calls: f_1985 2 
o|identified direct recursive calls: f_2061 2 
o|identified direct recursive calls: f_2469 1 
o|identified direct recursive calls: f_2449 1 
o|identified direct recursive calls: f_2964 1 
o|identified direct recursive calls: f_3055 1 
o|identified direct recursive calls: f_3041 1 
o|identified direct recursive calls: f_3128 1 
o|identified direct recursive calls: f_3339 1 
o|identified direct recursive calls: f_3873 1 
o|identified direct recursive calls: f_4389 1 
o|identified direct recursive calls: f_4530 1 
o|fast box initializations: 46 
o|dropping unused closure argument: f_2592 
o|dropping unused closure argument: f_3117 
o|dropping unused closure argument: f_4530 
*/
/* end of file */
