#include<iostream>

using namespace std;

class Animal{
    public:
        void Eat(){
            cout << "Animal is eating" << endl;
        }

        void Sleep(){
            cout << "Animal is sleeping" << endl;
        }
};

class Dog: public Animal{
    public:
        void Bark(){
            cout << "Dog is barking" << endl;
        }
};

int main(){
    Dog dog;
    dog.Eat();
    dog.Sleep();
    dog.Bark();

    return 0;
}