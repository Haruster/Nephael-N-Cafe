//1,2차원 통합배열 포인터
#include<stdio.h>
void main(void)
{
 int nNum_1;
 int nNum_2;
 int nNum_3;
 int nNum_4;
 char image[3][4] = { 0, };
 int * ptrArray[4] = { &nNum_1, &nNum_2, &nNum_3, &nNum_4 };
 printf("size of[%d][%d]\n", sizeof(image));
 for (int i = 0; i < 4; i++)
 {
  {
   for (int j = 0; j < 4; j++)
   {
    printf("image [%d] [%d] : address [%x]\n", i, j, &image[i][j]);
    printf("ptrArray[%d] : [%x] -> [%d]\n", i, ptrArray[i], *ptrArray[i]);
   }
  }
 }
}
