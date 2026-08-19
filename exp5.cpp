#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully." << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }

    void display()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.createAccount();

    account.deposit(5000);
    account.withdraw(2000);

    account.display();

    return 0;
}