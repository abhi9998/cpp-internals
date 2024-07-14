#include<iostream>
#include "cars.h"

using namespace std;


int main(){
    Cars c;
    c.FillFuel(10);
    c.Accelerate();
    c.Accelerate();
    c.Accelerate();
    c.Dashboard();
    c.Brake();
    c.Dashboard();
    c.AddPassengers(3);
    c.Dashboard();

    // Cars c1;

    c.total();
    return 0;
}