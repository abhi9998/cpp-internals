//lvalues and rvalues 
//lvalues are objects that have names and are addressable
//rvalues are objects that do not have names and are not addressable
//variables are lvalues
//R-value is a temp value
//L-value can be assigned value
//R-value cannot be assigned value


//Rvalue references canonly bind to rvalues
//Lvalue references can bind to lvalues and rvalues
//Rvalues only bind to temporary objects
//Lvalues bind to objects that have names and are addressable

// int &&r1 = 10; // r1 is rvalue reference
// int &r2 = 10; // error: 10 is rvalue

// int &&r3 = x; // error: x is lvalue
// int &r4 = x; // r4 is lvalue reference

// int  && r6 = Add(3,4); // r6 is rvalue reference


#include<iostream>

using namespace std;


// this return r value
int Add(int x ,int y){
    return x + y;
}


int & Add( int &x ,  int &y){
    x *=x ;
    y *=y;
    return x;
}

void Print(int &x){
    cout << "Print(int &x)" << endl;
    cout << x << endl;

}

void Print( const int &x){
    cout << "Print(const int &x)" << endl;
    cout << x << endl;
}

void Print(int &&x){
    cout << "Print(int &&x)" << endl;
    cout << x << endl;
}


int main(){

    int x = 10; // x is lvalue and 10 is rvalue

    int y = x; // x is lvalue and y is lvalue

    int z = x + y; // x and y are lvalues and x + y is rvalue // expression x+y is rvalue

    Print(10);

}




//functions that return by reference are lvalues
// functions that return by values are rvalues