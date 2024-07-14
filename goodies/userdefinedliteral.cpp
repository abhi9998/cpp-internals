#include<iostream>

using namespace std;

class Integer {
    long double miles;
    public:
        Integer(long double m): miles{m} { }
       
};

// Integer operator"" _km(long double x) {
//     return Integer{x*1.12};
 
// }


// Integer operator"" _miles(long double x) {
//     return Integer{x*1.12};

// }

long double operator"" _gram(long double x){
    return x/1000;

}

int main(){
    // Integer a {10.0_km};
    // Integer b {10.0_miles};

    long double valInKg = 1000.0_gram;
    cout << valInKg << endl;
    return 0;
}