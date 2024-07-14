#include<iostream>

enum Coloer{
    RED,
    GREEN
};

void FillColor(Coloer val){
    if(val == RED){
        std::cout << "Red" << std::endl;
    }else if(val == GREEN){
        std::cout << "Green" << std::endl;
    }
}

int main(){

    FillColor(RED);
    FillColor(GREEN);
    FillColor(static_cast<Coloer>(1));

    return 0;

}

//enum class Coloer{
//    RED,
//    GREEN
//};

//to have the different type of enum class
//enum class Coloer : char{
//    RED,
//    GREEN
//};