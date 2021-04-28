//strcmp()함수
#include<stdio.h>
#include<string.h>
void main(void)
{
  char name1[10]="LimBest";
  char name2[10]="LimBest";
  if(!strcmp(name1,name2))
  printf("LimBest data\n");
  else
  printf("strcmp data\n");
}
