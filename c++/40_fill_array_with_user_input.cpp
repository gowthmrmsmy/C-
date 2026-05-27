// TOPIC: Fill an Array with User Input
// Let the user type values to populate an array.

#include <iostream>

int main()
{
    const int SIZE = 5;
    std::string foods[SIZE];

    // Get input from user
    std::cout << "Enter " << SIZE << " foods:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Food #" << (i + 1) << ": ";
        std::getline(std::cin, foods[i]);
    }

    // Display what they entered
    std::cout << "\nYour foods:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cout << (i + 1) << ". " << foods[i] << "\n";
    }

    // Numbers version
    const int NUM_SIZE = 3;
    int numbers[NUM_SIZE];
    int sum = 0;

    std::cout << "\nEnter " << NUM_SIZE << " numbers:\n";
    for (int i = 0; i < NUM_SIZE; i++) {
        std::cout << "Number #" << (i + 1) << ": ";
        std::cin >> numbers[i];
        sum += numbers[i];
    }

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << (double)sum / NUM_SIZE << "\n";

    return 0;
}
