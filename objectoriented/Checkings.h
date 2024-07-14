#pragma once

#include <string>
#include "Account.h"

class Checkings : public Account {
    float interestRate;
    public:
        Checkings(const std::string &name, double balance);
        Checkings();
        ~Checkings();
        void withdraw(double amount);
};