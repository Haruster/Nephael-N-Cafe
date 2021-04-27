#include<stdio.h>
void main(void)
{
 int i;
 int x = 10;
 int y = 20;
 scanf_s("%d", &i);
 if (i == 1)
  x = x + 1;
 else if (i == 2)
  x = x + 2;
 else if (i ==3)
  y= y + 3;
 else 
  x = 100;
  y = 200;
 printf("data [%d]\n", x);
 printf("data [%d]\n", y);
} 
