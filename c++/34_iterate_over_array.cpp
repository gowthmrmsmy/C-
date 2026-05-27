// TOPIC: Iterate Over an Array
// Use a loop to go through each element in an array.

#include <iostream>

int main()
{
    std::string foods[] = {"pizza", "burger", "sushi", "taco", "pasta"};
    int size = sizeof(foods) / sizeof(foods[0]);

    // Using a for loop with index
    std::cout << "=== For loop ===\n";
    for (int i = 0; i < size; i++) {
        std::cout << foods[i] << "\n";
    }

    // Calculate sum of numbers
    int numbers[] = {10, 20, 30, 40, 50};
    int numSize = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    for (int i = 0; i < numSize; i++) {
        sum += numbers[i];
    }
    std::cout << "\nSum: " << sum << "\n";  // 150

    // Find the largest element
    int max = numbers[0];
    for (int i = 1; i < numSize; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    std::cout << "Max: " << max << "\n";

    return 0;
}
