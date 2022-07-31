#include "Account.h"

Account::Account()
{
	accountNum.push_back(10001);
	accountNum.push_back(10002);
	accountBalance = 0.0f;
}

Account::Account(float initialBalance)
{
	accountNum.push_back(10001);
	accountNum.push_back(10002);
	accountBalance = initialBalance;
}

int Account::getAccountNumber(int index)
{
	return accountNum[index];
}

// getAccountBalance return the accountBalance for the specific account
float Account::getAccountBalance()
{
	return accountBalance;
}


// setAccountBalance sets the account balance for the specific account using the floating number recieved
void Account::setAccountBalance(float inputBalance)
{
	accountBalance = inputBalance;
}


// withdraw allows person to withdraw money from their account
void Account::withdraw(float deductAmmount)
{
	setAccountBalance(accountBalance - deductAmmount);
}


// deposit allows person to deposit money into their account
void Account::deposit(float depositAmmount)
{
	setAccountBalance(accountBalance + depositAmmount);
}
