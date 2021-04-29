#ifndef __HAVE_XDEBUG_STR_H__
#define __HAVE_XDEBUG_STR_H__

#include "xdebug_mm.h"

#define XDEBUG_STR_INITIALIZER { 0, 0, NULL }
#define XDEBUG_STR_PREALLOC 1024
#define xdebug_str_dtor(str)     xdfree(str.d)

#define XDEBUG_STR_WRAP_CHAR(v) (&((xdebug_str){strlen(v), strlen(v)+1, ((char*)(v))}))

typedef struct xdebug_str {
  size_t l;
  size_t a;
  char *d;
} xdebug_str;

void xdebug_str_add(xdebug_str *xs, const char *str, int f);
void xdebug_str_addl(xdebug_str *xs, const char *str, int le, int f);
void xdebug_str_add_str(xdebug_str *xs, const xdebug_str *str);
void xdebug_str_addc(xdebug_str *xs, char letter);
void xdebug_str_chop(xdebug_str *xs, size_t c);

xdebug_str *xdebug_str_new(void);
xdebug_str *xdebug_str_create_from_char(char *c);
xdebug_str *xdebug_str_create(char *c, size_t len);
xdebug_str *xdebug_str_copy(xdebug_str *orig);
void xdebug_str_destroy(xdebug_str *s);
void xdebug_str_free(xdebug_str *s);

char* xdebug_sprintf (const char* fmt, ...);
char* xdebug_strndup(const char *s, int length);

#endif
