// TOPIC: Null Pointers
// A null pointer points to NOTHING. Use it when a pointer doesn't
// have a valid address yet. Always check before dereferencing.

#include <iostream>

int main()
{
    // Uninitialized pointer — DANGEROUS (points to garbage memory)
    // int *ptr;  // bad — could crash if you dereference

    // Null pointer — safe, points to nothing
    int *ptr = nullptr;

    // Always check before using
    if (ptr == nullptr) {
        std::cout << "Pointer is null — not pointing to anything\n";
    } else {
        std::cout << *ptr << "\n";
    }

    // Assign a real address later
    int age = 25;
    ptr = &age;

    if (ptr != nullptr) {
        std::cout << "Pointer value: " << *ptr << "\n";  // 25
    }

    // Common pattern: check before dereferencing
    int *safePtr = nullptr;

    // ... some condition might set safePtr ...

    if (safePtr) {  // shorthand for (safePtr != nullptr)
        std::cout << *safePtr << "\n";
    } else {
        std::cout << "safePtr is null, can't dereference\n";
    }

    // Reset pointer to null after done
    ptr = nullptr;

    // Old C style: NULL (works but nullptr is preferred in C++)
    // int *old = NULL;

    return 0;
}
