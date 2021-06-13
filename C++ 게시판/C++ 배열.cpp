//c++ arrray 변수 출력
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
 int math[4] = { 10, 20, 30, 40 };
 int* pMathArry[4] = { math, math + 1,math + 2,math + 3 };
 for (int i = 0; i < 4; i++)
 {
  *pMathArry[i] += 10;
 }
 cout << "math[0]" << math[0] << "math[1]" << math[1] << "math[2]" << math[2] << "math[3]" << math[3];
}
