//c언어 array 변수 출력
#include<stdio.h>
int main()
{
 int math[4] = { 10, 20, 30, 40 };
 int* pMathArry[4] = { math, math + 1,math + 2,math + 3 };
 for (int i = 0; i < 4; i++)
 {
  *pMathArry[i] += 10;
 }
 printf("math[0]%d math[1]%d math[2]%d math[3]%d ",math[0] ,math[1] ,math[2] ,math[3]);
}
