// TOPIC: Object Oriented Programming (OOP) Basics
// OOP organizes code into "objects" — bundles of data + behavior.
// class = blueprint. object = instance of that blueprint.

#include <iostream>

// Define a class
class Player {
public:                     // accessible from outside the class
    std::string name;
    int health;
    int score;

    void takeDamage(int damage)
    {
        health -= damage;
        if (health < 0) health = 0;
        std::cout << name << " took " << damage << " damage. Health: " << health << "\n";
    }

    void heal(int amount)
    {
        health += amount;
        if (health > 100) health = 100;
        std::cout << name << " healed. Health: " << health << "\n";
    }

    void addScore(int points)
    {
        score += points;
        std::cout << name << " earned " << points << " points! Total: " << score << "\n";
    }

    void status()
    {
        std::cout << "--- " << name << " ---\n";
        std::cout << "Health: " << health << "\n";
        std::cout << "Score: " << score << "\n\n";
    }
};

int main()
{
    // Create objects (instances of the class)
    Player player1;
    player1.name = "Hero";
    player1.health = 100;
    player1.score = 0;

    Player player2;
    player2.name = "Villain";
    player2.health = 100;
    player2.score = 0;

    // Use object methods
    player1.takeDamage(30);
    player1.heal(10);
    player1.addScore(50);
    player1.status();

    player2.takeDamage(75);
    player2.status();

    // Each object has its own copy of the data
    // player1.health and player2.health are independent

    // OOP pillars:
    // 1. Encapsulation — bundle data + methods, hide internals
    // 2. Inheritance — child class gets parent's features
    // 3. Polymorphism — same interface, different behavior
    // 4. Abstraction — hide complex details, show simple interface

    return 0;
}
