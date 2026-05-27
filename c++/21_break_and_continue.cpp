// TOPIC: Break & Continue
// break — exit the loop immediately.
// continue — skip the rest of current iteration, jump to next.

#include <iostream>

int main()
{
    // BREAK — stop the loop early
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // exits loop when i is 5
        }
        std::cout << i << " ";
    }
    std::cout << "\n";  // Output: 1 2 3 4

    // CONTINUE — skip current iteration
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // skips 5, continues with 6
        }
        std::cout << i << " ";
    }
    std::cout << "\n";  // Output: 1 2 3 4 6 7 8 9 10

    // Practical: skip even numbers
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue;
        }
        std::cout << i << " ";
    }
    std::cout << "\n";  // prints only odd numbers

    // Practical: search and stop
    int numbers[] = {3, 7, 12, 5, 9, 42, 8};
    for (int n : numbers) {
        if (n == 42) {
            std::cout << "Found 42!\n";
            break;
        }
        std::cout << n << " is not 42\n";
    }

    return 0;
}
