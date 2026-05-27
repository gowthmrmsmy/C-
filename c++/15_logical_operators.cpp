// TOPIC: Logical Operators
// Combine multiple conditions.
// && (AND), || (OR), ! (NOT)

#include <iostream>

int main()
{
    int temp = 25;
    bool isSunny = true;

    // && (AND) — both must be true
    if (temp > 20 && isSunny) {
        std::cout << "It's a nice day!\n";
    }

    // || (OR) — at least one must be true
    if (temp <= 0 || temp >= 40) {
        std::cout << "Extreme temperature!\n";
    } else {
        std::cout << "Temperature is normal\n";
    }

    // ! (NOT) — flips true to false, false to true
    bool isRaining = false;
    if (!isRaining) {
        std::cout << "It's not raining\n";
    }

    // Combining operators
    int age = 25;
    bool hasLicense = true;
    bool isSober = true;

    if (age >= 16 && hasLicense && isSober) {
        std::cout << "You can drive\n";
    } else {
        std::cout << "You cannot drive\n";
    }

    // Practical example: login check
    std::string username = "admin";
    std::string password = "1234";

    if (username == "admin" && password == "1234") {
        std::cout << "Login successful\n";
    } else if (username != "admin" && password == "1234") {
        std::cout << "Wrong username\n";
    } else if (username == "admin" && password != "1234") {
        std::cout << "Wrong password\n";
    } else {
        std::cout << "Wrong username and password\n";
    }

    return 0;
}
