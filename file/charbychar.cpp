#include<iostream>
#include<memory>
#include<string>
#include<fstream>

using namespace std;

void Write(){
    ofstream file("fileio.cpp");
    if(!file.is_open()){
        cout << "File not opened" << endl;
        return;
    }

    string str("This is a file");
    for(char c : str){
        file.put(c);
    }
}

void Read(){
    ifstream file("fileio.cpp");
    if(!file.is_open()){
        cout << "File not opened" << endl;
        return;
    }

    char c;
    while(file.get(c)){
        cout << c;
    }
}

int main(){

    Write();
    Read();

    return 0;

}