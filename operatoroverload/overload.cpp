#include<iostream>

using namespace std;

class Integer{

    private: 
        int *ptr;
    public:
        Integer & operator = (const Integer &other){
            cout << "Integer & operator = (const Integer &other)" << endl;
            if(this == &other){
                return *this;
            }
            delete ptr;
            ptr = new int(*other.ptr);
            return *this;
        }
        Integer(){
            cout << "Integer()" << endl;
            ptr = new int(2);
        }
        Integer operator + (const Integer &other){
            cout << "Integer operator + (const Integer &other)" << endl;
            Integer temp;
            *temp.ptr = (*ptr + *other.ptr);
            return temp;
        }
        void getValue(){
            cout << *ptr << endl;
        }
};

int main(){
    Integer a, b;
    a = b;

    Integer c = a + b;
    c.getValue();

    return 0;
}

/*
There is a difference in the way we use the preincrement vs postincreament operator.


if the first operand is a priitive them overloading should be a global function
*/