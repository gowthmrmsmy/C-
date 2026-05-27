// TOPIC: Structs
// A struct groups related variables together into one custom type.
// Like a blueprint for an object (simpler than a class).

#include <iostream>

// Define a struct
struct Car {
    std::string brand;
    std::string model;
    int year;
    double price;
};

struct Student {
    std::string name;
    int age;
    double gpa;
};

void printCar(Car car);

int main()
{
    // Create struct instances
    Car car1;
    car1.brand = "Tesla";
    car1.model = "Model 3";
    car1.year = 2024;
    car1.price = 39990.0;

    // Initialize with values directly
    Car car2 = {"BMW", "M3", 2023, 72000.0};

    printCar(car1);
    printCar(car2);

    // Modify struct members
    car1.price = 35990.0;
    std::cout << "Updated price: $" << car1.price << "\n";

    // Array of structs
    Student students[] = {
        {"Alice", 20, 3.8},
        {"Bob", 22, 3.5},
        {"Charlie", 21, 3.9}
    };

    std::cout << "\n=== Students ===\n";
    for (Student s : students) {
        std::cout << s.name << " (age " << s.age << ", GPA: " << s.gpa << ")\n";
    }

    return 0;
}

void printCar(Car car)
{
    std::cout << car.year << " " << car.brand << " " << car.model
              << " - $" << car.price << "\n";
}
