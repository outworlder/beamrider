/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-09-24 17:49
   Version 4.8.0 (rev 0db1908)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: srfi-4.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-4.c
   unit: srfi_2d4
*/

#include "chicken.h"

#define C_copy_subvector(to, from, start_to, start_from, bytes)   \
  (C_memcpy((C_char *)C_data_pointer(to) + C_unfix(start_to), (C_char *)C_data_pointer(from) + C_unfix(start_from), C_unfix(bytes)), \
    C_SCHEME_UNDEFINED)

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[168];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,99,104,101,99,107,45,101,120,97,99,116,45,105,110,116,101,114,118,97,108,32,110,54,50,32,102,114,111,109,54,51,32,116,111,54,52,32,108,111,99,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,21),40,117,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,55,49,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,21),40,115,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,55,52,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,22),40,117,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,55,55,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,22),40,115,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,48,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,22),40,117,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,51,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,22),40,115,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,54,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,22),40,102,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,57,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,22),40,102,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,57,50,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,34),40,102,95,49,53,51,51,32,105,49,48,49,32,102,114,111,109,49,48,50,32,116,111,49,48,51,32,108,111,99,49,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,27),40,117,56,118,101,99,116,111,114,45,115,101,116,33,32,120,57,53,32,105,57,54,32,121,57,55,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,34),40,102,95,49,53,55,48,32,105,49,49,57,32,102,114,111,109,49,50,48,32,116,111,49,50,49,32,108,111,99,49,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,30),40,115,56,118,101,99,116,111,114,45,115,101,116,33,32,120,49,49,51,32,105,49,49,52,32,121,49,49,53,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,34),40,102,95,49,54,48,51,32,105,49,51,54,32,102,114,111,109,49,51,55,32,116,111,49,51,56,32,108,111,99,49,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,31),40,117,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,49,51,48,32,105,49,51,49,32,121,49,51,50,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,34),40,102,95,49,54,52,48,32,105,49,53,52,32,102,114,111,109,49,53,53,32,116,111,49,53,54,32,108,111,99,49,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,31),40,115,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,49,52,56,32,105,49,52,57,32,121,49,53,48,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,34),40,102,95,49,54,55,51,32,105,49,55,52,32,102,114,111,109,49,55,53,32,116,111,49,55,54,32,108,111,99,49,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,31),40,117,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,49,54,53,32,105,49,54,54,32,121,49,54,55,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,34),40,102,95,49,55,50,52,32,105,49,57,50,32,102,114,111,109,49,57,51,32,116,111,49,57,52,32,108,111,99,49,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,31),40,115,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,49,56,54,32,105,49,56,55,32,121,49,56,56,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,34),40,102,95,49,55,54,49,32,105,50,49,48,32,102,114,111,109,50,49,49,32,116,111,50,49,50,32,108,111,99,50,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,31),40,102,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,50,48,52,32,105,50,48,53,32,121,50,48,54,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,34),40,102,95,49,55,57,53,32,105,50,50,55,32,102,114,111,109,50,50,56,32,116,111,50,50,57,32,108,111,99,50,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,31),40,102,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,50,50,49,32,105,50,50,50,32,121,50,50,51,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,16),40,102,95,49,56,53,51,32,97,51,53,56,51,54,49,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,16),40,102,95,49,56,53,56,32,97,51,54,51,51,54,54,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,30),40,102,95,49,56,54,48,32,108,111,99,51,54,56,32,108,101,110,51,54,57,32,101,120,116,63,51,55,48,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,28),40,114,101,108,101,97,115,101,45,110,117,109,98,101,114,45,118,101,99,116,111,114,32,118,51,55,55,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,48,48,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,34),40,109,97,107,101,45,117,56,118,101,99,116,111,114,32,108,101,110,51,56,52,32,46,32,116,109,112,51,56,51,51,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,50,57,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,34),40,109,97,107,101,45,115,56,118,101,99,116,111,114,32,108,101,110,52,49,51,32,46,32,116,109,112,52,49,50,52,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,53,56,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,117,49,54,118,101,99,116,111,114,32,108,101,110,52,52,50,32,46,32,116,109,112,52,52,49,52,52,51,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,56,55,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,115,49,54,118,101,99,116,111,114,32,108,101,110,52,55,49,32,46,32,116,109,112,52,55,48,52,55,50,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,49,54,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,117,51,50,118,101,99,116,111,114,32,108,101,110,53,48,48,32,46,32,116,109,112,52,57,57,53,48,49,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,52,53,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,115,51,50,118,101,99,116,111,114,32,108,101,110,53,50,57,32,46,32,116,109,112,53,50,56,53,51,48,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,55,52,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,102,51,50,118,101,99,116,111,114,32,108,101,110,53,53,56,32,46,32,116,109,112,53,53,55,53,53,57,41,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,48,52,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,102,54,52,118,101,99,116,111,114,32,108,101,110,53,56,56,32,46,32,116,109,112,53,56,55,53,56,57,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,51,56,32,112,54,52,48,32,105,54,52,49,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,23),40,108,105,115,116,45,62,117,56,118,101,99,116,111,114,32,108,115,116,54,51,53,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,53,49,32,112,54,53,51,32,105,54,53,52,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,23),40,108,105,115,116,45,62,115,56,118,101,99,116,111,114,32,108,115,116,54,52,56,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,54,52,32,112,54,54,54,32,105,54,54,55,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,117,49,54,118,101,99,116,111,114,32,108,115,116,54,54,49,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,55,55,32,112,54,55,57,32,105,54,56,48,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,115,49,54,118,101,99,116,111,114,32,108,115,116,54,55,52,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,57,48,32,112,54,57,50,32,105,54,57,51,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,117,51,50,118,101,99,116,111,114,32,108,115,116,54,56,55,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,48,51,32,112,55,48,53,32,105,55,48,54,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,115,51,50,118,101,99,116,111,114,32,108,115,116,55,48,48,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,49,54,32,112,55,49,56,32,105,55,49,57,41,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,102,51,50,118,101,99,116,111,114,32,108,115,116,55,49,51,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,50,57,32,112,55,51,49,32,105,55,51,50,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,102,54,52,118,101,99,116,111,114,32,108,115,116,55,50,54,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,18),40,117,56,118,101,99,116,111,114,32,46,32,120,115,55,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,18),40,115,56,118,101,99,116,111,114,32,46,32,120,115,55,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,19),40,117,49,54,118,101,99,116,111,114,32,46,32,120,115,55,52,50,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,19),40,115,49,54,118,101,99,116,111,114,32,46,32,120,115,55,52,52,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,19),40,117,51,50,118,101,99,116,111,114,32,46,32,120,115,55,52,54,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,19),40,115,51,50,118,101,99,116,111,114,32,46,32,120,115,55,52,56,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,19),40,102,51,50,118,101,99,116,111,114,32,46,32,120,115,55,53,48,41,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,19),40,102,54,52,118,101,99,116,111,114,32,46,32,120,115,55,53,50,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,55,51,41,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,21),40,117,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,55,48,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,56,48,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,21),40,115,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,55,55,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,56,55,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,22),40,117,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,56,52,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,57,52,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,22),40,115,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,57,49,41,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,48,49,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,22),40,117,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,57,56,41,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,48,56,41,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,22),40,115,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,56,48,53,41,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,49,53,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,22),40,102,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,56,49,50,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,50,50,41,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,22),40,102,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,56,49,57,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,16),40,117,56,118,101,99,116,111,114,63,32,120,56,50,54,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,16),40,115,56,118,101,99,116,111,114,63,32,120,56,50,56,41};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,17),40,117,49,54,118,101,99,116,111,114,63,32,120,56,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,17),40,115,49,54,118,101,99,116,111,114,63,32,120,56,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,17),40,117,51,50,118,101,99,116,111,114,63,32,120,56,51,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,17),40,115,51,50,118,101,99,116,111,114,63,32,120,56,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,17),40,102,51,50,118,101,99,116,111,114,63,32,120,56,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,17),40,102,54,52,118,101,99,116,111,114,63,32,120,56,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,13),40,102,95,51,50,49,53,32,118,56,52,57,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,25),40,112,97,99,107,45,99,111,112,121,32,116,97,103,56,52,55,32,108,111,99,56,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,15),40,102,95,51,50,51,48,32,115,116,114,56,53,55,41,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,28),40,117,110,112,97,99,107,32,116,97,103,56,53,52,32,115,122,56,53,53,32,108,111,99,56,53,54,41,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,15),40,102,95,51,50,53,56,32,115,116,114,56,54,55,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,33),40,117,110,112,97,99,107,45,99,111,112,121,32,116,97,103,56,54,52,32,115,122,56,54,53,32,108,111,99,56,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,16),40,102,52,55,57,51,32,118,56,52,52,52,55,57,50,41};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,16),40,102,52,55,56,54,32,118,56,52,52,52,55,56,53,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,16),40,102,52,55,55,57,32,118,56,52,52,52,55,55,56,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,16),40,102,52,55,55,50,32,118,56,52,52,52,55,55,49,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,16),40,102,52,55,54,53,32,118,56,52,52,52,55,54,52,41};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,16),40,102,52,55,53,56,32,118,56,52,52,52,55,53,55,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,16),40,102,52,55,53,49,32,118,56,52,52,52,55,53,48,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,16),40,102,52,55,52,52,32,118,56,52,52,52,55,52,51,41};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,13),40,102,95,51,52,52,48,32,99,57,50,52,41,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,57,48,57,32,112,111,114,116,57,49,48,41,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,117,115,101,114,45,112,114,105,110,116,45,104,111,111,107,32,120,57,50,56,32,114,101,97,100,97,98,108,101,57,50,57,32,112,111,114,116,57,51,48,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,34),40,102,95,51,53,51,50,32,105,57,53,52,32,102,114,111,109,57,53,53,32,116,111,57,53,54,32,108,111,99,57,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,34),40,102,95,51,53,53,53,32,105,57,54,51,32,102,114,111,109,57,54,52,32,116,111,57,54,53,32,108,111,99,57,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,49),40,115,117,98,110,118,101,99,116,111,114,32,118,57,52,51,32,116,57,52,52,32,101,115,57,52,53,32,102,114,111,109,57,52,54,32,116,111,57,52,55,32,108,111,99,57,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,32),40,115,117,98,117,56,118,101,99,116,111,114,32,118,57,55,57,32,102,114,111,109,57,56,48,32,116,111,57,56,49,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,33),40,115,117,98,117,49,54,118,101,99,116,111,114,32,118,57,56,51,32,102,114,111,109,57,56,52,32,116,111,57,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,33),40,115,117,98,117,51,50,118,101,99,116,111,114,32,118,57,56,55,32,102,114,111,109,57,56,56,32,116,111,57,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,32),40,115,117,98,115,56,118,101,99,116,111,114,32,118,57,57,49,32,102,114,111,109,57,57,50,32,116,111,57,57,51,41};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,33),40,115,117,98,115,49,54,118,101,99,116,111,114,32,118,57,57,53,32,102,114,111,109,57,57,54,32,116,111,57,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,35),40,115,117,98,115,51,50,118,101,99,116,111,114,32,118,57,57,57,32,102,114,111,109,49,48,48,48,32,116,111,49,48,48,49,41,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,36),40,115,117,98,102,51,50,118,101,99,116,111,114,32,118,49,48,48,51,32,102,114,111,109,49,48,48,52,32,116,111,49,48,48,53,41,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,36),40,115,117,98,102,54,52,118,101,99,116,111,114,32,118,49,48,48,55,32,102,114,111,109,49,48,48,56,32,116,111,49,48,48,57,41,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,48,51,48,32,105,49,48,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,36),40,119,114,105,116,101,45,117,56,118,101,99,116,111,114,32,118,49,48,49,54,32,46,32,116,109,112,49,48,49,53,49,48,49,55,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,45),40,114,101,97,100,45,117,56,118,101,99,116,111,114,33,32,110,49,48,52,51,32,100,101,115,116,49,48,52,52,32,46,32,116,109,112,49,48,52,50,49,48,52,53,41,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,20),40,119,114,97,112,32,115,116,114,49,48,54,52,32,110,49,48,54,53,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,29),40,114,101,97,100,45,117,56,118,101,99,116,111,114,32,46,32,116,109,112,49,48,55,51,49,48,55,52,41,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,34),40,102,95,51,57,48,49,32,105,51,52,56,32,102,114,111,109,51,52,57,32,116,111,51,53,48,32,108,111,99,51,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,18),40,102,95,51,56,57,55,32,120,51,52,51,32,105,51,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,34),40,102,95,51,57,50,57,32,105,51,51,51,32,102,114,111,109,51,51,52,32,116,111,51,51,53,32,108,111,99,51,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,18),40,102,95,51,57,50,53,32,120,51,50,56,32,105,51,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,34),40,102,95,51,57,53,55,32,105,51,49,56,32,102,114,111,109,51,49,57,32,116,111,51,50,48,32,108,111,99,51,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,18),40,102,95,51,57,53,51,32,120,51,49,51,32,105,51,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,34),40,102,95,51,57,56,53,32,105,51,48,51,32,102,114,111,109,51,48,52,32,116,111,51,48,53,32,108,111,99,51,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,18),40,102,95,51,57,56,49,32,120,50,57,56,32,105,50,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,34),40,102,95,52,48,49,51,32,105,50,56,56,32,102,114,111,109,50,56,57,32,116,111,50,57,48,32,108,111,99,50,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,18),40,102,95,52,48,48,57,32,120,50,56,51,32,105,50,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,34),40,102,95,52,48,52,49,32,105,50,55,51,32,102,114,111,109,50,55,52,32,116,111,50,55,53,32,108,111,99,50,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,18),40,102,95,52,48,51,55,32,120,50,54,56,32,105,50,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,34),40,102,95,52,48,54,57,32,105,50,53,56,32,102,114,111,109,50,53,57,32,116,111,50,54,48,32,108,111,99,50,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,18),40,102,95,52,48,54,53,32,120,50,53,51,32,105,50,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,34),40,102,95,52,48,57,55,32,105,50,52,51,32,102,114,111,109,50,52,52,32,116,111,50,52,53,32,108,111,99,50,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,18),40,102,95,52,48,57,51,32,120,50,51,56,32,105,50,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub364(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub364(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub359(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub359(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int bytes=(int )C_unfix(C_a0);
C_word *buf = (C_word *)C_malloc(bytes + sizeof(C_header));if(buf == NULL) C_return(C_SCHEME_FALSE);C_block_header(buf) = C_make_header(C_BYTEVECTOR_TYPE, bytes);C_return(buf);
C_ret:
#undef return

return C_r;}

C_noret_decl(f_1721)
static void C_ccall f_1721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1724)
static void C_ccall f_1724(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3273)
static void C_fcall f_3273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1754)
static void C_ccall f_1754(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3243)
static void C_fcall f_3243(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3348)
static void C_ccall f_3348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3026)
static void C_fcall f_3026(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3108)
static void C_fcall f_3108(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f4772)
static void C_ccall f4772(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1836)
static void C_ccall f_1836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f4765)
static void C_ccall f4765(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4779)
static void C_ccall f4779(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f4793)
static void C_ccall f4793(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3081)
static void C_fcall f_3081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2556)
static C_word C_fcall f_2556(C_word t0,C_word t1);
C_noret_decl(f_2551)
static void C_fcall f_2551(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4786)
static void C_ccall f4786(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_fcall f_1882(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2862)
static void C_fcall f_2862(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static C_word C_fcall f_2018(C_word t0,C_word t1);
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2005)
static void C_ccall f_2005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static C_word C_fcall f_2284(C_word t0,C_word t1);
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2035)
static void C_ccall f_2035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2828)
static void C_fcall f_2828(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3523)
static void C_fcall f_3523(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3054)
static void C_fcall f_3054(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2766)
static void C_ccall f_2766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1930)
static C_word C_fcall f_1930(C_word t0,C_word t1);
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2464)
static C_word C_fcall f_2464(C_word t0,C_word t1);
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2195)
static C_word C_fcall f_2195(C_word t0,C_word t1);
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2794)
static void C_fcall f_2794(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2726)
static void C_fcall f_2726(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2459)
static void C_fcall f_2459(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_fcall f_2970(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2760)
static void C_fcall f_2760(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2998)
static void C_fcall f_2998(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2942)
static void C_fcall f_2942(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2956)
static void C_ccall f_2956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3212)
static void C_fcall f_3212(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4744)
static void C_ccall f4744(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3799)
static void C_fcall f_3799(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4751)
static void C_ccall f4751(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f4758)
static void C_ccall f4758(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1461)
static void C_fcall f_1461(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externexport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3227)
static void C_fcall f_3227(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3230)
static void C_ccall f_3230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static C_word C_fcall f_2373(C_word t0,C_word t1);
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3396)
static void C_ccall f_3396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3255)
static void C_fcall f_3255(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4013)
static void C_ccall f_4013(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2624)
static void C_fcall f_2624(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3668)
static void C_fcall f_3668(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2106)
static C_word C_fcall f_2106(C_word t0,C_word t1);
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3847)
static void C_fcall f_3847(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3828)
static void C_ccall f_3828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2692)
static void C_fcall f_2692(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1533)
static void C_ccall f_1533(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2658)
static void C_fcall f_2658(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_ccall f_3364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3135)
static void C_fcall f_3135(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3384)
static void C_ccall f_3384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4069)
static void C_ccall f_4069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_3273)
static void C_fcall trf_3273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3273(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3273(t0,t1);}

C_noret_decl(trf_3243)
static void C_fcall trf_3243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3243(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3243(t0,t1);}

C_noret_decl(trf_3026)
static void C_fcall trf_3026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3026(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3026(t0,t1,t2);}

C_noret_decl(trf_3108)
static void C_fcall trf_3108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3108(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3108(t0,t1,t2);}

C_noret_decl(trf_3081)
static void C_fcall trf_3081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3081(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3081(t0,t1,t2);}

C_noret_decl(trf_2551)
static void C_fcall trf_2551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2551(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2551(t0,t1);}

C_noret_decl(trf_1882)
static void C_fcall trf_1882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1882(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1882(t0,t1);}

C_noret_decl(trf_2862)
static void C_fcall trf_2862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2862(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2862(t0,t1,t2,t3);}

C_noret_decl(trf_2828)
static void C_fcall trf_2828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2828(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2828(t0,t1,t2,t3);}

C_noret_decl(trf_3523)
static void C_fcall trf_3523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3523(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3523(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3054)
static void C_fcall trf_3054(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3054(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3054(t0,t1,t2);}

C_noret_decl(trf_2794)
static void C_fcall trf_2794(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2794(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2794(t0,t1,t2,t3);}

C_noret_decl(trf_2726)
static void C_fcall trf_2726(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2726(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2726(t0,t1,t2,t3);}

C_noret_decl(trf_2459)
static void C_fcall trf_2459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2459(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2459(t0,t1);}

C_noret_decl(trf_2970)
static void C_fcall trf_2970(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2970(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2970(t0,t1,t2);}

C_noret_decl(trf_2760)
static void C_fcall trf_2760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2760(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2760(t0,t1,t2,t3);}

C_noret_decl(trf_2998)
static void C_fcall trf_2998(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2998(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2998(t0,t1,t2);}

C_noret_decl(trf_2942)
static void C_fcall trf_2942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2942(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2942(t0,t1,t2);}

C_noret_decl(trf_3212)
static void C_fcall trf_3212(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3212(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3212(t0,t1,t2);}

C_noret_decl(trf_3799)
static void C_fcall trf_3799(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3799(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3799(t0,t1,t2);}

C_noret_decl(trf_1461)
static void C_fcall trf_1461(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1461(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1461(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3227)
static void C_fcall trf_3227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3227(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3227(t0,t1,t2,t3);}

C_noret_decl(trf_3255)
static void C_fcall trf_3255(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3255(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3255(t0,t1,t2,t3);}

C_noret_decl(trf_2624)
static void C_fcall trf_2624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2624(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2624(t0,t1,t2,t3);}

C_noret_decl(trf_3668)
static void C_fcall trf_3668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3668(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3668(t0,t1,t2);}

C_noret_decl(trf_3847)
static void C_fcall trf_3847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3847(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3847(t0,t1);}

C_noret_decl(trf_2692)
static void C_fcall trf_2692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2692(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2692(t0,t1,t2,t3);}

C_noret_decl(trf_2658)
static void C_fcall trf_2658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2658(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2658(t0,t1,t2,t3);}

C_noret_decl(trf_3135)
static void C_fcall trf_3135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3135(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3135(t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

/* k1720 in s32vector-set! */
static void C_ccall f_1721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1721,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1723,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fits_in_int_p(((C_word*)t0)[5]))){
t3=t2;
f_1723(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-4.scm:146: ##sys#error */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[30],lf[31],((C_word*)t0)[5]);}}

/* k1722 in k1720 in s32vector-set! */
static void C_ccall f_1723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1724,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:147: g190 */
t4=t2;
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[6],lf[30]);}

/* f_1724 in k1722 in k1720 in s32vector-set! */
static void C_ccall f_1724(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1724,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k3271 in k3264 */
static void C_fcall f_3273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3273,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_copy_block(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record2(&a,2,((C_word*)t0)[5],t2));}
else{
/* srfi-4.scm:532: ##sys#error */
t2=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],((C_word*)t0)[6],lf[86],((C_word*)t0)[5],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in ... */
static void C_ccall f_3376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3376,2,t0,t1);}
t2=C_mutate((C_word*)lf[109]+1 /* (set! blob->f32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3380,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:559: unpack */
f_3227(t3,lf[18],C_fix(8),lf[110]);}

/* k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 in ... */
static void C_ccall f_3372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3372,2,t0,t1);}
t2=C_mutate((C_word*)lf[108]+1 /* (set! blob->s32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:558: unpack */
f_3227(t3,lf[16],C_fix(4),lf[109]);}

/* f32vector-set! */
static void C_ccall f_1754(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1754,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[16],lf[32]);
t6=C_u_i_32vector_length(t2);
t7=C_i_check_number_2(t4,lf[32]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1761,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1783,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:154: g208 */
t10=t8;
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,t3,C_fix(0),t6,lf[32]);}

/* k3241 */
static void C_fcall f_3243(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3243,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}
else{
/* srfi-4.scm:520: ##sys#error */
t2=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[84],((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3348,2,t0,t1);}
t2=C_mutate((C_word*)lf[102]+1 /* (set! f64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3352,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:552: unpack */
f_3227(t3,lf[4],C_SCHEME_TRUE,lf[103]);}

/* k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3344,2,t0,t1);}
t2=C_mutate((C_word*)lf[101]+1 /* (set! f32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:550: pack-copy */
f_3212(t3,lf[18],lf[102]);}

/* k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3340,2,t0,t1);}
t2=C_mutate((C_word*)lf[100]+1 /* (set! s32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:549: pack-copy */
f_3212(t3,lf[16],lf[101]);}

/* loop in s16vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_3026(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3026,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_s16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3040,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:478: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* loop in f32vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_3108(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3108,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3121,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:481: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k1744 in k1722 in k1720 in s32vector-set! */
static void C_ccall f_1746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k1601 in u16vector-set! */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1603,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:120: g134 */
t4=t2;
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[6],lf[23]);}

/* k4089 */
static void C_ccall f_4091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s8vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* f64vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3126,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[18],lf[72]);
t4=C_u_i_f64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3135,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3135(t8,t1,C_fix(0));}

/* k3120 in loop in f32vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3121,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_u_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1));}

/* f_4097 */
static void C_ccall f_4097(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4097,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* f_4093 */
static void C_ccall f_4093(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4093,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[4],lf[34]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4097,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4119,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:179: g241 */
t8=t6;
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,t3,C_fix(0),t5,lf[34]);}

/* k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3336,2,t0,t1);}
t2=C_mutate((C_word*)lf[99]+1 /* (set! u32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:548: pack-copy */
f_3212(t3,lf[14],lf[100]);}

/* k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3332,2,t0,t1);}
t2=C_mutate((C_word*)lf[98]+1 /* (set! s16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:547: pack-copy */
f_3212(t3,lf[12],lf[99]);}

/* s16vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3017,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[10],lf[68]);
t4=C_u_i_s16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3026,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3026(t8,t1,C_fix(0));}

/* k3011 in loop in u16vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3012,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_1603 in k1601 in u16vector-set! */
static void C_ccall f_1603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1603,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k2573 in make-f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2574,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[18],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:383: set-finalizer! */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[7]);}
else{
t4=t3;
f_2541(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2541(2,t4,C_SCHEME_UNDEFINED);}}

/* k4117 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u8vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k1815 in f64vector-set! */
static void C_ccall f_1817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1817,2,t0,t1);}
if(C_truep(C_blockp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f64vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2));}
else{
t2=C_a_i_fix_to_flo(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f64vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2));}}

/* f4772 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f4772(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4772,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[10],lf[90]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* list->f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2817,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[16]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2823,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:424: make-f32vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1836,2,t0,t1);}
t2=C_mutate((C_word*)lf[37]+1 /* (set! s16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1840,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3981,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:215: getter-with-setter */
t5=*((C_word*)lf[159]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[26]+1),lf[163]);}

/* f4765 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f4765(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4765,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[12],lf[91]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4779 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f4779(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4779,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[8],lf[89]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k1830 in k1826 in k1822 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1832,2,t0,t1);}
t2=C_mutate((C_word*)lf[36]+1 /* (set! u16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4009,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:205: getter-with-setter */
t5=*((C_word*)lf[159]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[25]+1),lf[164]);}

/* k2799 in doloop703 in k2788 in list->s32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2794(t4,((C_word*)t0)[5],t2,t3);}

/* k1826 in k1822 */
static void C_ccall f_1828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1828,2,t0,t1);}
t2=C_mutate((C_word*)lf[35]+1 /* (set! s8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1832,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4037,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:195: getter-with-setter */
t5=*((C_word*)lf[159]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[23]+1),lf[165]);}

/* f4793 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f4793(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4793,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[4],lf[87]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k1822 */
static void C_ccall f_1824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1824,2,t0,t1);}
t2=C_mutate((C_word*)lf[34]+1 /* (set! u8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4065,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:185: getter-with-setter */
t5=*((C_word*)lf[159]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[19]+1),lf[166]);}

/* f64vector-length */
static void C_ccall f_1518(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1518,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[18],lf[17]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_64vector_length(t2));}

/* loop in s32vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_3081(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3081,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3094,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:480: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* f32vector-length */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1512,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[16],lf[15]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_32vector_length(t2));}

/* doloop604 in k2550 in k2540 in k2573 in make-f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static C_word C_fcall f_2556(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f64vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2550 in k2540 in k2573 in make-f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2551(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2551,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2556(t2,C_fix(0)));}

/* ##sys#user-print-hook in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[102],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3469,5,t0,t1,t2,t3,t4);}
t5=C_slot(t2,C_fix(0));
t6=C_a_i_list(&a,3,lf[4],lf[121],*((C_word*)lf[65]+1));
t7=C_a_i_list(&a,3,lf[6],lf[122],*((C_word*)lf[66]+1));
t8=C_a_i_list(&a,3,lf[8],lf[123],*((C_word*)lf[67]+1));
t9=C_a_i_list(&a,3,lf[10],lf[124],*((C_word*)lf[68]+1));
t10=C_a_i_list(&a,3,lf[12],lf[125],*((C_word*)lf[69]+1));
t11=C_a_i_list(&a,3,lf[14],lf[126],*((C_word*)lf[70]+1));
t12=C_a_i_list(&a,3,lf[16],lf[127],*((C_word*)lf[71]+1));
t13=C_a_i_list(&a,3,lf[18],lf[128],*((C_word*)lf[72]+1));
t14=C_a_i_list(&a,8,t6,t7,t8,t9,t10,t11,t12,t13);
t15=C_u_i_assq(t5,t14);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3480,a[2]=t15,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:609: ##sys#print */
t17=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,C_make_character(35),C_SCHEME_FALSE,t4);}
else{
/* srfi-4.scm:612: old-hook */
t16=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t16))(5,t16,t1,t2,t3,t4);}}

/* s32vector-length */
static void C_ccall f_1506(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1506,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[14],lf[13]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_32vector_length(t2));}

/* k3093 in loop in s32vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3094,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1));}

/* u32vector-length */
static void C_ccall f_1500(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1500,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[12],lf[11]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_32vector_length(t2));}

/* f32vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3099,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[16],lf[71]);
t4=C_u_i_f32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3108,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3108(t8,t1,C_fix(0));}

/* f4786 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f4786(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4786,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],lf[88]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k3066 in loop in u32vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3067,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1));}

/* s32vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3072,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[14],lf[70]);
t4=C_u_i_s32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3081,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3081(t8,t1,C_fix(0));}

/* make-u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1897(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1897r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1897r(t0,t1,t2,t3);}}

static void C_ccall f_1897r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=C_i_check_exact_2(t2,lf[47]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1947,a[2]=t5,a[3]=t2,a[4]=t1,a[5]=t9,a[6]=t13,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:287: alloc */
t18=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t17,lf[47],t2,t9);}

/* k2389 in make-s32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2390,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[14],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:353: set-finalizer! */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[7]);}
else{
t4=t3;
f_2360(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2360(2,t4,C_SCHEME_UNDEFINED);}}

/* k3423 in user-read-hook in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in ... */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3424,2,t0,t1);}
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=C_eqp(t3,lf[129]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[130]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_memq(t3,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3440,a[2]=((C_word*)t0)[4],a[3]=((C_word)li107),tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:586: g922 */
t8=t7;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,((C_word*)t0)[2],t6);}
else{
/* srfi-4.scm:590: ##sys#read-error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[131]+1)))(5,*((C_word*)lf[131]+1),((C_word*)t0)[2],((C_word*)t0)[4],lf[132],t3);}}}

/* k1880 in release-number-vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_1882(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-4.scm:281: ext-free */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
/* srfi-4.scm:282: ##sys#error */
t2=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[44],lf[45],((C_word*)t0)[4]);}}

/* f_3532 in subnvector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in ... */
static void C_ccall f_3532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3532,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k2867 in doloop729 in k2856 in list->f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2862(t4,((C_word*)t0)[5],t2,t3);}

/* doloop729 in k2856 in list->f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2862(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2862,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[2];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2868,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:425: f64vector-set! */
t7=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:425: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k3479 in user-print-hook in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in ... */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* srfi-4.scm:610: ##sys#print */
t4=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k3481 in k3479 in user-print-hook in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in ... */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3482,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3491,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:611: g938 */
t4=t2;
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[5]);}

/* doloop429 in k2012 in k2004 in k2034 in make-s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static C_word C_fcall f_2018(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2012 in k2004 in k2034 in make-s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2013,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2018(t2,C_fix(0)));}

/* f_3555 in k3552 in subnvector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in ... */
static void C_ccall f_3555(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3555,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k3552 in subnvector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in ... */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3555,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
/* srfi-4.scm:625: g961 */
t5=t2;
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t3,((C_word*)t0)[2],C_fix(0),t4,((C_word*)t0)[9]);}

/* f_1858 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1858,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub364(C_SCHEME_UNDEFINED,t2));}

/* ##sys#user-read-hook in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3416,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_truep(C_eqp(t4,C_make_character(117)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(102)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(85)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(83)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(70)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3424,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:586: read */
t6=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
/* srfi-4.scm:591: old-hook */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in ... */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
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
C_word ab[100],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
t2=C_mutate((C_word*)lf[118]+1 /* (set! blob->f64vector ...) */,t1);
t3=*((C_word*)lf[119]+1);
t4=*((C_word*)lf[120]+1);
t5=C_a_i_list(&a,16,lf[121],*((C_word*)lf[56]+1),lf[122],*((C_word*)lf[58]+1),lf[123],*((C_word*)lf[59]+1),lf[124],*((C_word*)lf[60]+1),lf[125],*((C_word*)lf[61]+1),lf[126],*((C_word*)lf[62]+1),lf[127],*((C_word*)lf[63]+1),lf[128],*((C_word*)lf[64]+1));
t6=C_mutate((C_word*)lf[119]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3416,a[2]=t5,a[3]=t3,a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp));
t7=*((C_word*)lf[133]+1);
t8=C_mutate((C_word*)lf[133]+1 /* (set! ##sys#user-print-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3469,a[2]=t7,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate(&lf[135] /* (set! subnvector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3523,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[136]+1 /* (set! subu8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3597,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[137]+1 /* (set! subu16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3603,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[138]+1 /* (set! subu32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3609,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[139]+1 /* (set! subs8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3615,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[140]+1 /* (set! subs16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3621,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[141]+1 /* (set! subs32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3627,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[142]+1 /* (set! subf32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3633,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[143]+1 /* (set! subf64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3639,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[144]+1 /* (set! write-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3645,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[148]+1 /* (set! read-u8vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3728,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3799,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
t21=C_mutate((C_word*)lf[152]+1 /* (set! read-u8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3807,a[2]=t20,a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:693: register-feature! */
t23=*((C_word*)lf[157]+1);
((C_proc3)(void*)(*((C_word*)t23+1)))(3,t23,t22,lf[158]);}

/* k2004 in k2034 in make-s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2005,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2013,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:305: ##sys#check-exact-interval */
f_1461(t2,((C_word*)t0)[2],C_fix(-128),C_fix(127),lf[49]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* doloop516 in k2270 in k2300 in make-u32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static C_word C_fcall f_2284(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* f_1853 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1853,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub359(C_SCHEME_UNDEFINED,t3));}

/* k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1852(C_word c,C_word t0,C_word t1){
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
C_word ab[194],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1852,2,t0,t1);}
t2=C_mutate((C_word*)lf[41]+1 /* (set! f64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1853,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1858,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1860,a[2]=t3,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t6=C_mutate((C_word*)lf[44]+1 /* (set! release-number-vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1875,a[2]=t4,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[47]+1 /* (set! make-u8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1897,a[2]=t4,a[3]=t5,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[49]+1 /* (set! make-s8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1985,a[2]=t4,a[3]=t5,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t9=C_mutate((C_word*)lf[50]+1 /* (set! make-u16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2073,a[2]=t4,a[3]=t5,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate((C_word*)lf[51]+1 /* (set! make-s16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2162,a[2]=t4,a[3]=t5,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t11=C_mutate((C_word*)lf[52]+1 /* (set! make-u32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2251,a[2]=t4,a[3]=t5,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[53]+1 /* (set! make-s32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2340,a[2]=t4,a[3]=t5,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate((C_word*)lf[54]+1 /* (set! make-f32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2429,a[2]=t4,a[3]=t5,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[55]+1 /* (set! make-f64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2521,a[2]=t4,a[3]=t5,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t15=*((C_word*)lf[47]+1);
t16=C_mutate((C_word*)lf[56]+1 /* (set! list->u8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2613,a[2]=t15,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t17=*((C_word*)lf[49]+1);
t18=C_mutate((C_word*)lf[58]+1 /* (set! list->s8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2647,a[2]=t17,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t19=*((C_word*)lf[50]+1);
t20=C_mutate((C_word*)lf[59]+1 /* (set! list->u16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2681,a[2]=t19,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t21=*((C_word*)lf[51]+1);
t22=C_mutate((C_word*)lf[60]+1 /* (set! list->s16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2715,a[2]=t21,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp));
t23=*((C_word*)lf[52]+1);
t24=C_mutate((C_word*)lf[61]+1 /* (set! list->u32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2749,a[2]=t23,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));
t25=*((C_word*)lf[53]+1);
t26=C_mutate((C_word*)lf[62]+1 /* (set! list->s32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2783,a[2]=t25,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t27=*((C_word*)lf[54]+1);
t28=C_mutate((C_word*)lf[63]+1 /* (set! list->f32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2817,a[2]=t27,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp));
t29=*((C_word*)lf[55]+1);
t30=C_mutate((C_word*)lf[64]+1 /* (set! list->f64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2851,a[2]=t29,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t31=C_mutate((C_word*)lf[4]+1 /* (set! u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2885,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[6]+1 /* (set! s8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2891,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[8]+1 /* (set! u16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2897,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[10]+1 /* (set! s16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2903,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[12]+1 /* (set! u32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[14]+1 /* (set! s32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2915,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[16]+1 /* (set! f32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2921,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[18]+1 /* (set! f64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[65]+1 /* (set! u8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2933,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[66]+1 /* (set! s8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2961,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[67]+1 /* (set! u16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2989,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[68]+1 /* (set! s16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3017,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[69]+1 /* (set! u32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[70]+1 /* (set! s32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3072,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[71]+1 /* (set! f32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3099,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[72]+1 /* (set! f64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3126,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[73]+1 /* (set! u8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3153,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[74]+1 /* (set! s8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3159,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[75]+1 /* (set! u16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3165,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[76]+1 /* (set! s16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3171,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[77]+1 /* (set! u32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3177,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[78]+1 /* (set! s32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3183,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[79]+1 /* (set! f32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3189,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[80]+1 /* (set! f64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3195,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate(&lf[81] /* (set! pack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3212,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate(&lf[83] /* (set! unpack ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate(&lf[85] /* (set! unpack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3255,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4793,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp);
t59=C_mutate((C_word*)lf[87]+1 /* (set! u8vector->blob/shared ...) */,t58);
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4786,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
t61=C_mutate((C_word*)lf[88]+1 /* (set! s8vector->blob/shared ...) */,t60);
t62=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4779,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp);
t63=C_mutate((C_word*)lf[89]+1 /* (set! u16vector->blob/shared ...) */,t62);
t64=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4772,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
t65=C_mutate((C_word*)lf[90]+1 /* (set! s16vector->blob/shared ...) */,t64);
t66=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4765,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp);
t67=C_mutate((C_word*)lf[91]+1 /* (set! u32vector->blob/shared ...) */,t66);
t68=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4758,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp);
t69=C_mutate((C_word*)lf[92]+1 /* (set! s32vector->blob/shared ...) */,t68);
t70=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4751,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp);
t71=C_mutate((C_word*)lf[93]+1 /* (set! f32vector->blob/shared ...) */,t70);
t72=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4744,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp);
t73=C_mutate((C_word*)lf[94]+1 /* (set! f64vector->blob/shared ...) */,t72);
t74=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3320,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:543: pack-copy */
f_3212(t74,lf[4],lf[95]);}

/* u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2885(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2885r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2885r(t0,t1,t2);}}

static void C_ccall f_2885r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:431: list->u8vector */
t3=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1848,2,t0,t1);}
t2=C_mutate((C_word*)lf[40]+1 /* (set! f32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1852,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3897,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:245: getter-with-setter */
t5=*((C_word*)lf[159]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[33]+1),lf[160]);}

/* k2034 in make-s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2035,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[6],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:301: set-finalizer! */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[7]);}
else{
t4=t3;
f_2005(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2005(2,t4,C_SCHEME_UNDEFINED);}}

/* s32vector-set! */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1715,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[14],lf[30]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1721,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:144: ##sys#check-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t7,t4,lf[30]);}

/* k3575 in k3552 in subnvector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in ... */
static void C_ccall f_3577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3577,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_times(((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:627: ##sys#allocate-vector */
t5=*((C_word*)lf[43]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1844,2,t0,t1);}
t2=C_mutate((C_word*)lf[39]+1 /* (set! s32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3925,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:235: getter-with-setter */
t5=*((C_word*)lf[159]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[32]+1),lf[161]);}

/* k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1840,2,t0,t1);}
t2=C_mutate((C_word*)lf[38]+1 /* (set! u32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3953,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:225: getter-with-setter */
t5=*((C_word*)lf[159]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[30]+1),lf[162]);}

/* u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2897r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2897r(t0,t1,t2);}}

static void C_ccall f_2897r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:437: list->u16vector */
t3=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2891r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2891r(t0,t1,t2);}}

static void C_ccall f_2891r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:434: list->s8vector */
t3=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k3147 in loop in f64vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3148,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_u_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1));}

/* k1872 */
static void C_ccall f_1873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_string_to_bytevector(t1);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* release-number-vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1875,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_structurep(t2))){
t4=C_slot(t2,C_fix(0));
t5=t3;
f_1882(t5,C_u_i_memq(t4,lf[46]));}
else{
t4=t3;
f_1882(t4,C_SCHEME_FALSE);}}

/* k2822 in list->f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2823,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2828,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2828(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k3580 in k3575 in k3552 in subnvector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in ... */
static void C_ccall f_3581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3581,2,t0,t1);}
t2=C_string_to_bytevector(t1);
t3=C_a_i_record2(&a,2,((C_word*)t0)[2],t1);
t4=C_fixnum_times(((C_word*)t0)[3],((C_word*)t0)[4]);
t5=C_copy_subvector(t1,((C_word*)t0)[5],C_fix(0),t4,((C_word*)t0)[6]);
t6=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}

/* doloop716 in k2822 in list->f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2828(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2828,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[2];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2834,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:424: f32vector-set! */
t7=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:424: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* u8vector? in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3153(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3153,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[4]));}

/* k3448 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm:589: g925 */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* s8vector? in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3159(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3159,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[6]));}

/* f_3440 in k3423 in user-read-hook in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in ... */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3440,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3449,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:589: read */
t6=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* f_1860 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1860,5,t0,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1865,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:269: ext-alloc */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1873,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:272: ##sys#allocate-vector */
t6=*((C_word*)lf[43]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}}

/* k1864 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* srfi-4.scm:271: ##sys#error */
t2=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[42],((C_word*)t0)[4]);}}

/* k2833 in doloop716 in k2822 in list->f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2828(t4,((C_word*)t0)[5],t2,t3);}

/* subu8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3597,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:633: subnvector */
f_3523(t1,t2,lf[4],C_fix(1),t3,t4,lf[136]);}

/* u16vector? in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3165,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[8]));}

/* make-u32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2251r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2251r(t0,t1,t2,t3);}}

static void C_ccall f_2251r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=C_i_check_exact_2(t2,lf[52]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2301,a[2]=t5,a[3]=t2,a[4]=t1,a[5]=t9,a[6]=t13,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t18=C_fixnum_shift_left(t2,C_fix(2));
/* srfi-4.scm:339: alloc */
t19=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t17,lf[52],t18,t9);}

/* k2856 in list->f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2857,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2862,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2862(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* s32vector? in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3183,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[14]));}

/* list->f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2851,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[18]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2857,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:425: make-f64vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* f32vector? in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3189,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[16]));}

/* k1924 in k1916 in k1946 in make-u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1930(t2,C_fix(0)));}

/* k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in ... */
static void C_ccall f_3400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3400,2,t0,t1);}
t2=C_mutate((C_word*)lf[115]+1 /* (set! blob->u32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:566: unpack-copy */
f_3255(t3,lf[14],C_fix(4),lf[116]);}

/* f64vector? in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3195(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3195,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[18]));}

/* k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in ... */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3404,2,t0,t1);}
t2=C_mutate((C_word*)lf[116]+1 /* (set! blob->s32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:567: unpack-copy */
f_3255(t3,lf[16],C_fix(4),lf[117]);}

/* k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in ... */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3408,2,t0,t1);}
t2=C_mutate((C_word*)lf[117]+1 /* (set! blob->f32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:568: unpack-copy */
f_3255(t3,lf[18],C_fix(8),lf[118]);}

/* k1916 in k1946 in make-u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1917,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1925,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:292: ##sys#check-exact-interval */
f_1461(t2,((C_word*)t0)[2],C_fix(0),C_fix(255),lf[47]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k2448 in k2481 in make-f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2449,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_i_check_number_2(((C_word*)((C_word*)t0)[2])[1],lf[54]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)((C_word*)t0)[2])[1]))){
t5=t4;
f_2459(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_a_i_fix_to_flo(&a,1,((C_word*)((C_word*)t0)[2])[1]));
t6=t4;
f_2459(t6,t5);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}}

/* k1946 in make-u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1947,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[4],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:288: set-finalizer! */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[7]);}
else{
t4=t3;
f_1917(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1917(2,t4,C_SCHEME_UNDEFINED);}}

/* list->s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2715(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2715,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[10]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2721,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:421: make-s16vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k3039 in loop in s16vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3040,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* u32vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3045(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3045,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[12],lf[69]);
t4=C_u_i_u32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3054,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3054(t8,t1,C_fix(0));}

/* f_3957 */
static void C_ccall f_3957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3957,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k3949 */
static void C_ccall f_3951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3951,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_u_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* f_3953 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3953,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[14],lf[39]);
t5=C_u_i_s32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3957,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3979,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:229: g316 */
t8=t6;
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,t3,C_fix(0),t5,lf[39]);}

/* subnvector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_fcall f_3523(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3523,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=C_i_check_structure_2(t2,t3,t7);
t9=C_slot(t2,C_fix(1));
t10=C_block_size(t9);
t11=C_u_fixnum_divide(t10,t4);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3532,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3554,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t9,a[7]=t1,a[8]=t11,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t14=C_fixnum_plus(t11,C_fix(1));
/* srfi-4.scm:624: g952 */
t15=t12;
((C_proc6)(void*)(*((C_word*)t15+1)))(6,t15,t13,t5,C_fix(0),t14,t7);}

/* s16vector? in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3171,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[10]));}

/* u32vector? in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3177(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3177,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[12]));}

/* loop in u32vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_3054(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3054,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3067,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:479: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k3977 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3979,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* f_3985 */
static void C_ccall f_3985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3985,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* f_3981 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3981,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[12],lf[38]);
t5=C_u_i_u32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3985,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4007,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:219: g301 */
t8=t6;
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,t3,C_fix(0),t5,lf[38]);}

/* k2300 in make-u32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2301,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[12],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:340: set-finalizer! */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[7]);}
else{
t4=t3;
f_2271(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2271(2,t4,C_SCHEME_UNDEFINED);}}

/* k2765 in doloop690 in k2754 in list->u32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2760(t4,((C_word*)t0)[5],t2,t3);}

/* doloop400 in k1924 in k1916 in k1946 in make-u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static C_word C_fcall f_1930(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* f_3929 */
static void C_ccall f_3929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3929,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* doloop574 in k2458 in k2448 in k2481 in make-f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static C_word C_fcall f_2464(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f32vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* f_3925 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3925,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[16],lf[40]);
t5=C_u_i_f32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3929,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3951,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:239: g331 */
t8=t6;
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,t3,C_fix(0),t5,lf[40]);}

/* k3921 */
static void C_ccall f_3923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3923,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_u_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k2181 in k2211 in make-s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2182,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2190,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:331: ##sys#check-exact-interval */
f_1461(t2,((C_word*)t0)[2],C_fix(-32768),C_fix(32767),lf[51]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k2788 in list->s32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2789,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2794,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2794(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* list->s32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2783(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2783,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[14]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2789,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:423: make-s32vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* doloop487 in k2189 in k2181 in k2211 in make-s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static C_word C_fcall f_2195(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2189 in k2181 in k2211 in make-s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2195(t2,C_fix(0)));}

/* doloop703 in k2788 in list->s32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2794(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2794,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[2];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2800,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:423: s32vector-set! */
t7=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:423: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k2481 in make-f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2482,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:366: set-finalizer! */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[7]);}
else{
t4=t3;
f_2449(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2449(2,t4,C_SCHEME_UNDEFINED);}}

/* s8vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2961,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],lf[66]);
t4=C_u_i_s8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2970,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2970(t8,t1,C_fix(0));}

/* make-s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_1985(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1985r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1985r(t0,t1,t2,t3);}}

static void C_ccall f_1985r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=C_i_check_exact_2(t2,lf[49]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2035,a[2]=t5,a[3]=t2,a[4]=t1,a[5]=t9,a[6]=t13,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:300: alloc */
t18=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t17,lf[49],t2,t9);}

/* doloop677 in k2720 in list->s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2726(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2726,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[2];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2732,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:421: s16vector-set! */
t7=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:421: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k2458 in k2448 in k2481 in make-f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2459(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2459,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2464(t2,C_fix(0)));}

/* loop in s8vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2970(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2970,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_s8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2984,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:476: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k2731 in doloop677 in k2720 in list->s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2726(t4,((C_word*)t0)[5],t2,t3);}

/* make-f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_2429r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2429r(t0,t1,t2,t3);}}

static void C_ccall f_2429r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_TRUE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_check_exact_2(t2,lf[54]);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2482,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t10,a[6]=t14,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t19=C_fixnum_shift_left(t2,C_fix(2));
/* srfi-4.scm:365: alloc */
t20=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t20+1)))(5,t20,t18,lf[54],t19,t10);}

/* u16vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2989,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[8],lf[67]);
t4=C_u_i_u16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2998,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2998(t8,t1,C_fix(0));}

/* k2983 in loop in s8vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2984,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* list->u32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2749,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[12]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2755,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:422: make-u32vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* doloop690 in k2754 in list->u32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2760(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2760,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[2];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2766,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:422: u32vector-set! */
t7=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:422: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* loop in u16vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2998(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2998,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_u16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3012,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:477: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k2754 in list->u32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2755,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2760,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2760(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* f_3901 */
static void C_ccall f_3901(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3901,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2927r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2927r(t0,t1,t2);}}

static void C_ccall f_2927r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:452: list->f64vector */
t3=*((C_word*)lf[64]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k2270 in k2300 in make-u32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2271,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[52]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li37),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2284(t3,C_fix(0)));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* f32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2921r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2921r(t0,t1,t2);}}

static void C_ccall f_2921r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:449: list->f32vector */
t3=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* u8vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2933(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2933,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[4],lf[65]);
t4=C_u_i_u8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2942(t8,t1,C_fix(0));}

/* make-s32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2340r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2340r(t0,t1,t2,t3);}}

static void C_ccall f_2340r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=C_i_check_exact_2(t2,lf[53]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2390,a[2]=t5,a[3]=t2,a[4]=t1,a[5]=t9,a[6]=t13,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t18=C_fixnum_shift_left(t2,C_fix(2));
/* srfi-4.scm:352: alloc */
t19=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t17,lf[53],t18,t9);}

/* loop in u8vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2942(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2942,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_u8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2956,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:475: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k2720 in list->s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2721,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2726,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2726(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k2955 in loop in u8vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2956,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_3215 in pack-copy in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3215(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3215,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3222,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_block_size(t4);
/* srfi-4.scm:510: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(3,*((C_word*)lf[82]+1),t5,t6);}

/* pack-copy in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_3212(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3212,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3215,a[2]=t2,a[3]=t3,a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp));}

/* f4744 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f4744(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4744,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[18],lf[94]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* wrap in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_fcall f_3799(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3799,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3806,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:668: ##sys#allocate-vector */
t5=*((C_word*)lf[43]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* f4751 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f4751(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4751,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[16],lf[93]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k2211 in make-s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2212,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[10],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:327: set-finalizer! */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[7]);}
else{
t4=t3;
f_2182(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2182(2,t4,C_SCHEME_UNDEFINED);}}

/* f4758 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f4758(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4758,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[14],lf[92]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* u8vector-length */
static void C_ccall f_1476(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1476,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[4],lf[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_8vector_length(t2));}

/* read-u8vector! in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3728(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_3728r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3728r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3728r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=(C_truep(t6)?*((C_word*)lf[149]+1):C_i_car(t4));
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3740,a[2]=t11,a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:653: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[151]+1)))(5,*((C_word*)lf[151]+1),t14,t7,C_SCHEME_TRUE,lf[148]);}

/* ##sys#check-exact-interval */
static void C_fcall f_1461(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1461,NULL,5,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_lessp(t2,t3);
t8=(C_truep(t7)?t7:C_fixnum_greaterp(t2,t4));
if(C_truep(t8)){
/* srfi-4.scm:51: ##sys#error */
t9=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t9+1)))(7,t9,t1,t5,lf[2],t2,t3,t4);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d4_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d4_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d4_toplevel"));
C_check_nursery_minimum(57);
if(!C_demand(57)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1534)){
C_save(t1);
C_rereclaim2(1534*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(57);
C_initialize_lf(lf,168);
lf[1]=C_h_intern(&lf[1],9,"\003syserror");
lf[2]=C_decode_literal(C_heaptop,"\376B\000\000&numeric value is not in expected range");
lf[3]=C_h_intern(&lf[3],15,"u8vector-length");
lf[4]=C_h_intern(&lf[4],8,"u8vector");
lf[5]=C_h_intern(&lf[5],15,"s8vector-length");
lf[6]=C_h_intern(&lf[6],8,"s8vector");
lf[7]=C_h_intern(&lf[7],16,"u16vector-length");
lf[8]=C_h_intern(&lf[8],9,"u16vector");
lf[9]=C_h_intern(&lf[9],16,"s16vector-length");
lf[10]=C_h_intern(&lf[10],9,"s16vector");
lf[11]=C_h_intern(&lf[11],16,"u32vector-length");
lf[12]=C_h_intern(&lf[12],9,"u32vector");
lf[13]=C_h_intern(&lf[13],16,"s32vector-length");
lf[14]=C_h_intern(&lf[14],9,"s32vector");
lf[15]=C_h_intern(&lf[15],16,"f32vector-length");
lf[16]=C_h_intern(&lf[16],9,"f32vector");
lf[17]=C_h_intern(&lf[17],16,"f64vector-length");
lf[18]=C_h_intern(&lf[18],9,"f64vector");
lf[19]=C_h_intern(&lf[19],13,"u8vector-set!");
lf[20]=C_h_intern(&lf[20],14,"\003syserror-hook");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[22]=C_h_intern(&lf[22],13,"s8vector-set!");
lf[23]=C_h_intern(&lf[23],14,"u16vector-set!");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[25]=C_h_intern(&lf[25],14,"s16vector-set!");
lf[26]=C_h_intern(&lf[26],14,"u32vector-set!");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[29]=C_h_intern(&lf[29],17,"\003syscheck-integer");
lf[30]=C_h_intern(&lf[30],14,"s32vector-set!");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[32]=C_h_intern(&lf[32],14,"f32vector-set!");
lf[33]=C_h_intern(&lf[33],14,"f64vector-set!");
lf[34]=C_h_intern(&lf[34],12,"u8vector-ref");
lf[35]=C_h_intern(&lf[35],12,"s8vector-ref");
lf[36]=C_h_intern(&lf[36],13,"u16vector-ref");
lf[37]=C_h_intern(&lf[37],13,"s16vector-ref");
lf[38]=C_h_intern(&lf[38],13,"u32vector-ref");
lf[39]=C_h_intern(&lf[39],13,"s32vector-ref");
lf[40]=C_h_intern(&lf[40],13,"f32vector-ref");
lf[41]=C_h_intern(&lf[41],13,"f64vector-ref");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000:not enough memory - cannot allocate external number vector");
lf[43]=C_h_intern(&lf[43],19,"\003sysallocate-vector");
lf[44]=C_h_intern(&lf[44],21,"release-number-vector");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\047bad argument type - not a number vector");
lf[46]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376"
"\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64vector\376\377\016");
lf[47]=C_h_intern(&lf[47],13,"make-u8vector");
lf[48]=C_h_intern(&lf[48],14,"set-finalizer!");
lf[49]=C_h_intern(&lf[49],13,"make-s8vector");
lf[50]=C_h_intern(&lf[50],14,"make-u16vector");
lf[51]=C_h_intern(&lf[51],14,"make-s16vector");
lf[52]=C_h_intern(&lf[52],14,"make-u32vector");
lf[53]=C_h_intern(&lf[53],14,"make-s32vector");
lf[54]=C_h_intern(&lf[54],14,"make-f32vector");
lf[55]=C_h_intern(&lf[55],14,"make-f64vector");
lf[56]=C_h_intern(&lf[56],14,"list->u8vector");
lf[57]=C_h_intern(&lf[57],27,"\003syserror-not-a-proper-list");
lf[58]=C_h_intern(&lf[58],14,"list->s8vector");
lf[59]=C_h_intern(&lf[59],15,"list->u16vector");
lf[60]=C_h_intern(&lf[60],15,"list->s16vector");
lf[61]=C_h_intern(&lf[61],15,"list->u32vector");
lf[62]=C_h_intern(&lf[62],15,"list->s32vector");
lf[63]=C_h_intern(&lf[63],15,"list->f32vector");
lf[64]=C_h_intern(&lf[64],15,"list->f64vector");
lf[65]=C_h_intern(&lf[65],14,"u8vector->list");
lf[66]=C_h_intern(&lf[66],14,"s8vector->list");
lf[67]=C_h_intern(&lf[67],15,"u16vector->list");
lf[68]=C_h_intern(&lf[68],15,"s16vector->list");
lf[69]=C_h_intern(&lf[69],15,"u32vector->list");
lf[70]=C_h_intern(&lf[70],15,"s32vector->list");
lf[71]=C_h_intern(&lf[71],15,"f32vector->list");
lf[72]=C_h_intern(&lf[72],15,"f64vector->list");
lf[73]=C_h_intern(&lf[73],9,"u8vector\077");
lf[74]=C_h_intern(&lf[74],9,"s8vector\077");
lf[75]=C_h_intern(&lf[75],10,"u16vector\077");
lf[76]=C_h_intern(&lf[76],10,"s16vector\077");
lf[77]=C_h_intern(&lf[77],10,"u32vector\077");
lf[78]=C_h_intern(&lf[78],10,"s32vector\077");
lf[79]=C_h_intern(&lf[79],10,"f32vector\077");
lf[80]=C_h_intern(&lf[80],10,"f64vector\077");
lf[82]=C_h_intern(&lf[82],13,"\003sysmake-blob");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[87]=C_h_intern(&lf[87],21,"u8vector->blob/shared");
lf[88]=C_h_intern(&lf[88],21,"s8vector->blob/shared");
lf[89]=C_h_intern(&lf[89],22,"u16vector->blob/shared");
lf[90]=C_h_intern(&lf[90],22,"s16vector->blob/shared");
lf[91]=C_h_intern(&lf[91],22,"u32vector->blob/shared");
lf[92]=C_h_intern(&lf[92],22,"s32vector->blob/shared");
lf[93]=C_h_intern(&lf[93],22,"f32vector->blob/shared");
lf[94]=C_h_intern(&lf[94],22,"f64vector->blob/shared");
lf[95]=C_h_intern(&lf[95],14,"u8vector->blob");
lf[96]=C_h_intern(&lf[96],14,"s8vector->blob");
lf[97]=C_h_intern(&lf[97],15,"u16vector->blob");
lf[98]=C_h_intern(&lf[98],15,"s16vector->blob");
lf[99]=C_h_intern(&lf[99],15,"u32vector->blob");
lf[100]=C_h_intern(&lf[100],15,"s32vector->blob");
lf[101]=C_h_intern(&lf[101],15,"f32vector->blob");
lf[102]=C_h_intern(&lf[102],15,"f64vector->blob");
lf[103]=C_h_intern(&lf[103],21,"blob->u8vector/shared");
lf[104]=C_h_intern(&lf[104],21,"blob->s8vector/shared");
lf[105]=C_h_intern(&lf[105],22,"blob->u16vector/shared");
lf[106]=C_h_intern(&lf[106],22,"blob->s16vector/shared");
lf[107]=C_h_intern(&lf[107],22,"blob->u32vector/shared");
lf[108]=C_h_intern(&lf[108],22,"blob->s32vector/shared");
lf[109]=C_h_intern(&lf[109],22,"blob->f32vector/shared");
lf[110]=C_h_intern(&lf[110],22,"blob->f64vector/shared");
lf[111]=C_h_intern(&lf[111],14,"blob->u8vector");
lf[112]=C_h_intern(&lf[112],14,"blob->s8vector");
lf[113]=C_h_intern(&lf[113],15,"blob->u16vector");
lf[114]=C_h_intern(&lf[114],15,"blob->s16vector");
lf[115]=C_h_intern(&lf[115],15,"blob->u32vector");
lf[116]=C_h_intern(&lf[116],15,"blob->s32vector");
lf[117]=C_h_intern(&lf[117],15,"blob->f32vector");
lf[118]=C_h_intern(&lf[118],15,"blob->f64vector");
lf[119]=C_h_intern(&lf[119],18,"\003sysuser-read-hook");
lf[120]=C_h_intern(&lf[120],4,"read");
lf[121]=C_h_intern(&lf[121],2,"u8");
lf[122]=C_h_intern(&lf[122],2,"s8");
lf[123]=C_h_intern(&lf[123],3,"u16");
lf[124]=C_h_intern(&lf[124],3,"s16");
lf[125]=C_h_intern(&lf[125],3,"u32");
lf[126]=C_h_intern(&lf[126],3,"s32");
lf[127]=C_h_intern(&lf[127],3,"f32");
lf[128]=C_h_intern(&lf[128],3,"f64");
lf[129]=C_h_intern(&lf[129],1,"f");
lf[130]=C_h_intern(&lf[130],1,"F");
lf[131]=C_h_intern(&lf[131],14,"\003sysread-error");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal bytevector syntax");
lf[133]=C_h_intern(&lf[133],19,"\003sysuser-print-hook");
lf[134]=C_h_intern(&lf[134],9,"\003sysprint");
lf[136]=C_h_intern(&lf[136],11,"subu8vector");
lf[137]=C_h_intern(&lf[137],12,"subu16vector");
lf[138]=C_h_intern(&lf[138],12,"subu32vector");
lf[139]=C_h_intern(&lf[139],11,"subs8vector");
lf[140]=C_h_intern(&lf[140],12,"subs16vector");
lf[141]=C_h_intern(&lf[141],12,"subs32vector");
lf[142]=C_h_intern(&lf[142],12,"subf32vector");
lf[143]=C_h_intern(&lf[143],12,"subf64vector");
lf[144]=C_h_intern(&lf[144],14,"write-u8vector");
lf[145]=C_h_intern(&lf[145],19,"\003sysstandard-output");
lf[146]=C_h_intern(&lf[146],16,"\003syswrite-char-0");
lf[147]=C_h_intern(&lf[147],21,"\003syscheck-output-port");
lf[148]=C_h_intern(&lf[148],14,"read-u8vector!");
lf[149]=C_h_intern(&lf[149],18,"\003sysstandard-input");
lf[150]=C_h_intern(&lf[150],16,"\003sysread-string!");
lf[151]=C_h_intern(&lf[151],20,"\003syscheck-input-port");
lf[152]=C_h_intern(&lf[152],13,"read-u8vector");
lf[153]=C_h_intern(&lf[153],17,"get-output-string");
lf[154]=C_h_intern(&lf[154],19,"\003syswrite-char/port");
lf[155]=C_h_intern(&lf[155],15,"\003sysread-char-0");
lf[156]=C_h_intern(&lf[156],18,"open-output-string");
lf[157]=C_h_intern(&lf[157],17,"register-feature!");
lf[158]=C_h_intern(&lf[158],6,"srfi-4");
lf[159]=C_h_intern(&lf[159],18,"getter-with-setter");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\023(f64vector-ref v i)");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\023(f32vector-ref v i)");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\023(s32vector-ref v i)");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\023(u32vector-ref v i)");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\023(s16vector-ref v i)");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\023(u16vector-ref v i)");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\022(s8vector-ref v i)");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\022(u8vector-ref v i)");
C_register_lf2(lf,168,create_ptable());
t2=C_mutate(&lf[0] /* (set! ##sys#check-exact-interval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1461,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! u8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1476,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! s8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1482,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! u16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[9]+1 /* (set! s16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1494,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[11]+1 /* (set! u32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1500,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[13]+1 /* (set! s32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[15]+1 /* (set! f32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[17]+1 /* (set! f64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1518,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[19]+1 /* (set! u8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1524,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[22]+1 /* (set! s8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1563,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[23]+1 /* (set! u16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1594,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[25]+1 /* (set! s16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1633,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[26]+1 /* (set! u32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1664,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[30]+1 /* (set! s32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1715,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[32]+1 /* (set! f32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1754,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[33]+1 /* (set! f64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1788,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1824,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4093,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:175: getter-with-setter */
t21=*((C_word*)lf[159]+1);
((C_proc5)(void*)(*((C_word*)t21+1)))(5,t21,t19,t20,*((C_word*)lf[19]+1),lf[167]);}

/* unpack in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_3227(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3227,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3230,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));}

/* k3221 */
static void C_ccall f_3222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_copy_block(((C_word*)t0)[3],t1));}

/* k3739 in read-u8vector! in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in ... */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
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
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[148]);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[4],lf[148]);
t4=C_slot(((C_word*)t0)[3],C_fix(1));
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t5=C_i_check_exact_2(((C_word*)((C_word*)t0)[4])[1],lf[148]);
t6=C_fixnum_plus(((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
t7=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t6,t7))){
t8=C_block_size(t4);
t9=C_fixnum_difference(t8,((C_word*)t0)[2]);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
/* srfi-4.scm:661: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[150]+1)))(6,*((C_word*)lf[150]+1),((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],t4,((C_word*)t0)[6],((C_word*)t0)[2]);}
else{
/* srfi-4.scm:661: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[150]+1)))(6,*((C_word*)lf[150]+1),((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],t4,((C_word*)t0)[6],((C_word*)t0)[2]);}}
else{
/* srfi-4.scm:661: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[150]+1)))(6,*((C_word*)lf[150]+1),((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],t4,((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* s16vector-length */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1494,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[10],lf[9]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_16vector_length(t2));}

/* u16vector-length */
static void C_ccall f_1488(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1488,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[8],lf[7]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_16vector_length(t2));}

/* f_3230 in unpack in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3230(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3230,3,t0,t1,t2);}
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3243,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_3243(t7,t5);}
else{
t7=C_fixnum_modulo(t4,((C_word*)t0)[3]);
t8=t6;
f_3243(t8,C_eqp(C_fix(0),t7));}}

/* s8vector-length */
static void C_ccall f_1482(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1482,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],lf[5]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_8vector_length(t2));}

/* k2359 in k2389 in make-s32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2360,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[53]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2373,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2373(t3,C_fix(0)));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k4033 */
static void C_ccall f_4035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s16vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* f_4037 in k1826 in k1822 */
static void C_ccall f_4037(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4037,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[8],lf[36]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4041,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4063,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:199: g271 */
t8=t6;
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,t3,C_fix(0),t5,lf[36]);}

/* read-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_3807r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3807r(t0,t1,t2);}}

static void C_ccall f_3807r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(6);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[149]+1):C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3819,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:673: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[151]+1)))(5,*((C_word*)lf[151]+1),t11,t8,C_SCHEME_TRUE,lf[152]);}

/* k3805 in wrap in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in ... */
static void C_ccall f_3806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3806,2,t0,t1);}
t2=C_string_to_bytevector(t1);
t3=C_substring_copy(((C_word*)t0)[2],t1,C_fix(0),((C_word*)t0)[3],C_fix(0));
t4=t1;
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record2(&a,2,lf[4],t4));}

/* k3818 in read-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in ... */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3819,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[152]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:675: ##sys#allocate-vector */
t4=*((C_word*)lf[43]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:682: open-output-string */
t3=*((C_word*)lf[156]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* doloop545 in k2359 in k2389 in make-s32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static C_word C_fcall f_2373(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* f_4009 in k1830 in k1826 in k1822 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4009,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[10],lf[37]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4013,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4035,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:209: g286 */
t8=t6;
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,t3,C_fix(0),t5,lf[37]);}

/* k4005 */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4007,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in ... */
static void C_ccall f_3396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3396,2,t0,t1);}
t2=C_mutate((C_word*)lf[114]+1 /* (set! blob->s16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3400,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:565: unpack-copy */
f_3255(t3,lf[12],C_fix(4),lf[115]);}

/* k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in ... */
static void C_ccall f_3392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3392,2,t0,t1);}
t2=C_mutate((C_word*)lf[113]+1 /* (set! blob->u16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:564: unpack-copy */
f_3255(t3,lf[10],C_fix(2),lf[114]);}

/* k1660 in s16vector-set! */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* u32vector-set! */
static void C_ccall f_1664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1664,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[12],lf[26]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1670,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:133: ##sys#check-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t7,t4,lf[26]);}

/* s32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2915(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2915r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2915r(t0,t1,t2);}}

static void C_ccall f_2915r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:446: list->s32vector */
t3=*((C_word*)lf[62]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* unpack-copy in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_3255(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3255,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3258,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp));}

/* f_3258 in unpack-copy in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3258(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3258,3,t0,t1,t2);}
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3265,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:526: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(3,*((C_word*)lf[82]+1),t5,t4);}

/* make-s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2162(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2162r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2162r(t0,t1,t2,t3);}}

static void C_ccall f_2162r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=C_i_check_exact_2(t2,lf[51]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2212,a[2]=t5,a[3]=t2,a[4]=t1,a[5]=t9,a[6]=t13,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t18=C_fixnum_shift_left(t2,C_fix(1));
/* srfi-4.scm:326: alloc */
t19=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t17,lf[51],t18,t9);}

/* s16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2903(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2903r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2903r(t0,t1,t2);}}

static void C_ccall f_2903r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:440: list->s16vector */
t3=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k3676 in doloop1030 in k3662 in k3656 in write-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in ... */
static void C_ccall f_3677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3668(t3,((C_word*)t0)[4],t2);}

/* u32vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2909r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2909r(t0,t1,t2);}}

static void C_ccall f_2909r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:443: list->u32vector */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k1693 in k1671 in k1669 in u32vector-set! */
static void C_ccall f_1695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* make-u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2073r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2073r(t0,t1,t2,t3);}}

static void C_ccall f_2073r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=C_i_check_exact_2(t2,lf[50]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2123,a[2]=t5,a[3]=t2,a[4]=t1,a[5]=t9,a[6]=t13,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t18=C_fixnum_shift_left(t2,C_fix(1));
/* srfi-4.scm:313: alloc */
t19=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t17,lf[50],t18,t9);}

/* f_4013 */
static void C_ccall f_4013(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4013,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k2618 in list->u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2619,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2624,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2624(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* list->u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2613(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2613,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[4]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2619,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:418: make-u8vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k3656 in write-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in ... */
static void C_ccall f_3657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3657,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_check_structure_2(((C_word*)t0)[3],lf[4],lf[144]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3663,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:645: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[147]+1)))(5,*((C_word*)lf[147]+1),t5,((C_word*)t0)[4],C_SCHEME_TRUE,lf[144]);}

/* k2092 in k2122 in make-u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2093,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2101,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:318: ##sys#check-exact-interval */
f_1461(t2,((C_word*)t0)[2],C_fix(0),C_fix(65535),lf[50]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k1623 in k1601 in u16vector-set! */
static void C_ccall f_1625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* doloop638 in k2618 in list->u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2624(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2624,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[2];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2630,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:418: u8vector-set! */
t7=*((C_word*)lf[19]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:418: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* doloop1030 in k3662 in k3656 in write-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in ... */
static void C_fcall f_3668(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3668,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3677,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_u8vector_ref(((C_word*)t0)[4],t2);
t5=C_make_character(C_unfix(t4));
/* srfi-4.scm:648: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[146]+1)))(4,*((C_word*)lf[146]+1),t3,t5,((C_word*)t0)[5]);}}

/* k3662 in k3656 in write-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in ... */
static void C_ccall f_3663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3663,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3668,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li121),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_3668(t5,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2629 in doloop638 in k2618 in list->u8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2624(t4,((C_word*)t0)[5],t2,t3);}

/* subf64vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3639,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:640: subnvector */
f_3523(t1,t2,lf[18],C_fix(8),t3,t4,lf[143]);}

/* subf32vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3633(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3633,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:639: subnvector */
f_3523(t1,t2,lf[16],C_fix(4),t3,t4,lf[142]);}

/* f_3897 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3897(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3897,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[18],lf[41]);
t5=C_u_i_f64vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3901,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3923,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:249: g346 */
t8=t6;
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,t3,C_fix(0),t5,lf[41]);}

/* k3894 in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_1640 in s16vector-set! */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1640,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* write-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3645(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3645r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3645r(t0,t1,t2,t3);}}

static void C_ccall f_3645r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[145]+1):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_fix(0):C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3657,a[2]=t11,a[3]=t2,a[4]=t5,a[5]=t1,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t11))){
/* srfi-4.scm:643: u8vector-length */
t13=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t2);}
else{
t13=t12;
f_3657(2,t13,C_i_car(t11));}}

/* doloop458 in k2100 in k2092 in k2122 in make-u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static C_word C_fcall f_2106(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2100 in k2092 in k2122 in make-u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2106(t2,C_fix(0)));}

/* k3865 in k3850 in loop in k3841 in k3818 in read-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in ... */
static void C_ccall f_3866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm:691: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3847(t2,((C_word*)t0)[3]);}

/* k1671 in k1669 in u32vector-set! */
static void C_ccall f_1672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1673,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:138: g172 */
t4=t2;
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[6],lf[26]);}

/* f_1673 in k1671 in k1669 in u32vector-set! */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1673,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k1669 in u32vector-set! */
static void C_ccall f_1670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1670,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_negativep(((C_word*)t0)[5]))){
/* srfi-4.scm:135: ##sys#error */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[26],lf[27],((C_word*)t0)[5]);}
else{
if(C_truep(C_fits_in_unsigned_int_p(((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t2;
f_1672(2,t4,t3);}
else{
/* srfi-4.scm:137: ##sys#error */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[26],lf[28],((C_word*)t0)[5]);}}}

/* subs8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3615,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:636: subnvector */
f_3523(t1,t2,lf[6],C_fix(1),t3,t4,lf[139]);}

/* f_1570 in s8vector-set! */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1570,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* subs32vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3627,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:638: subnvector */
f_3523(t1,t2,lf[14],C_fix(4),t3,t4,lf[141]);}

/* subs16vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3621,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:637: subnvector */
f_3523(t1,t2,lf[10],C_fix(2),t3,t4,lf[140]);}

/* loop in k3841 in k3818 in read-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in ... */
static void C_fcall f_3847(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3847,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3851,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:684: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[155]+1)))(3,*((C_word*)lf[155]+1),t2,((C_word*)t0)[5]);}

/* k3841 in k3818 in read-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in ... */
static void C_ccall f_3842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3842,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word)li125),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_3847(t5,((C_word*)t0)[4]);}

/* s8vector-set! */
static void C_ccall f_1563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1563,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[6],lf[22]);
t6=C_u_i_8vector_length(t2);
t7=C_i_check_exact_2(t4,lf[22]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1570,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1592,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:111: g117 */
t10=t8;
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,t3,C_fix(0),t6,lf[22]);}

/* k3858 in k3850 in loop in k3841 in k3818 in read-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in ... */
static void C_ccall f_3859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(t1);
/* srfi-4.scm:688: wrap */
f_3799(((C_word*)t0)[3],t1,t2);}

/* k3850 in loop in k3841 in k3818 in read-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in ... */
static void C_ccall f_3851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3851,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:686: get-output-string */
t3=*((C_word*)lf[153]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3866,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:690: ##sys#write-char/port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[154]+1)))(4,*((C_word*)lf[154]+1),t2,t1,((C_word*)t0)[4]);}}

/* k1590 in s8vector-set! */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* u16vector-set! */
static void C_ccall f_1594(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1594,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[8],lf[23]);
t6=C_u_i_16vector_length(t2);
t7=C_i_check_exact_2(t4,lf[23]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1602,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-4.scm:119: ##sys#error */
t9=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[23],lf[24],t4);}
else{
t9=t8;
f_1602(2,t9,C_SCHEME_UNDEFINED);}}

/* k2686 in list->u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2687,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2692,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2692(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* subu16vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3603,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:634: subnvector */
f_3523(t1,t2,lf[8],C_fix(2),t3,t4,lf[137]);}

/* subu32vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in ... */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3609,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:635: subnvector */
f_3523(t1,t2,lf[12],C_fix(4),t3,t4,lf[138]);}

/* list->u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2681,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[8]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2687,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:420: make-u16vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k3825 in k3818 in read-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in ... */
static void C_ccall f_3826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3826,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3828,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:676: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[150]+1)))(6,*((C_word*)lf[150]+1),t2,((C_word*)t0)[2],t1,((C_word*)t0)[5],C_fix(0));}

/* k3827 in k3825 in k3818 in read-u8vector in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in ... */
static void C_ccall f_3828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3828,2,t0,t1);}
t2=C_string_to_bytevector(((C_word*)t0)[2]);
t3=C_eqp(((C_word*)t0)[3],t1);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record2(&a,2,lf[4],((C_word*)t0)[2]));}
else{
/* srfi-4.scm:680: wrap */
f_3799(((C_word*)t0)[4],((C_word*)t0)[2],t1);}}

/* k2697 in doloop664 in k2686 in list->u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2692(t4,((C_word*)t0)[5],t2,t3);}

/* s16vector-set! */
static void C_ccall f_1633(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1633,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[10],lf[25]);
t6=C_u_i_16vector_length(t2);
t7=C_i_check_exact_2(t4,lf[25]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1640,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1662,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:127: g152 */
t10=t8;
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,t3,C_fix(0),t6,lf[25]);}

/* doloop664 in k2686 in list->u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2692(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2692,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[2];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2698,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:420: u16vector-set! */
t7=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:420: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* f_1533 in k1531 in u8vector-set! */
static void C_ccall f_1533(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1533,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k1531 in u8vector-set! */
static void C_ccall f_1532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1533,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:104: g99 */
t4=t2;
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[6],lf[19]);}

/* k2122 in make-u16vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2123,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[8],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:314: set-finalizer! */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[7]);}
else{
t4=t3;
f_2093(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2093(2,t4,C_SCHEME_UNDEFINED);}}

/* u8vector-set! */
static void C_ccall f_1524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1524,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[4],lf[19]);
t6=C_u_i_8vector_length(t2);
t7=C_i_check_exact_2(t4,lf[19]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1532,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-4.scm:103: ##sys#error */
t9=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[19],lf[21],t4);}
else{
t9=t8;
f_1532(2,t9,C_SCHEME_UNDEFINED);}}

/* list->s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2647(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2647,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[6]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2653,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:419: make-s8vector */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k1553 in k1531 in u8vector-set! */
static void C_ccall f_1555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k2652 in list->s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2653,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2658,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2658(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop651 in k2652 in list->s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_2658(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2658,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[2];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2664,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:419: s8vector-set! */
t7=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t3,t6);}
else{
/* srfi-4.scm:419: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[4]);}}}

/* k2663 in doloop651 in k2652 in list->s8vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2658(t4,((C_word*)t0)[5],t2,t3);}

/* k3489 in k3481 in k3479 in user-print-hook in k3410 in k3406 in k3402 in k3398 in k3394 in k3390 in k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in ... */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm:611: ##sys#print */
t2=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3368,2,t0,t1);}
t2=C_mutate((C_word*)lf[107]+1 /* (set! blob->u32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:557: unpack */
f_3227(t3,lf[14],C_fix(4),lf[108]);}

/* k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3360,2,t0,t1);}
t2=C_mutate((C_word*)lf[105]+1 /* (set! blob->u16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:555: unpack */
f_3227(t3,lf[10],C_fix(2),lf[106]);}

/* k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3364,2,t0,t1);}
t2=C_mutate((C_word*)lf[106]+1 /* (set! blob->s16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:556: unpack */
f_3227(t3,lf[12],C_fix(4),lf[107]);}

/* f_1761 in f32vector-set! */
static void C_ccall f_1761(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1761,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* loop in f64vector->list in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_fcall f_3135(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3135,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3148,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:482: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* f_4041 */
static void C_ccall f_4041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4041,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* make-f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_2521r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2521r(t0,t1,t2,t3);}}

static void C_ccall f_2521r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_TRUE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_check_exact_2(t2,lf[55]);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2574,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t10,a[6]=t14,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t19=C_fixnum_shift_left(t2,C_fix(3));
/* srfi-4.scm:382: alloc */
t20=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t20+1)))(5,t20,t18,lf[55],t19,t10);}

/* k3386 in k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in ... */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3388,2,t0,t1);}
t2=C_mutate((C_word*)lf[112]+1 /* (set! blob->s8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3392,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:563: unpack-copy */
f_3255(t3,lf[8],C_fix(2),lf[113]);}

/* f_1795 in f64vector-set! */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1795,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in ... */
static void C_ccall f_3380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3380,2,t0,t1);}
t2=C_mutate((C_word*)lf[110]+1 /* (set! blob->f64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:561: unpack-copy */
f_3255(t3,lf[4],C_SCHEME_TRUE,lf[111]);}

/* k3382 in k3378 in k3374 in k3370 in k3366 in k3362 in k3358 in k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in ... */
static void C_ccall f_3384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3384,2,t0,t1);}
t2=C_mutate((C_word*)lf[111]+1 /* (set! blob->u8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3388,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:562: unpack-copy */
f_3255(t3,lf[6],C_SCHEME_TRUE,lf[112]);}

/* k1781 in f32vector-set! */
static void C_ccall f_1783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1783,2,t0,t1);}
if(C_truep(C_blockp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f32vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2));}
else{
t2=C_a_i_fix_to_flo(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f32vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2));}}

/* k3354 in k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3356,2,t0,t1);}
t2=C_mutate((C_word*)lf[104]+1 /* (set! blob->s8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:554: unpack */
f_3227(t3,lf[8],C_fix(2),lf[105]);}

/* f64vector-set! */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1788,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[18],lf[33]);
t6=C_u_i_64vector_length(t2);
t7=C_i_check_number_2(t4,lf[33]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1795,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1817,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:166: g225 */
t10=t8;
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,t3,C_fix(0),t6,lf[33]);}

/* k3350 in k3346 in k3342 in k3338 in k3334 in k3330 in k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3352,2,t0,t1);}
t2=C_mutate((C_word*)lf[103]+1 /* (set! blob->u8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3356,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:553: unpack */
f_3227(t3,lf[6],C_SCHEME_TRUE,lf[104]);}

/* k4061 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u16vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* f_4065 in k1822 */
static void C_ccall f_4065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4065,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[6],lf[35]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4069,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4091,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:189: g256 */
t8=t6;
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,t3,C_fix(0),t5,lf[35]);}

/* f_4069 */
static void C_ccall f_4069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4069,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_less_or_equal_p(t3,t2);
t8=(C_truep(t7)?C_fixnum_lessp(t2,t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(7,*((C_word*)lf[20]+1),t1,t9,t5,t2,t3,t4);}}

/* k2540 in k2573 in make-f64vector in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_i_check_number_2(((C_word*)((C_word*)t0)[2])[1],lf[55]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)((C_word*)t0)[2])[1]))){
t5=t4;
f_2551(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_a_i_fix_to_flo(&a,1,((C_word*)((C_word*)t0)[2])[1]));
t6=t4;
f_2551(t6,t5);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}}

/* k3264 */
static void C_ccall f_3265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3265,2,t0,t1);}
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=t3;
f_3273(t4,t2);}
else{
t4=C_fixnum_modulo(((C_word*)t0)[7],((C_word*)t0)[2]);
t5=t3;
f_3273(t5,C_eqp(C_fix(0),t4));}}

/* k3326 in k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3328,2,t0,t1);}
t2=C_mutate((C_word*)lf[97]+1 /* (set! u16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:546: pack-copy */
f_3212(t3,lf[10],lf[98]);}

/* k3322 in k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3324,2,t0,t1);}
t2=C_mutate((C_word*)lf[96]+1 /* (set! s8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3328,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:545: pack-copy */
f_3212(t3,lf[8],lf[97]);}

/* k3318 in k1850 in k1846 in k1842 in k1838 in k1834 in k1830 in k1826 in k1822 */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3320,2,t0,t1);}
t2=C_mutate((C_word*)lf[95]+1 /* (set! u8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:544: pack-copy */
f_3212(t3,lf[6],lf[96]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[273] = {
{"f_1721:srfi_2d4_2escm",(void*)f_1721},
{"f_1723:srfi_2d4_2escm",(void*)f_1723},
{"f_1724:srfi_2d4_2escm",(void*)f_1724},
{"f_3273:srfi_2d4_2escm",(void*)f_3273},
{"f_3376:srfi_2d4_2escm",(void*)f_3376},
{"f_3372:srfi_2d4_2escm",(void*)f_3372},
{"f_1754:srfi_2d4_2escm",(void*)f_1754},
{"f_3243:srfi_2d4_2escm",(void*)f_3243},
{"f_3348:srfi_2d4_2escm",(void*)f_3348},
{"f_3344:srfi_2d4_2escm",(void*)f_3344},
{"f_3340:srfi_2d4_2escm",(void*)f_3340},
{"f_3026:srfi_2d4_2escm",(void*)f_3026},
{"f_3108:srfi_2d4_2escm",(void*)f_3108},
{"f_1746:srfi_2d4_2escm",(void*)f_1746},
{"f_1602:srfi_2d4_2escm",(void*)f_1602},
{"f_4091:srfi_2d4_2escm",(void*)f_4091},
{"f_3126:srfi_2d4_2escm",(void*)f_3126},
{"f_3121:srfi_2d4_2escm",(void*)f_3121},
{"f_4097:srfi_2d4_2escm",(void*)f_4097},
{"f_4093:srfi_2d4_2escm",(void*)f_4093},
{"f_3336:srfi_2d4_2escm",(void*)f_3336},
{"f_3332:srfi_2d4_2escm",(void*)f_3332},
{"f_3017:srfi_2d4_2escm",(void*)f_3017},
{"f_3012:srfi_2d4_2escm",(void*)f_3012},
{"f_1603:srfi_2d4_2escm",(void*)f_1603},
{"f_2574:srfi_2d4_2escm",(void*)f_2574},
{"f_4119:srfi_2d4_2escm",(void*)f_4119},
{"f_1817:srfi_2d4_2escm",(void*)f_1817},
{"f4772:srfi_2d4_2escm",(void*)f4772},
{"f_2817:srfi_2d4_2escm",(void*)f_2817},
{"f_1836:srfi_2d4_2escm",(void*)f_1836},
{"f4765:srfi_2d4_2escm",(void*)f4765},
{"f4779:srfi_2d4_2escm",(void*)f4779},
{"f_1832:srfi_2d4_2escm",(void*)f_1832},
{"f_2800:srfi_2d4_2escm",(void*)f_2800},
{"f_1828:srfi_2d4_2escm",(void*)f_1828},
{"f4793:srfi_2d4_2escm",(void*)f4793},
{"f_1824:srfi_2d4_2escm",(void*)f_1824},
{"f_1518:srfi_2d4_2escm",(void*)f_1518},
{"f_3081:srfi_2d4_2escm",(void*)f_3081},
{"f_1512:srfi_2d4_2escm",(void*)f_1512},
{"f_2556:srfi_2d4_2escm",(void*)f_2556},
{"f_2551:srfi_2d4_2escm",(void*)f_2551},
{"f_3469:srfi_2d4_2escm",(void*)f_3469},
{"f_1506:srfi_2d4_2escm",(void*)f_1506},
{"f_3094:srfi_2d4_2escm",(void*)f_3094},
{"f_1500:srfi_2d4_2escm",(void*)f_1500},
{"f_3099:srfi_2d4_2escm",(void*)f_3099},
{"f4786:srfi_2d4_2escm",(void*)f4786},
{"f_3067:srfi_2d4_2escm",(void*)f_3067},
{"f_3072:srfi_2d4_2escm",(void*)f_3072},
{"f_1897:srfi_2d4_2escm",(void*)f_1897},
{"f_2390:srfi_2d4_2escm",(void*)f_2390},
{"f_3424:srfi_2d4_2escm",(void*)f_3424},
{"f_1882:srfi_2d4_2escm",(void*)f_1882},
{"f_3532:srfi_2d4_2escm",(void*)f_3532},
{"f_2868:srfi_2d4_2escm",(void*)f_2868},
{"f_2862:srfi_2d4_2escm",(void*)f_2862},
{"f_3480:srfi_2d4_2escm",(void*)f_3480},
{"f_3482:srfi_2d4_2escm",(void*)f_3482},
{"f_2018:srfi_2d4_2escm",(void*)f_2018},
{"f_2013:srfi_2d4_2escm",(void*)f_2013},
{"f_3555:srfi_2d4_2escm",(void*)f_3555},
{"f_3554:srfi_2d4_2escm",(void*)f_3554},
{"f_1858:srfi_2d4_2escm",(void*)f_1858},
{"f_3416:srfi_2d4_2escm",(void*)f_3416},
{"f_3412:srfi_2d4_2escm",(void*)f_3412},
{"f_2005:srfi_2d4_2escm",(void*)f_2005},
{"f_2284:srfi_2d4_2escm",(void*)f_2284},
{"f_1853:srfi_2d4_2escm",(void*)f_1853},
{"f_1852:srfi_2d4_2escm",(void*)f_1852},
{"f_2885:srfi_2d4_2escm",(void*)f_2885},
{"f_1848:srfi_2d4_2escm",(void*)f_1848},
{"f_2035:srfi_2d4_2escm",(void*)f_2035},
{"f_1715:srfi_2d4_2escm",(void*)f_1715},
{"f_3577:srfi_2d4_2escm",(void*)f_3577},
{"f_1844:srfi_2d4_2escm",(void*)f_1844},
{"f_1840:srfi_2d4_2escm",(void*)f_1840},
{"f_2897:srfi_2d4_2escm",(void*)f_2897},
{"f_2891:srfi_2d4_2escm",(void*)f_2891},
{"f_3148:srfi_2d4_2escm",(void*)f_3148},
{"f_1873:srfi_2d4_2escm",(void*)f_1873},
{"f_1875:srfi_2d4_2escm",(void*)f_1875},
{"f_2823:srfi_2d4_2escm",(void*)f_2823},
{"f_3581:srfi_2d4_2escm",(void*)f_3581},
{"f_2828:srfi_2d4_2escm",(void*)f_2828},
{"f_3153:srfi_2d4_2escm",(void*)f_3153},
{"f_3449:srfi_2d4_2escm",(void*)f_3449},
{"f_3159:srfi_2d4_2escm",(void*)f_3159},
{"f_3440:srfi_2d4_2escm",(void*)f_3440},
{"f_1860:srfi_2d4_2escm",(void*)f_1860},
{"f_1865:srfi_2d4_2escm",(void*)f_1865},
{"f_2834:srfi_2d4_2escm",(void*)f_2834},
{"f_3597:srfi_2d4_2escm",(void*)f_3597},
{"f_3165:srfi_2d4_2escm",(void*)f_3165},
{"f_2251:srfi_2d4_2escm",(void*)f_2251},
{"f_2857:srfi_2d4_2escm",(void*)f_2857},
{"f_3183:srfi_2d4_2escm",(void*)f_3183},
{"f_2851:srfi_2d4_2escm",(void*)f_2851},
{"f_3189:srfi_2d4_2escm",(void*)f_3189},
{"f_1925:srfi_2d4_2escm",(void*)f_1925},
{"f_3400:srfi_2d4_2escm",(void*)f_3400},
{"f_3195:srfi_2d4_2escm",(void*)f_3195},
{"f_3404:srfi_2d4_2escm",(void*)f_3404},
{"f_3408:srfi_2d4_2escm",(void*)f_3408},
{"f_1917:srfi_2d4_2escm",(void*)f_1917},
{"f_2449:srfi_2d4_2escm",(void*)f_2449},
{"f_1947:srfi_2d4_2escm",(void*)f_1947},
{"f_2715:srfi_2d4_2escm",(void*)f_2715},
{"f_3040:srfi_2d4_2escm",(void*)f_3040},
{"f_3045:srfi_2d4_2escm",(void*)f_3045},
{"f_3957:srfi_2d4_2escm",(void*)f_3957},
{"f_3951:srfi_2d4_2escm",(void*)f_3951},
{"f_3953:srfi_2d4_2escm",(void*)f_3953},
{"f_3523:srfi_2d4_2escm",(void*)f_3523},
{"f_3171:srfi_2d4_2escm",(void*)f_3171},
{"f_3177:srfi_2d4_2escm",(void*)f_3177},
{"f_3054:srfi_2d4_2escm",(void*)f_3054},
{"f_3979:srfi_2d4_2escm",(void*)f_3979},
{"f_3985:srfi_2d4_2escm",(void*)f_3985},
{"f_3981:srfi_2d4_2escm",(void*)f_3981},
{"f_2301:srfi_2d4_2escm",(void*)f_2301},
{"f_2766:srfi_2d4_2escm",(void*)f_2766},
{"f_1930:srfi_2d4_2escm",(void*)f_1930},
{"f_3929:srfi_2d4_2escm",(void*)f_3929},
{"f_2464:srfi_2d4_2escm",(void*)f_2464},
{"f_3925:srfi_2d4_2escm",(void*)f_3925},
{"f_3923:srfi_2d4_2escm",(void*)f_3923},
{"f_2182:srfi_2d4_2escm",(void*)f_2182},
{"f_2789:srfi_2d4_2escm",(void*)f_2789},
{"f_2783:srfi_2d4_2escm",(void*)f_2783},
{"f_2195:srfi_2d4_2escm",(void*)f_2195},
{"f_2190:srfi_2d4_2escm",(void*)f_2190},
{"f_2794:srfi_2d4_2escm",(void*)f_2794},
{"f_2482:srfi_2d4_2escm",(void*)f_2482},
{"f_2961:srfi_2d4_2escm",(void*)f_2961},
{"f_1985:srfi_2d4_2escm",(void*)f_1985},
{"f_2726:srfi_2d4_2escm",(void*)f_2726},
{"f_2459:srfi_2d4_2escm",(void*)f_2459},
{"f_2970:srfi_2d4_2escm",(void*)f_2970},
{"f_2732:srfi_2d4_2escm",(void*)f_2732},
{"f_2429:srfi_2d4_2escm",(void*)f_2429},
{"f_2989:srfi_2d4_2escm",(void*)f_2989},
{"f_2984:srfi_2d4_2escm",(void*)f_2984},
{"f_2749:srfi_2d4_2escm",(void*)f_2749},
{"f_2760:srfi_2d4_2escm",(void*)f_2760},
{"f_2998:srfi_2d4_2escm",(void*)f_2998},
{"f_2755:srfi_2d4_2escm",(void*)f_2755},
{"f_3901:srfi_2d4_2escm",(void*)f_3901},
{"f_2927:srfi_2d4_2escm",(void*)f_2927},
{"f_2271:srfi_2d4_2escm",(void*)f_2271},
{"f_2921:srfi_2d4_2escm",(void*)f_2921},
{"f_2933:srfi_2d4_2escm",(void*)f_2933},
{"f_2340:srfi_2d4_2escm",(void*)f_2340},
{"f_2942:srfi_2d4_2escm",(void*)f_2942},
{"f_2721:srfi_2d4_2escm",(void*)f_2721},
{"f_2956:srfi_2d4_2escm",(void*)f_2956},
{"f_3215:srfi_2d4_2escm",(void*)f_3215},
{"f_3212:srfi_2d4_2escm",(void*)f_3212},
{"f4744:srfi_2d4_2escm",(void*)f4744},
{"f_3799:srfi_2d4_2escm",(void*)f_3799},
{"f4751:srfi_2d4_2escm",(void*)f4751},
{"f_2212:srfi_2d4_2escm",(void*)f_2212},
{"f4758:srfi_2d4_2escm",(void*)f4758},
{"f_1476:srfi_2d4_2escm",(void*)f_1476},
{"f_3728:srfi_2d4_2escm",(void*)f_3728},
{"f_1461:srfi_2d4_2escm",(void*)f_1461},
{"toplevel:srfi_2d4_2escm",(void*)C_srfi_2d4_toplevel},
{"f_3227:srfi_2d4_2escm",(void*)f_3227},
{"f_3222:srfi_2d4_2escm",(void*)f_3222},
{"f_3740:srfi_2d4_2escm",(void*)f_3740},
{"f_1494:srfi_2d4_2escm",(void*)f_1494},
{"f_1488:srfi_2d4_2escm",(void*)f_1488},
{"f_3230:srfi_2d4_2escm",(void*)f_3230},
{"f_1482:srfi_2d4_2escm",(void*)f_1482},
{"f_2360:srfi_2d4_2escm",(void*)f_2360},
{"f_4035:srfi_2d4_2escm",(void*)f_4035},
{"f_4037:srfi_2d4_2escm",(void*)f_4037},
{"f_3807:srfi_2d4_2escm",(void*)f_3807},
{"f_3806:srfi_2d4_2escm",(void*)f_3806},
{"f_3819:srfi_2d4_2escm",(void*)f_3819},
{"f_2373:srfi_2d4_2escm",(void*)f_2373},
{"f_4009:srfi_2d4_2escm",(void*)f_4009},
{"f_4007:srfi_2d4_2escm",(void*)f_4007},
{"f_3396:srfi_2d4_2escm",(void*)f_3396},
{"f_3392:srfi_2d4_2escm",(void*)f_3392},
{"f_1662:srfi_2d4_2escm",(void*)f_1662},
{"f_1664:srfi_2d4_2escm",(void*)f_1664},
{"f_2915:srfi_2d4_2escm",(void*)f_2915},
{"f_3255:srfi_2d4_2escm",(void*)f_3255},
{"f_3258:srfi_2d4_2escm",(void*)f_3258},
{"f_2162:srfi_2d4_2escm",(void*)f_2162},
{"f_2903:srfi_2d4_2escm",(void*)f_2903},
{"f_3677:srfi_2d4_2escm",(void*)f_3677},
{"f_2909:srfi_2d4_2escm",(void*)f_2909},
{"f_1695:srfi_2d4_2escm",(void*)f_1695},
{"f_2073:srfi_2d4_2escm",(void*)f_2073},
{"f_4013:srfi_2d4_2escm",(void*)f_4013},
{"f_2619:srfi_2d4_2escm",(void*)f_2619},
{"f_2613:srfi_2d4_2escm",(void*)f_2613},
{"f_3657:srfi_2d4_2escm",(void*)f_3657},
{"f_2093:srfi_2d4_2escm",(void*)f_2093},
{"f_1625:srfi_2d4_2escm",(void*)f_1625},
{"f_2624:srfi_2d4_2escm",(void*)f_2624},
{"f_3668:srfi_2d4_2escm",(void*)f_3668},
{"f_3663:srfi_2d4_2escm",(void*)f_3663},
{"f_2630:srfi_2d4_2escm",(void*)f_2630},
{"f_3639:srfi_2d4_2escm",(void*)f_3639},
{"f_3633:srfi_2d4_2escm",(void*)f_3633},
{"f_3897:srfi_2d4_2escm",(void*)f_3897},
{"f_3895:srfi_2d4_2escm",(void*)f_3895},
{"f_1640:srfi_2d4_2escm",(void*)f_1640},
{"f_3645:srfi_2d4_2escm",(void*)f_3645},
{"f_2106:srfi_2d4_2escm",(void*)f_2106},
{"f_2101:srfi_2d4_2escm",(void*)f_2101},
{"f_3866:srfi_2d4_2escm",(void*)f_3866},
{"f_1672:srfi_2d4_2escm",(void*)f_1672},
{"f_1673:srfi_2d4_2escm",(void*)f_1673},
{"f_1670:srfi_2d4_2escm",(void*)f_1670},
{"f_3615:srfi_2d4_2escm",(void*)f_3615},
{"f_1570:srfi_2d4_2escm",(void*)f_1570},
{"f_3627:srfi_2d4_2escm",(void*)f_3627},
{"f_3621:srfi_2d4_2escm",(void*)f_3621},
{"f_3847:srfi_2d4_2escm",(void*)f_3847},
{"f_3842:srfi_2d4_2escm",(void*)f_3842},
{"f_1563:srfi_2d4_2escm",(void*)f_1563},
{"f_3859:srfi_2d4_2escm",(void*)f_3859},
{"f_3851:srfi_2d4_2escm",(void*)f_3851},
{"f_1592:srfi_2d4_2escm",(void*)f_1592},
{"f_1594:srfi_2d4_2escm",(void*)f_1594},
{"f_2687:srfi_2d4_2escm",(void*)f_2687},
{"f_3603:srfi_2d4_2escm",(void*)f_3603},
{"f_3609:srfi_2d4_2escm",(void*)f_3609},
{"f_2681:srfi_2d4_2escm",(void*)f_2681},
{"f_3826:srfi_2d4_2escm",(void*)f_3826},
{"f_3828:srfi_2d4_2escm",(void*)f_3828},
{"f_2698:srfi_2d4_2escm",(void*)f_2698},
{"f_1633:srfi_2d4_2escm",(void*)f_1633},
{"f_2692:srfi_2d4_2escm",(void*)f_2692},
{"f_1533:srfi_2d4_2escm",(void*)f_1533},
{"f_1532:srfi_2d4_2escm",(void*)f_1532},
{"f_2123:srfi_2d4_2escm",(void*)f_2123},
{"f_1524:srfi_2d4_2escm",(void*)f_1524},
{"f_2647:srfi_2d4_2escm",(void*)f_2647},
{"f_1555:srfi_2d4_2escm",(void*)f_1555},
{"f_2653:srfi_2d4_2escm",(void*)f_2653},
{"f_2658:srfi_2d4_2escm",(void*)f_2658},
{"f_2664:srfi_2d4_2escm",(void*)f_2664},
{"f_3491:srfi_2d4_2escm",(void*)f_3491},
{"f_3368:srfi_2d4_2escm",(void*)f_3368},
{"f_3360:srfi_2d4_2escm",(void*)f_3360},
{"f_3364:srfi_2d4_2escm",(void*)f_3364},
{"f_1761:srfi_2d4_2escm",(void*)f_1761},
{"f_3135:srfi_2d4_2escm",(void*)f_3135},
{"f_4041:srfi_2d4_2escm",(void*)f_4041},
{"f_2521:srfi_2d4_2escm",(void*)f_2521},
{"f_3388:srfi_2d4_2escm",(void*)f_3388},
{"f_1795:srfi_2d4_2escm",(void*)f_1795},
{"f_3380:srfi_2d4_2escm",(void*)f_3380},
{"f_3384:srfi_2d4_2escm",(void*)f_3384},
{"f_1783:srfi_2d4_2escm",(void*)f_1783},
{"f_3356:srfi_2d4_2escm",(void*)f_3356},
{"f_1788:srfi_2d4_2escm",(void*)f_1788},
{"f_3352:srfi_2d4_2escm",(void*)f_3352},
{"f_4063:srfi_2d4_2escm",(void*)f_4063},
{"f_4065:srfi_2d4_2escm",(void*)f_4065},
{"f_4069:srfi_2d4_2escm",(void*)f_4069},
{"f_2541:srfi_2d4_2escm",(void*)f_2541},
{"f_3265:srfi_2d4_2escm",(void*)f_3265},
{"f_3328:srfi_2d4_2escm",(void*)f_3328},
{"f_3324:srfi_2d4_2escm",(void*)f_3324},
{"f_3320:srfi_2d4_2escm",(void*)f_3320},
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
o|eliminated procedure checks: 103 
o|specializations:
o|  1 (assq * list)
o|  2 (memq * list)
o|safe globals: (f64vector-set! f32vector-set! s32vector-set! u32vector-set! s16vector-set! u16vector-set! s8vector-set! u8vector-set! f64vector-length f32vector-length s32vector-length u32vector-length s16vector-length u16vector-length s8vector-length u8vector-length ##sys#check-exact-interval) 
o|Removed `not' forms: 9 
o|inlining procedure: k1466 
o|inlining procedure: k1466 
o|inlining procedure: k1537 
o|inlining procedure: k1537 
o|inlining procedure: k1574 
o|inlining procedure: k1574 
o|inlining procedure: k1607 
o|inlining procedure: k1607 
o|inlining procedure: k1644 
o|inlining procedure: k1644 
o|inlining procedure: k1677 
o|inlining procedure: k1677 
o|inlining procedure: k1702 
o|inlining procedure: k1702 
o|inlining procedure: k1728 
o|inlining procedure: k1728 
o|inlining procedure: k1765 
o|inlining procedure: k1765 
o|inlining procedure: k1785 
o|inlining procedure: k1785 
o|inlining procedure: k1799 
o|inlining procedure: k1799 
o|inlining procedure: k1819 
o|inlining procedure: k1819 
o|inlining procedure: k1862 
o|inlining procedure: k1862 
o|inlining procedure: k1878 
o|inlining procedure: k1878 
o|substituted constant variable: a1895 
o|contracted procedure: k1921 
o|inlining procedure: k1918 
o|inlining procedure: k1933 
o|inlining procedure: k1933 
o|inlining procedure: k1918 
o|contracted procedure: k2009 
o|inlining procedure: k2006 
o|inlining procedure: k2021 
o|inlining procedure: k2021 
o|inlining procedure: k2006 
o|contracted procedure: k2097 
o|inlining procedure: k2094 
o|inlining procedure: k2109 
o|inlining procedure: k2109 
o|inlining procedure: k2094 
o|contracted procedure: k2186 
o|inlining procedure: k2183 
o|inlining procedure: k2198 
o|inlining procedure: k2198 
o|inlining procedure: k2183 
o|contracted procedure: k2275 
o|inlining procedure: k2272 
o|inlining procedure: k2287 
o|inlining procedure: k2287 
o|inlining procedure: k2272 
o|contracted procedure: k2364 
o|inlining procedure: k2361 
o|inlining procedure: k2376 
o|inlining procedure: k2376 
o|inlining procedure: k2361 
o|contracted procedure: k2453 
o|inlining procedure: k2450 
o|inlining procedure: k2467 
o|inlining procedure: k2467 
o|inlining procedure: k2450 
o|contracted procedure: k2545 
o|inlining procedure: k2542 
o|inlining procedure: k2559 
o|inlining procedure: k2559 
o|inlining procedure: k2542 
o|inlining procedure: k2627 
o|inlining procedure: k2627 
o|inlining procedure: k2661 
o|inlining procedure: k2661 
o|inlining procedure: k2695 
o|inlining procedure: k2695 
o|inlining procedure: k2729 
o|inlining procedure: k2729 
o|inlining procedure: k2763 
o|inlining procedure: k2763 
o|inlining procedure: k2797 
o|inlining procedure: k2797 
o|inlining procedure: k2831 
o|inlining procedure: k2831 
o|inlining procedure: k2865 
o|inlining procedure: k2865 
o|inlining procedure: k2945 
o|inlining procedure: k2945 
o|inlining procedure: k2973 
o|inlining procedure: k2973 
o|inlining procedure: k3001 
o|inlining procedure: k3001 
o|inlining procedure: k3029 
o|inlining procedure: k3029 
o|inlining procedure: k3057 
o|inlining procedure: k3057 
o|inlining procedure: k3084 
o|inlining procedure: k3084 
o|inlining procedure: k3111 
o|inlining procedure: k3111 
o|inlining procedure: k3138 
o|inlining procedure: k3138 
o|inlining procedure: k3236 
o|inlining procedure: k3236 
o|inlining procedure: k3266 
o|inlining procedure: k3266 
o|substituted constant variable: a3422 
o|inlining procedure: k3419 
o|inlining procedure: k3437 
o|inlining procedure: k3437 
o|inlining procedure: k3419 
o|inlining procedure: k3476 
o|inlining procedure: k3476 
o|inlining procedure: k3536 
o|inlining procedure: k3536 
o|inlining procedure: k3559 
o|inlining procedure: k3559 
o|inlining procedure: k3671 
o|inlining procedure: k3671 
o|inlining procedure: k3754 
o|inlining procedure: k3754 
o|inlining procedure: k3820 
o|inlining procedure: k3820 
o|inlining procedure: k3852 
o|inlining procedure: k3852 
o|inlining procedure: k3905 
o|inlining procedure: k3905 
o|inlining procedure: k3933 
o|inlining procedure: k3933 
o|inlining procedure: k3961 
o|inlining procedure: k3961 
o|inlining procedure: k3989 
o|inlining procedure: k3989 
o|inlining procedure: k4017 
o|inlining procedure: k4017 
o|inlining procedure: k4045 
o|inlining procedure: k4045 
o|inlining procedure: k4073 
o|inlining procedure: k4073 
o|inlining procedure: k4101 
o|inlining procedure: k4101 
o|simplifications: ((if . 1)) 
o|replaced variables: 283 
o|removed binding forms: 169 
o|substituted constant variable: f_29444196 
o|substituted constant variable: f_29724198 
o|substituted constant variable: f_30004200 
o|substituted constant variable: f_30284202 
o|substituted constant variable: f_30564204 
o|substituted constant variable: f_30834206 
o|substituted constant variable: f_31104208 
o|substituted constant variable: f_31374210 
o|converted assignments to bindings: (wrap1063) 
o|simplifications: ((let . 1)) 
o|replaced variables: 7 
o|removed binding forms: 311 
o|inlining procedure: k1939 
o|inlining procedure: k1939 
o|inlining procedure: k2027 
o|inlining procedure: k2027 
o|inlining procedure: k2115 
o|inlining procedure: k2115 
o|inlining procedure: k2204 
o|inlining procedure: k2204 
o|inlining procedure: k2293 
o|inlining procedure: k2293 
o|inlining procedure: k2382 
o|inlining procedure: k2382 
o|inlining procedure: k2474 
o|inlining procedure: k2474 
o|inlining procedure: k2566 
o|inlining procedure: k2566 
o|inlining procedure: k3747 
o|inlining procedure: k3747 
o|inlining procedure: k3747 
o|removed binding forms: 10 
o|substituted constant variable: r19404359 
o|substituted constant variable: r20284363 
o|substituted constant variable: r21164367 
o|substituted constant variable: r22054371 
o|substituted constant variable: r22944375 
o|substituted constant variable: r23834379 
o|substituted constant variable: r24754383 
o|substituted constant variable: r25674387 
o|removed binding forms: 12 
o|removed conditional forms: 8 
o|removed binding forms: 9 
o|simplifications: ((##core#call . 346) (if . 90)) 
o|  call simplifications:
o|    list
o|    eof-object?
o|    fx>
o|    integer->char
o|    fx-	2
o|    fx*	2
o|    ##sys#list	9
o|    cadr
o|    caddr
o|    symbol?
o|    memq
o|    ##sys#check-byte-vector	2
o|    eq?	7
o|    ##sys#size	7
o|    ##sys#structure?	8
o|    fx>=	9
o|    fx+	12
o|    cons	8
o|    ##sys#check-list	8
o|    car	31
o|    null?	62
o|    cdr	31
o|    ##sys#make-structure	13
o|    ##sys#generic-structure?
o|    ##sys#slot	7
o|    ##sys#foreign-fixnum-argument
o|    ##sys#check-number	4
o|    ##sys#fits-in-int?
o|    negative?
o|    ##sys#fits-in-unsigned-int?
o|    fx<=	18
o|    fx<	20
o|    ##sys#check-structure	37
o|    ##sys#check-exact	36
o|contracted procedure: k1464 
o|contracted procedure: k1469 
o|contracted procedure: k1479 
o|contracted procedure: k1485 
o|contracted procedure: k1491 
o|contracted procedure: k1497 
o|contracted procedure: k1503 
o|contracted procedure: k1509 
o|contracted procedure: k1515 
o|contracted procedure: k1521 
o|contracted procedure: k1527 
o|contracted procedure: k1529 
o|contracted procedure: k1535 
o|contracted procedure: k1547 
o|contracted procedure: k1540 
o|contracted procedure: k1556 
o|contracted procedure: k1566 
o|contracted procedure: k1568 
o|contracted procedure: k1572 
o|contracted procedure: k1584 
o|contracted procedure: k1577 
o|contracted procedure: k1597 
o|contracted procedure: k1599 
o|contracted procedure: k1605 
o|contracted procedure: k1617 
o|contracted procedure: k1610 
o|contracted procedure: k1626 
o|contracted procedure: k1636 
o|contracted procedure: k1638 
o|contracted procedure: k1642 
o|contracted procedure: k1654 
o|contracted procedure: k1647 
o|contracted procedure: k1667 
o|contracted procedure: k1675 
o|contracted procedure: k1687 
o|contracted procedure: k1680 
o|contracted procedure: k1696 
o|contracted procedure: k1705 
o|contracted procedure: k1718 
o|contracted procedure: k1726 
o|contracted procedure: k1738 
o|contracted procedure: k1731 
o|contracted procedure: k1747 
o|contracted procedure: k1757 
o|contracted procedure: k1759 
o|contracted procedure: k1763 
o|contracted procedure: k1775 
o|contracted procedure: k1768 
o|contracted procedure: k1791 
o|contracted procedure: k1793 
o|contracted procedure: k1797 
o|contracted procedure: k1809 
o|contracted procedure: k1802 
o|contracted procedure: k1856 
o|contracted procedure: k1889 
o|contracted procedure: k1893 
o|contracted procedure: k1978 
o|contracted procedure: k1900 
o|contracted procedure: k1972 
o|contracted procedure: k1902 
o|contracted procedure: k1966 
o|contracted procedure: k1904 
o|contracted procedure: k1960 
o|contracted procedure: k1906 
o|contracted procedure: k1954 
o|contracted procedure: k1908 
o|contracted procedure: k1948 
o|contracted procedure: k1910 
o|contracted procedure: k1912 
o|contracted procedure: k1914 
o|contracted procedure: k2066 
o|contracted procedure: k1988 
o|contracted procedure: k2060 
o|contracted procedure: k1990 
o|contracted procedure: k2054 
o|contracted procedure: k1992 
o|contracted procedure: k2048 
o|contracted procedure: k1994 
o|contracted procedure: k2042 
o|contracted procedure: k1996 
o|contracted procedure: k2036 
o|contracted procedure: k1998 
o|contracted procedure: k2000 
o|contracted procedure: k2002 
o|contracted procedure: k2155 
o|contracted procedure: k2076 
o|contracted procedure: k2149 
o|contracted procedure: k2078 
o|contracted procedure: k2143 
o|contracted procedure: k2080 
o|contracted procedure: k2137 
o|contracted procedure: k2082 
o|contracted procedure: k2131 
o|contracted procedure: k2084 
o|contracted procedure: k2125 
o|contracted procedure: k2086 
o|contracted procedure: k2088 
o|contracted procedure: k2090 
o|contracted procedure: k2244 
o|contracted procedure: k2165 
o|contracted procedure: k2238 
o|contracted procedure: k2167 
o|contracted procedure: k2232 
o|contracted procedure: k2169 
o|contracted procedure: k2226 
o|contracted procedure: k2171 
o|contracted procedure: k2220 
o|contracted procedure: k2173 
o|contracted procedure: k2214 
o|contracted procedure: k2175 
o|contracted procedure: k2177 
o|contracted procedure: k2179 
o|contracted procedure: k2333 
o|contracted procedure: k2254 
o|contracted procedure: k2327 
o|contracted procedure: k2256 
o|contracted procedure: k2321 
o|contracted procedure: k2258 
o|contracted procedure: k2315 
o|contracted procedure: k2260 
o|contracted procedure: k2309 
o|contracted procedure: k2262 
o|contracted procedure: k2303 
o|contracted procedure: k2264 
o|contracted procedure: k2266 
o|contracted procedure: k2268 
o|contracted procedure: k2278 
o|contracted procedure: k2422 
o|contracted procedure: k2343 
o|contracted procedure: k2416 
o|contracted procedure: k2345 
o|contracted procedure: k2410 
o|contracted procedure: k2347 
o|contracted procedure: k2404 
o|contracted procedure: k2349 
o|contracted procedure: k2398 
o|contracted procedure: k2351 
o|contracted procedure: k2392 
o|contracted procedure: k2353 
o|contracted procedure: k2355 
o|contracted procedure: k2357 
o|contracted procedure: k2367 
o|contracted procedure: k2514 
o|contracted procedure: k2432 
o|contracted procedure: k2508 
o|contracted procedure: k2434 
o|contracted procedure: k2502 
o|contracted procedure: k2436 
o|contracted procedure: k2496 
o|contracted procedure: k2438 
o|contracted procedure: k2490 
o|contracted procedure: k2440 
o|contracted procedure: k2484 
o|contracted procedure: k2442 
o|contracted procedure: k2444 
o|contracted procedure: k2446 
o|contracted procedure: k2456 
o|contracted procedure: k2606 
o|contracted procedure: k2524 
o|contracted procedure: k2600 
o|contracted procedure: k2526 
o|contracted procedure: k2594 
o|contracted procedure: k2528 
o|contracted procedure: k2588 
o|contracted procedure: k2530 
o|contracted procedure: k2582 
o|contracted procedure: k2532 
o|contracted procedure: k2576 
o|contracted procedure: k2534 
o|contracted procedure: k2536 
o|contracted procedure: k2538 
o|contracted procedure: k2548 
o|contracted procedure: k2616 
o|contracted procedure: k2636 
o|contracted procedure: k2650 
o|contracted procedure: k2670 
o|contracted procedure: k2684 
o|contracted procedure: k2704 
o|contracted procedure: k2718 
o|contracted procedure: k2738 
o|contracted procedure: k2752 
o|contracted procedure: k2772 
o|contracted procedure: k2786 
o|contracted procedure: k2806 
o|contracted procedure: k2820 
o|contracted procedure: k2840 
o|contracted procedure: k2854 
o|contracted procedure: k2874 
o|contracted procedure: k2936 
o|contracted procedure: k2947 
o|contracted procedure: k2958 
o|contracted procedure: k2964 
o|contracted procedure: k2975 
o|contracted procedure: k2986 
o|contracted procedure: k2992 
o|contracted procedure: k3003 
o|contracted procedure: k3014 
o|contracted procedure: k3020 
o|contracted procedure: k3031 
o|contracted procedure: k3042 
o|contracted procedure: k3048 
o|contracted procedure: k3059 
o|contracted procedure: k3069 
o|contracted procedure: k3075 
o|contracted procedure: k3086 
o|contracted procedure: k3096 
o|contracted procedure: k3102 
o|contracted procedure: k3113 
o|contracted procedure: k3123 
o|contracted procedure: k3129 
o|contracted procedure: k3140 
o|contracted procedure: k3150 
o|contracted procedure: k3206 
o|contracted procedure: k3217 
o|contracted procedure: k3219 
o|contracted procedure: k3224 
o|contracted procedure: k3232 
o|contracted procedure: k3234 
o|contracted procedure: k3239 
o|contracted procedure: k3260 
o|contracted procedure: k3262 
o|contracted procedure: k3269 
o|contracted procedure: k3414 
o|contracted procedure: k3462 
o|contracted procedure: k3425 
o|contracted procedure: k3430 
o|contracted procedure: k3432 
o|contracted procedure: k3435 
o|contracted procedure: k3451 
o|contracted procedure: k3442 
o|contracted procedure: k3499 
o|contracted procedure: k3502 
o|contracted procedure: k3505 
o|contracted procedure: k3508 
o|contracted procedure: k3511 
o|contracted procedure: k3514 
o|contracted procedure: k3517 
o|contracted procedure: k3520 
o|contracted procedure: k3474 
o|contracted procedure: k3487 
o|contracted procedure: k3493 
o|contracted procedure: k3526 
o|contracted procedure: k3528 
o|contracted procedure: k3530 
o|contracted procedure: k3534 
o|contracted procedure: k3546 
o|contracted procedure: k3539 
o|contracted procedure: k3557 
o|contracted procedure: k3569 
o|contracted procedure: k3562 
o|contracted procedure: k3588 
o|contracted procedure: k3578 
o|contracted procedure: k3582 
o|contracted procedure: k3585 
o|contracted procedure: k3591 
o|contracted procedure: k3594 
o|contracted procedure: k3721 
o|contracted procedure: k3648 
o|contracted procedure: k3715 
o|contracted procedure: k3650 
o|contracted procedure: k3709 
o|contracted procedure: k3652 
o|contracted procedure: k3703 
o|contracted procedure: k3654 
o|contracted procedure: k3688 
o|contracted procedure: k3658 
o|contracted procedure: k3660 
o|contracted procedure: k3673 
o|contracted procedure: k3682 
o|contracted procedure: k3685 
o|contracted procedure: k3694 
o|contracted procedure: k3791 
o|contracted procedure: k3731 
o|contracted procedure: k3785 
o|contracted procedure: k3733 
o|contracted procedure: k3779 
o|contracted procedure: k3735 
o|contracted procedure: k3773 
o|contracted procedure: k3737 
o|contracted procedure: k3741 
o|contracted procedure: k3743 
o|contracted procedure: k3745 
o|contracted procedure: k3752 
o|contracted procedure: k3768 
o|contracted procedure: k3771 
o|contracted procedure: k3757 
o|contracted procedure: k3765 
o|contracted procedure: k3761 
o|contracted procedure: k3888 
o|contracted procedure: k3810 
o|contracted procedure: k3882 
o|contracted procedure: k3812 
o|contracted procedure: k3876 
o|contracted procedure: k3814 
o|contracted procedure: k3870 
o|contracted procedure: k3816 
o|contracted procedure: k3823 
o|contracted procedure: k3832 
o|contracted procedure: k3855 
o|contracted procedure: k3860 
o|contracted procedure: k3899 
o|contracted procedure: k3903 
o|contracted procedure: k3915 
o|contracted procedure: k3908 
o|contracted procedure: k3927 
o|contracted procedure: k3931 
o|contracted procedure: k3943 
o|contracted procedure: k3936 
o|contracted procedure: k3955 
o|contracted procedure: k3959 
o|contracted procedure: k3971 
o|contracted procedure: k3964 
o|contracted procedure: k3983 
o|contracted procedure: k3987 
o|contracted procedure: k3999 
o|contracted procedure: k3992 
o|contracted procedure: k4011 
o|contracted procedure: k4015 
o|contracted procedure: k4027 
o|contracted procedure: k4020 
o|contracted procedure: k4039 
o|contracted procedure: k4043 
o|contracted procedure: k4055 
o|contracted procedure: k4048 
o|contracted procedure: k4067 
o|contracted procedure: k4071 
o|contracted procedure: k4083 
o|contracted procedure: k4076 
o|contracted procedure: k4095 
o|contracted procedure: k4099 
o|contracted procedure: k4111 
o|contracted procedure: k4104 
o|simplifications: ((let . 18)) 
o|removed binding forms: 332 
o|inlining procedure: "(srfi-4.scm:541) pack" 
o|inlining procedure: "(srfi-4.scm:540) pack" 
o|inlining procedure: "(srfi-4.scm:539) pack" 
o|inlining procedure: "(srfi-4.scm:538) pack" 
o|inlining procedure: "(srfi-4.scm:537) pack" 
o|inlining procedure: "(srfi-4.scm:536) pack" 
o|inlining procedure: "(srfi-4.scm:535) pack" 
o|inlining procedure: "(srfi-4.scm:534) pack" 
o|replaced variables: 30 
o|removed side-effect free assignment to unused variable: pack 
o|substituted constant variable: tag8424740 
o|substituted constant variable: loc8434741 
o|substituted constant variable: tag8424747 
o|substituted constant variable: loc8434748 
o|substituted constant variable: tag8424754 
o|substituted constant variable: loc8434755 
o|substituted constant variable: tag8424761 
o|substituted constant variable: loc8434762 
o|substituted constant variable: tag8424768 
o|substituted constant variable: loc8434769 
o|substituted constant variable: tag8424775 
o|substituted constant variable: loc8434776 
o|substituted constant variable: tag8424782 
o|substituted constant variable: loc8434783 
o|substituted constant variable: tag8424789 
o|substituted constant variable: loc8434790 
o|replaced variables: 8 
o|removed binding forms: 30 
o|removed binding forms: 25 
o|contracted procedure: k3286 
o|contracted procedure: k3290 
o|contracted procedure: k3294 
o|contracted procedure: k3298 
o|contracted procedure: k3302 
o|contracted procedure: k3306 
o|contracted procedure: k3310 
o|contracted procedure: k3314 
o|removed binding forms: 8 
o|direct leaf routine/allocation: doloop400401 0 
o|direct leaf routine/allocation: doloop429430 0 
o|direct leaf routine/allocation: doloop458459 0 
o|direct leaf routine/allocation: doloop487488 0 
o|direct leaf routine/allocation: doloop516517 0 
o|direct leaf routine/allocation: doloop545546 0 
o|direct leaf routine/allocation: doloop574575 0 
o|direct leaf routine/allocation: doloop604605 0 
o|converted assignments to bindings: (doloop400401) 
o|converted assignments to bindings: (doloop429430) 
o|converted assignments to bindings: (doloop458459) 
o|converted assignments to bindings: (doloop487488) 
o|converted assignments to bindings: (doloop516517) 
o|converted assignments to bindings: (doloop545546) 
o|converted assignments to bindings: (doloop574575) 
o|converted assignments to bindings: (doloop604605) 
o|simplifications: ((let . 8)) 
o|customizable procedures: (pack-copy unpack unpack-copy loop1093 wrap1063 doloop10301031 subnvector k3271 k3241 loop821 loop814 loop807 loop800 loop793 loop786 loop779 loop772 doloop729730 doloop716717 doloop703704 doloop690691 doloop677678 doloop664665 doloop651652 doloop638639 k2550 k2458 ##sys#check-exact-interval k1880) 
o|calls to known targets: 105 
o|identified direct recursive calls: f_1930 1 
o|identified direct recursive calls: f_2018 1 
o|identified direct recursive calls: f_2106 1 
o|identified direct recursive calls: f_2195 1 
o|identified direct recursive calls: f_2284 1 
o|identified direct recursive calls: f_2373 1 
o|identified direct recursive calls: f_2464 1 
o|identified direct recursive calls: f_2556 1 
o|identified direct recursive calls: f_2942 1 
o|identified direct recursive calls: f_2970 1 
o|identified direct recursive calls: f_2998 1 
o|identified direct recursive calls: f_3026 1 
o|identified direct recursive calls: f_3054 1 
o|identified direct recursive calls: f_3081 1 
o|identified direct recursive calls: f_3108 1 
o|identified direct recursive calls: f_3135 1 
o|fast box initializations: 18 
o|fast global references: 36 
o|fast global assignments: 5 
o|dropping unused closure argument: f_3523 
o|dropping unused closure argument: f_3212 
o|dropping unused closure argument: f_3799 
o|dropping unused closure argument: f_1461 
o|dropping unused closure argument: f_3227 
o|dropping unused closure argument: f_3255 
*/
/* end of file */
