#include <iostream>

using namespace std;

class T{

public:
    T(){
        std::cout << "T()" << std::endl;
    }

    ~T(){
        throw std::exception();    
        std::cout << "~T()" << std::endl;
    }
};

int main(){

    try{
        T t;
        throw std::exception();
    }catch(std::exception &e){
        std::cout << "Exception caught" << std::endl;
    }

    return 0;
}