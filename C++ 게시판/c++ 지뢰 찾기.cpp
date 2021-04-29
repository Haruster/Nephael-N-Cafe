//c++ 지뢰 찾기
#include<iostream>
using namespace std;
int main()
{
  bool board[10][10]={0};
  srand(time[NULL]);
  for(i=0; i<10; i++)
  for(int j=0; j<10; j++)
  if((rand()%100)<30)
  board[i][j]=true;
  for(i=0; i<10; i++)
  for(int j=0; j<10; j++)
  if(board[i][j])
  cout<<"#";
  else
  cout<<".";
  cout<<endl;
}
