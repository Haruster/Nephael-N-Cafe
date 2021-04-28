//이중 포인터
#include<stdio.h>
void main(void)
{
  int nValue=10;
  int * pVar=&nValue;
  int ** dptrVar=&pVar;
  printf("nValue[%x] -> [%d], pVar[%x] ->[%d], dptrVar[%x] -> [%x] -> [%d]\n",&nValue, nValue, pVar, * pVar, dptrVar, * dptrVar, ** dptrVar);
  ** dptrVar=100;
  printf("nValue [%x] -> [%d]\n", &nValue, nValue);
}
