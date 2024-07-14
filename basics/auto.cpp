//compiler can automatically deduce the type of the variable using auto keyword from c++11

#include <iostream>

using namespace std;

int main() {
    auto x = 1;
    auto y = 2;
    auto sum = x + y;
    cout << sum << endl;


    int a[] = {1, 2, 3, 4, 5};

    int *ptr = &a[0];

    for (size_t i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    
    int *begin = std::begin(a);
    int *end = std::end(a);

    while (begin != end)
    {
        cout << *begin << endl;
        begin++;
    }



    for(auto i : a){
        cout << i << endl;
    }

    auto range = a;
    auto begin2 = std::begin(a);
    auto end2 = std::end(a);

    while (begin2 != end2)
    {
        cout << *begin2 << endl;
        begin2++;
    }


    return 0;
}