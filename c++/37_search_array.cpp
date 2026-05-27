// TOPIC: Search an Array for an Element
// Linear search: check each element one by one until found.

#include <iostream>

int searchArray(int arr[], int size, int target);

int main()
{
    int numbers[] = {4, 18, 27, 3, 42, 15, 9, 33};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target;
    std::cout << "Enter a number to search for: ";
    std::cin >> target;

    int index = searchArray(numbers, size, target);

    if (index != -1) {
        std::cout << target << " found at index " << index << "\n";
    } else {
        std::cout << target << " not found in the array\n";
    }

    // Search for a string
    std::string foods[] = {"pizza", "burger", "sushi", "taco"};
    std::string search = "sushi";
    int foodSize = sizeof(foods) / sizeof(foods[0]);

    for (int i = 0; i < foodSize; i++) {
        if (foods[i] == search) {
            std::cout << search << " found at index " << i << "\n";
            break;
        }
    }

    return 0;
}

int searchArray(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // return the index where it was found
        }
    }
    return -1;  // -1 means "not found"
}
