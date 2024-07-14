#include<iostream>
#include<memory>
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


int Subtract(int a, int b){
    return a - b;
}

int main(){

    function<int(int, int)> add = [](int a, int b){
        return a + b;
    };

    if(add){
        cout << "add is not empty" << endl;
    }

    auto f1 =std::bind(add, 10, 20);
    cout << f1() << endl;

    auto f2 = bind(add, placeholders::_1, 20);

    cout << f2(10) << endl;
}