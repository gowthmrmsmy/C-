// TOPIC: While Loops
// Repeats a block of code as long as a condition is true.
// Check happens BEFORE each run — might run 0 times.

#include <iostream>

int main()
{
    // Basic while loop — count from 1 to 5
    int i = 1;
    while (i <= 5) {
        std::cout << i << "\n";
        i++;
    }

    std::cout << "---\n";

    // Countdown
    int count = 10;
    while (count > 0) {
        std::cout << count << "\n";
        count--;
    }
    std::cout << "Liftoff!\n";

    std::cout << "---\n";

    // Validate user input with a while loop
    std::string name;
    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name << "!\n";

    // While with a condition that might never be true → loop runs 0 times
    int x = 100;
    while (x < 0) {
        std::cout << "This will never print\n";
    }

    return 0;
}
