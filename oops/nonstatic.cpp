#include<iostream>

using namespace std;
class A{
    int a =10;  // here this code is copied in the constructor;

    public:
    void print(){
        cout << a << endl;
    }
};

int main(){

    A a;
    a.print();
}