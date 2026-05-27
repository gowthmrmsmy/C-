// TOPIC: Credit Card Validator — Practice Program
// Uses the Luhn algorithm to check if a credit card number is valid.

#include <iostream>

int getDigit(int number);
int sumOddDigits(const std::string &cardNumber);
int sumEvenDigits(const std::string &cardNumber);

int main()
{
    std::string cardNumber;

    std::cout << "=== Credit Card Validator ===\n";
    std::cout << "Enter card number: ";
    std::cin >> cardNumber;

    int result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << cardNumber << " is VALID\n";
    } else {
        std::cout << cardNumber << " is INVALID\n";
    }

    return 0;
}

int getDigit(int number)
{
    // If number is a single digit, return it
    // If two digits, return sum of digits
    return (number / 10) + (number % 10);
}

int sumOddDigits(const std::string &cardNumber)
{
    int sum = 0;
    // Start from rightmost digit, take every other digit (odd positions)
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += (cardNumber[i] - '0');  // char to int
    }
    return sum;
}

int sumEvenDigits(const std::string &cardNumber)
{
    int sum = 0;
    // Start from second-to-last digit, take every other digit
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        int digit = (cardNumber[i] - '0') * 2;  // double it
        sum += getDigit(digit);
    }
    return sum;
}
