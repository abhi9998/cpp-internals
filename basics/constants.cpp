//const are used with references to make sure that the referent is not modified

#include <iostream>

using namespace std;

int main() {
    int x = 1;
    int y = 2;
    const int &ref = x; //here x is the referent which is alwats bound to ref
    cout << x << endl;
    cout << ref << endl;

    // ref = y; //this will give an error
    cout << x << endl;
    cout << ref << endl;


    //you cannot have a pointer to a const reference
    // int *ptr = &ref; //this will give an error

    //but you can have a const pointer to a const reference
    // const int *const ptr = &ref;
    // cout << *ptr << endl;

    //you canot make pointer also const
     const int * const ptr = &ref; 
    cout << *ptr << endl;

    return 0;
}