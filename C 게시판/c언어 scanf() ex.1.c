//c언어 scanf() ex.1.c
#include<stdio.h>
int main()
{
    int number1;
    int number2;
    int number3;
    scanf_s("%d %d %d", &number1, &number2, &number3);
    printf("데이터 정보 값 = %d", number1 + number2 + number3);
}
