#include<iostream>

using namespace std;

constexpr int getFive(){
    return 5;
}

int main(){

    constexpr int num = getFive(); //evaluated at complie time
    int arr[num];

    const int size = getFive(); //evaluated at compoie time
    int arr2[size];

    int val = getFive(); //evaluated at runtime

}

//literal types 
// void, scalar types (int , float, char), referencs, etc.  

//should have only one single line return statement