//조건 연산 데이터
#include<stdio.h>
#define TRUE 1
#define FALSE 0
void main(void)
{
  int x=10, y=20;
  int z=0;
  z = x < y ? TRUE : FALSE;
  if(z==TRUE)
  printf("TRUE입니다.\n");
  else
  printf("FALSE입니다.\n");
}
