// TOPIC: Nested Loops
// A loop inside another loop. The inner loop completes all its
// iterations for each single iteration of the outer loop.

#include <iostream>

int main()
{
    // Basic nested loop — rows and columns
    int rows = 4;
    int cols = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    // Output:
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    std::cout << "---\n";

    // Triangle pattern
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    // Output:
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    std::cout << "---\n";

    // Multiplication table
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            std::cout << (i * j) << "\t";
        }
        std::cout << "\n";
    }

    // How nested loops work:
    // Outer loop i=1 → inner loop runs j=1,2,3,4,5
    // Outer loop i=2 → inner loop runs j=1,2,3,4,5
    // ... and so on

    return 0;
}
