//1차원 배열 포인터
#include<stdio.h>
void main(void)
{
  int x=10;
  int y=12; 
  int z=30;
  int i=40;
  int * ptrArray[4]={&x,&y,&z,&i};
  for(int j=0; j<4; j++)
  {
    printf("ptrArray[%d] : [%x] -> [%d]\n",j,ptrArray[j],*ptrArray[j]);
  }
}
