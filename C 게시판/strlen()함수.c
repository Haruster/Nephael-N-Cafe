//strlen()함수
#include<stdio.h>
void main(void)
{
  char name[400];
  int size;
  scanf_s("%d",name);
  size=strlen(name);
  printf("char data[%d]\n",size);
}
