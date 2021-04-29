//c++ 멤버 함수 중복 정의
#include<iostream>
#include<string>
using namespace std;
class printData{
public:
  void print(int i){cout<<i<<endl;}
  void print(double f){cout<<f<<endl;}
  void print(string s="no Data!"){cout<<s<<endl;}
};
int main(){
  printData obj;
  obj.print(1);
  obj.print(3.14);
  obj.print("c++ 14 is cool.");
  obj.print();
}
