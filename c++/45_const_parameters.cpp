// TOPIC: Const Parameters
// Passing by reference is fast but risky (function could change the value).
// const reference = fast AND safe (read-only access).

#include <iostream>

// Without const — function COULD accidentally modify the original
void printName(std::string &name)
{
    // name = "hacked!";  // this would modify the original!
    std::cout << "Name: " << name << "\n";
}

// With const — function CANNOT modify the original (compiler enforces it)
void printNameSafe(const std::string &name)
{
    // name = "hacked!";  // ERROR — const prevents this
    std::cout << "Name: " << name << "\n";
}

// Practical example: calculate area without modifying inputs
double getArea(const double &length, const double &width)
{
    return length * width;
}

// Pass by value for small types (int, char, bool) — copy is cheap
// Pass by const reference for large types (string, arrays, objects) — avoids copying

void printInfo(const std::string &name, const int age)
{
    std::cout << name << " is " << age << " years old\n";
}

int main()
{
    std::string myName = "Gowtham";
    printName(myName);
    printNameSafe(myName);

    double l = 5.0, w = 3.0;
    std::cout << "Area: " << getArea(l, w) << "\n";

    printInfo("Alice", 25);

    return 0;
}
