// TOPIC: Constructor Overloading
// Multiple constructors with different parameters.
// Same idea as function overloading — applied to constructors.

#include <iostream>

class Pizza {
public:
    std::string size;
    std::string topping1;
    std::string topping2;

    // Constructor 1: no arguments (default pizza)
    Pizza()
    {
        size = "medium";
        topping1 = "cheese";
        topping2 = "none";
    }

    // Constructor 2: size only
    Pizza(std::string s)
    {
        size = s;
        topping1 = "cheese";
        topping2 = "none";
    }

    // Constructor 3: size + one topping
    Pizza(std::string s, std::string t1)
    {
        size = s;
        topping1 = t1;
        topping2 = "none";
    }

    // Constructor 4: size + two toppings
    Pizza(std::string s, std::string t1, std::string t2)
    {
        size = s;
        topping1 = t1;
        topping2 = t2;
    }

    void display()
    {
        std::cout << size << " pizza with " << topping1;
        if (topping2 != "none") {
            std::cout << " and " << topping2;
        }
        std::cout << "\n";
    }
};

int main()
{
    // Each constructor handles a different level of customization
    Pizza p1;                                  // default
    Pizza p2("large");                         // size only
    Pizza p3("small", "pepperoni");            // size + 1 topping
    Pizza p4("large", "mushroom", "olives");   // size + 2 toppings

    p1.display();  // medium pizza with cheese
    p2.display();  // large pizza with cheese
    p3.display();  // small pizza with pepperoni
    p4.display();  // large pizza with mushroom and olives

    return 0;
}
