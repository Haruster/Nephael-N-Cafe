//do while 문
#include<stdio.h>
void main(void)
{
 int x = 0, y = 0;
 do{
  printf("do while data(0 to Quit)");
  scanf_s("%d", &y);
  x += y;
 } while (y != 0);
 printf("%d\n", x);
}
