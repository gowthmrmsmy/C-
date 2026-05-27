// TOPIC: Memory Addresses
// Every variable is stored somewhere in memory. The & operator
// gives you that memory address. This is the foundation for pointers.

#include <iostream>

int main()
{
    int age = 25;
    double price = 9.99;
    std::string name = "Gowtham";

    // & = "address of" operator
    std::cout << "Value of age:   " << age << "\n";
    std::cout << "Address of age: " << &age << "\n";    // something like 0x7ffee4

    std::cout << "\nValue of price:   " << price << "\n";
    std::cout << "Address of price: " << &price << "\n";

    std::cout << "\nValue of name:   " << name << "\n";
    std::cout << "Address of name: " << &name << "\n";

    // Each variable has a unique address
    // Addresses are in hexadecimal (0x...)
    // The exact address changes every time you run the program

    // Array elements are stored next to each other in memory
    int numbers[] = {10, 20, 30, 40};
    std::cout << "\n=== Array addresses ===\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "numbers[" << i << "] = " << numbers[i]
                  << " \tat address: " << &numbers[i] << "\n";
    }
    // Notice: addresses differ by 4 bytes each (size of int)

    return 0;
}
