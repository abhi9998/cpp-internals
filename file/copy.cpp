//c++ provides three classes for file IO
// ofstream - output file stream
// ifstream - input file stream
// fstream - file stream

#include<iostream>
#include<fstream>

using namespace std;


int main(){
    
        ofstream out("file.txt");
        out << "Hello World" << endl;
        out.close();
    
        ifstream in("fil.txt");
        cout << "Reading from file" << endl;
        cout<< in.is_open() << endl;
        string str;
        in >> str;
        cout << str << endl;
        in.close();
    
        return 0;
}
