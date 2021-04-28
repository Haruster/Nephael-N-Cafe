//rand( ) 함수 for문추가, rand데이터 증가
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int tempo[3];
  int a;
  srand(time(NULL));
  for(a=1; a<=3; a++)
  {
      for(b=2; b<=4; b++)
    tempo[a] = rand();
    tempo[b] = rand();
    printf("%d %d",tempo[a],tempo[b]);
  }
  getchar();
}
