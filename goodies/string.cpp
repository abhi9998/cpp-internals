#include<iostream>
#include<string>

using namespace std;


int main(){


    //Initialize and assign value to string
    string str = "Hello World";

    //Access
    cout << str << endl;
    str[0] = 'h';
    cout << str << endl;

    //size
    cout << str.size() << endl;

    //concatatce
    string str2 = "!";
    cout << str + str2 << endl; 

    //compare
    string str3 = "Hello World";
    cout << (str == str3) << endl;

}