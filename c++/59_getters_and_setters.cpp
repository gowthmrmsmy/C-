// TOPIC: Getters & Setters
// Make data PRIVATE so it can't be changed directly from outside.
// Getters = read private data. Setters = write with validation.

#include <iostream>

class BankAccount {
private:                    // can only be accessed inside the class
    std::string owner;
    double balance;

public:
    // Constructor
    BankAccount(std::string name, double initialBalance)
    {
        owner = name;
        setBalance(initialBalance);  // use setter for validation
    }

    // GETTER — read private data
    std::string getOwner()
    {
        return owner;
    }

    double getBalance()
    {
        return balance;
    }

    // SETTER — write with validation
    void setOwner(std::string name)
    {
        if (!name.empty()) {
            owner = name;
        } else {
            std::cout << "Name cannot be empty!\n";
        }
    }

    void setBalance(double amount)
    {
        if (amount >= 0) {
            balance = amount;
        } else {
            std::cout << "Balance cannot be negative!\n";
            balance = 0;
        }
    }

    void deposit(double amount)
    {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << "\n";
        }
    }

    void display()
    {
        std::cout << "Owner: " << owner << ", Balance: $" << balance << "\n";
    }
};

int main()
{
    BankAccount account("Gowtham", 1000.0);
    account.display();

    // Can't access private members directly:
    // account.balance = -999;  // ERROR — private

    // Use getters to read
    std::cout << "Owner: " << account.getOwner() << "\n";
    std::cout << "Balance: $" << account.getBalance() << "\n";

    // Use setters to write (with validation)
    account.setBalance(-500);  // rejected — can't be negative
    account.deposit(250);
    account.display();

    // Why use getters/setters?
    // 1. Control access — prevent invalid data
    // 2. Add validation — reject bad values
    // 3. Encapsulation — hide internal implementation

    return 0;
}
