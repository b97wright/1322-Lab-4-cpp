#include <iostream>
#include "Checking.h";
#include "Savings.h";

int main()
{
    Checking brandoChecking;
    Savings brandoSavings;

    int choice = 0;
    float inputAmmount = 0.0f;
    bool isPlaying = true;

    while (isPlaying)
    {
        cout << "1. Withdraw from Checking" << endl;
        cout << "2. Withdraw from Savings" << endl;
        cout << "3. Deposit to Checking" << endl;
        cout << "4. Deposit to Savings" << endl;
        cout << "5. Balance of Checking" << endl;
        cout << "6. Balance of Savings" << endl;
        cout << "7. Award Interest to Savings now" << endl;
        cout << "8. Quit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "How much would you like to withdraw from Checking?" << endl;
                cin >> inputAmmount;
                brandoChecking.withdraw(inputAmmount);
                break;
            }
            case 2:
            {
                cout << "How much would you like to withdraw from Savings?" << endl;
                cin >> inputAmmount;
                brandoSavings.withdraw(inputAmmount);
                break;
            }
            case 3:
            {
                cout << "How much would you like to deposit into Checking?" << endl;
                cin >> inputAmmount;
                brandoChecking.deposit(inputAmmount);
                break;
            }
            case 4:
            {
                cout << "How much would you like to deposit into Savings?" << endl;
                cin >> inputAmmount;
                brandoSavings.deposit(inputAmmount);
                break;
            }
            case 5:
            {
                cout << "Your balance for checking " << brandoChecking.getAccountNumber(0) << " is " << brandoChecking.getAccountBalance() << endl;
                break;
            }
            case 6:
            {
                cout << "Your balance for checking " << brandoSavings.getAccountNumber(1) << " is " << brandoSavings.getAccountBalance() << endl;
                break;
            }
            case 7:
            {
                brandoSavings.caculateInterest();
                break;
            }
            case 8:
            {
                isPlaying = false;
                break;
            }
            default:
            {

            }
        }
    }

    
}
