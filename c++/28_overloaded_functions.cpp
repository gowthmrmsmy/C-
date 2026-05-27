// TOPIC: Overloaded Functions
// Multiple functions with the SAME NAME but DIFFERENT parameters.
// The compiler picks the right one based on what you pass in.

#include <iostream>

// Same name, different parameters
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

// Overloaded by parameter TYPE
int add(int a, int b);
double add(double a, double b);

int main()
{
    // Compiler matches by number of arguments
    bakePizza();                         // calls version with 0 params
    bakePizza("pepperoni");              // calls version with 1 param
    bakePizza("pepperoni", "mushroom");  // calls version with 2 params

    // Compiler matches by type of arguments
    std::cout << add(2, 3) << "\n";      // calls int version → 5
    std::cout << add(2.5, 3.7) << "\n";  // calls double version → 6.2

    return 0;
}

void bakePizza()
{
    std::cout << "Here is your plain pizza!\n";
}

void bakePizza(std::string topping1)
{
    std::cout << "Pizza with " << topping1 << "!\n";
}

void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Pizza with " << topping1 << " and " << topping2 << "!\n";
}

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}
