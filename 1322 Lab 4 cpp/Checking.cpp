#include "Checking.h"

Checking::Checking() : Account()
{
}

Checking::Checking(float initialBalance) : Account(initialBalance)
{
}

void Checking::withdraw(float deductAmmount)
{
	Account::withdraw(deductAmmount);

	if (getAccountBalance() < 0.0f)
	{
		cout << "Charging an overdraft fee of $20 because account is below $0." << endl;
		Account::withdraw(20.0f);
	}
}

void Checking::deposit(float depositAmmount)
{
	cout << "Doing default deposit" << endl;
	Account::deposit(depositAmmount);
}
