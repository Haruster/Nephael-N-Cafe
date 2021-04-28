//rand( ) 함수(tempo데이터 변경, for문 데이터 변경)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int tempo[3];
  int a;
  srand(time(NULL));
  for(a=1; a<=4; a++)
  {
    tempo[a] = rand();
    printf("%d",tempo[a]);
  }
  getchar();
}
