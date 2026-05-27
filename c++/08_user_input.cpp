// TOPIC: User Input
// std::cin reads input from the keyboard.
// std::getline reads a full line (including spaces).

#include <iostream>

int main()
{
    // Reading a number
    int age;
    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "You are " << age << " years old\n";

    // Reading a single word (stops at space)
    std::string firstName;
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Hello " << firstName << "!\n";

    // Problem: cin >> leaves a newline in the buffer
    // getline would immediately read that leftover newline
    // Fix: clear the buffer first
    std::cin.ignore();

    // Reading a full line (including spaces)
    std::string fullName;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);
    std::cout << "Full name: " << fullName << "\n";

    // Reading multiple values at once
    int x, y;
    std::cout << "Enter two numbers separated by space: ";
    std::cin >> x >> y;
    std::cout << "Sum: " << (x + y) << "\n";

    return 0;
}
