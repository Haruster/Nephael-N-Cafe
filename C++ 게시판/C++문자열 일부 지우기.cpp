#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "i hate coding";

    sentence.erase(0, 7);

    cout << "i like " << sentence << endl;

    return 0;
}
