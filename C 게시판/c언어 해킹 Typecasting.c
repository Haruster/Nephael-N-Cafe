//c언어 해킹 Typecasting.c
#include<stdio.h>
int main()
{
    int a,b;
    float c,d;
    a=13;
    b=5;
    c=a/b;
    d=(float) a/(float) b;
    printf("[정수]\t a=%d\t b=%d\n",a,b);
    printf("[부동소수점]\t c=%f\t d=%f\n",c,d);

}
