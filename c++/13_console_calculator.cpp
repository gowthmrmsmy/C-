// TOPIC: Console Calculator — Practice Program
// Combines user input, switch, and arithmetic.

#include <iostream>

int main()
{
    double num1, num2, result;
    char op;

    std::cout << "=== Console Calculator ===\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: cannot divide by zero!\n";
                return 1;
            }
            break;
        default:
            std::cout << "Invalid operator\n";
            return 1;
    }

    std::cout << num1 << " " << op << " " << num2 << " = " << result << "\n";

    return 0;
}
