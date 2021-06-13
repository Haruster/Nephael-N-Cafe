//c++ include
#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> exam;
    exam.push_back(10);
    exam.push_back(20);
    exam.push_back(30);
    
    for (int i = 0, size = exam.size(); i < size; i++)
    {
        cout << "���� �� : " << exam.at(i) << endl;
    }
        
    return 0;
}
