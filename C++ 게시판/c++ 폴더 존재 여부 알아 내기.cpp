#include "stdafx.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
    if (fs::exists("c:\\Target") == true)
        cout << "������ �����մϴ�" << endl;
    else
        cout << "������ �����ϴ�" << endl;

    return 0;
}
