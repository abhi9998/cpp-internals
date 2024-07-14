#include<iostream>

using namespace std;

// int Max(int a, int b){
//     return a > b ? a : b;
// }

// float Max(float a, float b){
//     return a > b ? a : b;
// }

template<typename T>
T Max(T a, T b){
    return a > b ? a : b;
}


//explicit instantiation
template char Max(char a, char b);


//explicit specialization
template<> const char * Max<const char *>(const char * a, const char * b){
    cout << "const char * Max(const char * a, const char * b)" << endl;
    return strcmp(a, b) > 0 ? a : b;
}


int main(){

    std::cout << Max(5, 10) << std::endl;
    std::cout << Max(5.5f, 10.5f) << std::endl;


    Max<float>(3,3.5f);

    //pointer to functione tempated
    auto p = &Max<int>;
    std::cout << p(5, 10) << std::endl;

    //pointer to functione tempated

    const char *c{"A"};
    const char *d{"B"};

    auto p2 = &Max<const char *>;

    cout << p2(c, d) << endl;


    return 0;

}

/*
The function is generated at compile time, so the function is generated for each type that is used in the program.
This is called function instatation.
*/

// function tempalte is instantaited when you take the address of the function template