#include<iostream>
#include<thread>
#include<future>
using namespace std;

void Downloader(){

    cout << "Downloading file" << endl;

    // using namespace std::literals::chrono_literals;

    for(int i = 0; i < 100; i++){
        cout << '.';
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    cout << "Download complete" << endl;
}

int Operation(int count){

    cout << "Downloading file" << endl;

    // using namespace std::literals::chrono_literals;
    int sum = 0;
    for(int i = 0; i < count; i++){
        cout << '.';
        sum += i;
    }

    cout << "Download complete" << endl;

    return sum;
}




int main(){

    future<int> result = std::async(Operation, 10);

    cout << result.get();

    // thread t1(Downloader);

    // t1.join();

    return 0;

}