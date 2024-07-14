/*
std:set is implemented as binary tree red black tree
overloads of operator < is used to compare the elements
value aact as key
fast search
no random access
elementcs can be modified

*/

#include<iostream>
#include<set>
#include<functional>

//Comparate less
// struct Compare{
//     bool operator()(int a, int b){
//         return a > b;
//     }

using namespace std;

int main(){

    set<int, std::greater<int>> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto &i : s){
        cout << i << " ";
    }
    cout << endl;

    s.erase(3);

    for(auto &i : s){
        cout << i << " ";
    }
    cout << endl;

    cout << s.count(2) << endl;
    cout << s.count(3) << endl;

    auto it = s.find(2);
    if(it != s.end()){
        cout << *it << endl;
    }

    auto it2 = s.find(3);
    if(it2 != s.end()){
        cout << *it2 << endl;
    }

    return 0;
}