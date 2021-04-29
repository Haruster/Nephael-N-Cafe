//c언어 컴파일 조건지시자
#include<stdio.h>
#define COND 1
void main(void)
{
    puts("c pre-processing");
    #if COND == 1
    puts("COND is TRUE");
    #end if
}
