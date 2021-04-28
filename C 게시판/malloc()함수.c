//malloc ( ) (malloc함수를 이용한 동적메모리 할당)
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int* iptr = (int*)malloc(sizeof(int));
    char* cptr = (char*)malloc(sizeof(char));
    double* dptr = (double*)malloc(sizeof(double));
}
