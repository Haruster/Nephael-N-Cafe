//c++ hanoi.cpp
#include<iostream>
void hanoi(int n, char *from, char *to, char *via) {
    if(n>1) {
        hanoi(n -1, from, via, to); {
            cout << from << " -> "<< to << endl;
            hanoi(n -1, from, via, to);
        } else {
            cout << from << " -> "<< to << endl;
        }
}
int main(void) {
    int n;
    cin >> n;
    hanoi(n, 'a','b','c');
}
