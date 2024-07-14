//Most compliers not allow to read from uninitialized variables
//uninirialse variables are dangerous
//they have garbage values

#include <iostream>

using namespace std;

int main(){
    int a;
    cout << a << endl;

    int vec[4] = {1, 2, 3, 4};
    cout << *vec << endl;


    char buff[255];

    // cin >> buff; // only reads until the first space

    cin.getline(buff, 255); // reads until the end of the line
    cout << buff << endl;

    return 0;
}