//관계 연산 데이터 출력 프로그램
#include<stdio.h>
void main(void)
{
  int x,y,z;
  x=15;
  y=10;
  z=x,y;
  printf("%d\n",z);
  z=x==y;
  printf("%d\n",z);
}
