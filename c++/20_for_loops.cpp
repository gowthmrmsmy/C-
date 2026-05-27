// TOPIC: For Loops
// Best when you know how many times to repeat.
// Syntax: for (start; condition; update) { body }

#include <iostream>

int main()
{
    // Count from 1 to 10
    for (int i = 1; i <= 10; i++) {
        std::cout << i << "\n";
    }

    std::cout << "---\n";

    // Count by 2s
    for (int i = 0; i <= 20; i += 2) {
        std::cout << i << " ";
    }
    std::cout << "\n---\n";

    // Count backwards
    for (int i = 10; i >= 1; i--) {
        std::cout << i << " ";
    }
    std::cout << "\n---\n";

    // Multiplication table
    int num = 5;
    for (int i = 1; i <= 10; i++) {
        std::cout << num << " x " << i << " = " << (num * i) << "\n";
    }

    // for vs while — same thing, different style
    // for:   for (int i = 0; i < 5; i++) { ... }
    // while: int i = 0; while (i < 5) { ... i++; }

    return 0;
}
