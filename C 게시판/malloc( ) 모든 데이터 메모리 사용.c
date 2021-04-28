//malloc( ) 모든 데이터 메모리 사용

#include<stdio.h>
#include<stdlib.h>
void main(void)
{
 int * iptr = (int*)malloc(sizeof(int));
 char * cptr = (char*)malloc(sizeof(char));
 double * dptr = (double*)malloc(sizeof(double));
 long * lptr = (long*)malloc(sizeof(long));
 float * fptr = (float*)malloc(sizeof(float));
}
