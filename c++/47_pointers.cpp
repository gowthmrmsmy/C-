// TOPIC: Pointers
// A pointer is a variable that stores a MEMORY ADDRESS instead of a value.
// Declared with *. Get address with &. Access value at address with *.

#include <iostream>

int main()
{
    int age = 25;

    // Regular variable
    std::cout << "Value: " << age << "\n";
    std::cout << "Address: " << &age << "\n";

    // Pointer — stores the address of 'age'
    int *ptr = &age;

    std::cout << "\n=== Pointer ===\n";
    std::cout << "Pointer value (address it stores): " << ptr << "\n";
    std::cout << "Dereferenced (value at that address): " << *ptr << "\n";
    // *ptr = "go to the address and get the value there"

    // Modify original through pointer
    *ptr = 30;
    std::cout << "\nAfter *ptr = 30:\n";
    std::cout << "age = " << age << "\n";   // 30 — changed!
    std::cout << "*ptr = " << *ptr << "\n"; // 30

    // Pointer to different types
    double price = 9.99;
    double *pPrice = &price;
    std::cout << "\nPrice: " << *pPrice << "\n";

    std::string name = "Gowtham";
    std::string *pName = &name;
    std::cout << "Name: " << *pName << "\n";

    // Summary:
    // &variable = get the address of variable
    // *pointer  = get the value at the address (dereference)
    // int *ptr  = declare a pointer to int

    return 0;
}
