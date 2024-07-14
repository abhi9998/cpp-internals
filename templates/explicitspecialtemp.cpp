#include<iostream>
#include<memory>

#include<vector>

using namespace std;

template<typename T>
class Prettier{
    T *ptr;
    public: 
        void Print(){
           cout << "{" <<*ptr << "}" << endl; 
        }

        T* Get(){
            return ptr;
        }

        Prettier(T * ptr){
            this->ptr = ptr;
        }
};

template<>
class Prettier<vector<int>>
{
    vector<int> *ptr;
    public: 
        void Print(){
            cout << "{";
            for(auto &i : *ptr){
                cout << i << " ";
            }
            cout << "}" << endl;
        }

        vector<int>* Get(){
            return ptr;
        }

        Prettier(vector<int> * ptr){
            this->ptr = ptr;
        }
};


template<>
class Prettier<const char *>{
    const char *ptr;
    public: 
        void Print(){
           cout << "{" <<*ptr << "}" << endl; 
        }

        const char* Get(){
            return ptr;
        }

        Prettier(const char * ptr){
            this->ptr = ptr;
        }
};

int main(){

    Prettier<int> p(new int(5));

    float f = 5.5;

    Prettier<float> p2(&f);
    p.Print();
    p2.Print();

    const char *c{ "Abhai"};
    Prettier< const char *> p3(c);
    p3.Print();

    vector<int> v{1,2,3,4,5};
    Prettier<vector<int>> p4(&v);

    p4.Print();

    return 0;

}
