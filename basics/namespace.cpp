#include <iostream>

using namespace std;

namespace AVG{
    int Add(int a, int b){
        return (a + b)/2;
    }
}

namespace SUM{
    int Add(int a, int b){
        return a + b;
    }
}

int main(){
    cout << AVG::Add(1,2) << endl;
    cout << SUM::Add(1,2) << endl;
    return 0;
}