#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "gfedcba";

    reverse(str.begin(), str.end());

    cout << str << endl;

    return 0;
}
