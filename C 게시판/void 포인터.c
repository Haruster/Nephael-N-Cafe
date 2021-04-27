//void 포인터
#include<stdio.h>
void main(void)
{
 int nValue = 10;
 void * ptrValue = &nValue;
 printf("pointer[%x]->[%d]\n", ptrValue, *(int*)ptrValue);
}
