//do while 암호프로그램
#include<stdio.h>
void main(void)
{
 int x = 0, y = 0;
 do{
  printf("비밀번호를 입력하세요");
  scanf_s("%d", &y);
  x += y;
 } while (y != 1234); //비밀번호 설정
 printf("%d\n", x);
} 
