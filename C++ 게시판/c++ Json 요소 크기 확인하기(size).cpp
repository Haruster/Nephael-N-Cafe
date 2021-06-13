#include "stdafx.h"
#include <string>
#include <fstream>
#include <iostream>
#include "json/json.h"
using namespace std;
using namespace Json;
int main()
{
 ifstream json_open("json_exam.json");
 Reader reader;
 Value value;
 reader.parse(json_open, value);
 cout << "Root 크기 : " << value.size() << endl;
 cout << "Array 크기 : " << value["Array"].size() << endl;
 cout << "Number 크기 : " << value["Array"]["Number"].size() << endl;
 return 0;
}
