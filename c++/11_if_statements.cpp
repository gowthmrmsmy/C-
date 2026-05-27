// TOPIC: If Statements
// Execute code only when a condition is true.
// if / else if / else lets you handle multiple conditions.

#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Simple if
    if (age >= 18) {
        std::cout << "You are an adult\n";
    }

    // if-else
    if (age >= 18) {
        std::cout << "You can vote\n";
    } else {
        std::cout << "You cannot vote yet\n";
    }

    // if — else if — else (multiple conditions)
    if (age >= 65) {
        std::cout << "You are a senior\n";
    } else if (age >= 18) {
        std::cout << "You are an adult\n";
    } else if (age >= 13) {
        std::cout << "You are a teenager\n";
    } else {
        std::cout << "You are a child\n";
    }

    // Nested if
    bool hasID = true;
    if (age >= 18) {
        if (hasID) {
            std::cout << "You may enter\n";
        } else {
            std::cout << "You need an ID\n";
        }
    }

    return 0;
}
