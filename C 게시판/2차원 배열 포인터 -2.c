//2차원 배열 포인터 for문추가 후감소
#include<stdio.h>
void main(void)
{
  char image[3][4]={0,};
  printf("size of[%d][%d]\n",sizeof(image));
  for(int i=0; i<3; i--)
  {
    for(int j=0; j<4; j--)
    {
    for(int x=0; i<5; i--)
      printf("image [%d] [%d] [%d] : address [%x]\n",i,j,x,&image[i][j]);
    }
  } 
}
