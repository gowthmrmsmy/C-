// TOPIC: User Defined Functions
// Functions let you reuse blocks of code. Define once, call many times.
// Syntax: returnType functionName(parameters) { body }

#include <iostream>

// Function declarations (prototypes) — tell compiler these exist
void greet();
void greetUser(std::string name);
void sing(int times);

int main()
{
    // Call functions
    greet();
    greet();  // reuse!

    greetUser("Gowtham");
    greetUser("Alice");

    sing(3);

    return 0;
}

// Function definitions — what they actually do
void greet()
{
    std::cout << "Hello!\n";
}

void greetUser(std::string name)
{
    std::cout << "Hello " << name << "!\n";
}

void sing(int times)
{
    for (int i = 0; i < times; i++) {
        std::cout << "La la la!\n";
    }
}

// void = this function doesn't return a value, it just does something
// Parameters = inputs the function needs (like name, times)
// Arguments = the actual values you pass when calling (like "Gowtham", 3)
