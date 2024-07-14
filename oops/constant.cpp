//member functions that cannot change the state of object should be qualified with const keyword

#include <iostream>

using namespace std;


class A{

    public:
    static const int a = 10; // here this code is copied in the constructor;
     void print() const{    // const keyword is appled to this keyword. 
       
        cout << a << endl;
    }

    void hello(){
        cout << "Hello" << endl;
    }
};


int main(){

    const A a;
    a.print();
}