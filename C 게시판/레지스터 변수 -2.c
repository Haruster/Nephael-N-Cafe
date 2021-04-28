#include<stdio.h>
void main(void)
{
   register int x=20;
   register double z=0;
   x=x+10;
   z=z+1;
   printf("x=[%d] [%d]\n",x,z);
}
