// TOPIC: Useful Math Related Functions
// #include <cmath> gives you many built-in math functions.

#include <iostream>
#include <cmath>

int main()
{
    double x = 9.0;
    double y = -4.7;
    double base = 2.0;
    double exponent = 8.0;

    // Square root
    std::cout << "sqrt(9) = " << sqrt(x) << "\n";       // 3

    // Power (base^exponent)
    std::cout << "2^8 = " << pow(base, exponent) << "\n"; // 256

    // Absolute value
    std::cout << "abs(-4.7) = " << abs(y) << "\n";        // 4.7

    // Round (nearest whole number)
    std::cout << "round(4.7) = " << round(4.7) << "\n";   // 5
    std::cout << "round(4.3) = " << round(4.3) << "\n";   // 4

    // Ceiling (always rounds up)
    std::cout << "ceil(4.1) = " << ceil(4.1) << "\n";     // 5

    // Floor (always rounds down)
    std::cout << "floor(4.9) = " << floor(4.9) << "\n";   // 4

    // Max and min
    std::cout << "max(3, 7) = " << fmax(3, 7) << "\n";    // 7
    std::cout << "min(3, 7) = " << fmin(3, 7) << "\n";    // 3

    // Log (natural logarithm)
    std::cout << "log(100) = " << log(100) << "\n";
    std::cout << "log10(100) = " << log10(100) << "\n";    // 2

    return 0;
}
