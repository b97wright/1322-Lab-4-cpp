#include "Savings.h"

Savings::Savings() : Account()
{
	count = 1;
	addInterest = false;
}

Savings::Savings(float initialAmmount) : Account(initialAmmount)
{
	count = 1;
	addInterest = false;
}


void Savings::withdraw(float deductAmmount)
{
	Account::withdraw(deductAmmount);

	if (getAccountBalance() < 500.0f)
	{
		cout << "Charging a fee of $10 because you are below $500." << endl;
		Account::withdraw(10.0f);
	}
}


void Savings::deposit(float depositAmmount)
{
	if (addInterest)
	{
		Account::deposit(depositAmmount);
	}
	else
	{
		cout << "This is deposit number " << count << " to this account." << endl;
		Account::deposit(depositAmmount);

		if (count > 5)
		{
			cout << "A $10 deposit fee is added to your transation." << endl;
			withdraw(10.0f);
		}
		count++;
	}
}


void Savings::caculateInterest()
{
	addInterest = true;
	interest = getAccountBalance() * .015f;
	deposit(interest);
	cout << "Customer earned " << interest << " in interest!" << endl;
	addInterest = false;
}
