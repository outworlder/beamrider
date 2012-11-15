/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-cc.org
   2012-09-24 17:49
   Version 4.8.0 (rev 0db1908)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2012-09-24 on debian (Linux)
   command line: tcp.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file tcp.c
   unit: tcp
*/

#include "chicken.h"

#include <errno.h>
#ifdef _WIN32
# if (defined(HAVE_WINSOCK2_H) && defined(HAVE_WS2TCPIP_H))
#  include <winsock2.h>
#  include <ws2tcpip.h>
# else
#  include <winsock.h>
# endif
/* Beware: winsock2.h must come BEFORE windows.h */
# define socklen_t       int
static WSADATA wsa;
# define fcntl(a, b, c)  0
# define EWOULDBLOCK     0
# define EINPROGRESS     0
# define typecorrect_getsockopt(socket, level, optname, optval, optlen)	\
    getsockopt(socket, level, optname, (char *)optval, optlen)
#else
# include <fcntl.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>
# include <unistd.h>
# include <netdb.h>
# include <signal.h>
# define closesocket     close
# define INVALID_SOCKET  -1
# define typecorrect_getsockopt getsockopt
#endif

#ifndef SD_RECEIVE
# define SD_RECEIVE      0
# define SD_SEND         1
#endif

#ifdef ECOS
#include <sys/sockio.h>
#endif

#ifndef h_addr
# define h_addr  h_addr_list[ 0 ]
#endif

static char addr_buffer[ 20 ];

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[98];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,43),40,35,35,110,101,116,35,103,101,116,104,111,115,116,97,100,100,114,32,97,50,48,54,50,49,49,32,97,50,48,53,50,49,50,32,97,50,48,52,50,49,51,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,8),40,102,95,49,48,55,55,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,102,95,49,48,54,57,32,114,101,116,117,114,110,50,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,121,105,101,108,100,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,102,95,49,50,50,52,32,97,50,53,51,50,53,54,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,8),40,102,95,49,50,54,48,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,33),40,102,95,49,50,54,53,32,115,50,56,51,50,56,52,50,56,55,32,97,100,100,114,50,56,53,50,56,54,50,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,102,95,49,50,53,53,32,119,50,56,49,32,104,111,115,116,50,56,50,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,17),40,102,95,49,50,57,48,32,37,119,50,55,48,50,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,8),40,102,95,49,50,57,52,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,30),40,116,99,112,45,108,105,115,116,101,110,32,112,111,114,116,50,54,56,32,46,32,109,111,114,101,50,54,57,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,108,105,115,116,101,110,101,114,63,32,120,51,48,51,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,19),40,116,99,112,45,99,108,111,115,101,32,116,99,112,108,51,48,54,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,13),40,102,95,49,51,55,52,32,120,51,49,56,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,14),40,99,104,101,99,107,32,108,111,99,51,49,55,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,8),40,102,95,49,52,49,57,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,8),40,102,95,49,53,54,51,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,101,110,52,50,54,32,111,102,102,115,101,116,52,50,55,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,102,95,49,52,57,56,32,115,52,50,52,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,56,53,32,115,52,53,49,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,13),40,102,95,49,55,48,52,32,115,52,53,52,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,8),40,102,95,49,54,49,56,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,8),40,102,95,49,54,55,49,41};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,8),40,102,95,49,55,49,57,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,8),40,102,95,49,55,52,48,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,8),40,102,95,49,55,54,57,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,8),40,102,95,49,56,48,54,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,110,51,56,49,32,109,51,56,50,32,115,116,97,114,116,51,56,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,35),40,102,95,49,56,50,51,32,112,51,55,54,32,110,51,55,55,32,100,101,115,116,51,55,56,32,115,116,97,114,116,51,55,57,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,24),40,102,95,49,57,48,52,32,112,111,115,50,52,48,49,32,110,101,120,116,52,48,50,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,116,114,51,57,54,32,108,105,109,105,116,51,57,55,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,22),40,102,95,49,56,56,48,32,112,51,57,51,32,108,105,109,105,116,51,57,52,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,13),40,102,95,49,57,56,49,32,112,52,50,48,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,22),40,35,35,110,101,116,35,105,111,45,112,111,114,116,115,32,102,100,51,50,55,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,97,99,99,101,112,116,32,116,99,112,108,52,55,50,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,27),40,116,99,112,45,97,99,99,101,112,116,45,114,101,97,100,121,63,32,116,99,112,108,52,56,56,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,6),40,102,97,105,108,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,50,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,50,50,54,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,8),40,102,95,50,51,53,50,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,30),40,102,95,50,51,53,55,32,104,111,115,116,53,49,51,53,49,53,32,112,111,114,116,53,49,52,53,49,54,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,31),40,116,99,112,45,99,111,110,110,101,99,116,32,104,111,115,116,53,48,53,32,46,32,109,111,114,101,53,48,54,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,116,99,112,45,112,111,114,116,45,62,102,105,108,101,110,111,32,112,53,53,54,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,97,100,100,114,101,115,115,101,115,32,112,53,53,57,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,23),40,116,99,112,45,112,111,114,116,45,110,117,109,98,101,114,115,32,112,53,54,57,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,27),40,116,99,112,45,108,105,115,116,101,110,101,114,45,112,111,114,116,32,116,99,112,108,53,55,55,41,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,23),40,116,99,112,45,97,98,97,110,100,111,110,45,112,111,114,116,32,112,53,56,51,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,26),40,116,99,112,45,108,105,115,116,101,110,101,114,45,102,105,108,101,110,111,32,108,53,56,54,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k2143 */
static C_word C_fcall stub500(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub500(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub495(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub495(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;optlen = sizeof(err);if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == -1)  C_return(-1);C_return(err);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub254(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub254(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int yes = 1; 
                      C_return(setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (const char *)&yes, sizeof(int)));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub236(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub236(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a1);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons(port);addr->sin_addr.s_addr = htonl(INADDR_ANY);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub207(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub207(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
char * host=(char * )C_string_or_null(C_a1);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a2);
struct hostent *he = gethostbyname(host);struct sockaddr_in *addr = (struct sockaddr_in *)saddr;if(he == NULL) C_return(0);memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons((short)port);addr->sin_addr = *((struct in_addr *)he->h_addr);C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub200(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub200(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set out;
     struct timeval tm;
     int rv;
     FD_ZERO(&out);
     FD_SET(fd, &out);
     tm.tv_sec = tm.tv_usec = 0;
     rv = select(fd + 1, NULL, &out, NULL, &tm);
     if(rv > 0) { rv = FD_ISSET(fd, &out) ? 1 : 0; }
     C_return(rv);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub195(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub195(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;
     struct timeval tm;
     int rv;
     FD_ZERO(&in);
     FD_SET(fd, &in);
     tm.tv_sec = tm.tv_usec = 0;
     rv = select(fd + 1, &in, NULL, NULL, &tm);
     if(rv > 0) { rv = FD_ISSET(fd, &in) ? 1 : 0; }
     C_return(rv);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub185(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub185(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * serv=(char * )C_string_or_null(C_a0);
char * proto=(char * )C_string_or_null(C_a1);
struct servent *se;
     if((se = getservbyname(serv, proto)) == NULL) C_return(0);
     else C_return(ntohs(se->s_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub180(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub180(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
#ifdef _WIN32
     C_return(WSAStartup(MAKEWORD(1, 1), &wsa) == 0);
#else
     signal(SIGPIPE, SIG_IGN);
     C_return(1);
#endif
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub175(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub175(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;unsigned int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, ((unsigned int *)&len)) != 0) C_return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub170(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub170(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub165(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub165(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub159(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub159(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) C_return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub154(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub154(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) C_return(0);C_return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub143(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub143(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
void * msg=(void * )C_data_pointer_or_null(C_a1);
int offset=(int )C_unfix(C_a2);
int len=(int )C_unfix(C_a3);
int flags=(int )C_unfix(C_a4);
C_return(send(s, (char *)msg+offset, len, flags));
C_ret:
#undef return

return C_r;}

/* from k923 */
static C_word C_fcall stub130(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub130(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from k909 */
static C_word C_fcall stub122(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub122(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k896 */
static C_word C_fcall stub111(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub111(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k879 */
static C_word C_fcall stub103(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub103(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k865 */
static C_word C_fcall stub92(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub92(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from k851 */
static C_word C_fcall stub84(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub84(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k838 */
static C_word C_fcall stub74(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub74(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from k824 */
static C_word C_fcall stub65(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub65(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)socket(t0,t1,t2));
return C_r;}

C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1909)
static void C_ccall f_1909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_fcall f_1091(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2224)
static void C_ccall f_2224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1196)
static void C_ccall f_1196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1236)
static void C_ccall f_1236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1231)
static void C_ccall f_1231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1187)
static void C_ccall f_1187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1828)
static void C_fcall f_1828(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1224)
static void C_ccall f_1224(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1213)
static void C_ccall f_1213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1169)
static void C_ccall f_1169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1165)
static void C_ccall f_1165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1889)
static void C_fcall f_1889(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1775)
static void C_fcall f_1775(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1371)
static void C_fcall f_1371(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1358)
static void C_ccall f_1358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1355)
static void C_ccall f_1355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_fcall f_1624(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1626)
static void C_fcall f_1626(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1632)
static void C_fcall f_1632(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1634)
static void C_ccall f_1634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1039)
static void C_fcall f_1039(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2021)
static void C_ccall f_2021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2333)
static void C_ccall f_2333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1007)
static void C_ccall f_1007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_fcall f_1063(C_word t0) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2069)
static void C_ccall f_2069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2247)
static void C_fcall f_2247(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1506)
static void C_fcall f_1506(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1294)
static void C_ccall f_1294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1290)
static void C_ccall f_1290(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2098)
static void C_ccall f_2098(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1408)
static void C_ccall f_1408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1260)
static void C_ccall f_1260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1758)
static void C_ccall f_1758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externexport void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2504)
static void C_ccall f_2504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_fcall f_1781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2071)
static void C_ccall f_2071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1764)
static void C_ccall f_1764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1658)
static void C_fcall f_1658(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1412)
static void C_ccall f_1412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1414)
static void C_fcall f_1414(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1792)
static void C_ccall f_1792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1967)
static void C_ccall f_1967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_fcall f_1402(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1945)
static void C_ccall f_1945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1069)
static void C_ccall f_1069(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1930)
static void C_ccall f_1930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1575)
static void C_ccall f_1575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_fcall f_2165(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1049)
static void C_ccall f_1049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2386)
static void C_ccall f_2386(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1091)
static void C_fcall trf_1091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1091(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1091(t0,t1,t2);}

C_noret_decl(trf_1828)
static void C_fcall trf_1828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1828(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1828(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1889)
static void C_fcall trf_1889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1889(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1889(t0,t1,t2,t3);}

C_noret_decl(trf_1775)
static void C_fcall trf_1775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1775(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1775(t0,t1);}

C_noret_decl(trf_1371)
static void C_fcall trf_1371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1371(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1371(t0,t1);}

C_noret_decl(trf_1624)
static void C_fcall trf_1624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1624(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1624(t0,t1);}

C_noret_decl(trf_1626)
static void C_fcall trf_1626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1626(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1626(t0,t1);}

C_noret_decl(trf_1632)
static void C_fcall trf_1632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1632(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1632(t0,t1);}

C_noret_decl(trf_1039)
static void C_fcall trf_1039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1039(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1039(t0,t1,t2,t3);}

C_noret_decl(trf_1063)
static void C_fcall trf_1063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1063(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_1063(t0);}

C_noret_decl(trf_2247)
static void C_fcall trf_2247(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2247(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2247(t0,t1);}

C_noret_decl(trf_1506)
static void C_fcall trf_1506(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1506(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1506(t0,t1,t2,t3);}

C_noret_decl(trf_1781)
static void C_fcall trf_1781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1781(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1781(t0,t1);}

C_noret_decl(trf_1658)
static void C_fcall trf_1658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1658(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1658(t0,t1);}

C_noret_decl(trf_1414)
static void C_fcall trf_1414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1414(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1414(t0,t1);}

C_noret_decl(trf_1402)
static void C_fcall trf_1402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1402(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1402(t0,t1,t2);}

C_noret_decl(trf_2165)
static void C_fcall trf_2165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2165(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2165(t0,t1);}

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

/* f_1806 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:409: read-input */
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_1809(2,t3,C_SCHEME_UNDEFINED);}}

/* k1551 in loop */
static void C_ccall f_1552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1552,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* tcp.scm:473: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[3],*((C_word*)lf[3]+1),t2);}

/* k2438 in k2432 in k2430 in tcp-port-numbers in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2453,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2456,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
/* tcp.scm:674: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* f_1904 in loop */
static void C_ccall f_1904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1904,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1909,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],a[10]=t4,a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* tcp.scm:437: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[54]+1)))(3,*((C_word*)lf[54]+1),t5,t4);}

/* k2397 in k2391 in k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_2401(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2422,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2425,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k1908 */
static void C_ccall f_1909(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1909,2,t0,t1);}
t2=C_substring_copy(((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],C_fix(0));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)t0)[5]);
t4=C_eqp(((C_word*)t0)[4],((C_word*)t0)[6]);
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[7])){
/* tcp.scm:441: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[8],((C_word*)t0)[7],t1);}
else{
t5=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}}
else{
t5=C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1930,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* tcp.scm:443: read-input */
t7=((C_word*)t0)[12];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_slot(((C_word*)t0)[13],C_fix(4));
t7=C_fixnum_plus(t6,C_fix(1));
t8=C_i_set_i_slot(((C_word*)t0)[13],C_fix(4),t7);
if(C_truep(((C_word*)t0)[7])){
/* tcp.scm:450: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[8],((C_word*)t0)[7],t1);}
else{
t9=t1;
t10=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}}}

/* k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:650: ##sys#tcp-port->fileno */
t3=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k2391 in k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=t1;
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
t6=stub159(t4,t5);
/* tcp.scm:127: ##sys#peek-c-string */
t7=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k2430 in tcp-port-numbers in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:663: ##sys#tcp-port->fileno */
t3=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k2432 in k2430 in tcp-port-numbers in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2433(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2433,2,t0,t1);}
t2=t1;
t3=C_i_foreign_fixnum_argumentp(t2);
t4=stub165(C_SCHEME_UNDEFINED,t3);
t5=t1;
t6=C_i_foreign_fixnum_argumentp(t5);
t7=stub170(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t7,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=C_eqp(C_fix(-1),t4);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2465,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2468,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t12=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
t10=t8;
f_2439(2,t10,C_SCHEME_UNDEFINED);}}

/* loop */
static void C_fcall f_1091(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1091,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* tcp.scm:228: values */
C_values(4,0,t1,((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t3=C_subchar(((C_word*)t0)[3],t2);
if(C_truep(C_i_char_equalp(t3,C_make_character(58)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1113,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:232: substring */
t6=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t5,((C_word*)t0)[2]);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:242: loop */
t8=t1;
t9=t4;
t1=t8;
t2=t9;
goto loop;}}}

/* k1808 */
static void C_ccall f_1809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* k2440 in k2438 in k2432 in k2430 in tcp-port-numbers in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:674: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2223 in k2187 in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:637: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],lf[67],t1);}

/* loop in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2229,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=stub130(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=C_eqp(C_fix(-1),t7);
if(C_truep(t8)){
t9=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINPROGRESS));
if(C_truep(t9)){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2247,a[2]=((C_word*)t0)[3],a[3]=t11,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_2247(t13,t1);}
else{
t10=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t10)){
/* tcp.scm:627: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(3,*((C_word*)lf[37]+1),t1,((C_word*)((C_word*)t0)[6])[1]);}
else{
/* tcp.scm:628: fail */
t11=((C_word*)t0)[5];
f_2165(t11,t1);}}}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* k2226 in k2187 in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:639: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[70],t1);}

/* k1195 in k1186 in k1174 in k1172 in k1170 in k1168 in k1164 */
static void C_ccall f_1196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:281: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[10],t1);}

/* k1235 in k1164 */
static void C_ccall f_1236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:259: ##sys#error */
t2=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[17]);}

/* f_1823 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1823,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word)li28),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_1828(t9,t1,t3,C_fix(0),t5);}

/* k1192 in k1186 in k1174 in k1172 in k1170 in k1168 in k1164 */
static void C_ccall f_1193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:279: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[8],lf[6],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1229 in k1168 in k1164 */
static void C_ccall f_1231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1231,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:265: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t3);}
else{
t3=((C_word*)t0)[2];
f_1171(2,t3,C_SCHEME_UNDEFINED);}}

/* k1186 in k1174 in k1172 in k1170 in k1168 in k1164 */
static void C_ccall f_1187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1196,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* loop */
static void C_fcall f_1828(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(8);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1828,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t6=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t10=C_substring_copy(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],t9,t4);
t11=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t13=C_fixnum_difference(t2,t8);
t14=C_fixnum_plus(t3,t8);
t15=C_fixnum_plus(t4,t8);
/* tcp.scm:421: loop */
t19=t1;
t20=t13;
t21=t14;
t22=t15;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1869,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:423: read-input */
t7=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* f_1224 in k1168 in k1164 */
static void C_ccall f_1224(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1224,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub254(C_SCHEME_UNDEFINED,t3));}

/* k1221 in k1212 in k1229 in k1168 in k1164 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:268: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[15],t1);}

/* k1172 in k1170 in k1168 in k1164 */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1175,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1202,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:271: ##net#gethostaddr */
f_1039(t3,t1,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=t1;
if(C_truep(t3)){
t4=C_i_foreign_block_argumentp(t3);
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t6=t2;
f_1175(2,t6,stub236(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t5=t2;
f_1175(2,t5,stub236(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}}

/* k1170 in k1168 in k1164 */
static void C_ccall f_1171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:269: make-string */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k1218 in k1212 in k1229 in k1168 in k1164 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:266: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[6],t1,((C_word*)t0)[3]);}

/* k1178 in k1174 in k1172 in k1170 in k1168 in k1164 */
static void C_ccall f_1179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:282: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1174 in k1172 in k1170 in k1168 in k1164 */
static void C_ccall f_1175(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1175,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=stub74(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1179,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(C_fix(-1),t7);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1187,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:278: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t10);}
else{
/* tcp.scm:282: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* f_1880 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1880,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?t3:C_fudge(C_fix(21)));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word)li31),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_1889(t8,t1,C_SCHEME_FALSE,t4);}

/* k1212 in k1229 in k1168 in k1164 */
static void C_ccall f_1213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1222,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1168 in k1164 */
static void C_ccall f_1169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1224,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1231,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:261: g251 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k1164 */
static void C_ccall f_1165(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1165,2,t0,t1);}
t2=C_fix((C_word)AF_INET);
t3=C_i_foreign_fixnum_argumentp(t2);
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t5=C_i_foreign_fixnum_argumentp(C_fix(0));
t6=stub65(C_SCHEME_UNDEFINED,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1169,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t8=C_eqp(C_fix((C_word)INVALID_SOCKET),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1236,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:258: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t9);}
else{
t9=t7;
f_1169(2,t9,C_SCHEME_UNDEFINED);}}

/* k1200 in k1172 in k1170 in k1168 in k1164 */
static void C_ccall f_1202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_1175(2,t3,t2);}
else{
/* tcp.scm:272: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[8],lf[6],lf[13],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* loop */
static void C_fcall f_1889(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1889,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t4=C_i_fixnum_min(((C_word*)((C_word*)t0)[3])[1],t3);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li30),tmp=(C_word)a,a+=11,tmp);
/* tcp.scm:431: ##sys#scan-buffer-line */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(6,*((C_word*)lf[55]+1),t1,((C_word*)t0)[4],t4,((C_word*)((C_word*)t0)[2])[1],t5);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:452: read-input */
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1388,2,t0,t1);}
t2=C_mutate((C_word*)lf[26]+1 /* (set! tcp-read-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2528,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:326: check */
f_1371(t4,lf[27]);}

/* k1774 */
static void C_fcall f_1775(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1775,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub103(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_1781(t6,C_eqp(C_fix(-1),t5));}
else{
t3=t2;
f_1781(t3,C_SCHEME_FALSE);}}

/* check in k1363 in k998 in k811 in k809 in k807 */
static void C_fcall f_1371(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1371,NULL,2,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1374,a[2]=t2,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));}

/* f_1374 in check in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1374,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_check_exact_2(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_1618 in k1496 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1618,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1624,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t5=C_block_size(((C_word*)((C_word*)t0)[6])[1]);
t6=t4;
f_1658(t6,C_fixnum_greaterp(t5,C_fix(0)));}
else{
t5=t4;
f_1658(t5,C_SCHEME_FALSE);}}}

/* k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1365(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1365,2,t0,t1);}
t2=C_mutate((C_word*)lf[25]+1 /* (set! tcp-buffer-size ...) */,t1);
t3=C_set_block_item(lf[26] /* tcp-read-timeout */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[27] /* tcp-write-timeout */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[28] /* tcp-connect-timeout */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[29] /* tcp-accept-timeout */,0,C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1371,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1388,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2531,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:325: check */
f_1371(t9,lf[26]);}

/* k1609 in k1607 in k1597 in k1496 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:527: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2286 in k2252 in loop2 in loop in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2287,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* tcp.scm:614: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[3],*((C_word*)lf[3]+1),t2);}

/* k1357 in k1348 in tcp-close in k998 in k811 in k809 in k807 */
static void C_ccall f_1358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:309: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[24],t1);}

/* k1354 in k1348 in tcp-close in k998 in k811 in k809 in k807 */
static void C_ccall f_1355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:307: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[23],t1,((C_word*)t0)[3]);}

/* k1642 in k1633 in k1630 in k1625 in k1623 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:515: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[47],t1);}

/* k1639 in k1633 in k1630 in k1625 in k1623 */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:514: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],t1,((C_word*)t0)[3]);}

/* k2105 in tcp-accept-ready? in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(C_fix(1),((C_word*)t0)[3]));}

/* k1623 */
static void C_fcall f_1624(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1624,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(2)))){
t3=t2;
f_1626(t3,C_SCHEME_UNDEFINED);}
else{
t3=((C_word*)t0)[3];
t4=C_fix((C_word)SD_SEND);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t2;
f_1626(t7,stub122(C_SCHEME_UNDEFINED,t5,t6));}}

/* k1625 in k1623 */
static void C_fcall f_1626(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1626,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub103(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_1632(t6,C_eqp(C_fix(-1),t5));}
else{
t3=t2;
f_1632(t3,C_SCHEME_FALSE);}}

/* k2113 in tcp-accept-ready? in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1531 in k1529 in k1527 in loop */
static void C_ccall f_1532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_slot(*((C_word*)lf[3]+1),C_fix(13)))){
/* tcp.scm:479: ##sys#signal-hook */
t3=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[31],lf[39],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
/* tcp.scm:482: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1506(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* k1529 in k1527 in loop */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:477: yield */
f_1063(t2);}

/* k1533 in k1531 in k1529 in k1527 in loop */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:482: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1506(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2455 in k2438 in k2432 in k2430 in tcp-port-numbers in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:673: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[88],t1);}

/* k2452 in k2438 in k2432 in k2430 in tcp-port-numbers in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:671: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[87],t1,((C_word*)t0)[3]);}

/* k1607 in k1597 in k1496 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:526: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2122 in k2113 in tcp-accept-ready? in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:566: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[66],t1);}

/* k2119 in k2113 in tcp-accept-ready? in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:565: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[65],t1,((C_word*)t0)[3]);}

/* k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1392,2,t0,t1);}
t2=C_mutate((C_word*)lf[27]+1 /* (set! tcp-write-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2525,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:327: check */
f_1371(t4,lf[28]);}

/* k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1396,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1 /* (set! tcp-connect-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1400,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2522,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:328: check */
f_1371(t4,lf[29]);}

/* k2467 in k2432 in k2430 in tcp-port-numbers in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:669: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[89],t1);}

/* k1527 in loop */
static void C_ccall f_1528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1528,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:476: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(5,*((C_word*)lf[33]+1),t2,*((C_word*)lf[3]+1),((C_word*)t0)[7],lf[40]);}

/* k2464 in k2432 in k2430 in tcp-port-numbers in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:667: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[87],t1,((C_word*)t0)[3]);}

/* k1630 in k1625 in k1623 */
static void C_fcall f_1632(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1632,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:513: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1633 in k1630 in k1625 in k1623 */
static void C_ccall f_1634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1643,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* tcp-listener-port in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2470(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2470,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[20],lf[90]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub165(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2480,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2489,a[2]=t7,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2492,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t11=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t6);}}

/* k2488 in tcp-listener-port in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:681: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[8],lf[90],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2479 in tcp-listener-port in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2497 in tcp-abandon-port in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:689: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(3,*((C_word*)lf[82]+1),t2,((C_word*)t0)[2]);}

/* tcp-abandon-port in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2494(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2494,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2498,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:687: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(4,*((C_word*)lf[86]+1),t3,t2,lf[92]);}

/* k1698 in k1689 */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[46]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2491 in tcp-listener-port in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:682: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[91],t1);}

/* k1689 */
static void C_ccall f_1691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1691,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:500: output */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2179 in k2170 in fail in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:594: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[68],t1);}

/* k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2325,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:601: ##net#gethostaddr */
f_1039(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1]);}

/* k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
if(C_truep(stub154(C_SCHEME_UNDEFINED,t3))){
t4=t2;
f_2186(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2313,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:604: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t4);}}

/* k1348 in tcp-close in k998 in k811 in k809 in k807 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1358,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2229,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word)li40),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2229(2,t6,t2);}

/* k2187 in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2188,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub495(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t7=stub103(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2207,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2210,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t10=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t7=stub103(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2224,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2227,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=C_a_i_bytevector(&a,1,C_fix(3));
t11=C_i_foreign_fixnum_argumentp(t3);
t12=stub500(t10,t11);
/* tcp.scm:578: ##sys#peek-c-string */
t13=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t9,t12,C_fix(0));}
else{
/* tcp.scm:640: ##net#io-ports */
t6=lf[30];
f_1402(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}}}

/* ##net#gethostaddr in k998 in k811 in k809 in k807 */
static void C_fcall f_1039(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1039,NULL,4,t1,t2,t3,t4);}
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1049,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t7=C_i_foreign_string_argumentp(t3);
/* tcp.scm:205: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t6,t7);}
else{
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub207(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,t7));}}

/* loop in k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2026,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub195(C_SCHEME_UNDEFINED,t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t6=stub92(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,C_SCHEME_FALSE);
t7=C_eqp(C_fix(-1),t6);
if(C_truep(t7)){
t8=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t8)){
/* tcp.scm:538: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(3,*((C_word*)lf[37]+1),t1,((C_word*)((C_word*)t0)[3])[1]);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2055,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:540: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t9);}}
else{
/* tcp.scm:536: ##net#io-ports */
t8=lf[30];
f_1402(t8,t1,t6);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2069,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2093,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:550: current-milliseconds */
t7=*((C_word*)lf[36]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t5;
f_2069(2,t6,C_SCHEME_UNDEFINED);}}}

/* k2318 in k2312 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:605: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],lf[67],t1);}

/* k2191 in k2187 in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:640: ##net#io-ports */
t2=lf[30];
f_1402(t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* tcp-close in k998 in k811 in k809 in k807 */
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1335,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[20]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub103(C_SCHEME_UNDEFINED,t5);
t7=C_eqp(C_fix(-1),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1349,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:306: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t8);}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2021,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2026,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word)li35),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2026(2,t5,((C_word*)t0)[4]);}

/* k1009 in k1005 in k1115 in k1112 in loop */
static void C_ccall f_1011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1011,2,t0,t1);}
t2=stub185(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1120,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1125,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:236: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t5);}
else{
/* tcp.scm:231: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t2);}}

/* k1988 */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[57] /* (set! bufpos ...) */,((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k2312 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2322,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* f_1981 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1981(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1981,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[56]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1989,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:459: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[58]+1)))(5,*((C_word*)lf[58]+1),t3,((C_word*)t0)[4],lf[57],((C_word*)((C_word*)t0)[3])[1]);}}

/* k2323 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_2184(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm:602: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[67],lf[74],((C_word*)((C_word*)t0)[3])[1]);}}

/* tcp-listener? in k998 in k811 in k809 in k807 */
static void C_ccall f_1326(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1326,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(C_blockp(t2))?C_i_structurep(t2,lf[20]):C_SCHEME_FALSE));}

/* k998 in k811 in k809 in k807 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_999,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! ##net#gethostaddr ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1039,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[2] /* (set! yield ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1063,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[5]+1);
t5=C_mutate((C_word*)lf[6]+1 /* (set! tcp-listen ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1252,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[22]+1 /* (set! tcp-listener? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1326,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[23]+1 /* (set! tcp-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1335,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:314: make-parameter */
t9=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,C_SCHEME_FALSE);}

/* k2321 in k2312 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:605: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[73],t1);}

/* k2338 in k2332 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:598: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[8],lf[67],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* k2332 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2342,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1005 in k1115 in k1112 in loop */
static void C_ccall f_1007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1007,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1011,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_i_foreign_string_argumentp(lf[78]);
/* tcp.scm:175: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,t3);}

/* tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2013(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2013,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[20]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2021,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:532: tcp-accept-timeout */
t6=*((C_word*)lf[29]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k2343 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2157(2,t3,t2);}
else{
/* tcp.scm:586: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[8],lf[67],lf[76],((C_word*)((C_word*)t0)[4])[1]);}}

/* k2010 in k2001 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:336: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[61],t1);}

/* yield in k998 in k811 in k809 in k807 */
static void C_fcall f_1063(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1063,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1069,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:216: ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t2);}

/* k1130 in k1124 in k1009 in k1005 in k1115 in k1112 in loop */
static void C_ccall f_1131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:237: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[67],t1,((C_word*)t0)[3]);}

/* k1133 in k1124 in k1009 in k1005 in k1115 in k1112 in loop */
static void C_ccall f_1134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:239: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[77],t1);}

/* k2341 in k2332 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:600: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[75],t1);}

/* k1868 in loop */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* tcp.scm:426: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1828(t3,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* f_1077 */
static void C_ccall f_1077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1077,2,t0,t1);}
/* tcp.scm:219: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* k2068 in loop in k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:551: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(5,*((C_word*)lf[33]+1),t2,*((C_word*)lf[3]+1),((C_word*)t0)[5],lf[34]);}

/* loop2 in loop in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_fcall f_2247(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2247,NULL,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub200(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2253,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
/* tcp.scm:611: fail */
t6=((C_word*)t0)[5];
f_2165(t6,t4);}
else{
t6=t4;
f_2253(2,t6,C_SCHEME_UNDEFINED);}}

/* k2060 in k2054 in loop in k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:541: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[62],t1,((C_word*)t0)[3]);}

/* k2063 in k2054 in loop in k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:544: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[63],t1);}

/* k1119 in k1009 in k1005 in k1115 in k1112 in loop */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:231: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1124 in k1009 in k1005 in k1115 in k1112 in loop */
static void C_ccall f_1125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1134,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1597 in k1496 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1598,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[42]);
t3=C_i_setslot(t1,C_fix(3),lf[43]);
t4=C_i_setslot(((C_word*)t0)[2],C_fix(7),lf[44]);
t5=C_i_setslot(t1,C_fix(7),lf[44]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1608,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:525: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t6,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1484 in k1478 in loop */
static void C_ccall f_1485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:369: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],t1,((C_word*)t0)[3]);}

/* k1487 in k1478 in loop */
static void C_ccall f_1488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:371: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[38],t1);}

/* loop */
static void C_fcall f_1506(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1506,NULL,4,t0,t1,t2,t3);}
t4=C_i_fixnum_min(C_fix(8192),t2);
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[3];
t7=t3;
t8=C_i_foreign_fixnum_argumentp(t5);
t9=(C_truep(t6)?C_i_foreign_block_argumentp(t6):C_SCHEME_FALSE);
t10=C_i_foreign_fixnum_argumentp(t7);
t11=C_i_foreign_fixnum_argumentp(t4);
t12=C_i_foreign_fixnum_argumentp(C_fix(0));
t13=stub143(C_SCHEME_UNDEFINED,t8,t9,t10,t11,t12);
t14=C_eqp(C_fix(-1),t13);
if(C_truep(t14)){
t15=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t16=(C_truep(t15)?t15:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1552,a[2]=((C_word*)t0)[5],a[3]=t17,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:475: current-milliseconds */
t19=*((C_word*)lf[36]+1);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}
else{
t18=t17;
f_1528(2,t18,C_SCHEME_UNDEFINED);}}
else{
t17=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1563,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:484: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(3,*((C_word*)lf[37]+1),t1,t18);}
else{
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1569,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:487: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t18);}}}
else{
if(C_truep(C_fixnum_lessp(t13,t2))){
t15=C_fixnum_difference(t2,t13);
t16=C_fixnum_plus(t3,t13);
/* tcp.scm:493: loop */
t25=t1;
t26=t15;
t27=t16;
t1=t25;
t2=t26;
t3=t27;
goto loop;}
else{
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_UNDEFINED);}}}

/* k807 */
static void C_ccall f_808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2252 in loop2 in loop in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2253,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],C_fix(1));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:616: current-milliseconds */
t5=*((C_word*)lf[36]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_2261(2,t4,C_SCHEME_UNDEFINED);}}}

/* k1112 in loop */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1116,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:233: substring */
t3=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}

/* k1478 in loop */
static void C_ccall f_1479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1449 in k1447 in k1445 in k1443 in loop */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:364: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1424(2,t2,((C_word*)t0)[3]);}

/* k1115 in k1112 in loop */
static void C_ccall f_1116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1116,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=C_i_foreign_string_argumentp(t2);
/* tcp.scm:175: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,t4);}
else{
t4=t3;
f_1007(2,t4,C_SCHEME_FALSE);}}

/* k2266 in k2264 in k2262 in k2260 in k2252 in loop2 in loop in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in ... */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:625: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2247(t2,((C_word*)t0)[3]);}

/* k2001 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2011,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2264 in k2262 in k2260 in k2252 in loop2 in loop in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 in ... */
static void C_ccall f_2265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[3]+1),C_fix(13)))){
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t4=stub103(C_SCHEME_UNDEFINED,t3);
/* tcp.scm:621: ##sys#signal-hook */
t5=*((C_word*)lf[7]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t2,lf[31],lf[67],lf[71],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
/* tcp.scm:625: loop2 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2247(t3,((C_word*)t0)[3]);}}

/* k2007 in k2001 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:335: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[8],t1);}

/* k2262 in k2260 in k2252 in loop2 in loop in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:618: yield */
f_1063(t2);}

/* k2260 in k2252 in loop2 in loop in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:617: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(5,*((C_word*)lf[33]+1),t2,*((C_word*)lf[3]+1),((C_word*)t0)[4],lf[72]);}

/* f_1704 in k1496 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1704(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1704,3,t0,t1,t2);}
t3=C_block_size(t2);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
/* tcp.scm:504: output */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1467 in loop */
static void C_ccall f_1468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1468,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* tcp.scm:355: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[3],*((C_word*)lf[3]+1),t2);}

/* k809 in k807 */
static void C_ccall f_810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_810,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_812,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:84: register-feature! */
t3=*((C_word*)lf[96]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[97]);}

/* k811 in k809 in k807 */
static void C_ccall f_812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(stub180(C_SCHEME_UNDEFINED))){
t3=t2;
f_999(2,t3,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm:172: ##sys#signal-hook */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[8],lf[95]);}}

/* f_1294 in tcp-listen in k998 in k811 in k809 in k807 */
static void C_ccall f_1294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1294,2,t0,t1);}
/* tcp.scm:286: def-host275 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_fix(100));}

/* f_1290 in tcp-listen in k998 in k811 in k809 in k807 */
static void C_ccall f_1290(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1290,3,t0,t1,t2);}
/* tcp.scm:286: body272 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_FALSE);}

/* k2524 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:327: make-parameter */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* k2527 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:326: make-parameter */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_fix(60000),t1);}

/* k2521 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:328: make-parameter */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* k1285 in k1279 */
static void C_ccall f_1286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:293: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[8],lf[6],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1288 in k1279 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:295: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[21],t1);}

/* f_1719 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:381: read-input */
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_1722(2,t3,C_SCHEME_UNDEFINED);}}

/* k1279 */
static void C_ccall f_1280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1289,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* f_1740 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1740,2,t0,t1);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)t0)[4];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub195(C_SCHEME_UNDEFINED,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1750,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(t5,C_fix(-1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1758,a[2]=t6,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:391: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_eqp(t5,C_fix(1)));}}}

/* k2092 in loop in k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2093,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* tcp.scm:548: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),((C_word*)t0)[3],*((C_word*)lf[3]+1),t2);}

/* tcp-accept-ready? in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2098(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2098,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[20],lf[65]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub195(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2106,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2114,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:564: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t9);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(C_fix(1),t6));}}

/* k1271 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1272,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,lf[20],((C_word*)t0)[3]));}

/* f_1265 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1265,4,t0,t1,t2,t3);}
t4=C_i_check_exact(((C_word*)t0)[2]);
t5=t2;
t6=((C_word*)t0)[2];
t7=C_i_foreign_fixnum_argumentp(t5);
t8=C_i_foreign_fixnum_argumentp(t6);
t9=stub84(C_SCHEME_UNDEFINED,t7,t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1272,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_eqp(C_fix(-1),t9);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1280,a[2]=t10,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:292: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t12);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_record2(&a,2,lf[20],t2));}}

/* f_1498 in k1496 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1498(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1498,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word)li18),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1506(t7,t1,t3,C_fix(0));}

/* k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1408(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1408,2,t0,t1);}
t2=C_a_i_vector5(&a,5,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1,C_fix(0));
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1412,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t2,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=t10,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
/* tcp.scm:343: tbs */
t12=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t12))(2,t12,t11);}

/* k1496 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1598,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(((C_word*)((C_word*)t0)[6])[1])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1685,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1704,a[2]=t2,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1618,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1671,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:495: make-output-port */
t7=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,t5,t6);}
else{
/* tcp.scm:495: make-output-port */
t6=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,t5,C_SCHEME_FALSE);}}

/* f_1260 */
static void C_ccall f_1260(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1260,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_fix((C_word)SOCK_STREAM);
t5=((C_word*)t0)[3];
t6=C_i_check_exact(t3);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1165,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t8=C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t8)){
if(C_truep(t8)){
/* tcp.scm:255: ##sys#signal-hook */
t9=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t7,lf[18],lf[6],lf[19],t3);}
else{
t9=t7;
f_1165(2,t9,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(65535)))){
/* tcp.scm:255: ##sys#signal-hook */
t9=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t7,lf[18],lf[6],lf[19],t3);}
else{
t9=t7;
f_1165(2,t9,C_SCHEME_UNDEFINED);}}}

/* f_1255 in tcp-listen in k998 in k811 in k809 in k807 */
static void C_ccall f_1255(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1255,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1260,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1265,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:286: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* tcp-listener-fileno in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2512,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[20],lf[93]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k1721 */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=C_subchar(((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* tcp-listen in k998 in k811 in k809 in k807 */
static void C_ccall f_1252(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_1252r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1252r(t0,t1,t2,t3);}}

static void C_ccall f_1252r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1255,a[2]=t2,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1290,a[2]=t4,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1294,a[2]=t5,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* tcp.scm:286: def-w274 */
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t1);}
else{
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* tcp.scm:286: def-host275 */
t9=t5;
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_u_i_cdr(t8);
/* tcp.scm:286: body272 */
t11=t4;
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,t7,t9);}}}

/* k1749 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_fix(1)));}

/* k1757 */
static void C_ccall f_1758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1767,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("tcp_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(510)){
C_save(t1);
C_rereclaim2(510*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,98);
lf[1]=C_h_intern(&lf[1],17,"\003sysmake-c-string");
lf[3]=C_h_intern(&lf[3],18,"\003syscurrent-thread");
lf[4]=C_h_intern(&lf[4],12,"\003sysschedule");
lf[5]=C_h_intern(&lf[5],9,"substring");
lf[6]=C_h_intern(&lf[6],10,"tcp-listen");
lf[7]=C_h_intern(&lf[7],15,"\003syssignal-hook");
lf[8]=C_h_intern(&lf[8],14,"\000network-error");
lf[9]=C_h_intern(&lf[9],17,"\003sysstring-append");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot bind to socket - ");
lf[11]=C_h_intern(&lf[11],17,"\003syspeek-c-string");
lf[12]=C_h_intern(&lf[12],16,"\003sysupdate-errno");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\042getting listener host IP failed - ");
lf[14]=C_h_intern(&lf[14],11,"make-string");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000 error while setting up socket - ");
lf[16]=C_h_intern(&lf[16],9,"\003syserror");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot create socket");
lf[18]=C_h_intern(&lf[18],13,"\000domain-error");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid port number");
lf[20]=C_h_intern(&lf[20],12,"tcp-listener");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot listen on socket - ");
lf[22]=C_h_intern(&lf[22],13,"tcp-listener\077");
lf[23]=C_h_intern(&lf[23],9,"tcp-close");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot close TCP socket - ");
lf[25]=C_h_intern(&lf[25],15,"tcp-buffer-size");
lf[26]=C_h_intern(&lf[26],16,"tcp-read-timeout");
lf[27]=C_h_intern(&lf[27],17,"tcp-write-timeout");
lf[28]=C_h_intern(&lf[28],19,"tcp-connect-timeout");
lf[29]=C_h_intern(&lf[29],18,"tcp-accept-timeout");
lf[31]=C_h_intern(&lf[31],22,"\000network-timeout-error");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\030read operation timed out");
lf[33]=C_h_intern(&lf[33],25,"\003systhread-block-for-i/o!");
lf[34]=C_h_intern(&lf[34],6,"\000input");
lf[35]=C_h_intern(&lf[35],29,"\003systhread-block-for-timeout!");
lf[36]=C_h_intern(&lf[36],20,"current-milliseconds");
lf[37]=C_h_intern(&lf[37],22,"\003sysdispatch-interrupt");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot read from socket - ");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\031write operation timed out");
lf[40]=C_h_intern(&lf[40],7,"\000output");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot write to socket - ");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[44]=C_h_intern(&lf[44],6,"socket");
lf[45]=C_h_intern(&lf[45],18,"\003sysset-port-data!");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot close socket output port - ");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[50]=C_h_intern(&lf[50],16,"make-output-port");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000 cannot check socket for input - ");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000!cannot close socket input port - ");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[54]=C_h_intern(&lf[54],15,"\003sysmake-string");
lf[55]=C_h_intern(&lf[55],20,"\003sysscan-buffer-line");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[58]=C_h_intern(&lf[58],13,"\003syssubstring");
lf[59]=C_h_intern(&lf[59],15,"make-input-port");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot create TCP ports - ");
lf[62]=C_h_intern(&lf[62],10,"tcp-accept");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000!could not accept from listener - ");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\032accept operation timed out");
lf[65]=C_h_intern(&lf[65],17,"tcp-accept-ready\077");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000 cannot check socket for input - ");
lf[67]=C_h_intern(&lf[67],11,"tcp-connect");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot connect to socket - ");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\026getsockopt() failed - ");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create socket - ");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\033connect operation timed out");
lf[72]=C_h_intern(&lf[72],4,"\000all");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\021fcntl() failed - ");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot find host address");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create socket - ");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\021no port specified");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000#cannot compute port from service - ");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\003tcp");
lf[79]=C_h_intern(&lf[79],20,"\003systcp-port->fileno");
lf[80]=C_h_intern(&lf[80],5,"error");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000)argument does not appear to be a TCP port");
lf[82]=C_h_intern(&lf[82],13,"\003sysport-data");
lf[83]=C_h_intern(&lf[83],13,"tcp-addresses");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000 cannot compute remote address - ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot compute local address - ");
lf[86]=C_h_intern(&lf[86],19,"\003syscheck-open-port");
lf[87]=C_h_intern(&lf[87],16,"tcp-port-numbers");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot compute remote port - ");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot compute local port - ");
lf[90]=C_h_intern(&lf[90],17,"tcp-listener-port");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\036cannot obtain listener port - ");
lf[92]=C_h_intern(&lf[92],16,"tcp-abandon-port");
lf[93]=C_h_intern(&lf[93],19,"tcp-listener-fileno");
lf[94]=C_h_intern(&lf[94],14,"make-parameter");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot initialize Winsock");
lf[96]=C_h_intern(&lf[96],17,"register-feature!");
lf[97]=C_h_intern(&lf[97],3,"tcp");
C_register_lf2(lf,98,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_808,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2054 in loop in k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2064,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2530 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:325: make-parameter */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_fix(60000),t1);}

/* k2503 in k2497 in tcp-abandon-port in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_set_i_slot(t1,C_fix(1),C_SCHEME_TRUE):C_i_set_i_slot(t1,C_fix(2),C_SCHEME_TRUE)));}

/* k1782 in k1779 in k1774 */
static void C_ccall f_1783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1792,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1788 in k1782 in k1779 in k1774 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:403: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],t1,((C_word*)t0)[3]);}

/* k1779 in k1774 */
static void C_fcall f_1781(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1781,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:402: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1447 in k1445 in k1443 in loop */
static void C_ccall f_1448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[3]+1),C_fix(13)))){
/* tcp.scm:361: ##sys#signal-hook */
t3=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[31],lf[32],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* tcp.scm:364: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1424(2,t3,((C_word*)t0)[3]);}}

/* k2074 in k2072 in k2070 in k2068 in loop in k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:558: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2026(2,t2,((C_word*)t0)[3]);}

/* k2070 in k2068 in loop in k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:552: yield */
f_1063(t2);}

/* k2072 in k2070 in k2068 in loop in k2020 in tcp-accept in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[3]+1),C_fix(13)))){
/* tcp.scm:554: ##sys#signal-hook */
t3=*((C_word*)lf[7]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[31],lf[62],lf[64],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* tcp.scm:558: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2026(2,t3,((C_word*)t0)[3]);}}

/* loop */
static void C_ccall f_1424(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1424,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t2);
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(C_fix(1024));
t7=C_i_foreign_fixnum_argumentp(C_fix(0));
t8=stub111(C_SCHEME_UNDEFINED,t4,t5,t6,t7);
t9=C_eqp(C_fix(-1),t8);
if(C_truep(t9)){
t10=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t11=(C_truep(t10)?t10:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1444,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1468,a[2]=((C_word*)t0)[5],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:357: current-milliseconds */
t14=*((C_word*)lf[36]+1);
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}
else{
t13=t12;
f_1444(2,t13,C_SCHEME_UNDEFINED);}}
else{
t12=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t12)){
/* tcp.scm:366: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(3,*((C_word*)lf[37]+1),t1,((C_word*)((C_word*)t0)[4])[1]);}
else{
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1479,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:368: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t13);}}}
else{
t10=C_mutate(((C_word *)((C_word*)t0)[6])+1,t8);
t11=C_i_set_i_slot(((C_word*)t0)[7],C_fix(4),t8);
t12=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}

/* k1763 in k1757 */
static void C_ccall f_1764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:392: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],t1,((C_word*)t0)[3]);}

/* f_1769 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1769,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1775,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(1)))){
t4=t3;
f_1775(t4,C_SCHEME_UNDEFINED);}
else{
t4=((C_word*)t0)[3];
t5=C_fix((C_word)SD_RECEIVE);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=C_i_foreign_fixnum_argumentp(t5);
t8=t3;
f_1775(t8,stub122(C_SCHEME_UNDEFINED,t6,t7));}}}

/* k1766 in k1757 */
static void C_ccall f_1767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:394: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[51],t1);}

/* k1656 */
static void C_fcall f_1658(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1658,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:509: output */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=((C_word*)t0)[3];
f_1624(t2,C_SCHEME_UNDEFINED);}}

/* k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=C_fixnum_greaterp(t1,C_fix(0));
t4=t2;
f_1414(t4,(C_truep(t3)?lf[60]:C_SCHEME_FALSE));}
else{
t3=t2;
f_1414(t3,C_SCHEME_FALSE);}}

/* k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* tcp.scm:346: tcp-write-timeout */
t3=*((C_word*)lf[27]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_fcall f_1414(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1414,NULL,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* tcp.scm:345: tcp-read-timeout */
t4=*((C_word*)lf[26]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1791 in k1782 in k1779 in k1774 */
static void C_ccall f_1792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:405: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[52],t1);}

/* f_1685 in k1496 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1685(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1685,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:498: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t3,((C_word*)((C_word*)t0)[2])[1],t2);}

/* k1679 */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[49]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1966 in loop */
static void C_ccall f_1967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:454: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1889(t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),t2,C_fix(1024),C_make_character(32));}

/* k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1400,2,t0,t1);}
t2=C_mutate((C_word*)lf[29]+1 /* (set! tcp-accept-timeout ...) */,t1);
t3=*((C_word*)lf[25]+1);
t4=C_mutate(&lf[30] /* (set! ##net#io-ports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1402,a[2]=t3,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[62]+1 /* (set! tcp-accept ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2013,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[65]+1 /* (set! tcp-accept-ready? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2098,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[67]+1 /* (set! tcp-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[79]+1 /* (set! ##sys#tcp-port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2368,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[83]+1 /* (set! tcp-addresses ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2386,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[87]+1 /* (set! tcp-port-numbers ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2427,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[90]+1 /* (set! tcp-listener-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2470,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[92]+1 /* (set! tcp-abandon-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2494,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[93]+1 /* (set! tcp-listener-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2512,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_UNDEFINED);}

/* ##net#io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_fcall f_1402(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1402,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1406,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_i_foreign_fixnum_argumentp(t4);
if(C_truep(stub154(C_SCHEME_UNDEFINED,t5))){
t6=t3;
f_1406(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2002,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:334: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t6);}}

/* f_1419 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1419,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li15),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_1424(2,t5,t1);}

/* k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
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
C_word ab[66],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1419,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li16),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1497,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1719,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1740,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1769,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[6],a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1806,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word)li27),tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1823,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word)li29),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1880,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word)li32),tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1981,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:378: make-input-port */
t11=*((C_word*)lf[59]+1);
((C_proc9)(void*)(*((C_word*)t11+1)))(9,t11,t3,t4,t5,t6,t7,t8,t9,t10);}

/* k1944 in k1929 in k1908 */
static void C_ccall f_1945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
/* tcp.scm:446: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1889(t3,((C_word*)t0)[5],t1,t2);}

/* f_2357 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2357,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* f_2352 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2352,2,t0,t1);}
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1091,a[2]=t4,a[3]=t3,a[4]=t6,a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1091(t8,t2,C_fix(0));}

/* tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_2146r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2146r(t0,t1,t2,t3);}}

static void C_ccall f_2146r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(9);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t3));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2153,a[2]=t4,a[3]=t8,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:582: tcp-connect-timeout */
t10=*((C_word*)lf[28]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}

/* k1659 in k1656 */
static void C_ccall f_1660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[48]);
t3=((C_word*)t0)[3];
f_1624(t3,t2);}

/* f_1069 in yield in k998 in k811 in k809 in k807 */
static void C_ccall f_1069(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1069,3,t0,t1,t2);}
t3=*((C_word*)lf[3]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1077,a[2]=t2,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(*((C_word*)lf[3]+1),C_fix(1),t4);
/* tcp.scm:220: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(2,*((C_word*)lf[4]+1),t1);}

/* k2405 in k2403 in k2399 in k2397 in k2391 in k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:651: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2403 in k2399 in k2397 in k2391 in k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
/* tcp.scm:651: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2413,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2416,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k1929 in k1908 */
static void C_ccall f_1930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1930,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:lf[53]));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1945,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
/* tcp.scm:446: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t2,((C_word*)t0)[4],((C_word*)t0)[9]);}
else{
t3=((C_word*)t0)[9];
t4=C_fixnum_difference(((C_word*)t0)[6],((C_word*)t0)[7]);
/* tcp.scm:446: loop */
t5=((C_word*)((C_word*)t0)[8])[1];
f_1889(t5,((C_word*)t0)[5],t3,t4);}}}

/* ##sys#tcp-port->fileno in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2368(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2368,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2372,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:643: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(3,*((C_word*)lf[82]+1),t3,t2);}

/* k2399 in k2397 in k2391 in k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
t6=stub175(t4,t5);
/* tcp.scm:151: ##sys#peek-c-string */
t7=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2157,2,t0,t1);}
t2=C_i_check_exact(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2161,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:588: make-string */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2153,2,t0,t1);}
t2=C_i_check_string(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2157,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=t3;
f_2157(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2352,a[2]=((C_word*)t0)[2],a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:585: ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}}

/* k1577 in k1568 in loop */
static void C_ccall f_1578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:490: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[41],t1);}

/* k1574 in k1568 in loop */
static void C_ccall f_1575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:488: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],t1,((C_word*)t0)[3]);}

/* k2415 in k2403 in k2399 in k2397 in k2391 in k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:659: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[84],t1);}

/* k2371 in tcp-port->fileno in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_vectorp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(0)));}
else{
/* tcp.scm:646: error */
t2=*((C_word*)lf[80]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[79],lf[81],((C_word*)t0)[3]);}}

/* k2412 in k2403 in k2399 in k2397 in k2391 in k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:657: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[83],t1,((C_word*)t0)[3]);}

/* fail in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_fcall f_2165(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2165,NULL,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub103(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2171,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:592: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t4);}

/* k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2161(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2161,2,t0,t1);}
t2=C_fix((C_word)AF_INET);
t3=C_fix((C_word)SOCK_STREAM);
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_i_foreign_fixnum_argumentp(C_fix(0));
t7=stub65(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2165,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2182,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t8,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
t10=C_eqp(C_fix(-1),t7);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2333,a[2]=t9,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:597: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t11);}
else{
t11=t9;
f_2182(2,t11,C_SCHEME_UNDEFINED);}}

/* k1443 in loop */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:358: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(5,*((C_word*)lf[33]+1),t2,*((C_word*)lf[3]+1),((C_word*)t0)[5],lf[34]);}

/* k1445 in k1443 in loop */
static void C_ccall f_1446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:359: yield */
f_1063(t2);}

/* k2209 in k2187 in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:634: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[69],t1);}

/* k1568 in loop */
static void C_ccall f_1569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1578,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1047 in gethostaddr in k998 in k811 in k809 in k807 */
static void C_ccall f_1049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub207(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* tcp-port-numbers in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2427,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2431,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:662: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(4,*((C_word*)lf[86]+1),t3,t2,lf[87]);}

/* k2424 in k2397 in k2391 in k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:655: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[85],t1);}

/* f_1563 in loop */
static void C_ccall f_1563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1563,2,t0,t1);}
/* tcp.scm:485: g446 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1506(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2386(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2386,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2390,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:649: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(4,*((C_word*)lf[86]+1),t3,t2,lf[83]);}

/* k2421 in k2397 in k2391 in k2389 in tcp-addresses in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:653: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[8],lf[83],t1,((C_word*)t0)[3]);}

/* k2176 in k2170 in fail in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:593: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[8],lf[67],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* f_1671 in k1496 in k1417 in k1415 in k1413 in k1411 in k1407 in k1405 in io-ports in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_1671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1671,2,t0,t1);}
t2=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1680,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:519: output */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2170 in fail in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2180,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2206 in k2187 in k2185 in k2183 in k2181 in k2160 in k2156 in k2152 in tcp-connect in k1398 in k1394 in k1390 in k1386 in k1363 in k998 in k811 in k809 in k807 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:632: ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],lf[67],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[220] = {
{"f_1806:tcp_2escm",(void*)f_1806},
{"f_1552:tcp_2escm",(void*)f_1552},
{"f_2439:tcp_2escm",(void*)f_2439},
{"f_1904:tcp_2escm",(void*)f_1904},
{"f_2398:tcp_2escm",(void*)f_2398},
{"f_1909:tcp_2escm",(void*)f_1909},
{"f_2390:tcp_2escm",(void*)f_2390},
{"f_2392:tcp_2escm",(void*)f_2392},
{"f_2431:tcp_2escm",(void*)f_2431},
{"f_2433:tcp_2escm",(void*)f_2433},
{"f_1091:tcp_2escm",(void*)f_1091},
{"f_1809:tcp_2escm",(void*)f_1809},
{"f_2441:tcp_2escm",(void*)f_2441},
{"f_2224:tcp_2escm",(void*)f_2224},
{"f_2229:tcp_2escm",(void*)f_2229},
{"f_2227:tcp_2escm",(void*)f_2227},
{"f_1196:tcp_2escm",(void*)f_1196},
{"f_1236:tcp_2escm",(void*)f_1236},
{"f_1823:tcp_2escm",(void*)f_1823},
{"f_1193:tcp_2escm",(void*)f_1193},
{"f_1231:tcp_2escm",(void*)f_1231},
{"f_1187:tcp_2escm",(void*)f_1187},
{"f_1828:tcp_2escm",(void*)f_1828},
{"f_1224:tcp_2escm",(void*)f_1224},
{"f_1222:tcp_2escm",(void*)f_1222},
{"f_1173:tcp_2escm",(void*)f_1173},
{"f_1171:tcp_2escm",(void*)f_1171},
{"f_1219:tcp_2escm",(void*)f_1219},
{"f_1179:tcp_2escm",(void*)f_1179},
{"f_1175:tcp_2escm",(void*)f_1175},
{"f_1880:tcp_2escm",(void*)f_1880},
{"f_1213:tcp_2escm",(void*)f_1213},
{"f_1169:tcp_2escm",(void*)f_1169},
{"f_1165:tcp_2escm",(void*)f_1165},
{"f_1202:tcp_2escm",(void*)f_1202},
{"f_1889:tcp_2escm",(void*)f_1889},
{"f_1388:tcp_2escm",(void*)f_1388},
{"f_1775:tcp_2escm",(void*)f_1775},
{"f_1371:tcp_2escm",(void*)f_1371},
{"f_1374:tcp_2escm",(void*)f_1374},
{"f_1618:tcp_2escm",(void*)f_1618},
{"f_1365:tcp_2escm",(void*)f_1365},
{"f_1610:tcp_2escm",(void*)f_1610},
{"f_2287:tcp_2escm",(void*)f_2287},
{"f_1358:tcp_2escm",(void*)f_1358},
{"f_1355:tcp_2escm",(void*)f_1355},
{"f_1643:tcp_2escm",(void*)f_1643},
{"f_1640:tcp_2escm",(void*)f_1640},
{"f_2106:tcp_2escm",(void*)f_2106},
{"f_1624:tcp_2escm",(void*)f_1624},
{"f_1626:tcp_2escm",(void*)f_1626},
{"f_2114:tcp_2escm",(void*)f_2114},
{"f_1532:tcp_2escm",(void*)f_1532},
{"f_1530:tcp_2escm",(void*)f_1530},
{"f_1534:tcp_2escm",(void*)f_1534},
{"f_2456:tcp_2escm",(void*)f_2456},
{"f_2453:tcp_2escm",(void*)f_2453},
{"f_1608:tcp_2escm",(void*)f_1608},
{"f_2123:tcp_2escm",(void*)f_2123},
{"f_2120:tcp_2escm",(void*)f_2120},
{"f_1392:tcp_2escm",(void*)f_1392},
{"f_1396:tcp_2escm",(void*)f_1396},
{"f_2468:tcp_2escm",(void*)f_2468},
{"f_1528:tcp_2escm",(void*)f_1528},
{"f_2465:tcp_2escm",(void*)f_2465},
{"f_1632:tcp_2escm",(void*)f_1632},
{"f_1634:tcp_2escm",(void*)f_1634},
{"f_2470:tcp_2escm",(void*)f_2470},
{"f_2489:tcp_2escm",(void*)f_2489},
{"f_2480:tcp_2escm",(void*)f_2480},
{"f_2498:tcp_2escm",(void*)f_2498},
{"f_2494:tcp_2escm",(void*)f_2494},
{"f_1699:tcp_2escm",(void*)f_1699},
{"f_2492:tcp_2escm",(void*)f_2492},
{"f_1691:tcp_2escm",(void*)f_1691},
{"f_2180:tcp_2escm",(void*)f_2180},
{"f_2182:tcp_2escm",(void*)f_2182},
{"f_2184:tcp_2escm",(void*)f_2184},
{"f_1349:tcp_2escm",(void*)f_1349},
{"f_2186:tcp_2escm",(void*)f_2186},
{"f_2188:tcp_2escm",(void*)f_2188},
{"f_1039:tcp_2escm",(void*)f_1039},
{"f_2026:tcp_2escm",(void*)f_2026},
{"f_2319:tcp_2escm",(void*)f_2319},
{"f_2193:tcp_2escm",(void*)f_2193},
{"f_1335:tcp_2escm",(void*)f_1335},
{"f_2021:tcp_2escm",(void*)f_2021},
{"f_1011:tcp_2escm",(void*)f_1011},
{"f_1989:tcp_2escm",(void*)f_1989},
{"f_2313:tcp_2escm",(void*)f_2313},
{"f_1981:tcp_2escm",(void*)f_1981},
{"f_2325:tcp_2escm",(void*)f_2325},
{"f_1326:tcp_2escm",(void*)f_1326},
{"f_999:tcp_2escm",(void*)f_999},
{"f_2322:tcp_2escm",(void*)f_2322},
{"f_2339:tcp_2escm",(void*)f_2339},
{"f_2333:tcp_2escm",(void*)f_2333},
{"f_1007:tcp_2escm",(void*)f_1007},
{"f_2013:tcp_2escm",(void*)f_2013},
{"f_2344:tcp_2escm",(void*)f_2344},
{"f_2011:tcp_2escm",(void*)f_2011},
{"f_1063:tcp_2escm",(void*)f_1063},
{"f_1131:tcp_2escm",(void*)f_1131},
{"f_1134:tcp_2escm",(void*)f_1134},
{"f_2342:tcp_2escm",(void*)f_2342},
{"f_1869:tcp_2escm",(void*)f_1869},
{"f_1077:tcp_2escm",(void*)f_1077},
{"f_2069:tcp_2escm",(void*)f_2069},
{"f_2247:tcp_2escm",(void*)f_2247},
{"f_2061:tcp_2escm",(void*)f_2061},
{"f_2064:tcp_2escm",(void*)f_2064},
{"f_1120:tcp_2escm",(void*)f_1120},
{"f_1125:tcp_2escm",(void*)f_1125},
{"f_1598:tcp_2escm",(void*)f_1598},
{"f_1485:tcp_2escm",(void*)f_1485},
{"f_1488:tcp_2escm",(void*)f_1488},
{"f_1506:tcp_2escm",(void*)f_1506},
{"f_808:tcp_2escm",(void*)f_808},
{"f_2253:tcp_2escm",(void*)f_2253},
{"f_1113:tcp_2escm",(void*)f_1113},
{"f_1479:tcp_2escm",(void*)f_1479},
{"f_1450:tcp_2escm",(void*)f_1450},
{"f_1116:tcp_2escm",(void*)f_1116},
{"f_2267:tcp_2escm",(void*)f_2267},
{"f_2002:tcp_2escm",(void*)f_2002},
{"f_2265:tcp_2escm",(void*)f_2265},
{"f_2008:tcp_2escm",(void*)f_2008},
{"f_2263:tcp_2escm",(void*)f_2263},
{"f_2261:tcp_2escm",(void*)f_2261},
{"f_1704:tcp_2escm",(void*)f_1704},
{"f_1468:tcp_2escm",(void*)f_1468},
{"f_810:tcp_2escm",(void*)f_810},
{"f_812:tcp_2escm",(void*)f_812},
{"f_1294:tcp_2escm",(void*)f_1294},
{"f_1290:tcp_2escm",(void*)f_1290},
{"f_2525:tcp_2escm",(void*)f_2525},
{"f_2528:tcp_2escm",(void*)f_2528},
{"f_2522:tcp_2escm",(void*)f_2522},
{"f_1286:tcp_2escm",(void*)f_1286},
{"f_1289:tcp_2escm",(void*)f_1289},
{"f_1719:tcp_2escm",(void*)f_1719},
{"f_1280:tcp_2escm",(void*)f_1280},
{"f_1740:tcp_2escm",(void*)f_1740},
{"f_2093:tcp_2escm",(void*)f_2093},
{"f_2098:tcp_2escm",(void*)f_2098},
{"f_1272:tcp_2escm",(void*)f_1272},
{"f_1265:tcp_2escm",(void*)f_1265},
{"f_1498:tcp_2escm",(void*)f_1498},
{"f_1408:tcp_2escm",(void*)f_1408},
{"f_1497:tcp_2escm",(void*)f_1497},
{"f_1260:tcp_2escm",(void*)f_1260},
{"f_1255:tcp_2escm",(void*)f_1255},
{"f_2512:tcp_2escm",(void*)f_2512},
{"f_1722:tcp_2escm",(void*)f_1722},
{"f_1252:tcp_2escm",(void*)f_1252},
{"f_1750:tcp_2escm",(void*)f_1750},
{"f_1758:tcp_2escm",(void*)f_1758},
{"toplevel:tcp_2escm",(void*)C_tcp_toplevel},
{"f_2055:tcp_2escm",(void*)f_2055},
{"f_2531:tcp_2escm",(void*)f_2531},
{"f_2504:tcp_2escm",(void*)f_2504},
{"f_1783:tcp_2escm",(void*)f_1783},
{"f_1789:tcp_2escm",(void*)f_1789},
{"f_1781:tcp_2escm",(void*)f_1781},
{"f_1448:tcp_2escm",(void*)f_1448},
{"f_2075:tcp_2escm",(void*)f_2075},
{"f_2071:tcp_2escm",(void*)f_2071},
{"f_2073:tcp_2escm",(void*)f_2073},
{"f_1424:tcp_2escm",(void*)f_1424},
{"f_1764:tcp_2escm",(void*)f_1764},
{"f_1769:tcp_2escm",(void*)f_1769},
{"f_1767:tcp_2escm",(void*)f_1767},
{"f_1658:tcp_2escm",(void*)f_1658},
{"f_1412:tcp_2escm",(void*)f_1412},
{"f_1416:tcp_2escm",(void*)f_1416},
{"f_1414:tcp_2escm",(void*)f_1414},
{"f_1792:tcp_2escm",(void*)f_1792},
{"f_1685:tcp_2escm",(void*)f_1685},
{"f_1680:tcp_2escm",(void*)f_1680},
{"f_1967:tcp_2escm",(void*)f_1967},
{"f_1406:tcp_2escm",(void*)f_1406},
{"f_1400:tcp_2escm",(void*)f_1400},
{"f_1402:tcp_2escm",(void*)f_1402},
{"f_1419:tcp_2escm",(void*)f_1419},
{"f_1418:tcp_2escm",(void*)f_1418},
{"f_1945:tcp_2escm",(void*)f_1945},
{"f_2357:tcp_2escm",(void*)f_2357},
{"f_2352:tcp_2escm",(void*)f_2352},
{"f_2146:tcp_2escm",(void*)f_2146},
{"f_1660:tcp_2escm",(void*)f_1660},
{"f_1069:tcp_2escm",(void*)f_1069},
{"f_2407:tcp_2escm",(void*)f_2407},
{"f_2404:tcp_2escm",(void*)f_2404},
{"f_1930:tcp_2escm",(void*)f_1930},
{"f_2368:tcp_2escm",(void*)f_2368},
{"f_2401:tcp_2escm",(void*)f_2401},
{"f_2157:tcp_2escm",(void*)f_2157},
{"f_2153:tcp_2escm",(void*)f_2153},
{"f_1578:tcp_2escm",(void*)f_1578},
{"f_1575:tcp_2escm",(void*)f_1575},
{"f_2416:tcp_2escm",(void*)f_2416},
{"f_2372:tcp_2escm",(void*)f_2372},
{"f_2413:tcp_2escm",(void*)f_2413},
{"f_2165:tcp_2escm",(void*)f_2165},
{"f_2161:tcp_2escm",(void*)f_2161},
{"f_1444:tcp_2escm",(void*)f_1444},
{"f_1446:tcp_2escm",(void*)f_1446},
{"f_2210:tcp_2escm",(void*)f_2210},
{"f_1569:tcp_2escm",(void*)f_1569},
{"f_1049:tcp_2escm",(void*)f_1049},
{"f_2427:tcp_2escm",(void*)f_2427},
{"f_2425:tcp_2escm",(void*)f_2425},
{"f_1563:tcp_2escm",(void*)f_1563},
{"f_2386:tcp_2escm",(void*)f_2386},
{"f_2422:tcp_2escm",(void*)f_2422},
{"f_2177:tcp_2escm",(void*)f_2177},
{"f_1671:tcp_2escm",(void*)f_1671},
{"f_2171:tcp_2escm",(void*)f_2171},
{"f_2207:tcp_2escm",(void*)f_2207},
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
o|eliminated procedure checks: 141 
o|specializations:
o|  1 (make-string fixnum)
o|  2 (cdr pair)
o|Removed `not' forms: 1 
o|propagated global variable: ct218 ##sys#current-thread 
o|inlining procedure: k1094 
o|inlining procedure: k1094 
o|inlining procedure: k1119 
o|inlining procedure: k1119 
o|contracted procedure: "(tcp.scm:234) getservbyname" 
o|inlining procedure: k1009 
o|inlining procedure: k1009 
o|contracted procedure: "(tcp.scm:288) bind-socket" 
o|inlining procedure: k1178 
o|inlining procedure: k1178 
o|contracted procedure: "(tcp.scm:276) bind" 
o|inlining procedure: k1197 
o|inlining procedure: k1197 
o|contracted procedure: "(tcp.scm:275) fresh-addr" 
o|inlining procedure: k1271 
o|inlining procedure: k1271 
o|contracted procedure: "(tcp.scm:290) listen" 
o|inlining procedure: k1298 
o|inlining procedure: k1298 
o|inlining procedure: k1329 
o|inlining procedure: k1329 
o|inlining procedure: k1342 
o|inlining procedure: k1342 
o|inlining procedure: "(tcp.scm:305) close" 
o|inlining procedure: k1376 
o|inlining procedure: k1376 
o|inlining procedure: k1429 
o|inlining procedure: k1449 
o|inlining procedure: k1449 
o|inlining procedure: k1469 
o|inlining procedure: k1469 
o|inlining procedure: k1429 
o|contracted procedure: "(tcp.scm:350) recv" 
o|inlining procedure: k1513 
o|inlining procedure: k1533 
o|inlining procedure: k1533 
o|inlining procedure: k1553 
o|inlining procedure: k1553 
o|inlining procedure: k1513 
o|contracted procedure: "(tcp.scm:468) send" 
o|inlining procedure: k1620 
o|inlining procedure: k1620 
o|inlining procedure: "(tcp.scm:512) close" 
o|inlining procedure: k1669 
o|inlining procedure: k1674 
o|inlining procedure: k1674 
o|inlining procedure: k1669 
o|inlining procedure: k1692 
o|inlining procedure: k1692 
o|inlining procedure: k1707 
o|inlining procedure: k1707 
o|inlining procedure: k1723 
o|inlining procedure: k1723 
o|inlining procedure: k1744 
o|inlining procedure: k1744 
o|inlining procedure: "(tcp.scm:389) select" 
o|inlining procedure: k1771 
o|inlining procedure: k1771 
o|inlining procedure: "(tcp.scm:401) close" 
o|inlining procedure: k1810 
o|inlining procedure: k1810 
o|inlining procedure: k1831 
o|inlining procedure: k1831 
o|inlining procedure: k1870 
o|inlining procedure: k1870 
o|inlining procedure: k1892 
o|inlining procedure: k1911 
o|inlining procedure: k1911 
o|inlining procedure: k1931 
o|inlining procedure: k1931 
o|inlining procedure: k1954 
o|inlining procedure: k1954 
o|inlining procedure: k1892 
o|inlining procedure: k1983 
o|inlining procedure: k1983 
o|inlining procedure: k1991 
o|inlining procedure: k1991 
o|substituted constant variable: a1997 
o|inlining procedure: "(tcp.scm:333) make-nonblocking" 
o|inlining procedure: k2029 
o|inlining procedure: k2045 
o|inlining procedure: k2045 
o|contracted procedure: "(tcp.scm:535) accept" 
o|inlining procedure: k865 
o|inlining procedure: k865 
o|inlining procedure: k2029 
o|inlining procedure: "(tcp.scm:534) select" 
o|inlining procedure: k2105 
o|inlining procedure: k2105 
o|inlining procedure: "(tcp.scm:562) select" 
o|inlining procedure: "(tcp.scm:591) close" 
o|inlining procedure: k2191 
o|inlining procedure: "(tcp.scm:631) close" 
o|inlining procedure: k2191 
o|contracted procedure: "(tcp.scm:639) general-strerror" 
o|inlining procedure: "(tcp.scm:636) close" 
o|contracted procedure: "(tcp.scm:629) get-socket-error" 
o|inlining procedure: k2232 
o|inlining procedure: k2254 
o|inlining procedure: k2254 
o|inlining procedure: "(tcp.scm:620) close" 
o|contracted procedure: "(tcp.scm:610) select-write" 
o|inlining procedure: k2294 
o|inlining procedure: k2294 
o|inlining procedure: k2232 
o|contracted procedure: "(tcp.scm:607) connect" 
o|inlining procedure: "(tcp.scm:603) make-nonblocking" 
o|inlining procedure: k2345 
o|inlining procedure: k2345 
o|inlining procedure: k2373 
o|inlining procedure: k2373 
o|inlining procedure: k2405 
o|inlining procedure: k2405 
o|contracted procedure: "(tcp.scm:656) getpeername" 
o|contracted procedure: "(tcp.scm:652) getsockname" 
o|inlining procedure: k2440 
o|inlining procedure: k2440 
o|contracted procedure: "(tcp.scm:665) getpeerport" 
o|inlining procedure: "(tcp.scm:664) getsockport" 
o|inlining procedure: k2479 
o|inlining procedure: k2479 
o|inlining procedure: "(tcp.scm:679) getsockport" 
o|inlining procedure: k2506 
o|inlining procedure: k2506 
o|folded constant expression: (fx* (quote 60) (quote 1000)) 
o|contracted procedure: "(tcp.scm:171) startup" 
o|replaced variables: 218 
o|removed binding forms: 69 
o|removed side-effect free assignment to unused variable: ##net#close 
o|removed side-effect free assignment to unused variable: ##net#make-nonblocking 
o|removed side-effect free assignment to unused variable: ##net#getsockport 
o|removed side-effect free assignment to unused variable: ##net#select 
o|substituted constant variable: f_13282569 
o|contracted procedure: k1382 
o|substituted constant variable: a107117 
o|substituted constant variable: a108116 
o|substituted constant variable: a138150 
o|substituted constant variable: a16682613 
o|substituted constant variable: r17242618 
o|inlining procedure: k1749 
o|substituted constant variable: r18112635 
o|substituted constant variable: f_19822648 
o|substituted constant variable: r19922650 
o|substituted constant variable: r19922651 
o|substituted constant variable: a9097 
o|substituted constant variable: a8998 
o|substituted constant variable: a8998 
o|substituted constant variable: a8998 
o|substituted constant variable: r8662662 
o|substituted constant variable: r8662662 
o|substituted constant variable: a9097 
o|substituted constant variable: a9097 
o|inlining procedure: k2074 
o|inlining procedure: k2191 
o|inlining procedure: k2266 
o|converted assignments to bindings: (fail521) 
o|contracted procedure: "(tcp.scm:585) parse-host" 
o|substituted constant variable: r10102546 
o|substituted constant variable: r10102546 
o|substituted constant variable: a25052752 
o|substituted constant variable: a25052753 
o|simplifications: ((let . 1)) 
o|replaced variables: 57 
o|removed binding forms: 223 
o|removed conditional forms: 2 
o|inlining procedure: k1149 
o|inlining procedure: k1242 
o|inlining procedure: k1360 
o|inlining procedure: k1648 
o|inlining procedure: k1797 
o|contracted procedure: k861 
o|inlining procedure: k2095 
o|inlining procedure: k2274 
o|inlining procedure: k2307 
o|substituted constant variable: proto223 
o|substituted constant variable: proto223 
o|substituted constant variable: proto223 
o|substituted constant variable: r1383 
o|substituted constant variable: r1383 
o|inlining procedure: k2532 
o|removed binding forms: 85 
o|removed conditional forms: 1 
o|contracted procedure: k1176 
o|substituted constant variable: r11502802 
o|contracted procedure: k1269 
o|contracted procedure: k1427 
o|contracted procedure: k1511 
o|contracted procedure: k1747 
o|contracted procedure: k1998 
o|contracted procedure: k2034 
o|substituted constant variable: r862 
o|contracted procedure: k2103 
o|contracted procedure: k2168 
o|contracted procedure: k2189 
o|contracted procedure: k2200 
o|contracted procedure: k2217 
o|contracted procedure: k2250 
o|contracted procedure: k2309 
o|contracted procedure: k1117 
o|contracted procedure: k2434 
o|contracted procedure: k2436 
o|contracted procedure: k2477 
o|converted assignments to bindings: (check315) 
o|simplifications: ((let . 4)) 
o|removed binding forms: 30 
o|replaced variables: 3 
o|removed binding forms: 2 
o|removed binding forms: 3 
o|simplifications: ((if . 15) (##core#call . 197)) 
o|  call simplifications:
o|    vector?
o|    ##sys#check-string
o|    char=?
o|    vector
o|    ##sys#fudge
o|    fx>	5
o|    ##sys#size	6
o|    fxmin	2
o|    fx-	5
o|    fx+	9
o|    ##sys#setislot	4
o|    +	4
o|    ##sys#check-structure	5
o|    ##sys#slot	14
o|    fx=	2
o|    ##sys#structure?
o|    null?	3
o|    car	3
o|    ##sys#call-with-values	2
o|    ##sys#make-structure	2
o|    ##sys#check-exact	4
o|    fx<	8
o|    fx>=	8
o|    eq?	37
o|    values	10
o|    ##sys#call-with-current-continuation
o|    ##sys#setslot	5
o|    ##sys#foreign-block-argument	6
o|    ##sys#foreign-string-argument	3
o|    ##sys#foreign-fixnum-argument	43
o|contracted procedure: k818 
o|contracted procedure: k821 
o|contracted procedure: k824 
o|contracted procedure: k906 
o|contracted procedure: k909 
o|contracted procedure: k1043 
o|contracted procedure: k1051 
o|contracted procedure: k1057 
o|contracted procedure: k1071 
o|contracted procedure: k1162 
o|contracted procedure: k831 
o|contracted procedure: k834 
o|contracted procedure: k838 
o|contracted procedure: k1183 
o|contracted procedure: k1149 
o|contracted procedure: k1153 
o|contracted procedure: k11532805 
o|contracted procedure: k1227 
o|contracted procedure: k1209 
o|contracted procedure: k1232 
o|contracted procedure: k1240 
o|contracted procedure: k1242 
o|contracted procedure: k1267 
o|contracted procedure: k848 
o|contracted procedure: k851 
o|contracted procedure: k1276 
o|contracted procedure: k1301 
o|contracted procedure: k1307 
o|contracted procedure: k1313 
o|contracted procedure: k1319 
o|contracted procedure: k1338 
o|contracted procedure: k1340 
o|contracted procedure: k8792576 
o|contracted procedure: k1345 
o|contracted procedure: k1376 
o|contracted procedure: k1409 
o|contracted procedure: k886 
o|contracted procedure: k889 
o|contracted procedure: k893 
o|contracted procedure: k896 
o|contracted procedure: k1432 
o|contracted procedure: k1438 
o|contracted procedure: k1440 
o|contracted procedure: k1454 
o|contracted procedure: k1464 
o|contracted procedure: k1472 
o|contracted procedure: k1493 
o|contracted procedure: k1503 
o|contracted procedure: k1509 
o|contracted procedure: k933 
o|contracted procedure: k936 
o|contracted procedure: k940 
o|contracted procedure: k943 
o|contracted procedure: k946 
o|contracted procedure: k1516 
o|contracted procedure: k1522 
o|contracted procedure: k1524 
o|contracted procedure: k1538 
o|contracted procedure: k1548 
o|contracted procedure: k1556 
o|contracted procedure: k1585 
o|contracted procedure: k1592 
o|contracted procedure: k1595 
o|contracted procedure: k1599 
o|contracted procedure: k1601 
o|contracted procedure: k1603 
o|contracted procedure: k1605 
o|contracted procedure: k1615 
o|contracted procedure: k1702 
o|contracted procedure: k1695 
o|contracted procedure: k1716 
o|contracted procedure: k1709 
o|contracted procedure: k8792609 
o|contracted procedure: k1650 
o|contracted procedure: k1666 
o|contracted procedure: k1683 
o|contracted procedure: k1676 
o|contracted procedure: k1726 
o|contracted procedure: k1730 
o|contracted procedure: k1733 
o|contracted procedure: k1742 
o|contracted procedure: k10292626 
o|contracted procedure: k1754 
o|contracted procedure: k8792633 
o|contracted procedure: k1799 
o|contracted procedure: k1813 
o|contracted procedure: k1816 
o|contracted procedure: k1833 
o|contracted procedure: k1839 
o|contracted procedure: k1842 
o|contracted procedure: k1865 
o|contracted procedure: k1844 
o|contracted procedure: k1847 
o|contracted procedure: k1850 
o|contracted procedure: k1857 
o|contracted procedure: k1860 
o|contracted procedure: k1863 
o|contracted procedure: k1873 
o|contracted procedure: k1885 
o|contracted procedure: k1894 
o|contracted procedure: k1901 
o|contracted procedure: k1906 
o|contracted procedure: k1914 
o|contracted procedure: k1926 
o|contracted procedure: k1934 
o|contracted procedure: k1947 
o|contracted procedure: k1964 
o|contracted procedure: k1961 
o|contracted procedure: k1952 
o|contracted procedure: k1971 
o|contracted procedure: k1985 
o|contracted procedure: k1994 
o|contracted procedure: k9562656 
o|contracted procedure: k2016 
o|contracted procedure: k2018 
o|contracted procedure: k10292669 
o|contracted procedure: k2031 
o|contracted procedure: k858 
o|contracted procedure: k2039 
o|contracted procedure: k2048 
o|contracted procedure: k2079 
o|contracted procedure: k2089 
o|contracted procedure: k2101 
o|contracted procedure: k2125 
o|contracted procedure: k10292682 
o|contracted procedure: k2110 
o|contracted procedure: k2361 
o|contracted procedure: k2149 
o|contracted procedure: k2154 
o|contracted procedure: k2158 
o|contracted procedure: k8792687 
o|contracted procedure: k2132 
o|contracted procedure: k2197 
o|contracted procedure: k8792697 
o|contracted procedure: k2214 
o|contracted procedure: k8792707 
o|contracted procedure: k2143 
o|contracted procedure: k916 
o|contracted procedure: k919 
o|contracted procedure: k923 
o|contracted procedure: k2234 
o|contracted procedure: k2240 
o|contracted procedure: k1036 
o|contracted procedure: k2257 
o|contracted procedure: k2271 
o|contracted procedure: k8792715 
o|contracted procedure: k2283 
o|contracted procedure: k2288 
o|contracted procedure: k2297 
o|contracted procedure: k9562723 
o|contracted procedure: k2329 
o|contracted procedure: k1085 
o|contracted procedure: k1096 
o|contracted procedure: k1105 
o|contracted procedure: k1121 
o|contracted procedure: k1016 
o|contracted procedure: k1022 
o|contracted procedure: k1136 
o|contracted procedure: k1142 
o|contracted procedure: k2376 
o|contracted procedure: k992 
o|contracted procedure: k967 
o|contracted procedure: k9742744 
o|contracted procedure: k981 
o|contracted procedure: k2445 
o|contracted procedure: k2457 
o|contracted procedure: k2473 
o|contracted procedure: k2475 
o|contracted procedure: k9742751 
o|contracted procedure: k2481 
o|contracted procedure: k2508 
o|contracted procedure: k2515 
o|simplifications: ((let . 26)) 
o|removed binding forms: 172 
o|inlining procedure: k1047 
o|inlining procedure: "(tcp.scm:256) socket" 
o|inlining procedure: "(tcp.scm:511) shutdown" 
o|inlining procedure: "(tcp.scm:400) shutdown" 
o|inlining procedure: k1944 
o|inlining procedure: "(tcp.scm:589) socket" 
o|replaced variables: 7 
o|removed side-effect free assignment to unused variable: ##net#socket 
o|removed side-effect free assignment to unused variable: ##net#shutdown 
o|substituted constant variable: r10482927 
o|substituted constant variable: a62692932 
o|substituted constant variable: a62692965 
o|replaced variables: 5 
o|removed binding forms: 6 
o|removed binding forms: 10 
o|contracted procedure: k1166 
o|contracted procedure: k2162 
o|removed binding forms: 2 
o|replaced variables: 9 
o|removed binding forms: 9 
o|customizable procedures: (check315 loop225 fail521 loop2530 ##net#io-ports k1413 loop395 loop380 k1774 k1779 k1656 k1623 k1625 k1630 loop425 yield ##net#gethostaddr) 
o|calls to known targets: 77 
o|identified direct recursive calls: f_1506 1 
o|identified direct recursive calls: f_1828 1 
o|identified direct recursive calls: f_1091 1 
o|fast box initializations: 8 
o|fast global references: 10 
o|fast global assignments: 4 
o|dropping unused closure argument: f_1371 
o|dropping unused closure argument: f_1039 
o|dropping unused closure argument: f_1063 
*/
/* end of file */
