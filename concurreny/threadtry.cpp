#include<iostream>
#include<thread>
#include<string>

using namespace std;

void Print(std::string message){
    cout << message << endl;
    for(int i = 0; i < 10; i++){
        cout << "Print: " << i << endl;
    }
}

int main(){
    thread t1(Print, "Hello"); //This will immediately return

    t1.detach(); //This will detach the thread from the main thread


    for(int i = 0; i < 10; i++){
        cout << "Main: " << i << endl;
    }
    // t1.join();

    system("pause");
    return 0;
}