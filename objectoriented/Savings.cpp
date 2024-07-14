#include "Savings.h"
#include <iostream>

Savings::Savings(const std::string &name, double balance, float interestRate): Account(name, balance){
    this->interestRate = interestRate;
}

Savings::Savings(): Account(){
    this->interestRate = 0.00;
}

Savings::~Savings(){
    std::cout << "Savings account " << getAccountNumber() << " is destroyed" << std::endl;
}

float Savings::getInterestRate() const{
    return interestRate;
}

void Savings::accumulateInterest(){
    deposit(getBalance() * interestRate);
}
