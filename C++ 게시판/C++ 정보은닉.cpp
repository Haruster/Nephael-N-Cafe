#include "stdafx.h"
#include <iostream>
using namespace std;

class Point
{
public:
int x; // 0이상 100이하
int y; // 0이상 100이하
};

class Rectangle
{
public:
Point upLeft; //upLeft.x, upLeft.y *객체도 맴버로 올 수 있다.
Point lowRight; //lowRight.x, lowRight.y

public:
void ShowRecInfo()
{
cout << "좌 상단: " << '[' << upLeft.x << ", ";
cout << upLeft.y << ']' << endl;
cout << "우 하단: " << '[' << lowRight.x << ", ";
cout << lowRight.y << ']' << endl;
}
};

int main()
{
Point pos1 = { -2,4 };
Point pos2 = { 5,9 };
Rectangle rec = { pos2,pos1 };
rec.ShowRecInfo();
return 0;
}
