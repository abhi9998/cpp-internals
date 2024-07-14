#include<thread>
#include<iostream>
#include<mutex>
#include<list>

using namespace std;
std::list<int> g_Data;
std::mutex g_Mutex;

void Compute(){
    for(int i = 0; i < 100; i++){
        // g_Mutex.lock();
       std::lock_guard<std::mutex> guard(g_Mutex);
        g_Data.push_back(i);
        // g_Mutex.unlock();
    }
}

void Compute2(){
    for(int i = 0; i < 100; i++){
        // g_Mutex.lock();
        std::lock_guard<std::mutex> guard(g_Mutex);
        g_Data.push_back(i);
        if(i==50)
            return;
        // g_Mutex.unlock();
    }
}

void PrintVector(){
    for(auto &v : g_Data){
        cout << v << " ";
    }
    cout << endl;
}



int main(){

    thread t1(Compute);
    thread t2(Compute2);

    t1.join();
    t2.join();

    PrintVector();

    return 0;

}