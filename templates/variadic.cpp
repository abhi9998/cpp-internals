#include<iostream>

// template<typename T>
// void Print(std::initializer_list<T> list){
//     for(const auto &elem : list){
//         std::cout << elem << std::endl;
//     }
// }

void Print(){
    std::cout << std::endl;
}

//Template parameter pack 
template<typename T, typename ...Params>
void Print(T t, Params... args){

    std::cout << t;
    if(sizeof...(args) != 0)
        std::cout << ",";
    Print(args...);       
}




int main(){

    Print(1,2,3,4,5,6,7,8,9,10);

    return 0;

}

/*
1 2,3,4,5,6,7,8,9,10
2 3,4,5,6,7,8,9,10
3 4,5,6,7,8,9,10
*/