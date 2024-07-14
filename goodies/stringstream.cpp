#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){

    std::stringstream ss;
    ss << "Hello World";
    string str = ss.str();
    cout << str << endl;

    std::istringstream iss(str);

    int val = 0;

    std::string s = std::to_string(val);

    std::ostringstream oss;

}