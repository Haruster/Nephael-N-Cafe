//c++ if-else
#include <iostream>
using namespace std;
int main() 
{
 int i = 1;
 int j = 2;
 int k = 7;
 if( i == 1 )
 {
  if( j == 2 )
  {
   if( k == 3 )
    cout<<"i=1, j=2, k=3"<<endl;
   else if( k == 4 )
    cout<<"i=1, j=2, k=4"<<endl;
   else
    cout<<"i=1, j=2, k="<<k<<endl;
  }
 }
} 
