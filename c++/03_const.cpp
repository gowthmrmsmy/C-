// TOPIC: Const
// const makes a variable READ-ONLY — its value cannot be changed after assignment.
// Use it for values that should never change (like PI, tax rate, speed of light).

#include <iostream>

int main()
{
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;  // meters per second
    const std::string BRAND = "Nike";

    std::cout << "PI: " << PI << "\n";
    std::cout << "Speed of light: " << LIGHT_SPEED << " m/s\n";
    std::cout << "Brand: " << BRAND << "\n";

    // PI = 3.14;  // ERROR — cannot modify a const variable

    // Common naming convention: UPPER_CASE for constants
    const double TAX_RATE = 0.08;
    double subtotal = 100.0;
    double total = subtotal + (subtotal * TAX_RATE);

    std::cout << "Total after tax: $" << total << "\n";

    return 0;
}
