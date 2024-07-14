#include<iostream> //standard header files not have .h extension
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    //here cout is an object of ostream class
    //<< is an operator which is overloaded in ostream class it is extraction operator
    //endl is a manipulator which is used to insert a newline character and flushes the stream
    std::cout << "Hello, World!" << std::endl;
    //:: is scope resolution operator

    
    return 0;
}