// TOPIC: Arrays
// An array stores multiple values of the same type in a fixed-size list.
// Elements are accessed by index (starting at 0).

#include <iostream>

int main()
{
    // Declare and initialize
    std::string cars[] = {"BMW", "Tesla", "Toyota", "Honda"};

    // Access by index (0-based)
    std::cout << cars[0] << "\n";  // BMW
    std::cout << cars[1] << "\n";  // Tesla
    std::cout << cars[3] << "\n";  // Honda

    // Change a value
    cars[0] = "Mercedes";
    std::cout << "Updated: " << cars[0] << "\n";  // Mercedes

    // Declare with size, assign later
    int scores[5];
    scores[0] = 90;
    scores[1] = 85;
    scores[2] = 78;
    scores[3] = 92;
    scores[4] = 88;

    // Arrays have fixed size — can't grow or shrink
    // scores[5] = 100;  // DANGER — out of bounds, undefined behavior

    // Declare with size and initial values
    double prices[3] = {9.99, 19.99, 29.99};

    std::cout << "First price: $" << prices[0] << "\n";
    std::cout << "Last price: $" << prices[2] << "\n";

    return 0;
}
