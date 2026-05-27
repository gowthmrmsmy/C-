// TOPIC: Banking Practice Program
// A simple banking system using functions, loops, and switch.

#include <iostream>

// Function declarations
void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice;

    std::cout << "=== Welcome to the Bank ===\n";

    do {
        std::cout << "\n1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                std::cout << "Thank you! Goodbye.\n";
                break;
            default:
                std::cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is: $" << balance << "\n";
}

double deposit(double balance)
{
    double amount;
    std::cout << "Enter deposit amount: $";
    std::cin >> amount;

    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited $" << amount << "\n";
    } else {
        std::cout << "Invalid amount\n";
    }
    return balance;
}

double withdraw(double balance)
{
    double amount;
    std::cout << "Enter withdrawal amount: $";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficient funds!\n";
    } else if (amount <= 0) {
        std::cout << "Invalid amount\n";
    } else {
        balance -= amount;
        std::cout << "Withdrew $" << amount << "\n";
    }
    return balance;
}
