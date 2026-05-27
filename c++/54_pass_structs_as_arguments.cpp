// TOPIC: Pass Structs as Arguments
// Structs can be passed by value (copy) or by reference (original).

#include <iostream>

struct Car {
    std::string brand;
    std::string model;
    int year;
    double price;
};

// Pass by value — gets a COPY (can't modify original)
void printCar(Car car)
{
    std::cout << car.year << " " << car.brand << " " << car.model
              << " ($" << car.price << ")\n";
}

// Pass by reference — can MODIFY original
void applyDiscount(Car &car, double percent)
{
    car.price -= car.price * (percent / 100.0);
}

// Pass by const reference — read-only, no copy (best for large structs)
void displayCar(const Car &car)
{
    std::cout << car.brand << " " << car.model << "\n";
}

// Return a struct from a function
Car createCar(std::string brand, std::string model, int year, double price)
{
    Car newCar = {brand, model, year, price};
    return newCar;
}

int main()
{
    Car car1 = {"Tesla", "Model 3", 2024, 39990.0};

    printCar(car1);

    // Apply 10% discount — modifies the original
    applyDiscount(car1, 10);
    std::cout << "After discount: $" << car1.price << "\n";

    displayCar(car1);

    // Create a car using a function
    Car car2 = createCar("Honda", "Civic", 2023, 25000.0);
    printCar(car2);

    return 0;
}
