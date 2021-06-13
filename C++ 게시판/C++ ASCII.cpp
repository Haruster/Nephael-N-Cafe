//c++ 아스키코드 정수데이터
#include<iostream>
using namespace std;
class Fn
{
    private:
    static int count;
    public:
    Fn() {
        count++;
        cout<<"카운트 : "<< count<<endl;
    }
};
int Fn :: count =0;
int main()
{
    Fn f1;
    Fn f2;
}
