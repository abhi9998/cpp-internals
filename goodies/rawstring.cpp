#include<iostream>

using namespace std;

const char * Combine(const char * first, const char * second){
    char fullName[100];
    strcpy(fullName, first);
    strcat(fullName, " ");
    strcat(fullName, second);
    return fullName;
}

int main(){

    const char * first = "Hello";
    const char * second = "World";

    cout << Combine(first, second) << endl;

    return 0;

}