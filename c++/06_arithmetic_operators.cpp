// TOPIC: Arithmetic Operators
// Basic math operations in C++.

#include <iostream>

int main()
{
    int a = 10;
    int b = 3;

    // Basic operators
    std::cout << "a + b = " << (a + b) << "\n";   // 13 — addition
    std::cout << "a - b = " << (a - b) << "\n";   // 7  — subtraction
    std::cout << "a * b = " << (a * b) << "\n";   // 30 — multiplication
    std::cout << "a / b = " << (a / b) << "\n";   // 3  — integer division (truncates decimal)
    std::cout << "a % b = " << (a % b) << "\n";   // 1  — modulus (remainder)

    // Integer division drops the decimal
    // 10 / 3 = 3.333... but int / int = 3

    // Use double for decimal results
    double x = 10.0;
    double y = 3.0;
    std::cout << "x / y = " << (x / y) << "\n";   // 3.33333

    // Increment and decrement
    int count = 5;
    count++;          // count is now 6 (same as count = count + 1)
    count--;          // count is now 5 again
    std::cout << "Count: " << count << "\n";

    // Shorthand assignment operators
    int score = 100;
    score += 10;    // score = score + 10 → 110
    score -= 5;     // score = score - 5  → 105
    score *= 2;     // score = score * 2  → 210
    score /= 3;     // score = score / 3  → 70
    std::cout << "Score: " << score << "\n";

    return 0;
}
