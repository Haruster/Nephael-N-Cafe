//c++ do~while문
#include<iostream>
using namespace std;
int main()
{
 int i = 1;
 int j = 0;
 do
 {
  j = j + i;
  i++;
 } while( i<=10 );
 cout<<"j"<<j<<endl;
}
