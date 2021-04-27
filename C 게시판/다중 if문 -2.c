//다중 if문 
#include<stdio.h>
void main(void)
{
 int i;
 int x = 10;
 scanf_s("%d", &i);
 if (i == 1)
  x = x + 1;
 else if (i == 2)
  x = x + 2;
 else
  x = 100;
 printf("data [%d]\n", x);
}
