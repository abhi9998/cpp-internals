//defines alternative name for variable
//created with & operator
//always needs referent
//referent should be a varialbes
//bound to referent
//can be used to modify varialbe directyl
//reference is not a new variables, its just another name


#include <iostream>

using namespace std;

int main() {
    int x = 1;
    int y = 2;
    int &ref = x; //here x is the referent which is alwats bound to ref
    cout << x << endl;
    cout << ref << endl;

    ref = y;
    cout << x << endl;
    cout << ref << endl;

    return 0;
}