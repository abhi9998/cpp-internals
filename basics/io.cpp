//there are two classes for input and output in C++:
//1. istream: This is input stream class. It is used to read data from the standard input device, such as keyboard.
//2. ostream: This is output stream class. It is used to write data to the standard output device, such as monitor.


//std::basic_ostream is a class template that is used to write data to the standard output device. It is defined in the iostream header file.
//std::ostream is a typedef of std::basic_ostream<char> class. It is used to write data to the standard output device.
//std::cout is an object of std::ostream class. It is used to write data to the standard output device.


//std::basic_istream is a class template that is used to read data from the standard input device. It is defined in the iostream header file.
//std::istream is a typedef of std::basic_istream<char> class. It is used to read data from the standard input device.



#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    cout << "Hello World" << endl;
    return 0;
}