#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    double number1 = 1;
    double number2 = 0.4;
    double number3 = 0.0;
    double number4 = 11.2;

    cout << boolalpha;
    cout << isnan(number1 / number4) << endl;
    cout << isnan(number2 / number3) << endl;
    cout << isnan(number3 / number3) << endl;
    cout << isnan(number4 / number1) << endl;

    return 0;
}
