// TOPIC: Switch Statements
// A cleaner way to handle multiple specific values (instead of many if-else).
// Works with int, char, enum — NOT with strings.

#include <iostream>

int main()
{
    int day;
    std::cout << "Enter day of week (1-7): ";
    std::cin >> day;

    switch (day) {
        case 1:
            std::cout << "Monday\n";
            break;
        case 2:
            std::cout << "Tuesday\n";
            break;
        case 3:
            std::cout << "Wednesday\n";
            break;
        case 4:
            std::cout << "Thursday\n";
            break;
        case 5:
            std::cout << "Friday\n";
            break;
        case 6:
            std::cout << "Saturday\n";
            break;
        case 7:
            std::cout << "Sunday\n";
            break;
        default:
            std::cout << "Invalid day\n";
            break;
    }

    // Without break, execution "falls through" to the next case
    // break stops that from happening

    // Switch with char
    char grade;
    std::cout << "Enter your grade (A-F): ";
    std::cin >> grade;

    switch (grade) {
        case 'A':
            std::cout << "Excellent!\n";
            break;
        case 'B':
            std::cout << "Good job!\n";
            break;
        case 'C':
            std::cout << "Average\n";
            break;
        case 'D':
            std::cout << "Below average\n";
            break;
        case 'F':
            std::cout << "You failed\n";
            break;
        default:
            std::cout << "Invalid grade\n";
    }

    return 0;
}
