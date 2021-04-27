#include<stdio.h>
int main(void)
{
 int i;
 scanf_s("%d", &i);
 if (i<0)
  printf("i는 0보다 작다.\n");
 if (i>0)
  printf("i는 0보다 크다\n");
 if (i == 0)
  printf("i는 0이다.\n");
 printf("i = [%d]\n", i);
}
