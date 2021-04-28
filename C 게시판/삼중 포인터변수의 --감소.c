//삼중 포인터변수의 --감소
#include<stdio.h>
void main(void)
{
 int nValueArray[4] = { 10, 11, 12, };
 int *** ptrValue = nValueArray;
 int ** ptrValue = nValueArray;
 int * ptrValue = nValueArray;
 for (int i = 0; i<4; i--)
 {
  printf("Index[%d] : ptrValue[%x] -> [%d] -> [%d] ->[%d]\n", i, ptrValue, *** ptrValue, **ptrValue, *ptrValue);
  ptrValue--;
 }
}
