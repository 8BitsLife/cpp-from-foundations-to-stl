#include <iostream>
#include <exception>
using namespace std;

// Custom Exception Class
class InsufficientBalanceException : public exception
{
private:
    const char* message;

public:
    InsufficientBalanceException(const char* msg)
    {
        message = msg;
    }

    // Overriding what() from std::exception
    const char* what() const noexcept override
    {
        return message;
    }
};

// Bank Account Class
class BankAccount
{
private:
    double balance;

public:
    BankAccount(double b)
    {
        balance = b;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            throw InsufficientBalanceException(
                "Withdrawal failed: Insufficient balance!");
        }

        balance -= amount;
        cout << "Withdrawal successful.\n";
        cout << "Remaining balance: " << balance << endl;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit successful.\n";
        cout << "New balance: " << balance << endl;
    }

    double getBalance() const
    {
        return balance;
    }
};

// MAIN
int main()
{
    BankAccount account(1000);

    try
    {
        account.withdraw(500);
        account.withdraw(600); // This will throw exception
    }
    catch (const InsufficientBalanceException& e)
    {
        cout << "\nCustom Exception Caught!\n";
        cout << e.what() << endl;
    }

    cout << "\nProgram continues normally." << endl;

    return 0;
}
