// TOPIC: Variables and Basic Data Types
// A variable is a named container that holds a value in memory.
// C++ is "statically typed" — you must declare the type before using it.

#include <iostream>

int main()
{
    // INTEGER — whole numbers (no decimals)
    int age = 25;
    std::cout << "Age: " << age << "\n";

    // DOUBLE — numbers with decimals (64-bit, more precision)
    double price = 9.99;
    std::cout << "Price: $" << price << "\n";

    // FLOAT — decimal numbers (32-bit, less precision, use 'f' suffix)
    float gpa = 3.5f;
    std::cout << "GPA: " << gpa << "\n";

    // CHAR — a single character (uses single quotes)
    char grade = 'A';
    std::cout << "Grade: " << grade << "\n";

    // BOOL — true or false (1 or 0)
    bool isStudent = true;
    std::cout << "Is student: " << isStudent << "\n";  // prints 1

    // STRING — text (needs <iostream> or <string> header)
    std::string name = "Gowtham";
    std::cout << "Name: " << name << "\n";

    // You can declare now, assign later
    int score;
    score = 100;
    std::cout << "Score: " << score << "\n";

    // You can declare multiple variables of the same type
    int x = 1, y = 2, z = 3;
    std::cout << x << ", " << y << ", " << z << "\n";

    return 0;
}
