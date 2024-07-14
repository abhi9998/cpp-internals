//std::fuctions is a wrapper around the function pointers
//can store the function pointers or function objects
//stored object is called the target.  can be invoked with same syntax as function
//if notarget is stored and called, std::bad_function_call exception is thrown

#include<iostream>
#include<functional>

using namespace std;


struct Max{
    int operator()(int a, int b){
        return a > b ? a : b;
    }
};

int Operate(function<int(int, int)> func, int a, int b){
    return func(a, b);
}


int main(){

    function<int(int, int)> add = [](int a, int b){
        return a + b;
    };

    if(add){
        cout << "add is not empty" << endl;
    }



    cout << add(10, 20) << endl;

    function<int(int, int)> subtract = [](int a, int b){
        return a - b;
    };

    cout << subtract(10, 20) << endl;

    function<int(int, int)> multiply = [](int a, int b){
        return a * b;
    };

    cout << multiply(10, 20) << endl;

    function<int(int, int)> divide = [](int a, int b){
        return a / b;
    };

    cout << divide(10, 20) << endl;

    function<int(int, int)> max = Max();

    cout << max(10, 20) << endl;

    cout << Operate(add, 10, 20) << endl;


    return 0;

}