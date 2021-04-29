//c++ if조건문
#include<iostream>
using namespace std;
int main()
{
  int i;
  cout<<"데이터를 입력하세요.";
  cin>>i;
  if(i<0)
  cout<<"데이터는 음수이다.\n";
  else if(i>0)
  cout<<"데이터는 양수이다.\n";
  else if(i==0)
  cout<<"데이터는 0이다.\n";
}
