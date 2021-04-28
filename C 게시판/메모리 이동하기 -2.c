//메모리 이동하기
#include<stdio.h>
#include<string.h>
char s1[20] = "1234567890";
char s2[20] = "1234567890";
void main(void)
{
 puts(s1);
 memcpy(s1 + 4, s1 + 2, 5);
 puts(s1);
}
