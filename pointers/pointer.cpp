#include<iostream>
#include<memory>

using namespace std;

class Integer{
    int *ptr;

    public:
        Integer(){
            cout << "Integer()" << endl;
            ptr = new int(0);
        }

        Integer(int value){
            cout << "Integer(int value)" << endl;
            ptr = new int(value);
        }

        Integer(const Integer &other){
            cout << "Integer(const Integer &other)" << endl;
            ptr = new int(*other.ptr);
        }

        int getValue() const{
            return *ptr;
        }

        void setValue(int value){
            *ptr = value;
        }

        ~Integer(){
            cout << "~Integer()" << endl;
            delete ptr;
        }

        Integer(Integer &&other){
            cout << "Integer(Integer &&other)" << endl;
            ptr = other.ptr;
            other.ptr = nullptr;
        }

        Integer & operator = (const Integer &other){
            cout << "Integer & operator = (const Integer &other)" << endl;
            if(this == &other){
                return *this;
            }
            delete ptr;
            ptr = new int(*other.ptr);
            return *this;
        }

        // Integer & operator = (const Integer && other){
        //     cout << "Integer &  Integer(const Integer && other)" << endl;
        //     if(this == &other){
        //         return *this;
        //     }
        //     delete ptr;
        //     ptr = other.ptr;
        //     other.ptr = nullptr;
        //     return *this;
        // }

};

Integer Add(const Integer &a, const Integer &b){
    Integer temp;
    temp.setValue(a.getValue() + b.getValue());
    // cout << "Add(const Integer &a, const Integer &b)" << endl;
    return temp;
}

Integer* getPointer(int val){
    Integer *ptr = new Integer(val);
    return ptr;
}

void display(Integer *p){

    if(p == nullptr){
        cout << "display(Integer *p)" << endl;
        cout << "Null Pointer" << endl;
        return;
    }
    
    cout << "display(Integer *p)" << endl;
    cout << p->getValue() << endl;
}

void Store(std::unique_ptr<Integer> p){
    cout << "Store(std::unique_ptr<Integer> p)" << p->getValue() << endl;
    // display(p.get());
}

void Operate(int val){
    cout << "Operate(int val)" << endl;
    std::unique_ptr<Integer> p{ getPointer(val)};
    if(p != nullptr){
        display(p.get());
        // cout << p->getValue() << endl;
        // delete p;
    }else{
        p.reset(new Integer{7});
        // p = new Integer{};
    }

    // delete p;
    p = nullptr;
    p.reset( new Integer{});

    *p = __LINE__;
    
    display(p.get());
    Store(std::move(p));
    // delete p;
}

int main(){
        
        Operate(5);
    
        return 0;
}