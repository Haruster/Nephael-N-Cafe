//1,2,3 차원 통합 배열 포인터

#include<stdio.h>
int main(void)
{
 int image[2][3][4] = { 0,1,2, };
 int nNum_1;
 int nNum_2;
 int nNum_3;
 int nNum_4;
 printf("size of[%d][%d]\n", sizeof(image));
 for (int i = 0; i < 3; i++)
 {
  for (int j = 0; j < 4; j++)
  {
   printf("image [%d] [%d] : address [%x]\n", i, j, &image[i][j]);
  }
 }
 int * ptrArray[4] = { &nNum_1, &nNum_2, &nNum_3, &nNum_4 };
 for (int i = 0; i < 4; i++)
 {
  printf("ptrArray[%d] : [%x] -> [%d]\n", i, ptrArray[i], *ptrArray[i]);
  {
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
 }
}
