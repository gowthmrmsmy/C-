// TOPIC: Variable Scope
// Scope = where a variable can be accessed.
// Local variables only exist inside their { } block.
// Global variables exist everywhere (but avoid overusing them).

#include <iostream>

// Global variable — accessible everywhere
int globalVar = 100;

void printGlobal();

int main()
{
    // Local variable — only exists inside main
    int localVar = 50;

    std::cout << "Global: " << globalVar << "\n";  // works
    std::cout << "Local: " << localVar << "\n";     // works

    // Variables inside a block {} only exist in that block
    {
        int blockVar = 10;
        std::cout << "Block var: " << blockVar << "\n";  // works here
    }
    // std::cout << blockVar;  // ERROR — blockVar doesn't exist here

    // Loop variable only exists inside the loop
    for (int i = 0; i < 3; i++) {
        std::cout << "i = " << i << "\n";
    }
    // std::cout << i;  // ERROR — i doesn't exist outside the loop

    // If a local and global have the same name, local wins
    int globalVar = 999;  // this "shadows" the global
    std::cout << "Shadowed: " << globalVar << "\n";  // 999, not 100

    printGlobal();

    return 0;
}

void printGlobal()
{
    // Can access global variable
    std::cout << "From function — Global: " << globalVar << "\n";

    // Cannot access main's localVar here
    // std::cout << localVar;  // ERROR
}
