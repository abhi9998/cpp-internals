
//definitiosn of all cars.h functions

#include "cars.h"
#include <iostream>

using namespace std;

int Cars::count = 0;

Cars::Cars():Cars(0, 0){
    
    std::cout << "Car object created1" << std::endl;
}


Cars::Cars(float amount, int pass){

    std::cout << "Car object created2" << std::endl;

    speed = 0;
    fuel = amount;
    passengers = pass;
    count++;
}
void Cars::total(){
    cout << "Total cars: " << count << endl;
}

Cars::~Cars(){
    cout << "Car object destroyed" << endl;
}

void Cars::FillFuel(float amount){
    fuel += amount;
}

void Cars::Accelerate(){
    speed += 10;
    fuel -= 0.5;
}

void Cars::Brake(){
    speed = 0;
}

void Cars::AddPassengers(int count){
    passengers += count;
}

void Cars::Dashboard(){
    cout << "Speed: " << speed << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Passengers: " << passengers << endl;
}

