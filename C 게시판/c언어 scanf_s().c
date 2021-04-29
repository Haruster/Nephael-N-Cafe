//c언어 scanf_s()
#include<stdio.h>
int main()
{
    int number1;
    int number2;
    scanf_s("%d, %d", &number1, &number2);
    printf("%d %d",number1, number2);
}
