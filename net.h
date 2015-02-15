#ifndef _NET_C_
#define _NET_C_

#include <sys/types.h>

struct in_addr *makeAddr(char *ip);
int contact(struct in_addr *x);
char *makeReq(const char *page, const char *req);

unsigned short sendreq(short socket, const char *buf, size_t s);

void cleanup(int);
#endif


