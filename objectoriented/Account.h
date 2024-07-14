
#pragma once
#include <string>
class Account {
    std::string name;
    int accountNumber;
    static int accountCounter;
    
    protected:
        double balance;

    public:
        Account(const std::string &name, double balance);
        Account();
        ~Account();
        const std::string getName() const;
        double getBalance() const;
        int getAccountNumber() const;

       virtual void accumulateInterest();
        void deposit(double amount);
       virtual void withdraw(double amount);
       virtual float getInterestRate() const;
};