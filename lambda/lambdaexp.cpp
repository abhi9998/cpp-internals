#include<iostream>
#include<memory>

using namespace std;


struct UnNamed{
    int operator()(int a, int b){
        return a + b;
    }
};

int main(){
    
        auto lambda = [](){
            cout << "Hello World" << endl;
        };
    
        lambda();

        std::cout << typeid(lambda).name() << std::endl;

        auto sum = [](int a, int b) -> int{
            return a + b;
        };

        UnNamed unNamed;
        cout << unNamed(5, 5) << endl;
    
        cout << sum(5, 5) << endl;
        return 0;
}