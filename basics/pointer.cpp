//pointers need  not to be initialized during declaration

#include<iostream>

using namespace std;

int main() {
    int x =1;
    cout << &x << endl;
    

    int *ptr = &x;
    int *ptr2 = nullptr;
    cout << *ptr2 << endl;

    cout << *ptr << endl;
}