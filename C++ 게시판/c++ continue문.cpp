//c++ continue문
#include<iostream>
using namespace std;
int main();
{
  int i=0;
  do{
    i++;
    cout<<"cout 전의 데이터"<<endl;
    continue;
    cout<<"cout 후의 데이터"<<endl;
  }while(i<3);
}
