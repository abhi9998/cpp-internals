#pragma once
#include <string>
#include "Account.h"

class Savings: public Account{
    float interestRate;
    public:
        Savings(const std::string &name, double balance, float interestRate);
        Savings();
        ~Savings();
        float getInterestRate() const;
        void accumulateInterest();
};
