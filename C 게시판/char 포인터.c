//char 포인터
#include<stdio.h>
void main(void)
{
 int nValue = 10;
 char * ptrValue = &nValue;
 printf("pointer[%x]->[%d]\n", ptrValue, *(int*)ptrValue);
}
