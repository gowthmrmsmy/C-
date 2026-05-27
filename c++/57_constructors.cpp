// TOPIC: Constructors
// A constructor is a special method that runs automatically
// when you create an object. Used to set initial values.

#include <iostream>

class Car {
public:
    std::string brand;
    std::string model;
    int year;

    // Constructor — same name as the class, no return type
    Car(std::string b, std::string m, int y)
    {
        brand = b;
        model = m;
        year = y;
        std::cout << "Car created: " << brand << " " << model << "\n";
    }

    void display()
    {
        std::cout << year << " " << brand << " " << model << "\n";
    }
};

class Student {
public:
    std::string name;
    int age;
    double gpa;

    // Constructor with initializer list (preferred style)
    Student(std::string n, int a, double g) : name(n), age(a), gpa(g) {}

    void print()
    {
        std::cout << name << ", age " << age << ", GPA: " << gpa << "\n";
    }
};

int main()
{
    // Constructor is called automatically when object is created
    Car car1("Tesla", "Model 3", 2024);
    Car car2("BMW", "M3", 2023);

    car1.display();
    car2.display();

    Student s1("Gowtham", 25, 3.8);
    Student s2("Alice", 22, 3.9);

    s1.print();
    s2.print();

    // Without constructor you'd have to set each field manually:
    // car1.brand = "Tesla"; car1.model = "Model 3"; car1.year = 2024;
    // Constructor does it all in one line!

    return 0;
}
