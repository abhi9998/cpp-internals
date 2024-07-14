#include <iostream>

using namespace std;

using Comparator = bool(*)(int,int);

bool Ascending(int a, int b){
    return a > b;
}

bool Descending(int a, int b){
    return a < b;
}



template<typename T,int size>
void Sort( T (&arr)[size], Comparator compare){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(compare(arr[i],arr[j])){
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template<typename T,int size, typename Callback>
void ForEach(T (&arr)[size], Callback func){
    for(int i = 0; i < size; i++){
        func(arr[i]);
    }
}



int main(){
    int arr[]{1,3,2,4,5};
    Sort(arr, Descending);

    Sort(arr, [](int a, int b){
        return a > b;
    });
    for(auto &elem : arr){
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    auto val = [](int a){
        std::cout << a << " ";
    };
    ForEach(arr, val );
    return 0;
}