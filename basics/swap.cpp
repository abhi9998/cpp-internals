
#include<iostream>

using namespace std;

void swapWithReferences(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swapWithPointers(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 1;
    int b = 2;
    cout << "Before swapping: " << a << " " << b << endl;
    swap(a, b);
    cout << "After swapping: " << a << " " << b << endl;

    int x = 1;
    int y = 2;
    cout << "Before swapping: " << x << " " << y << endl;
    swapWithPointers(&x, &y);
    cout << "After swapping: " << x << " " << y << endl;
    
    return 0;
}