#include<stdio.h>
#include<direct.h>
void main(void)
{
  int drive;
  drive=_getdrive();
  printf("현재 작업 중인 드라이브 : %c\n",'a'+drive-1);  
}                           
