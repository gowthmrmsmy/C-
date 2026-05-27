// TOPIC: Inheritance
// A child class inherits attributes and methods from a parent class.
// Avoids code duplication. "is-a" relationship.
// Dog IS AN Animal. Car IS A Vehicle.

#include <iostream>

// Parent (base) class
class Animal {
public:
    std::string name;
    int age;

    Animal(std::string n, int a) : name(n), age(a) {}

    void eat()
    {
        std::cout << name << " is eating\n";
    }

    void sleep()
    {
        std::cout << name << " is sleeping\n";
    }

    void info()
    {
        std::cout << name << " (age " << age << ")\n";
    }
};

// Child (derived) class — inherits everything from Animal
class Dog : public Animal {
public:
    std::string breed;

    // Call parent constructor + set own fields
    Dog(std::string n, int a, std::string b) : Animal(n, a), breed(b) {}

    void bark()
    {
        std::cout << name << " says: Woof!\n";
    }

    void fetch()
    {
        std::cout << name << " is fetching the ball\n";
    }
};

class Cat : public Animal {
public:
    bool isIndoor;

    Cat(std::string n, int a, bool indoor) : Animal(n, a), isIndoor(indoor) {}

    void meow()
    {
        std::cout << name << " says: Meow!\n";
    }

    void purr()
    {
        std::cout << name << " is purring\n";
    }
};

int main()
{
    // Dog inherits name, age, eat(), sleep() from Animal
    // AND has its own breed, bark(), fetch()
    Dog dog("Buddy", 3, "Golden Retriever");

    dog.info();    // inherited from Animal
    dog.eat();     // inherited from Animal
    dog.bark();    // Dog's own method
    dog.fetch();   // Dog's own method
    std::cout << "Breed: " << dog.breed << "\n";

    std::cout << "\n";

    Cat cat("Whiskers", 5, true);
    cat.info();
    cat.sleep();   // inherited
    cat.meow();    // Cat's own
    cat.purr();
    std::cout << "Indoor: " << (cat.isIndoor ? "yes" : "no") << "\n";

    // Without inheritance, you'd copy name, age, eat(), sleep()
    // into EVERY animal class — lots of duplicated code

    // Inheritance chain:
    // Animal (parent) → Dog (child)
    // Animal (parent) → Cat (child)
    // Both Dog and Cat "are" Animals

    return 0;
}
