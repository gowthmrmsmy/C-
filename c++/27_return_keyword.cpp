// TOPIC: Return Keyword
// Functions can send a value back to the caller using return.
// The return type must match what the function declares.

#include <iostream>

// Functions that RETURN values
double add(double a, double b);
double multiply(double a, double b);
double square(double x);
bool isEven(int n);
std::string getGreeting(std::string name);

int main()
{
    // Store returned values in variables
    double sum = add(5.0, 3.0);
    std::cout << "5 + 3 = " << sum << "\n";

    double product = multiply(4.0, 7.0);
    std::cout << "4 * 7 = " << product << "\n";

    // Use return value directly
    std::cout << "6 squared = " << square(6.0) << "\n";

    // Return bool
    std::cout << "Is 4 even? " << isEven(4) << "\n";  // 1 (true)
    std::cout << "Is 7 even? " << isEven(7) << "\n";  // 0 (false)

    // Return string
    std::cout << getGreeting("Gowtham") << "\n";

    // Chain: use one function's result in another
    double result = add(square(3.0), square(4.0));  // 9 + 16
    std::cout << "3² + 4² = " << result << "\n";    // 25

    return 0;
}

double add(double a, double b)
{
    return a + b;
}

double multiply(double a, double b)
{
    return a * b;
}

double square(double x)
{
    return x * x;
}

bool isEven(int n)
{
    return n % 2 == 0;
}

std::string getGreeting(std::string name)
{
    return "Hello, " + name + "!";
}
