//1차원 배열 포인터
#include<stdio.h>
void main(void)
{
 int nNum_1;
 int nNum_2;
 int nNum_3;
 int nNum_4;
 int * ptrArray[4] = { &nNum_1, &nNum_2, &nNum_3, &nNum_4 };
 for (int i = 0; i<4; i++)
 {
  printf("ptrArray[%d] : [%x] -> [%d]\n", i, ptrArray[i], *ptrArray[i]);
 }
}
