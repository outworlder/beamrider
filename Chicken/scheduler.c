/* Generated from scheduler.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-09-24 17:50
   Version 4.8.0 (rev 0db1908)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: scheduler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file scheduler.c
   unit: scheduler
*/

#include "chicken.h"

#ifdef HAVE_ERRNO_H
# include <errno.h>
# define C_signal_interrupted_p     C_mk_bool(errno == EINTR)
#else
# define C_signal_interrupted_p     C_SCHEME_FALSE
#endif

#ifdef _WIN32
# if (defined(HAVE_WINSOCK2_H) && defined(HAVE_WS2TCPIP_H))
#  include <winsock2.h>
#  include <ws2tcpip.h>
# else
#  include <winsock.h>
# endif
/* Beware: winsock2.h must come BEFORE windows.h */
# define C_msleep(n)     (Sleep(C_unfix(n)), C_SCHEME_TRUE)
#else
# include <unistd.h>
# include <sys/types.h>
# include <sys/time.h>
# include <time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
#ifdef __CYGWIN__
  if(usleep(C_unfix(ms) * 1000) == -1) return C_SCHEME_FALSE;
#else
  struct timespec ts;
  unsigned long mss = C_unfix(ms);
  ts.tv_sec = mss / 1000;
  ts.tv_nsec = (mss % 1000) * 1000000;
  
  if(nanosleep(&ts, NULL) == -1) return C_SCHEME_FALSE;
#endif
  return C_SCHEME_TRUE;
}
#endif
static fd_set C_fdset_input, C_fdset_output;
#define C_fd_test_input(fd)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_input))
#define C_fd_test_output(fd)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_output))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[51];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,50,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,116,104,114,101,97,100,115,52,52,56,32,107,101,101,112,52,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,52,51,53,32,108,115,116,52,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,102,95,49,52,56,53,32,116,51,52,55,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,51,55,32,103,51,52,52,51,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,51,51,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,51,52,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,49,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,35,35,115,121,115,35,115,99,104,101,100,117,108,101,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,35,35,115,121,115,35,114,101,97,100,121,45,113,117,101,117,101,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,97,100,100,45,116,111,45,114,101,97,100,121,45,113,117,101,117,101,32,116,104,114,101,97,100,49,54,55,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,48,52,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,49,57,55,32,115,116,97,116,101,49,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,118,50,48,55,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,114,101,109,111,118,101,45,102,114,111,109,45,116,105,109,101,111,117,116,45,108,105,115,116,32,116,50,48,52,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,116,108,50,49,54,32,112,114,101,118,50,49,55,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,105,109,101,111,117,116,33,32,116,50,49,50,32,116,109,50,49,51,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,101,114,109,105,110,97,116,105,111,110,33,32,116,50,50,55,32,116,50,50,50,56,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,53,57,32,116,50,50,57,56,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,56,56,32,103,50,57,53,51,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,14),40,102,95,49,50,55,53,32,116,50,50,54,53,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,53,32,103,50,54,50,50,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,53,54,32,109,50,53,49,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,52,49,32,103,50,52,56,50,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,116,104,114,101,97,100,45,107,105,108,108,33,32,116,50,55,57,32,115,50,56,48,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,97,115,105,99,45,117,110,98,108,111,99,107,33,32,116,51,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,8),40,102,95,49,52,53,52,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,100,101,102,97,117,108,116,45,101,120,99,101,112,116,105,111,110,45,104,97,110,100,108,101,114,32,97,114,103,51,49,55,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,52,49,52,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,105,47,111,33,32,116,52,49,48,32,102,100,52,49,49,32,105,47,111,52,49,50,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,52,54,54,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,99,108,101,97,114,45,105,47,111,45,115,116,97,116,101,45,102,111,114,45,116,104,114,101,97,100,33,32,116,52,54,51,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,39),40,102,95,50,48,57,48,32,113,117,101,117,101,52,57,48,32,97,114,103,52,57,49,32,118,97,108,52,57,50,32,105,110,105,116,52,57,51,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,53,48,52,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,48,55,32,105,53,48,56,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,48,48,32,105,53,48,49,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,52,57,55,32,105,52,57,56,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,97,108,108,45,116,104,114,101,97,100,115,32,46,32,116,109,112,52,56,48,52,56,49,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,101,116,99,104,45,97,110,100,45,99,108,101,97,114,45,116,104,114,101,97,100,115,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,114,101,115,116,111,114,101,45,116,104,114,101,97,100,115,32,118,101,99,53,49,57,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,116,104,114,101,97,100,45,117,110,98,108,111,99,107,33,32,116,53,50,52,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub373(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub373(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_SET(fd, &C_fdset_output);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub368(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub368(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_SET(fd, &C_fdset_input);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub364(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub364(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
FD_ZERO(&C_fdset_input);FD_ZERO(&C_fdset_output);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub359(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub359(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int to=(int )C_truep(C_a0);
double tm=(double )C_c_double(C_a1);
struct timeval timeout;timeout.tv_sec = tm / 1000;timeout.tv_usec = fmod(tm, 1000) * 1000;C_return(select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL));
C_ret:
#undef return

return C_r;}

C_noret_decl(f_1903)
static void C_fcall f_1903(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1385)
static void C_ccall f_1385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1979)
static void C_fcall f_1979(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1755)
static void C_fcall f_1755(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1708)
static void C_fcall f_1708(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1376)
static void C_fcall f_1376(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1706)
static void C_fcall f_1706(C_word t0,C_word t1) C_noret;
C_noret_decl(f_933)
static void C_fcall f_933(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1213)
static void C_ccall f_1213(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_921)
static void C_ccall f_921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1918)
static void C_fcall f_1918(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1306)
static void C_fcall f_1306(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1172)
static void C_fcall f_1172(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1506)
static void C_fcall f_1506(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1786)
static void C_ccall f_1786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2138)
static void C_fcall f_2138(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1315)
static void C_ccall f_1315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1475)
static void C_fcall f_1475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externexport void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1330)
static void C_ccall f_1330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_fcall f_1335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1499)
static void C_ccall f_1499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1110)
static void C_ccall f_1110(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1729)
static void C_fcall f_1729(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static C_word C_fcall f_1116(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_833)
static void C_fcall f_833(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1148)
static void C_ccall f_1148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_824)
static void C_ccall f_824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1163)
static void C_fcall f_1163(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_829)
static void C_fcall f_829(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1152)
static void C_fcall f_1152(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_fcall f_2024(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_818)
static void C_fcall f_818(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2001)
static void C_fcall f_2001(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_889)
static void C_fcall f_889(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1656)
static void C_fcall f_1656(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1840)
static void C_fcall f_1840(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1283)
static void C_fcall f_1283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1994)
static void C_ccall f_1994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2047)
static void C_fcall f_2047(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_788)
static void C_ccall f_788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_1903)
static void C_fcall trf_1903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1903(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1903(t0,t1);}

C_noret_decl(trf_1979)
static void C_fcall trf_1979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1979(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1979(t0,t1,t2,t3);}

C_noret_decl(trf_1755)
static void C_fcall trf_1755(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1755(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1755(t0,t1,t2,t3);}

C_noret_decl(trf_1708)
static void C_fcall trf_1708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1708(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1708(t0,t1);}

C_noret_decl(trf_1376)
static void C_fcall trf_1376(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1376(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1376(t0,t1,t2);}

C_noret_decl(trf_1706)
static void C_fcall trf_1706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1706(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1706(t0,t1);}

C_noret_decl(trf_933)
static void C_fcall trf_933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_933(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_933(t0,t1);}

C_noret_decl(trf_1918)
static void C_fcall trf_1918(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1918(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1918(t0,t1,t2);}

C_noret_decl(trf_1306)
static void C_fcall trf_1306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1306(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1306(t0,t1,t2);}

C_noret_decl(trf_1172)
static void C_fcall trf_1172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1172(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1172(t0,t1);}

C_noret_decl(trf_1506)
static void C_fcall trf_1506(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1506(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1506(t0,t1,t2);}

C_noret_decl(trf_2138)
static void C_fcall trf_2138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2138(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2138(t0,t1);}

C_noret_decl(trf_1475)
static void C_fcall trf_1475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1475(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1475(t0,t1,t2);}

C_noret_decl(trf_1335)
static void C_fcall trf_1335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1335(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1335(t0,t1);}

C_noret_decl(trf_1729)
static void C_fcall trf_1729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1729(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1729(t0,t1,t2,t3);}

C_noret_decl(trf_833)
static void C_fcall trf_833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_833(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_833(t0,t1);}

C_noret_decl(trf_1163)
static void C_fcall trf_1163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1163(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1163(t0,t1,t2,t3);}

C_noret_decl(trf_829)
static void C_fcall trf_829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_829(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_829(t0,t1);}

C_noret_decl(trf_1152)
static void C_fcall trf_1152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1152(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1152(t0,t1);}

C_noret_decl(trf_2024)
static void C_fcall trf_2024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2024(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2024(t0,t1,t2);}

C_noret_decl(trf_818)
static void C_fcall trf_818(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_818(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_818(t0,t1);}

C_noret_decl(trf_2001)
static void C_fcall trf_2001(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2001(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2001(t0,t1,t2,t3);}

C_noret_decl(trf_889)
static void C_fcall trf_889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_889(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_889(t0,t1,t2);}

C_noret_decl(trf_1656)
static void C_fcall trf_1656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1656(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1656(t0,t1,t2);}

C_noret_decl(trf_1840)
static void C_fcall trf_1840(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1840(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1840(t0,t1);}

C_noret_decl(trf_1283)
static void C_fcall trf_1283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1283(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1283(t0,t1,t2);}

C_noret_decl(trf_2047)
static void C_fcall trf_2047(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2047(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2047(t0,t1,t2,t3);}

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

/* ##sys#clear-i/o-state-for-thread! */
static void C_fcall f_1903(C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1903,NULL,2,t1,t2);}
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_slot(t2,C_fix(11));
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1916,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1918,a[2]=t5,a[3]=t2,a[4]=t8,a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_1918(t10,t6,*((C_word*)lf[11]+1));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1384 in for-each-loop288 in k1338 in k1336 in k1333 in k1329 in thread-kill! */
static void C_ccall f_1385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1376(t3,((C_word*)t0)[4],t2);}

/* loop in all-threads */
static void C_fcall f_1979(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1979,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1994,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* scheduler.scm:488: cns */
t9=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t6,lf[8],C_SCHEME_FALSE,t8,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2001,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2001(t7,t1,*((C_word*)lf[11]+1),t3);}}

/* k1814 in loop2 in loop in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1815,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:445: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k1816 in k1814 in loop2 in loop in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_ccall f_1817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:446: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1755(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* loop2 in loop in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_fcall f_1755(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(11);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1755,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_slot(((C_word*)t0)[3],C_fix(1));
/* scheduler.scm:432: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1729(t6,t1,t4,t5);}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1786,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t7=C_slot(((C_word*)t0)[3],C_fix(1));
/* scheduler.scm:433: loop */
t8=((C_word*)((C_word*)t0)[4])[1];
f_1729(t8,t5,t6,t7);}}
else{
t4=C_u_i_car(t2);
t5=C_slot(t4,C_fix(11));
if(C_truep(C_slot(t4,C_fix(13)))){
t6=t2;
t7=C_u_i_cdr(t6);
/* scheduler.scm:439: loop2 */
t26=t1;
t27=t7;
t28=t3;
t1=t26;
t2=t27;
t3=t28;
goto loop;}
else{
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_car(t5);
t7=C_eqp(((C_word*)t0)[5],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1840,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=C_u_i_cdr(t5);
t10=C_eqp(t9,C_SCHEME_TRUE);
t11=(C_truep(t10)?t10:C_eqp(t9,lf[19]));
if(C_truep(t11)){
t12=t8;
f_1840(t12,((C_word*)t0)[7]);}
else{
t12=C_eqp(t9,C_SCHEME_FALSE);
t13=(C_truep(t12)?t12:C_eqp(t9,lf[20]));
if(C_truep(t13)){
t14=t8;
f_1840(t14,((C_word*)t0)[8]);}
else{
t14=C_eqp(t9,lf[21]);
if(C_truep(t14)){
t15=t8;
f_1840(t15,(C_truep(((C_word*)t0)[7])?((C_word*)t0)[7]:((C_word*)t0)[8]));}
else{
t15=C_halt(lf[22]);
t16=t8;
f_1840(t16,t15);}}}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_halt(lf[23]));}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1815,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(t4,C_fix(4)))){
/* scheduler.scm:444: ##sys#remove-from-timeout-list */
t7=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t7=t6;
f_1815(2,t7,C_SCHEME_UNDEFINED);}}}}}

/* k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_fcall f_1708(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1708,NULL,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_i_set_i_slot(*((C_word*)lf[15]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:174: ##sys#thread-unblock! */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],*((C_word*)lf[15]+1));}
else{
if(C_truep(C_fixnum_greaterp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1727,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1729,a[2]=t5,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1729(t7,t3,t1,*((C_word*)lf[11]+1));}
else{
t3=((C_word*)t0)[2];
f_824(2,t3,C_SCHEME_UNDEFINED);}}}

/* for-each-loop288 in k1338 in k1336 in k1333 in k1329 in thread-kill! */
static void C_fcall f_1376(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1376,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1385,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:298: g289 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1699 in k821 in loop1 in k812 in schedule */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1700,2,t0,t1);}
t2=C_i_pairp(lf[10]);
t3=C_i_pairp(lf[13]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1706,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_truep(t2)?C_i_not(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_u_i_caar(lf[10]);
t7=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t8=C_a_i_flonum_difference(&a,2,t6,t7);
t9=t4;
f_1706(t9,C_i_flonum_max(lf[24],t8));}
else{
t6=t4;
f_1706(t6,lf[24]);}}

/* k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_fcall f_1706(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1706,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t1;
t4=t2;
f_1708(t4,stub359(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t3));}
else{
t3=t1;
t4=t2;
f_1708(t4,stub359(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t3));}}

/* k931 in loop in loop1 in k812 in schedule */
static void C_fcall f_933(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_933,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_caar(lf[10]);
t3=C_a_i_flonum_difference(&a,2,t2,((C_word*)t0)[2]);
t4=C_quickflonumtruncate(t3);
t5=C_i_fixnum_max(C_fix(0),t4);
if(C_truep(C_msleep(t5))){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_mk_bool(C_signal_interrupted_p);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1914 in clear-i/o-state-for-thread! */
static void C_ccall f_1916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##sys#thread-unblock! */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2129,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(3));
t4=C_eqp(lf[31],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2138,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_2138(t6,t4);}
else{
t6=C_slot(t2,C_fix(3));
t7=t5;
f_2138(t7,C_eqp(lf[50],t6));}}

/* ##sys#thread-block-for-termination! */
static void C_ccall f_1213(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1213,4,t0,t1,t2,t3);}
t4=C_slot(t3,C_fix(3));
t5=C_eqp(t4,lf[34]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[35]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_slot(t3,C_fix(12));
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_i_setslot(t3,C_fix(12),t8);
t10=C_i_setslot(t2,C_fix(3),lf[31]);
t11=C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_i_setslot(t2,C_fix(11),t3));}}

/* k1402 in k1329 in thread-kill! */
static void C_ccall f_1403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1335(t2,C_i_setslot(((C_word*)t0)[3],C_fix(2),t1));}

/* k920 in k918 in loop in loop1 in k812 in schedule */
static void C_ccall f_921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:137: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_889(t4,((C_word*)t0)[4],t3);}

/* loop in clear-i/o-state-for-thread! */
static void C_fcall f_1918(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1918,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1937,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_cdr(t3);
/* scheduler.scm:470: ##sys#delq */
t8=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[3],t7);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1954,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* scheduler.scm:475: loop */
t12=t6;
t13=t8;
t1=t12;
t2=t13;
goto loop;}}}

/* ##sys#interrupt-hook */
static void C_ccall f_1087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1087,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1091,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(t2,C_fix(255));
if(C_truep(t5)){
t6=*((C_word*)lf[1]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1104,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp);
t8=C_i_setslot(*((C_word*)lf[1]+1),C_fix(1),t7);
/* scheduler.scm:221: ##sys#schedule */
t9=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t4);}
else{
/* scheduler.scm:222: oldhook */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t2,t3);}}

/* k1643 in thread-block-for-i/o! */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1644,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[31]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(((C_word*)t0)[2],C_fix(11),t4));}

/* ##sys#thread-block-for-i/o! */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1640,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1644,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1656,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1656(t9,t5,*((C_word*)lf[11]+1));}

/* k918 in loop in loop1 in k812 in schedule */
static void C_ccall f_919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:136: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* ##sys#restore-threads */
static void C_ccall f_2109(C_word c,C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2109,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_mutate(&lf[13] /* (set! ready-queue-head ...) */,t3);
t5=C_slot(t2,C_fix(1));
t6=C_mutate(&lf[14] /* (set! ready-queue-tail ...) */,t5);
t7=C_slot(t2,C_fix(2));
t8=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t7);
t9=C_slot(t2,C_fix(3));
t10=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}

/* ##sys#thread-basic-unblock! */
static void C_ccall f_1423(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1423,3,t0,t1,t2);}
t3=C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t4=C_i_set_i_slot(t2,C_fix(4),C_SCHEME_FALSE);
/* scheduler.scm:310: ##sys#add-to-ready-queue */
t5=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}

/* k1417 in k1329 in thread-kill! */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1335(t2,C_i_setslot(((C_word*)t0)[3],C_fix(12),t1));}

/* k1266 */
static void C_ccall f_1268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(3),C_SCHEME_END_OF_LIST));}

/* k1514 in for-each-loop337 in loop in k821 in loop1 in k812 in schedule */
static void C_ccall f_1515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1506(t3,((C_word*)t0)[4],t2);}

/* for-each-loop241 in thread-kill! */
static void C_fcall f_1306(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1306,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1315,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:266: g242 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1170 in loop in k1151 in thread-block-for-timeout! */
static void C_fcall f_1172(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1172,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_setslot(((C_word*)t0)[2],C_fix(1),t3));}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* scheduler.scm:249: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1163(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5]);}}

/* k1090 in interrupt-hook */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:222: oldhook */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* f_1256 in thread-kill! */
static void C_ccall f_1256(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1256,3,t0,t1,t2);}
t3=C_i_set_i_slot(t2,C_fix(2),C_SCHEME_FALSE);
t4=C_i_set_i_slot(t2,C_fix(4),C_SCHEME_TRUE);
t5=C_i_set_i_slot(t2,C_fix(5),C_SCHEME_FALSE);
t6=C_slot(t2,C_fix(3));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1268,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_set_i_slot(t2,C_fix(3),C_SCHEME_END_OF_LIST));}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1275,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1283,a[2]=t10,a[3]=t8,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1283(t12,t7,t6);}}

/* for-each-loop337 in loop in k821 in loop1 in k812 in schedule */
static void C_fcall f_1506(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1506,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1515,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:340: g338 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1785 in loop2 in loop in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_ccall f_1786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1786,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k2136 in thread-unblock! */
static void C_fcall f_2138(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2138,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:527: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##sys#thread-kill! */
static void C_ccall f_1326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1326,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1330,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(8));
if(C_truep(C_i_nullp(t6))){
t7=C_SCHEME_UNDEFINED;
t8=t4;
f_1330(2,t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1256,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1306,a[2]=t9,a[3]=t7,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_1306(t11,t4,t6);}}

/* k2141 in k2139 in k2136 in thread-unblock! */
static void C_ccall f_2142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:529: ##sys#thread-basic-unblock! */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2139 in k2136 in thread-unblock! */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:528: ##sys#clear-i/o-state-for-thread! */
f_1903(t2,((C_word*)t0)[3]);}

/* k1314 in for-each-loop241 in thread-kill! */
static void C_ccall f_1315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1306(t3,((C_word*)t0)[4],t2);}

/* f_1485 in loop in k821 in loop1 in k812 in schedule */
static void C_ccall f_1485(C_word c,C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1485,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
t4=C_slot(t3,C_fix(1));
t5=t1;
t6=C_eqp(t4,C_SCHEME_TRUE);
t7=(C_truep(t6)?t6:C_eqp(t4,lf[19]));
if(C_truep(t7)){
t8=t5;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub368(C_SCHEME_UNDEFINED,((C_word*)t0)[2]));}
else{
t8=C_eqp(t4,C_SCHEME_FALSE);
t9=(C_truep(t8)?t8:C_eqp(t4,lf[20]));
if(C_truep(t9)){
t10=t5;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub373(C_SCHEME_UNDEFINED,((C_word*)t0)[2]));}
else{
t10=C_eqp(t4,lf[21]);
if(C_truep(t10)){
t11=stub368(C_SCHEME_UNDEFINED,((C_word*)t0)[2]);
t12=t5;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub373(C_SCHEME_UNDEFINED,((C_word*)t0)[2]));}
else{
t11=C_halt(lf[25]);
t12=t5;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}}}}

/* loop in k821 in loop1 in k812 in schedule */
static void C_fcall f_1475(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1475,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_caar(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1485,a[2]=t3,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1499,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1506,a[2]=t10,a[3]=t4,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1506(t12,t8,t7);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("scheduler_toplevel"));
C_check_nursery_minimum(49);
if(!C_demand(49)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(404)){
C_save(t1);
C_rereclaim2(404*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(49);
C_initialize_lf(lf,51);
lf[0]=C_h_intern(&lf[0],12,"\003sysschedule");
lf[1]=C_h_intern(&lf[1],18,"\003syscurrent-thread");
lf[2]=C_h_intern(&lf[2],17,"\003sysdynamic-winds");
lf[3]=C_h_intern(&lf[3],18,"\003sysstandard-input");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],18,"\003sysstandard-error");
lf[6]=C_h_intern(&lf[6],29,"\003syscurrent-exception-handler");
lf[7]=C_h_intern(&lf[7],28,"\003syscurrent-parameter-vector");
lf[8]=C_h_intern(&lf[8],5,"ready");
lf[9]=C_h_intern(&lf[9],7,"running");
lf[11]=C_h_intern(&lf[11],11,"\003sysfd-list");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\010deadlock");
lf[15]=C_h_intern(&lf[15],21,"\003sysprimordial-thread");
lf[16]=C_h_intern(&lf[16],19,"\003systhread-unblock!");
lf[17]=C_h_intern(&lf[17],25,"\003systhread-basic-unblock!");
lf[18]=C_h_intern(&lf[18],28,"\003sysremove-from-timeout-list");
lf[19]=C_h_intern(&lf[19],6,"\000input");
lf[20]=C_h_intern(&lf[20],7,"\000output");
lf[21]=C_h_intern(&lf[21],4,"\000all");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000!fdset-test: invalid i/o direction");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\0007thread is registered for I/O on unknown file-descriptor");
lf[24]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000 fdset-set: invalid i/o direction");
lf[27]=C_h_intern(&lf[27],22,"\003sysadd-to-ready-queue");
lf[28]=C_h_intern(&lf[28],15,"\003sysready-queue");
lf[29]=C_h_intern(&lf[29],18,"\003sysinterrupt-hook");
lf[30]=C_h_intern(&lf[30],29,"\003systhread-block-for-timeout!");
lf[31]=C_h_intern(&lf[31],7,"blocked");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\0000##sys#thread-block-for-timeout!: invalid timeout");
lf[33]=C_h_intern(&lf[33],33,"\003systhread-block-for-termination!");
lf[34]=C_h_intern(&lf[34],4,"dead");
lf[35]=C_h_intern(&lf[35],10,"terminated");
lf[36]=C_h_intern(&lf[36],16,"\003systhread-kill!");
lf[37]=C_h_intern(&lf[37],18,"condition-variable");
lf[38]=C_h_intern(&lf[38],8,"\003sysdelq");
lf[39]=C_h_intern(&lf[39],6,"thread");
lf[40]=C_h_intern(&lf[40],29,"\003sysdefault-exception-handler");
lf[41]=C_h_intern(&lf[41],10,"\003syssignal");
lf[42]=C_h_intern(&lf[42],26,"\003sysshow-exception-warning");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\011in thread");
lf[44]=C_h_intern(&lf[44],25,"\003systhread-block-for-i/o!");
lf[45]=C_h_intern(&lf[45],15,"\003sysall-threads");
lf[46]=C_h_intern(&lf[46],3,"i/o");
lf[47]=C_h_intern(&lf[47],7,"timeout");
lf[48]=C_h_intern(&lf[48],27,"\003sysfetch-and-clear-threads");
lf[49]=C_h_intern(&lf[49],19,"\003sysrestore-threads");
lf[50]=C_h_intern(&lf[50],8,"sleeping");
C_register_lf2(lf,51,create_ptable());
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#schedule ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_788,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t3=lf[13] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[14] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_993,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#add-to-ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_997,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[29]+1);
t8=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1087,a[2]=t7,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t9=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t10=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#remove-from-timeout-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1110,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[30]+1 /* (set! ##sys#thread-block-for-timeout! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1148,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[33]+1 /* (set! ##sys#thread-block-for-termination! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1213,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[36]+1 /* (set! ##sys#thread-kill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1326,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[17]+1 /* (set! ##sys#thread-basic-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1423,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[40]+1 /* (set! ##sys#default-exception-handler ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1434,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t16=C_set_block_item(lf[11] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t17=C_mutate((C_word*)lf[44]+1 /* (set! ##sys#thread-block-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1640,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[26] /* (set! ##sys#clear-i/o-state-for-thread! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1903,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#all-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1964,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#fetch-and-clear-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2099,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[49]+1 /* (set! ##sys#restore-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2109,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[16]+1 /* (set! ##sys#thread-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2129,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t23=t1;
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,C_SCHEME_UNDEFINED);}

/* k1338 in k1336 in k1333 in k1329 in thread-kill! */
static void C_ccall f_1339(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1339,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),((C_word*)t0)[3]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_FALSE);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_END_OF_LIST);
t6=C_slot(((C_word*)t0)[2],C_fix(12));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1352,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_set_i_slot(((C_word*)t0)[2],C_fix(12),C_SCHEME_END_OF_LIST));}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1359,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1376,a[2]=t10,a[3]=t8,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1376(t12,t7,t6);}}

/* k1336 in k1333 in k1329 in thread-kill! */
static void C_ccall f_1337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:291: ##sys#clear-i/o-state-for-thread! */
f_1903(t2,((C_word*)t0)[2]);}

/* k1329 in thread-kill! */
static void C_ccall f_1330(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1330,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(11));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(t2,lf[37]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1403,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(2));
/* scheduler.scm:287: ##sys#delq */
t6=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[2],t5);}
else{
if(C_truep(C_i_structurep(t2,lf[39]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1418,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(12));
/* scheduler.scm:289: ##sys#delq */
t6=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[2],t5);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t3;
f_1335(t5,t4);}}}

/* k1333 in k1329 in thread-kill! */
static void C_fcall f_1335(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1335,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:290: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1497 in loop in k821 in loop1 in k812 in schedule */
static void C_ccall f_1499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:346: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1475(t4,((C_word*)t0)[4],t3);}

/* f_1359 in k1338 in k1336 in k1333 in k1329 in thread-kill! */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1359,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
/* scheduler.scm:302: ##sys#thread-basic-unblock! */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1350 in k1338 in k1336 in k1333 in k1329 in thread-kill! */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(12),C_SCHEME_END_OF_LIST));}

/* ##sys#remove-from-timeout-list */
static void C_ccall f_1110(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1110,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1116,a[2]=t2,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1116(t3,lf[10],C_SCHEME_FALSE));}

/* loop in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_fcall f_1729(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1729,NULL,4,t0,t1,t2,t3);}
t4=C_i_zerop(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t3));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_u_i_car(t3);
t7=C_u_i_car(t6);
t8=C_fd_test_input(t7);
t9=C_fd_test_output(t7);
t10=(C_truep(t8)?t8:t9);
if(C_truep(t10)){
t11=C_u_i_cdr(t6);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1755,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t13,a[7]=t8,a[8]=t9,a[9]=((C_word)li1),tmp=(C_word)a,a+=10,tmp));
t15=((C_word*)t13)[1];
f_1755(t15,t1,t11,C_SCHEME_END_OF_LIST);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1880,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t12=t3;
t13=C_u_i_cdr(t12);
/* scheduler.scm:455: loop */
t20=t11;
t21=t2;
t22=t13;
t1=t20;
t2=t21;
t3=t22;
goto loop;}}}

/* k1725 in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_ccall f_1727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];
f_824(2,t3,t2);}

/* loop in remove-from-timeout-list */
static C_word C_fcall f_1116(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_truep(C_i_nullp(t1))){
t3=t1;
return(t3);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_slot(t3,C_fix(1));
t6=C_eqp(t5,((C_word*)t0)[2]);
if(C_truep(t6)){
if(C_truep(t2)){
return(C_i_setslot(t2,C_fix(1),t4));}
else{
t7=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t4);
return(t7);}}
else{
t10=t4;
t11=t1;
t1=t10;
t2=t11;
goto loop;}}}

/* k832 in loop2 in k823 in k821 in loop1 in k812 in schedule */
static void C_fcall f_833(C_word t0,C_word t1){
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
t2=t1;
if(C_truep(t2)){
t3=C_slot(t1,C_fix(3));
t4=C_eqp(t3,lf[8]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
t6=t1;
t7=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#current-thread ...) */,t6);
t8=C_i_setslot(t6,C_fix(3),lf[9]);
t9=C_slot(t6,C_fix(5));
t10=C_slot(t9,C_fix(0));
t11=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#dynamic-winds ...) */,t10);
t12=C_slot(t9,C_fix(1));
t13=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,t12);
t14=C_slot(t9,C_fix(2));
t15=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#standard-output ...) */,t14);
t16=C_slot(t9,C_fix(3));
t17=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#standard-error ...) */,t16);
t18=C_slot(t9,C_fix(4));
t19=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#current-exception-handler ...) */,t18);
t20=C_slot(t9,C_fix(5));
t21=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#current-parameter-vector ...) */,t20);
t22=C_slot(t6,C_fix(9));
t23=C_set_initial_timer_interrupt_period(t22);
t24=C_slot(t6,C_fix(1));
/* scheduler.scm:103: g118 */
t25=t24;
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,t5);}
else{
/* scheduler.scm:169: loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_829(t5,((C_word*)t0)[2]);}}
else{
if(C_truep(C_i_nullp(lf[10]))){
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_halt(lf[12]));}
else{
/* scheduler.scm:167: loop1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_818(t3,((C_word*)t0)[2]);}}
else{
/* scheduler.scm:167: loop1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_818(t3,((C_word*)t0)[2]);}}}

/* ##sys#thread-block-for-timeout! */
static void C_ccall f_1148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1148,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1152,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_flonump(t3))){
t5=t3;
t6=t4;
f_1152(t6,(C_truep(C_flonum_greaterp(t5,lf[24]))?C_SCHEME_UNDEFINED:C_halt(lf[32])));}
else{
t5=t4;
f_1152(t5,C_halt(lf[32]));}}

/* k821 in loop1 in k812 in schedule */
static void C_ccall f_822(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_i_set_i_slot(*((C_word*)lf[15]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:174: ##sys#thread-unblock! */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,*((C_word*)lf[15]+1));}
else{
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
t3=C_SCHEME_UNDEFINED;
t4=t2;
f_824(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1700,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=stub364(C_SCHEME_UNDEFINED);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1475,a[2]=t6,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1475(t8,t3,*((C_word*)lf[11]+1));}}}

/* k823 in k821 in loop1 in k812 in schedule */
static void C_ccall f_824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_824,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_829,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_829(t5,((C_word*)t0)[3]);}

/* loop in k1151 in thread-block-for-timeout! */
static void C_fcall f_1163(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1163,NULL,4,t0,t1,t2,t3);}
t4=C_i_nullp(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1172,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_1172(t6,t4);}
else{
t6=C_u_i_caar(t2);
t7=t5;
f_1172(t7,C_flonum_lessp(((C_word*)t0)[2],t6));}}

/* k812 in schedule */
static void C_ccall f_813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_813,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_818,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_818(t5,((C_word*)t0)[3]);}

/* k2017 in loop in loop in all-threads */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:491: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2001(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop2 in k823 in k821 in loop1 in k812 in schedule */
static void C_fcall f_829(C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_829,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_833,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=lf[13];
if(C_truep(C_i_nullp(lf[13]))){
t4=t2;
f_833(t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(1));
t5=C_mutate(&lf[13] /* (set! ready-queue-head ...) */,t4);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
t7=lf[14] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t8=C_u_i_car(t3);
t9=t2;
f_833(t9,t8);}
else{
t7=C_u_i_car(t3);
t8=t2;
f_833(t8,t7);}}}

/* k1153 in k1151 in thread-block-for-timeout! */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[31]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_setslot(((C_word*)t0)[2],C_fix(4),((C_word*)t0)[4]));}

/* k1151 in thread-block-for-timeout! */
static void C_fcall f_1152(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1152,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1163,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1163(t6,t2,lf[10],C_SCHEME_FALSE);}

/* ##sys#all-threads */
static void C_ccall f_1964(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_1964r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1964r(t0,t1,t2);}}

static void C_ccall f_1964r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(10);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2090,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp):C_u_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_slot(t2,C_fix(1)));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_u_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_slot(t6,C_fix(1)));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1979,a[2]=t12,a[3]=t4,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_1979(t14,t1,lf[13],t8);}

/* k1441 in k1437 in default-exception-handler */
static void C_ccall f_1442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:329: ##sys#schedule */
t2=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* loop in loop in loop in all-threads */
static void C_fcall f_2024(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2024,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2040,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
/* scheduler.scm:495: loop */
t9=t4;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}

/* loop1 in k812 in schedule */
static void C_fcall f_818(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_818,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_822,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[10]))){
t3=t2;
f_822(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_889,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_889(t7,t2,lf[10]);}}

/* f_1104 in interrupt-hook */
static void C_ccall f_1104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1104,2,t0,t1);}
/* scheduler.scm:220: oldhook */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* ##sys#default-exception-handler */
static void C_ccall f_1434(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1434,3,t0,t1,t2);}
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1438,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_abort_on_thread_exceptions))){
t5=*((C_word*)lf[15]+1);
t6=C_slot(*((C_word*)lf[15]+1),C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1454,a[2]=t6,a[3]=t2,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp);
t8=C_i_setslot(*((C_word*)lf[15]+1),C_fix(1),t7);
/* scheduler.scm:324: ##sys#thread-unblock! */
t9=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t4,*((C_word*)lf[15]+1));}
else{
/* scheduler.scm:326: ##sys#show-exception-warning */
t5=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,lf[43],*((C_word*)lf[1]+1));}}

/* k1953 in loop in clear-i/o-state-for-thread! */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1954,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k1437 in default-exception-handler */
static void C_ccall f_1438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1438,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(7),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1442,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:328: ##sys#thread-kill! */
t4=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[35]);}

/* loop in loop in all-threads */
static void C_fcall f_2001(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2001,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_caar(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2019,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2024,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t12,a[6]=((C_word)li33),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_2024(t14,t7,t10);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2047,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2047(t7,t1,lf[10],t3);}}

/* f_1454 in default-exception-handler */
static void C_ccall f_1454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1457,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:322: ##sys#signal */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1456 */
static void C_ccall f_1457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:323: ptx */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* loop in loop1 in k812 in schedule */
static void C_fcall f_889(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_889,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_caar(t2);
t4=t2;
t5=C_u_i_car(t4);
t6=C_u_i_cdr(t5);
t7=C_slot(t6,C_fix(4));
if(C_truep(C_i_equalp(t3,t7))){
if(C_truep(C_flonum_greater_or_equal_p(((C_word*)t0)[2],t3))){
t8=C_i_set_i_slot(t6,C_fix(13),C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_919,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:135: ##sys#clear-i/o-state-for-thread! */
f_1903(t9,t6);}
else{
t8=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t2);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[13]))){
t10=C_i_nullp(*((C_word*)lf[11]+1));
t11=t9;
f_933(t11,(C_truep(t10)?C_i_pairp(lf[10]):C_SCHEME_FALSE));}
else{
t10=t9;
f_933(t10,C_SCHEME_FALSE);}}}
else{
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:155: loop */
t17=t1;
t18=t9;
t1=t17;
t2=t18;
goto loop;}}}

/* k1841 in k1838 in loop2 in loop in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_ccall f_1842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:452: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* loop in thread-block-for-i/o! */
static void C_fcall f_1656(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1656,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,*((C_word*)lf[11]+1));
t5=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=C_u_i_cdr(t3);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_setslot(t3,C_fix(1),t7));}
else{
t6=t2;
t7=C_u_i_cdr(t6);
/* scheduler.scm:395: loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* k1838 in loop2 in loop in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_fcall f_1840(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1840,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(((C_word*)t0)[6],C_fix(4)))){
/* scheduler.scm:451: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t3=t2;
f_1842(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* scheduler.scm:454: loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1755(t5,((C_word*)t0)[4],t3,t4);}}

/* k1843 in k1841 in k1838 in loop2 in loop in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:453: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1755(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* k2061 in loop in loop in loop in all-threads */
static void C_ccall f_2062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:498: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2047(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* for-each-loop255 */
static void C_fcall f_1283(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1283,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1292,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:273: g256 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1993 in loop in all-threads */
static void C_ccall f_1994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:488: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1979(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_1275 */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1275,3,t0,t1,t2);}
/* scheduler.scm:276: ##sys#thread-unblock! */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* loop in loop in loop in all-threads */
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2047,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2062,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_caar(t2);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
/* scheduler.scm:498: cns */
t11=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t6,lf[47],t7,t10,t3);}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1879 in loop in k1707 in k1705 in k1699 in k821 in loop1 in k812 in schedule */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1880,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k2039 in loop in loop in loop in all-threads */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:495: cns */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[46],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* f_2090 in all-threads */
static void C_ccall f_2090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2090,6,t0,t1,t2,t3,t4,t5);}
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,t4,t5));}

/* ##sys#fetch-and-clear-threads */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2099,2,t0,t1);}
t2=C_a_i_vector4(&a,4,lf[13],lf[14],*((C_word*)lf[11]+1),lf[10]);
t3=lf[13] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[14] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_set_block_item(lf[11] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t6=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}

/* ##sys#schedule */
static void C_ccall f_788(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_788,2,t0,t1);}
t2=*((C_word*)lf[1]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_slot(*((C_word*)lf[1]+1),C_fix(3));
t6=C_slot(*((C_word*)lf[1]+1),C_fix(5));
t7=C_i_setslot(t6,C_fix(0),*((C_word*)lf[2]+1));
t8=C_i_setslot(t6,C_fix(1),*((C_word*)lf[3]+1));
t9=C_i_setslot(t6,C_fix(2),*((C_word*)lf[4]+1));
t10=C_i_setslot(t6,C_fix(3),*((C_word*)lf[5]+1));
t11=C_i_setslot(t6,C_fix(4),*((C_word*)lf[6]+1));
t12=C_i_setslot(t6,C_fix(5),*((C_word*)lf[7]+1));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_813,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t14=C_eqp(t5,lf[9]);
t15=(C_truep(t14)?t14:C_eqp(t5,lf[8]));
if(C_truep(t15)){
t16=C_i_set_i_slot(*((C_word*)lf[1]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:119: ##sys#add-to-ready-queue */
t17=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t13,*((C_word*)lf[1]+1));}
else{
t16=t13;
f_813(2,t16,C_SCHEME_UNDEFINED);}}

/* k1936 in loop in clear-i/o-state-for-thread! */
static void C_ccall f_1937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_i_setslot(((C_word*)t0)[4],C_fix(1),t1);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1291 in for-each-loop255 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1283(t3,((C_word*)t0)[4],t2);}

/* ##sys#ready-queue */
static void C_ccall f_993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_993,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[13]);}

/* ##sys#add-to-ready-queue */
static void C_ccall f_997(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_997,3,t0,t1,t2);}
t3=C_i_setslot(t2,C_fix(3),lf[8]);
t4=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=C_eqp(C_SCHEME_END_OF_LIST,lf[13]);
if(C_truep(t5)){
t6=C_mutate(&lf[13] /* (set! ready-queue-head ...) */,t4);
t7=C_mutate(&lf[14] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=C_i_setslot(lf[14],C_fix(1),t4);
t7=C_mutate(&lf[14] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[92] = {
{"f_1903:scheduler_2escm",(void*)f_1903},
{"f_1385:scheduler_2escm",(void*)f_1385},
{"f_1979:scheduler_2escm",(void*)f_1979},
{"f_1815:scheduler_2escm",(void*)f_1815},
{"f_1817:scheduler_2escm",(void*)f_1817},
{"f_1755:scheduler_2escm",(void*)f_1755},
{"f_1708:scheduler_2escm",(void*)f_1708},
{"f_1376:scheduler_2escm",(void*)f_1376},
{"f_1700:scheduler_2escm",(void*)f_1700},
{"f_1706:scheduler_2escm",(void*)f_1706},
{"f_933:scheduler_2escm",(void*)f_933},
{"f_1916:scheduler_2escm",(void*)f_1916},
{"f_2129:scheduler_2escm",(void*)f_2129},
{"f_1213:scheduler_2escm",(void*)f_1213},
{"f_1403:scheduler_2escm",(void*)f_1403},
{"f_921:scheduler_2escm",(void*)f_921},
{"f_1918:scheduler_2escm",(void*)f_1918},
{"f_1087:scheduler_2escm",(void*)f_1087},
{"f_1644:scheduler_2escm",(void*)f_1644},
{"f_1640:scheduler_2escm",(void*)f_1640},
{"f_919:scheduler_2escm",(void*)f_919},
{"f_2109:scheduler_2escm",(void*)f_2109},
{"f_1423:scheduler_2escm",(void*)f_1423},
{"f_1418:scheduler_2escm",(void*)f_1418},
{"f_1268:scheduler_2escm",(void*)f_1268},
{"f_1515:scheduler_2escm",(void*)f_1515},
{"f_1306:scheduler_2escm",(void*)f_1306},
{"f_1172:scheduler_2escm",(void*)f_1172},
{"f_1091:scheduler_2escm",(void*)f_1091},
{"f_1256:scheduler_2escm",(void*)f_1256},
{"f_1506:scheduler_2escm",(void*)f_1506},
{"f_1786:scheduler_2escm",(void*)f_1786},
{"f_2138:scheduler_2escm",(void*)f_2138},
{"f_1326:scheduler_2escm",(void*)f_1326},
{"f_2142:scheduler_2escm",(void*)f_2142},
{"f_2140:scheduler_2escm",(void*)f_2140},
{"f_1315:scheduler_2escm",(void*)f_1315},
{"f_1485:scheduler_2escm",(void*)f_1485},
{"f_1475:scheduler_2escm",(void*)f_1475},
{"toplevel:scheduler_2escm",(void*)C_scheduler_toplevel},
{"f_1339:scheduler_2escm",(void*)f_1339},
{"f_1337:scheduler_2escm",(void*)f_1337},
{"f_1330:scheduler_2escm",(void*)f_1330},
{"f_1335:scheduler_2escm",(void*)f_1335},
{"f_1499:scheduler_2escm",(void*)f_1499},
{"f_1359:scheduler_2escm",(void*)f_1359},
{"f_1352:scheduler_2escm",(void*)f_1352},
{"f_1110:scheduler_2escm",(void*)f_1110},
{"f_1729:scheduler_2escm",(void*)f_1729},
{"f_1727:scheduler_2escm",(void*)f_1727},
{"f_1116:scheduler_2escm",(void*)f_1116},
{"f_833:scheduler_2escm",(void*)f_833},
{"f_1148:scheduler_2escm",(void*)f_1148},
{"f_822:scheduler_2escm",(void*)f_822},
{"f_824:scheduler_2escm",(void*)f_824},
{"f_1163:scheduler_2escm",(void*)f_1163},
{"f_813:scheduler_2escm",(void*)f_813},
{"f_2019:scheduler_2escm",(void*)f_2019},
{"f_829:scheduler_2escm",(void*)f_829},
{"f_1154:scheduler_2escm",(void*)f_1154},
{"f_1152:scheduler_2escm",(void*)f_1152},
{"f_1964:scheduler_2escm",(void*)f_1964},
{"f_1442:scheduler_2escm",(void*)f_1442},
{"f_2024:scheduler_2escm",(void*)f_2024},
{"f_818:scheduler_2escm",(void*)f_818},
{"f_1104:scheduler_2escm",(void*)f_1104},
{"f_1434:scheduler_2escm",(void*)f_1434},
{"f_1954:scheduler_2escm",(void*)f_1954},
{"f_1438:scheduler_2escm",(void*)f_1438},
{"f_2001:scheduler_2escm",(void*)f_2001},
{"f_1454:scheduler_2escm",(void*)f_1454},
{"f_1457:scheduler_2escm",(void*)f_1457},
{"f_889:scheduler_2escm",(void*)f_889},
{"f_1842:scheduler_2escm",(void*)f_1842},
{"f_1656:scheduler_2escm",(void*)f_1656},
{"f_1840:scheduler_2escm",(void*)f_1840},
{"f_1844:scheduler_2escm",(void*)f_1844},
{"f_2062:scheduler_2escm",(void*)f_2062},
{"f_1283:scheduler_2escm",(void*)f_1283},
{"f_1994:scheduler_2escm",(void*)f_1994},
{"f_1275:scheduler_2escm",(void*)f_1275},
{"f_2047:scheduler_2escm",(void*)f_2047},
{"f_1880:scheduler_2escm",(void*)f_1880},
{"f_2040:scheduler_2escm",(void*)f_2040},
{"f_2090:scheduler_2escm",(void*)f_2090},
{"f_2099:scheduler_2escm",(void*)f_2099},
{"f_788:scheduler_2escm",(void*)f_788},
{"f_1937:scheduler_2escm",(void*)f_1937},
{"f_1292:scheduler_2escm",(void*)f_1292},
{"f_993:scheduler_2escm",(void*)f_993},
{"f_997:scheduler_2escm",(void*)f_997},
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
S|  ##sys#for-each		1
o|eliminated procedure checks: 108 
o|specializations:
o|  1 (fpmax float float)
o|  10 (eqv? * (not float))
o|  1 (fp> float float)
o|  2 (car pair)
o|  19 (cdr pair)
o|  4 (cdar (pair pair *))
o|Removed `not' forms: 5 
o|contracted procedure: k837 
o|inlining procedure: k834 
o|contracted procedure: "(scheduler.scm:168) switch116" 
o|contracted procedure: "(scheduler.scm:108) restore-thread-state-buffer" 
o|inlining procedure: k834 
o|contracted procedure: "(scheduler.scm:163) remove-from-ready-queue" 
o|inlining procedure: k1018 
o|inlining procedure: k1018 
o|propagated global variable: first-pair175 ready-queue-head 
o|inlining procedure: k873 
o|inlining procedure: k873 
o|contracted procedure: "(scheduler.scm:160) unblock-threads-for-i/o" 
o|inlining procedure: k1709 
o|inlining procedure: k1709 
o|inlining procedure: k1732 
o|inlining procedure: k1732 
o|inlining procedure: k1758 
o|inlining procedure: k1758 
o|inlining procedure: k1808 
o|inlining procedure: k1835 
o|inlining procedure: k1835 
o|contracted procedure: "(scheduler.scm:449) fdset-test" 
o|inlining procedure: k1598 
o|inlining procedure: k1598 
o|inlining procedure: k1614 
o|inlining procedure: k1614 
o|substituted constant variable: a1624 
o|substituted constant variable: a1629 
o|substituted constant variable: a1631 
o|substituted constant variable: a1636 
o|substituted constant variable: a1638 
o|inlining procedure: k1808 
o|contracted procedure: "(scheduler.scm:411) fdset-select-timeout" 
o|substituted constant variable: a1895 
o|contracted procedure: "(scheduler.scm:402) create-fdset" 
o|inlining procedure: k1478 
o|contracted procedure: "(scheduler.scm:344) fdset-set" 
o|inlining procedure: k1545 
o|inlining procedure: "(scheduler.scm:371) fdset-input-set" 
o|inlining procedure: k1545 
o|inlining procedure: "(scheduler.scm:372) fdset-output-set" 
o|inlining procedure: k1567 
o|inlining procedure: "(scheduler.scm:375) fdset-output-set" 
o|inlining procedure: "(scheduler.scm:374) fdset-input-set" 
o|inlining procedure: k1567 
o|substituted constant variable: a1579 
o|substituted constant variable: a1584 
o|substituted constant variable: a1586 
o|substituted constant variable: a1591 
o|substituted constant variable: a1593 
o|inlining procedure: k1478 
o|inlining procedure: k1509 
o|inlining procedure: k1509 
o|contracted procedure: "(scheduler.scm:337) fdset-clear" 
o|inlining procedure: k892 
o|inlining procedure: k892 
o|inlining procedure: k910 
o|inlining procedure: k910 
o|contracted procedure: k940 
o|inlining procedure: k937 
o|inlining procedure: k937 
o|inlining procedure: k954 
o|inlining procedure: k954 
o|contracted procedure: "(scheduler.scm:115) update-thread-state-buffer" 
o|propagated global variable: ct124 ##sys#current-thread 
o|inlining procedure: k1004 
o|inlining procedure: k1004 
o|inlining procedure: k1090 
o|propagated global variable: ct199 ##sys#current-thread 
o|inlining procedure: k1090 
o|inlining procedure: k1119 
o|inlining procedure: k1119 
o|inlining procedure: k1134 
o|inlining procedure: k1134 
o|inlining procedure: k1166 
o|inlining procedure: k1166 
o|inlining procedure: k1204 
o|substituted constant variable: a1211 
o|inlining procedure: k1204 
o|inlining procedure: k1218 
o|inlining procedure: k1218 
o|inlining procedure: k1350 
o|inlining procedure: k1361 
o|inlining procedure: k1361 
o|inlining procedure: k1350 
o|inlining procedure: k1379 
o|inlining procedure: k1379 
o|inlining procedure: k1407 
o|inlining procedure: k1407 
o|contracted procedure: "(scheduler.scm:283) abandon-mutexes" 
o|inlining procedure: k1250 
o|inlining procedure: k1266 
o|inlining procedure: k1266 
o|inlining procedure: k1286 
o|inlining procedure: k1286 
o|inlining procedure: k1250 
o|inlining procedure: k1309 
o|inlining procedure: k1309 
o|propagated global variable: pt323 ##sys#primordial-thread 
o|propagated global variable: ct318 ##sys#current-thread 
o|inlining procedure: k1659 
o|inlining procedure: k1659 
o|inlining procedure: k1906 
o|inlining procedure: k1921 
o|inlining procedure: k1921 
o|inlining procedure: k1938 
o|inlining procedure: k1938 
o|inlining procedure: k1906 
o|inlining procedure: k1982 
o|inlining procedure: k1982 
o|inlining procedure: k2004 
o|inlining procedure: k2027 
o|inlining procedure: k2027 
o|inlining procedure: k2004 
o|inlining procedure: k2050 
o|inlining procedure: k2050 
o|inlining procedure: k2132 
o|inlining procedure: k2132 
o|replaced variables: 169 
o|removed binding forms: 74 
o|substituted constant variable: r10192157 
o|inlining procedure: k1027 
o|inlining procedure: k1027 
o|inlining procedure: k1887 
o|inlining procedure: k1887 
o|substituted constant variable: r9382195 
o|substituted constant variable: r9552200 
o|substituted constant variable: r12052220 
o|removed side-effect free assignment to unused variable: fdset-input-set 
o|removed side-effect free assignment to unused variable: fdset-output-set 
o|substituted constant variable: f_19202258 
o|simplifications: ((let . 1)) 
o|replaced variables: 54 
o|removed binding forms: 190 
o|removed conditional forms: 1 
o|inlining procedure: k843 
o|inlining procedure: k1573 
o|replaced variables: 5 
o|removed binding forms: 49 
o|contracted procedure: k798 
o|substituted constant variable: r8442347 
o|contracted procedure: k1469 
o|simplifications: ((let . 1)) 
o|removed binding forms: 10 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 16) (##core#call . 214)) 
o|  call simplifications:
o|    vector
o|    list
o|    ##sys#structure?	2
o|    flonum?
o|    fp<
o|    fx=	2
o|    set-cdr!	3
o|    equal?
o|    fp>=
o|    fxmax
o|    ##sys#setislot	18
o|    not
o|    caar	7
o|    fp-	2
o|    fx>
o|    zero?
o|    pair?	12
o|    car	12
o|    cons	15
o|    sub1	2
o|    cdr	7
o|    null?	25
o|    eq?	24
o|    ##sys#setslot	26
o|    ##sys#slot	47
o|contracted procedure: k808 
o|contracted procedure: k1041 
o|propagated global variable: ct124 ##sys#current-thread 
o|contracted procedure: k1043 
o|contracted procedure: k1045 
o|contracted procedure: k1047 
o|contracted procedure: k1049 
o|contracted procedure: k1051 
o|contracted procedure: k810 
o|contracted procedure: k868 
o|contracted procedure: k858 
o|contracted procedure: k796 
o|contracted procedure: k1060 
o|contracted procedure: k1063 
o|contracted procedure: k1067 
o|contracted procedure: k1071 
o|contracted procedure: k1075 
o|contracted procedure: k1079 
o|contracted procedure: k1083 
o|contracted procedure: k801 
o|contracted procedure: k803 
o|contracted procedure: k849 
o|contracted procedure: k843 
o|contracted procedure: k1021 
o|contracted procedure: k1024 
o|contracted procedure: k1030 
o|inlining procedure: "(scheduler.scm:158) force-primordial" 
o|contracted procedure: k876 
o|contracted procedure: k1701 
o|contracted procedure: k1703 
o|contracted procedure: k1712 
o|inlining procedure: "(scheduler.scm:417) force-primordial" 
o|contracted procedure: k1721 
o|contracted procedure: k1734 
o|contracted procedure: k1736 
o|contracted procedure: k1739 
o|contracted procedure: k1741 
o|contracted procedure: k1746 
o|contracted procedure: k1760 
o|contracted procedure: k1766 
o|contracted procedure: k1773 
o|contracted procedure: k1776 
o|contracted procedure: k1782 
o|contracted procedure: k1788 
o|contracted procedure: k1791 
o|contracted procedure: k1793 
o|contracted procedure: k1795 
o|contracted procedure: k1800 
o|contracted procedure: k1811 
o|contracted procedure: k1870 
o|contracted procedure: k1832 
o|contracted procedure: k1850 
o|contracted procedure: k1862 
o|contracted procedure: k1601 
o|contracted procedure: k1603 
o|contracted procedure: k1609 
o|contracted procedure: k1611 
o|contracted procedure: k1617 
o|contracted procedure: k1823 
o|contracted procedure: k1890 
o|contracted procedure: k1893 
o|contracted procedure: k1897 
o|contracted procedure: k1480 
o|contracted procedure: k1483 
o|contracted procedure: k1487 
o|contracted procedure: k1493 
o|contracted procedure: k1548 
o|contracted procedure: k1550 
o|contracted procedure: k1559 
o|contracted procedure: k1561 
o|contracted procedure: k1570 
o|contracted procedure: k1511 
o|contracted procedure: k1520 
o|contracted procedure: k1523 
o|contracted procedure: k882 
o|contracted procedure: k894 
o|contracted procedure: k898 
o|contracted procedure: k902 
o|contracted procedure: k907 
o|contracted procedure: k913 
o|contracted procedure: k916 
o|contracted procedure: k934 
o|contracted procedure: k949 
o|contracted procedure: k945 
o|contracted procedure: k951 
o|contracted procedure: k957 
o|contracted procedure: k968 
o|contracted procedure: k970 
o|contracted procedure: k973 
o|propagated global variable: ct124 ##sys#current-thread 
o|propagated global variable: ct124 ##sys#current-thread 
o|contracted procedure: k985 
o|contracted procedure: k1000 
o|contracted procedure: k1002 
o|contracted procedure: k1007 
o|contracted procedure: k1004 
o|contracted procedure: k1095 
o|contracted procedure: k1098 
o|contracted procedure: k1121 
o|contracted procedure: k1124 
o|contracted procedure: k1126 
o|contracted procedure: k1145 
o|contracted procedure: k1131 
o|contracted procedure: k1155 
o|contracted procedure: k1157 
o|contracted procedure: k1168 
o|contracted procedure: k1183 
o|contracted procedure: k1180 
o|contracted procedure: k1190 
o|contracted procedure: k1186 
o|contracted procedure: k1196 
o|contracted procedure: k1202 
o|contracted procedure: k1207 
o|contracted procedure: k1216 
o|contracted procedure: k1221 
o|contracted procedure: k1223 
o|contracted procedure: k1239 
o|contracted procedure: k1236 
o|contracted procedure: k1226 
o|contracted procedure: k1228 
o|contracted procedure: k1230 
o|contracted procedure: k1331 
o|contracted procedure: k1340 
o|contracted procedure: k1342 
o|contracted procedure: k1344 
o|contracted procedure: k1346 
o|contracted procedure: k1348 
o|contracted procedure: k1356 
o|contracted procedure: k1370 
o|contracted procedure: k1363 
o|contracted procedure: k1381 
o|contracted procedure: k1390 
o|contracted procedure: k1393 
o|contracted procedure: k1395 
o|contracted procedure: k1405 
o|contracted procedure: k1410 
o|contracted procedure: k1420 
o|contracted procedure: k1248 
o|contracted procedure: k1253 
o|contracted procedure: k1258 
o|contracted procedure: k1260 
o|contracted procedure: k1262 
o|contracted procedure: k1264 
o|contracted procedure: k1272 
o|contracted procedure: k1288 
o|contracted procedure: k1297 
o|contracted procedure: k1300 
o|contracted procedure: k1311 
o|contracted procedure: k1320 
o|contracted procedure: k1323 
o|contracted procedure: k1426 
o|contracted procedure: k1428 
o|contracted procedure: k1439 
o|contracted procedure: k1446 
o|contracted procedure: k1448 
o|propagated global variable: pt323 ##sys#primordial-thread 
o|propagated global variable: pt323 ##sys#primordial-thread 
o|contracted procedure: k1645 
o|contracted procedure: k1647 
o|contracted procedure: k1653 
o|contracted procedure: k1661 
o|contracted procedure: k1669 
o|contracted procedure: k1665 
o|contracted procedure: k1671 
o|contracted procedure: k1693 
o|contracted procedure: k1676 
o|contracted procedure: k1683 
o|contracted procedure: k1961 
o|contracted procedure: k1908 
o|contracted procedure: k1958 
o|contracted procedure: k1911 
o|contracted procedure: k1923 
o|contracted procedure: k1926 
o|contracted procedure: k1928 
o|contracted procedure: k1933 
o|contracted procedure: k1941 
o|contracted procedure: k1945 
o|contracted procedure: k2087 
o|contracted procedure: k1967 
o|contracted procedure: k2081 
o|contracted procedure: k1969 
o|contracted procedure: k2075 
o|contracted procedure: k1971 
o|contracted procedure: k2069 
o|contracted procedure: k1973 
o|contracted procedure: k1984 
o|contracted procedure: k2006 
o|contracted procedure: k2015 
o|contracted procedure: k2029 
o|contracted procedure: k2036 
o|contracted procedure: k2052 
o|contracted procedure: k2064 
o|contracted procedure: k2102 
o|contracted procedure: k2113 
o|contracted procedure: k2117 
o|contracted procedure: k2121 
o|contracted procedure: k2125 
o|contracted procedure: k2153 
o|contracted procedure: k2134 
o|contracted procedure: k2150 
o|simplifications: ((let . 36)) 
o|removed binding forms: 193 
o|inlining procedure: "(scheduler.scm:158) force-primordial" 
o|inlining procedure: "(scheduler.scm:417) force-primordial" 
o|replaced variables: 14 
o|removed side-effect free assignment to unused variable: ##sys#force-primordial 
o|replaced variables: 2 
o|removed binding forms: 10 
o|removed binding forms: 3 
o|direct leaf routine/allocation: loop205 0 
o|converted assignments to bindings: (loop205) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (k2136 loop506 loop503 loop499 loop496 loop465 loop413 for-each-loop241274 for-each-loop255266 k1333 for-each-loop288299 k1151 k1170 loop215 k931 ##sys#clear-i/o-state-for-thread! loop133 for-each-loop337349 loop332 k1705 k1707 k1838 loop2447 loop434 k832 loop1131 loop2148) 
o|calls to known targets: 74 
o|identified direct recursive calls: f_1755 1 
o|identified direct recursive calls: f_1729 1 
o|identified direct recursive calls: f_889 1 
o|identified direct recursive calls: f_1116 1 
o|identified direct recursive calls: f_1656 1 
o|identified direct recursive calls: f_1918 1 
o|identified direct recursive calls: f_2024 1 
o|fast box initializations: 17 
o|fast global references: 24 
o|fast global assignments: 19 
o|dropping unused closure argument: f_1903 
*/
/* end of file */
