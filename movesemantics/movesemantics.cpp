#include<iostream>

using namespace std;

class String{
   public: 
    String() = default;
    String(const char * str){

        cout << "Constructor ghello" << endl;
        size = strlen(str);
        data = new char[size];
        memcpy(data, str, size); 

    }

    String(String && str){
         cout << "Move Constructor" << endl;
            size = str.size;
            data = str.data;
            str.size = 0;
            str.data = nullptr;

    }

    ~String(){
        cout << "Destructor" << endl;
        delete data;
    }

    String(const String &other): size(other.size){
        cout << "Copy Constructor" << endl;
        data = new char[size];
        memcpy(data, other.data, size);
    }

    void PrintName(){
        
        for(uint32_t i = 0; i < size; i++){
            cout << data[i];
        }
    }

    private:
        char * data;
        uint32_t size;
};

class Entity{

    public: 
        Entity(const String &name): name(name){
            cout << " empty Copy Constructor" << endl;
        }

        Entity(String && name): name(std::move(name)){

        }

        
        void Print(){
            name.PrintName();
        }

    private:
        String name;    
};

int main(){

    Entity e(String("Cherno"));
    e.Print();
    return 0;
}