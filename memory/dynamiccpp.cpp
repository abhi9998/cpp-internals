//the memeory on heap is allocated using new and delete operators

#include <iostream>

using namespace std;

int main(){
    int *p = new int(20); // or int *p = new int(); they are same
    // *p = 10;
    cout << *p << endl;
    delete p;

    //initialize array
    int *arr = new int[5];
    for(int i = 0; i < 5; i++){
        arr[i] = i;
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    char *a = new char[4];
    strcpy(a, "abc");
    cout << a << endl;


    int * aa = new int[5];
    int * bb = new int[5];

    int ** ptr = new int*[2];
    ptr[0] = aa;
    ptr[1] = bb;

    for(int i = 0; i < 5; i++){
        aa[i] = i;
        bb[i] = i + 1;
    }

    cout << ptr[0][0] << " " << ptr[1][0] << endl;


    delete []aa;
    delete []bb;
    delete []ptr;

    return 0;
}