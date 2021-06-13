//c++ 메모리처리(new)
#include <iostream>
 
using namespace std;
 
int *GetArray(int x) {
    int *Ary = new int[x];
 
    for (int i = 0; i < x; i++) {
        Ary[i] = i;
    }
 
    return Ary;
}
 
int main(void) {
    int j;
    int *pAry;
 
    pAry = GetArray(5);
    for (j = 0; j < 5; j++)
        cout << pAry[j] << " ";
    cout << endl;
 
    delete[] pAry;
 
    return 0;
}
