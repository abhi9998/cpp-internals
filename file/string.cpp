#include<iostream>
#include<memory>

using namespace std;

int main(){

    std::string str(R"(\thome/user/file.txt)");

    std::cout << str << std::endl;
    return 0;

}