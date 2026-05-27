// TOPIC: Type Conversion
// Converting one data type to another.
// Implicit = compiler does it automatically.
// Explicit = you tell the compiler to do it (casting).

#include <iostream>

int main()
{
    // IMPLICIT conversion — compiler does it automatically
    int x = 100;
    double y = x;     // int → double (safe, no data loss)
    std::cout << "int to double: " << y << "\n";  // 100

    char letter = 'A';
    int ascii = letter;  // char → int (gives ASCII value)
    std::cout << "'A' as int: " << ascii << "\n";  // 65

    // Dangerous implicit conversion — data loss!
    double pi = 3.14;
    int rounded = pi;  // double → int (decimal part is lost)
    std::cout << "3.14 as int: " << rounded << "\n";  // 3

    // EXPLICIT conversion (casting) — you do it on purpose
    int correct = 8;
    int questions = 10;

    // Without cast: int / int = int (drops decimal)
    std::cout << "Without cast: " << correct / questions << "\n";  // 0

    // With cast: forces decimal division
    double score = (double)correct / questions * 100;
    std::cout << "With cast: " << score << "%\n";  // 80%

    // Modern C++ style casting
    double score2 = static_cast<double>(correct) / questions * 100;
    std::cout << "static_cast: " << score2 << "%\n";

    return 0;
}
