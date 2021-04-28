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
    tempo[a] = rand();
    printf("%d",tempo[a]);
  }
  getchar();
}
