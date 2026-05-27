// TOPIC: Sort an Array
// Bubble sort: repeatedly swap adjacent elements if they're in wrong order.
// Also: std::sort from <algorithm> for the easy built-in way.

#include <iostream>
#include <algorithm>  // for std::sort

void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
    // Manual bubble sort
    int numbers[] = {8, 3, 1, 5, 2, 9, 4, 7, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Before: ";
    printArray(numbers, size);

    bubbleSort(numbers, size);

    std::cout << "After:  ";
    printArray(numbers, size);

    // The easy way: std::sort (use this in real code)
    int nums2[] = {50, 10, 40, 20, 30};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    std::sort(nums2, nums2 + size2);

    std::cout << "\nstd::sort: ";
    printArray(nums2, size2);

    return 0;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
