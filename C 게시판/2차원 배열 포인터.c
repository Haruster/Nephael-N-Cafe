//2차원 배열 포인터
#include<stdio.h>
void main(void)
{
  char image[3][4]={0,};
  printf("size of[%d][%d]\n",sizeof(image));
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<4; j++)
    {
      printf("image [%d] [%d] : address [%x]\n",i,j,&image[i][j]);
    }
  } 
}
