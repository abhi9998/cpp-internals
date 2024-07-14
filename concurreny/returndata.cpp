#include<future>
#include<iostream>
#include<thread>
#include<string>

using namespace std;

int Add(int a, int b){
    return a + b;
}

int Square(int a){
    return a * a;
}

int Compute(std::vector<int> &v){
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}

int main(){

    packaged_task<int(int, int)> task(Add);

    future<int> result = task.get_future();

    task(2, 3);

    cout << result.get() << endl;

    // thread t1(Add, "Hello"); //This will immediately return

    // t1.detach(); //This will detach the thread from the main thread


    packaged_task<int(vector<int>&)> task2(Compute);

    future<int> result2 = task2.get_future();

    vector<int> v = {1, 2, 3, 4, 5};

    task2(v);

    cout << result2.get() << endl;




}