//pointer holds the address of a function
//function pointer holds the address of a function
//function pointer is a pointer that holds the address of a function


#include <iostream>

using namespace std;

void PrintHello(){
    cout << "Hello" << endl;
}

int main(){
    void (*ptr)() = PrintHello; // or void (*ptr)() = &PrintHello; they are same

    ptr();
    (*ptr)();
    return 0;
}