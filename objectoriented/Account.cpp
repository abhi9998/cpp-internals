#include "Account.h"
#include <iostream>

int Account::accountCounter = 0;
Account::Account(const std::string &name, double balance){
    this->name = name;
    this->balance = balance;
    this->accountNumber = accountCounter++;
}

Account::Account(){
    this->name = "Unknown";
    this->balance = 0;
    this->accountNumber = accountCounter++;
}

Account::~Account(){
    std::cout << "Account " << accountNumber << " is destroyed" << std::endl;
}

const std::string Account::getName() const{
    return name;
}

double Account::getBalance() const{
    return balance;
}

int Account::getAccountNumber() const{
    return accountNumber;
}

void Account::accumulateInterest(){
    // balance += balance * getInterestRate();
}

void Account::deposit(double amount){
    balance += amount;
}

void Account::withdraw(double amount){
    if(balance - amount < 0){
        std::cout << "Insufficient funds" << std::endl;
        return;
    }
    balance -= amount;
}

float Account::getInterestRate() const{
    return 0.00;
}


