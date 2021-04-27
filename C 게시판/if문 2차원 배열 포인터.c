//if문 2차원 배열 포인터 
#include<stdio.h>
void main(void)
{
 int x = 0; 
 int y = 0;
 scanf_s("%d", &x);
 if (x == 1)
  x = x + 1;
 else if (x == 2)
  x = x + 2;
 char image[3][4] = { 0, };
 printf("size of[%d][%d]\n", sizeof(image));
 for (int i = 0; i<3; i++)
 {
  for (int j = 0; j<4; j++)
  {
   printf("%d\n", x);
   printf("image [%d] [%d] : address [%x]\n", i, j, &image[i][j]);
  }
 }
}
