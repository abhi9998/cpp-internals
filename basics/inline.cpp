#include<iostream>

using namespace std;

#define Square2(x) x*x

int Square(int x ){
    return x*x;

}

inline int Square3(int x){
    return x*x;
}

int main(){
    int x = 5;
    cout << Square(x) << endl;
    cout << Square2((2+3)) << endl;
    cout << Square3(x) << endl;
    return 0;
}

//inline is only a reques to a compiler to replace the function call with the function body
//inline is not a command to the compiler
//inline is not a guarantee that the function will be replaced with the function body
//inline is a hint to the compiler
//inline is used to reduce the function call overhead
