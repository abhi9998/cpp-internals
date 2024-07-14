#include<iostream>

using namespace std;

class Integer{
    int *ptr;

    public:
        Integer(){
            cout << "Integer()" << endl;
            ptr = new int(0);
        }

        Integer(int value){
            cout << "Integer(int value)" << endl;
            ptr = new int(value);
        }

        Integer(const Integer &other){
            cout << "Integer(const Integer &other)" << endl;
            ptr = new int(*other.ptr);
        }

        int getValue() const{
            return *ptr;
        }

        void setValue(int value){
            *ptr = value;
        }

        ~Integer(){
            cout << "~Integer()" << endl;
            delete ptr;
        }

        Integer(Integer &&other){
            cout << "Integer(Integer &&other)" << endl;
            ptr = other.ptr;
            other.ptr = nullptr;
        }

};

Integer Add(const Integer &a, const Integer &b){
    Integer temp;
    temp.setValue(a.getValue() + b.getValue());
    // cout << "Add(const Integer &a, const Integer &b)" << endl;
    return temp;
}

int main(){
    
        Integer a(5), b(5);
        a.setValue(Add(a,b).getValue());

        return 0;
}