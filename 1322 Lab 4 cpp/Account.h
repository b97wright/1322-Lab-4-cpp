#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Account
{
public:
	Account();
	Account(float initialBalance);

	int getAccountNumber(int index);
	float getAccountBalance();
	void setAccountBalance(float inputBalance);
	virtual void withdraw(float deductAmmount);
	virtual void deposit(float depositAmmount);

private:
	vector<int> accountNum;
	float accountBalance;
};

