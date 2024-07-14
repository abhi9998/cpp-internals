//The core components of the C++ Standard Library are the algorithms, containers, and iterators.
//container are the data
//algorithms are the functions that operate on the data
//iterators are the way to access the data
//there are 3 types of containers
//1. Sequence containers
//2. Associative containers
//3. Unordered associative containers

//There are 5 types of sequenece containers
//1. array
//2. vector
//3. list
//4. forward_list
//5. deque

//There are 4 types of associative containers
//1. set
//2. multiset
//3. map
//4. multimap

//There are 3 types of unordered associative containers
//1. unordered_set
//2. unordered_multiset
//3. unordered_map
//4. unordered_multimap


#include<iostream>
#include<array>

using namespace std;

int main(){

    //array is a fixed size container
    //array<int,5> arr{1,2,3,4,5};
    //array<int,5> arr = {1,2,3,4,5};
    array<int,5> arr;
    arr.fill(10);
    for(auto &elem : arr){
        cout << elem << " ";
    }
    cout << endl;
    cout << arr.size() << endl;
    cout << arr.max_size() << endl;
    cout << arr.empty() << endl;
    cout << arr.at(2) << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    cout << arr.data() << endl;
    return 0;
}
