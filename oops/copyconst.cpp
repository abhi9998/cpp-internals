#include <iostream>
using namespace std;

class Integer{
    int *ptr;

    public:
        Integer(){
          ptr = new int(0);      
        }

        Integer(int a){
            ptr = new int(a);
        }

        int getValue() const {
            return *ptr;
        }

        void setValue(int a){
            *ptr = a;
        }
    
        ~Integer(){
            delete ptr;
        }

        Integer(const Integer &obj){ //why there is a reference here and not the object directly?
            ptr = new int;
            *ptr = *obj.ptr;
        }
};

int main(){
    Integer i1(5);
    Integer i2 = i1;
    i1.setValue(10);
    std::cout << i2.getValue() << std::endl;
    return 0;
}


//here ptr will be destrcuted twice.
//this is because the default copy constructor is called when we do Integer i2 = i1;
//this will copy the ptr from i1 to i2.
//when i1 is destructed, it will delete the ptr.
//when i2 is destructed, it will delete the ptr again.
//this is called shallow copy.

//to avoid this, we need to define our own copy constructor.
//this is called deep copy.


//Rule of three:
//if you define any of the following, you should define all three:
//1. destructor
//2. copy constructor
//3. copy assignment operator

