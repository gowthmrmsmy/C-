// TOPIC: Function Templates
// Write ONE function that works with ANY data type.
// The compiler generates the right version automatically.

#include <iostream>

// Without templates — you'd need separate functions for each type
int maxInt(int a, int b) { return (a > b) ? a : b; }
double maxDouble(double a, double b) { return (a > b) ? a : b; }

// With a template — ONE function handles all types
template <typename T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T getMin(T a, T b)
{
    return (a < b) ? a : b;
}

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Same function works for int, double, char, string...
    std::cout << "Max int: " << getMax(3, 7) << "\n";          // 7
    std::cout << "Max double: " << getMax(3.5, 2.1) << "\n";   // 3.5
    std::cout << "Max char: " << getMax('a', 'z') << "\n";     // z
    std::cout << "Max string: " << getMax(std::string("apple"), std::string("banana")) << "\n";

    std::cout << "Min: " << getMin(10, 5) << "\n";

    int a = 1, b = 2;
    swapValues(a, b);
    std::cout << "Swapped: a=" << a << " b=" << b << "\n";  // a=2 b=1

    std::string s1 = "hello", s2 = "world";
    swapValues(s1, s2);
    std::cout << "Swapped: " << s1 << ", " << s2 << "\n";  // world, hello

    // T is a placeholder — compiler replaces it with the actual type
    // template <typename T> means "T can be any type"

    return 0;
}
