// TOPIC: Ternary Operator
// A shortcut for simple if-else in one line.
// Syntax: condition ? value_if_true : value_if_false

#include <iostream>

int main()
{
    int age = 20;

    // Regular if-else
    if (age >= 18) {
        std::cout << "You can vote\n";
    } else {
        std::cout << "You cannot vote\n";
    }

    // Same thing with ternary — shorter
    std::cout << (age >= 18 ? "You can vote" : "You cannot vote") << "\n";

    // Storing result in a variable
    std::string status = (age >= 18) ? "adult" : "minor";
    std::cout << "You are an " << status << "\n";

    // Ternary with numbers
    int a = 10, b = 20;
    int max = (a > b) ? a : b;
    std::cout << "Max: " << max << "\n";  // 20

    // Nested ternary (avoid if possible — hard to read)
    int score = 85;
    std::string grade = (score >= 90) ? "A" :
                        (score >= 80) ? "B" :
                        (score >= 70) ? "C" : "F";
    std::cout << "Grade: " << grade << "\n";

    return 0;
}
