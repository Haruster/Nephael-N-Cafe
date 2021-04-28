#include<stdio.h>
void main(void)
{
  char name[200];
  int size;
  scanf_s("%d",name);
  size=strlen(name);
  printf("char data[%d]\n",size);
  size=strlen(name);
  printf("char data[%d]\n",size);
}
