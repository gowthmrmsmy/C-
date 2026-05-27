// TOPIC: sizeof() Operator
// sizeof returns the size in BYTES that a type or variable uses in memory.

#include <iostream>

int main()
{
    // Size of basic types
    std::cout << "=== Size of types (in bytes) ===\n";
    std::cout << "char:    " << sizeof(char) << "\n";     // 1
    std::cout << "bool:    " << sizeof(bool) << "\n";     // 1
    std::cout << "int:     " << sizeof(int) << "\n";      // 4
    std::cout << "float:   " << sizeof(float) << "\n";    // 4
    std::cout << "double:  " << sizeof(double) << "\n";   // 8

    // Size of variables
    int age = 25;
    double price = 9.99;
    char grade = 'A';

    std::cout << "\n=== Size of variables ===\n";
    std::cout << "age:   " << sizeof(age) << " bytes\n";
    std::cout << "price: " << sizeof(price) << " bytes\n";
    std::cout << "grade: " << sizeof(grade) << " byte\n";

    // Size of an array
    int numbers[] = {1, 2, 3, 4, 5};
    std::cout << "\n=== Array size ===\n";
    std::cout << "Total bytes: " << sizeof(numbers) << "\n";          // 20 (5 ints * 4 bytes)
    std::cout << "One element: " << sizeof(numbers[0]) << "\n";       // 4
    std::cout << "Element count: " << sizeof(numbers) / sizeof(numbers[0]) << "\n";  // 5

    return 0;
}
