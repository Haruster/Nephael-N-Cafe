//realloc ( ) 함수
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( void)
{
   char   *ptr;
   char   *tmp;
   tmp = malloc( 10);
   ptr = malloc( 10);
   strcpy( ptr, "forum");
   printf( "realloc() 호출 전 ptr의 값: %x\n", ptr);
   ptr   = realloc( ptr, 50);
   printf( "realloc() 호출 후 ptr의 값: %x\n", ptr);
   strcpy( ptr+strlen( ptr), "falinux");  // 이전 문자열 뒤에 falinux 추가
   printf( "%s\n", ptr);   
   free( ptr);
}
