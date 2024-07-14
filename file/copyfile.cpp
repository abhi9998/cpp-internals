#include<iostream>
#include<memory>
#include<string>
#include<fstream>

using namespace std;

int main(){

    ifstream file("fileio.cpp");
    string str;
    ofstream copy("copy.cpp");

    while(getline(file, str)){
        copy << str << endl;
    }

    file.close();
    copy.close();
   


    // std::cout << str << std::endl;

    // std::ofstream file(str);
    // file << "Hello World" << std::endl;
    // file.close();

    return 0;

}


