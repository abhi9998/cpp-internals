#include<iostream>

using namespace std;
void ProcessRecord(long count){
    int *ptr = (int*)malloc(count * sizeof(int));

    if(ptr == nullptr){
        cout<<"Memory allocation failed"<<endl;
        return;
    }
    
    for(int i = 0; i < count; i++){
        ptr[i] = i;
    }

    free(ptr);

}

void PerformDivision(int a, int b){

    if(b == 0){
        throw std::invalid_argument("Divide by zero exception");
    }

    cout << a/b << endl;
}

int main(){
    try{
    // ProcessRecord(1000000777700);
    PerformDivision(1,0);
    }catch(std::exception &e){
        cout << "Exception: " << e.what() << endl;
    }
    return 0;

}