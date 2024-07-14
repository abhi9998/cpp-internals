#include "Account.h"
#include "Savings.h"
#include "Checkings.h"
#include "Transact.h"
#include<iostream>

int main(){

    // Savings account1("John Doe", 1000,1);
    // Savings account2("Jane Doe", 2000,2);

    // std::cout << account1.getName() << " " << account1.getBalance() << std::endl;
    // std::cout << account2.getName() << " " << account2.getBalance() << std::endl;

    // account1.deposit(500);
    // account2.withdraw(1000);

    // std::cout << account1.getName() << " " << account1.getBalance() << std::endl;
    // std::cout << account2.getName() << " " << account2.getBalance() << std::endl;

    // account1.accumulateInterest();
    // account2.accumulateInterest();

    // std::cout << account1.getName() << " " << account1.getBalance() << std::endl;
    // std::cout << account2.getName() << " " << account2.getBalance() << std::endl;

    Savings account3("John Doe", 1000,2);
    // Checkings account4("Jane Doe", 2000);

    // std::cout << account3.getName() << " " << account3.getBalance() << std::endl;
    // std::cout << account4.getName() << " " << account4.getBalance() << std::endl;

    // account3.deposit(500);
    // account4.withdraw(3000);


    Transact(&account3);


    //up casting and down casting
    // complier will deliberately remove the some part of the object
    // occurs when child class is assigned to concerete base class object
    //object slicing


    //type ID works at runtime for polymorphic classes
    //for non polymorphic classes, typeid will return the type of the object at compile time
    // if(ti != typeid(Savings)){
    //     std::cout << "Not a savings account" << std::endl;
    // }


    return 0;

}
