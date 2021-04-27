//포인터변수의 --감소
#include<stdio.h>
void main(void)
{
  int nValueArray[4]={10,11,12,};
  int * ptrValue=nValueArray;
  for(int i=0; i<4; i--)
  {
    printf("Index[%d] : ptrValuee[%x] -> [%d]\n", i, ptrValue, * ptrValue);
    ptrValue--;
  }
}
