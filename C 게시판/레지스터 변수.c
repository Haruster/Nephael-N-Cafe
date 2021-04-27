//레지스터 변수
#include<stdio.h>
void main(void)
{
   register int x=20;
   x=x+10;
   printf("x=[%d]\n",x);
}
