//c++ if~else(<)
#include<iostream>
#include<string>
using namespace std;
int main()
{
 int i = 100;
 int j = 200;
 int k = 300;
 if(i>j && i>k)
  cout << "i:" << i << endl;
 else if(j>i && j>k)
  cout << "j" << j <<endl;
 else
  cout << "data error" <<endl;
 
}
