//3차원 배열 포인터
#include<stdio.h>
void main(void)
{
 int image[2][3][4] = { 0,1,2, };
 {
  printf("size of[%d][%d]\n", sizeof(image));
 }
 {
  printf("size of[%d][%d]\n", sizeof(image));
 }
 for (int i = 0; i < 2; i++)
 {
  for (int j = 0; j < 3; j++)
  {
   for (int k = 0; k < 4; k++)
   {
    printf("image [%d] [%d] [%d] : address [%x]\n", i, j, k, &image[i][j][k]);
   }
  }
 }
}
