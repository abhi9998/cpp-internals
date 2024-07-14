#include <iostream>

//value initialization
int a = 0;
int b = 0;

//default initialization
int c;
int d;

using namespace std;

int main(){
    // int a;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    int vec[4] = {1, 2, 3, 4};
    cout << *vec << endl;
}

/*
Value initialization T obj{};
Default initialization T obj;
Direct initialization T obj{arg};
Copy initialization T obj = arg;
*/