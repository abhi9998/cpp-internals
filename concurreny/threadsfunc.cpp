#include<thread>
#include<iostream>

using namespace std;

void function_1(){
    cout << "Beauty is only skin-deep" << endl;
}

int main(){
    thread t1(function_1);
    auto id = t1.get_id();
    cout << t1.get_id() << endl;

    cout << thread::hardware_concurrency();
    t1.join();
    return 0;
}