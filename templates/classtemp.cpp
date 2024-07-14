#include<iostream>
#include<memory>
#include<string>

using namespace std;

template<typename T, int size>
class Stack{
    T stack[size];
    int top{-1};

    public:
        void Push(T value){
            stack[++top] = value;
        }

        T Pop(){
            return stack[top--];
        }

        // const T&  Top(){
        //     return stack[top];
        // }

        const T& Top();
        bool IsEmpty(){
            return top == -1;
        }

        bool IsFull(){
            return top == size+1;
        }


        Stack(const Stack &other){
            cout<< "Copy Constructor" << endl;
            top = other.top;
            for(int i = 0; i <= top; i++){
                stack[i] = other.stack[i];
            }
        }

        Stack() = default;



        // static Stack Create(){  // short hand notation as this is insie the class so directly Stack works
        //     return Stack<T,size>{};
        // }

        static Stack Create();
};

template<typename T, int size>
const T& Stack<T,size>::Top(){
    return stack[top];
}

template<typename T, int size>
Stack<T,size> Stack<T,size>::Create(){ // here you need to explicitly mention the template parameters
    return Stack<T,size>{};
}

int main(){
    Stack<int,5> stack{};
    stack.Push(5);
    stack.Push(10);
    stack.Push(15);
    stack.Push(20);

    auto s2(stack);

    while(!s2.IsEmpty()){
        std::cout << s2.Pop() << std::endl;
    }


    // Stack<string,5> stack2{};
    // stack2.Push("Hello");
    // stack2.Push("World");
    // stack2.Push("C++");

    // while(!stack2.IsEmpty()){
    //     std::cout << stack2.Pop() << std::endl;
    // }

    // Stack<int,5> stack3 = Stack<int,5>::Create();

    // stack3.Push(5);
    // stack3.Push(10);
    // stack3.Push(15);
    // stack3.Push(20);

    // while(!stack3.IsEmpty()){
    //     std::cout << stack3.Pop() << std::endl;
    // }

    return 0;
}