#include "Transact.h"
#include <iostream>


void Transact(Account * account){
    std::cout << "Transacting with account " << account->getAccountNumber() << std::endl;
    // account->deposit(100);
    account-> accumulateInterest();
    account -> withdraw(50);

    std::cout << "Account " << account->getAccountNumber() << " has a balance of " << account->getBalance() << std::endl;
}

//here there is polymorphism, the function Transact can take any object that is a subclass of Account
//this is because the function takes a pointer to an Account object, and the subclasses of Account are also Account objects