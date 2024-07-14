#include<iostream>



//non type template parameter
template<int size>
void Print(){
    std::cout << size << std::endl;
}

// template<typename T>
// T Sum(T* arr, int size){
//     T sum{};
//     for(int i = 0; i < size; i++){
//         sum += arr[i];
//     }
//     return sum;
// }

template<typename T,int size>
T Sum(T (&arr)[size] ){
   
    T sum{};
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    // Print<10>(); // this 10 is constant value
    // Print<20>();


    int arr[]{1,2,3,4,5};

    int (&ref)[5] = arr;
    // std::cout << Sum<int>(arr, 5) << std::endl;
    std::cout << Sum(arr) << std::endl;

    return 0;

}