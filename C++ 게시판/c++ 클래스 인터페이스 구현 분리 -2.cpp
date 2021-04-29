#include<iostream>
#include<string>
using namespace std;
class circle{
public:
  double calcArea();
  int double;
  string color; 
};
double circle::calcArea(){
  return 3.14*radius*radius;
}
int main()
{
  circle c;
  c.radius=10;
  cout<<c.calcArea(<<endl;)
}
