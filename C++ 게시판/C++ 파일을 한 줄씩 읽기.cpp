#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() 
{
    ifstream file;
    file.open("093.txt", ifstream::in);

    string line;

    while (getline(file, line))
        cout << line << endl;

    file.close();

    return 0;
}
