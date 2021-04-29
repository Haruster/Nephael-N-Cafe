//c언어 extern
#include<stdio.h>

extern int add(int x, int y);
extern int Number;

int main()
{
    int a = 10;
    int b = 10;
    Number = add(a ,b);
    printf("%d\n", Number);
    return 1;
}
