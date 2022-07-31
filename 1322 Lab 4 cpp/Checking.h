#pragma once
#include "Account.h"
class Checking :
    public Account
{
public:
    Checking();
    Checking(float initialBalance);

    void withdraw(float deductAmmount);
    void deposit(float depositAmmount);

private:

};

