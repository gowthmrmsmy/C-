// TOPIC: Pass Array to a Function
// Arrays are passed by REFERENCE (not copied), so the function
// can read and modify the original array.

#include <iostream>

// When passing arrays, you also need to pass the size
// because arrays don't carry their size info into functions
double getTotal(double prices[], int size);
void doubleValues(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
    double prices[] = {9.99, 24.99, 14.99, 5.99};
    int size = sizeof(prices) / sizeof(prices[0]);

    double total = getTotal(prices, size);
    std::cout << "Total: $" << total << "\n";

    // Functions can modify the original array
    int numbers[] = {1, 2, 3, 4, 5};
    int numSize = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Before: ";
    printArray(numbers, numSize);

    doubleValues(numbers, numSize);

    std::cout << "After:  ";
    printArray(numbers, numSize);  // 2 4 6 8 10

    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}

void doubleValues(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
