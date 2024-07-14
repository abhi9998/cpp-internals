//default only works for the default constructor.
//copy constructor or  destrucor and assignment operator.

#include<iostream>

using namespace std;

class Integer{

    int val ;

    public: 
        Integer() = default;
        Integer(int a){
            val = a;
        }

        Integer(const Integer &obj) = delete;
};  

int main(){
    Integer i;
    Integer i1(10);

    // Integer i2 = i1; //this will give an error because we have deleted the copy constructor.


    return 0;
}