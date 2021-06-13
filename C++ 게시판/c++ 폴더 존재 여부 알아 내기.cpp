#include "stdafx.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
    if (fs::exists("c:\\Target") == true)
        cout << "폴더가 존재합니다" << endl;
    else
        cout << "폴더가 존재하지 않습니다." << endl;

    return 0;
}
