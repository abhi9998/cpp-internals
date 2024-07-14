#include<iostream>

using namespace std;

class Printer{
    std::shared_ptr<int> value{};

    public: 
        void SetValue(std::shared_ptr<int> value){
            this->value  = value;
        }

        void Print(){
            if(value){
                cout << *value << endl;
            }
        }
};

int main(){

    Printer printer{};
    int num{};
    cin >> num;
    std::shared_ptr<int> p{new int(num)};

    printer.SetValue(p);
    if(*p > 10){
        
        p = nullptr;
    }
    

    printer.Print();

    
}