//memchr() 함수
#include <stdio.h>
#include <string.h>
int main( void)
{
   char  *ptr = "falinux.forum.com";
   printf( "%s\n", memchr( ptr, 'o',  7)); 
   printf( "%s\n", memchr( ptr, 'o', 10)); 
}
