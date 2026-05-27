// TOPIC: Do While Loops
// Same as while, but the check happens AFTER — always runs at least once.

#include <iostream>

int main()
{
    // Basic do-while
    int i = 1;
    do {
        std::cout << i << "\n";
        i++;
    } while (i <= 5);

    std::cout << "---\n";

    // Key difference: runs at least once even if condition is false
    int x = 100;
    do {
        std::cout << "This runs once even though x > 0\n";
    } while (x < 0);
    // With a regular while, the above would never run

    std::cout << "---\n";

    // Validate user input — natural fit for do-while
    std::string name;
    do {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    } while (name.empty());
    std::cout << "Hello " << name << "!\n";

    // Menu example
    int choice;
    do {
        std::cout << "\n=== Menu ===\n";
        std::cout << "1. Play\n";
        std::cout << "2. Settings\n";
        std::cout << "3. Quit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: std::cout << "Playing...\n"; break;
            case 2: std::cout << "Opening settings...\n"; break;
            case 3: std::cout << "Goodbye!\n"; break;
            default: std::cout << "Invalid choice\n";
        }
    } while (choice != 3);

    return 0;
}
