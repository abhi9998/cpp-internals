//There are two types of data types in C++:
//arithmatic and void
//Arithmatic data types are further divided into three types:
//1. Integer
//2. Floating point
//3. Character
//Void data types are used to represent the absence of type. It is used in functions to represent
// that the function does not return any value.

//modifiers are used with data types to modify the length of the data type
//signed and unsigned are used with integer data types
//short and long are used with integer and floating point data types


//qualifers can be used with data types to modify the properties of the data type
//const is used to make the variable constant
//volatile is used to indicate that the variable can be changed by the program
//mutable is used to indicate that the variable can be changed by the program
//restrict is used to indicate that the variable is not aliased
//static is used to indicate that the variable is shared by all instances of the class


#include<iostream>
#include<climits>

using namespace std;

int main(){

   cout << "Size of char : " << sizeof(char) << " byte" << endl;
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;

    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;

    cout << "Range of data type is " << INT32_MAX << endl;
    cout << "Range of data type is " << INT32_MIN << endl;
    cout << "Range of data type is " << UINT32_MAX << endl;
    cout << "Range of data type is " << INT64_MAX << endl;
     
}