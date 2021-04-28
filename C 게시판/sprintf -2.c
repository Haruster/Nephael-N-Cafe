#include <stdio.h>
int main(void)
{
   char  ptr[1024];
   int   ret;
   ret   = sprintf( ptr, "%d %x %s", 123, 123, "forum.falinux.com");
   printf( "ret=%d ptr=%s\n", ret, ptr);
}
