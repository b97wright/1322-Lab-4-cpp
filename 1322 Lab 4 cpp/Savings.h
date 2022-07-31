#pragma once
#include "Account.h"
class Savings :
    public Account
{
public:
    Savings();
    Savings(float initialAmmount);

    void withdraw(float deductAmmount);
    void deposit(float depositAmmount);
    void caculateInterest();
private:
    int count;
    float interest;
    bool addInterest;
};

