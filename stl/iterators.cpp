/*
iterators are pointer like objects
they are used to iterate over the elements of containers by the positon

craeted through begin() and end() functions

begin() returns the iterator to the first element
end() returns the iterator to the last element

end() returns the iterator to the position after the last element

provide overloaded operators such as ++ , -- , *

*/

#include<array>
#include<iostream>
#include<vector>
#include<deque>
#include<list>
using namespace std;

void List(){
    list<int> lst = {1,2,3,4,5};

    lst.push_back(6);

    lst.push_front(0);

    for(auto it = lst.begin(); it != lst.end(); it++){
        cout << *it << " ";
    }
}


void Deque(){
    deque<int> deq = {1,2,3,4,5};

    deq.push_back(6);

    deq.push_front(0);

    for(auto it = deq.begin(); it != deq.end(); it++){
        cout << *it << " ";
    }
}

void Vector(){
    std::vector<int> vec = {1,2,3,4,5};

    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    
}

int main(){

    array<int,5> arr = {1,2,3,4,5};

    for(auto it = arr.begin(); it != arr.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    for(auto it = arr.rbegin(); it != arr.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    Vector();

    return 0;
}

