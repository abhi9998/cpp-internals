#include<string>
#include "Checkings.h"
#include <iostream>

Checkings::Checkings(const std::string &name, double balance): Account(name, balance){
    this->interestRate = 0.00;
}

Checkings::Checkings(): Account(){
    this->interestRate = 0.00;
}

Checkings::~Checkings(){
    std::cout << "Checkings account " << getAccountNumber() << " is destroyed" << std::endl;
}

void Checkings::withdraw(double amount){
    if(getBalance() - amount < 0){
        std::cout << "Insufficient funds" << std::endl;
        return;
    }
    deposit(-amount);
}

