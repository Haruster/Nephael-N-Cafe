#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int number = 3;

    switch (number)
    {
    case 1:
        cout << "number의 값은 1입니다." << endl;
        break;
    case 2:
        cout << "number의 값은 2입니다." << endl;
        break;
    case 3:
        cout << "number의 값은 3입니다." << endl;
        break;
    default:
        cout << "number의 값은 4입니다.." << endl;
        break;
    }

    return 0;
};
