// TOPIC: Hypotenuse Calculator — Practice Program
// Uses the Pythagorean theorem: c = sqrt(a² + b²)
// where a and b are the two shorter sides of a right triangle.

#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;

    std::cout << "=== Hypotenuse Calculator ===\n";
    std::cout << "Enter side a: ";
    std::cin >> a;
    std::cout << "Enter side b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Hypotenuse (c) = " << c << "\n";

    // Example: a=3, b=4 → c=5 (classic 3-4-5 triangle)

    return 0;
}
