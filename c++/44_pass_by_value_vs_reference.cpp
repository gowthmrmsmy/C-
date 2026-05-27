// TOPIC: Pass by VALUE vs Pass by REFERENCE
// By value: function gets a COPY — original is unchanged.
// By reference (&): function gets the ORIGINAL — can modify it.

#include <iostream>

void swapByValue(int a, int b);       // won't work
void swapByReference(int &a, int &b); // works!
void tripleValue(int x);
void tripleReference(int &x);

int main()
{
    // Pass by VALUE — function gets a copy
    int a = 10, b = 20;
    std::cout << "Before swap (by value): a=" << a << " b=" << b << "\n";
    swapByValue(a, b);
    std::cout << "After swap (by value):  a=" << a << " b=" << b << "\n";
    // a and b are UNCHANGED — the function only swapped copies

    std::cout << "\n";

    // Pass by REFERENCE — function gets the original
    std::cout << "Before swap (by ref):   a=" << a << " b=" << b << "\n";
    swapByReference(a, b);
    std::cout << "After swap (by ref):    a=" << a << " b=" << b << "\n";
    // a and b ARE swapped now

    std::cout << "\n";

    // Another example
    int num = 10;
    tripleValue(num);
    std::cout << "After tripleValue: " << num << "\n";     // still 10

    tripleReference(num);
    std::cout << "After tripleReference: " << num << "\n";  // 30

    return 0;
}

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;  // only affects local copies
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;  // modifies the originals
}

void tripleValue(int x) { x *= 3; }
void tripleReference(int &x) { x *= 3; }
