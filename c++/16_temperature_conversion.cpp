// TOPIC: Temperature Conversion — Practice Program
// Convert between Fahrenheit and Celsius.
// F to C: (F - 32) * 5/9
// C to F: (C * 9/5) + 32

#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "=== Temperature Converter ===\n";
    std::cout << "Enter temperature: ";
    std::cin >> temp;
    std::cout << "Fahrenheit (F) or Celsius (C)? ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        double celsius = (temp - 32) * 5.0 / 9.0;
        std::cout << temp << "°F = " << celsius << "°C\n";
    } else if (unit == 'C' || unit == 'c') {
        double fahrenheit = (temp * 9.0 / 5.0) + 32;
        std::cout << temp << "°C = " << fahrenheit << "°F\n";
    } else {
        std::cout << "Invalid unit\n";
    }

    return 0;
}
