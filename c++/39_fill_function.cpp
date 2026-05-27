// TOPIC: fill() Function
// Fills an array (or range) with a single value.

#include <iostream>
#include <algorithm>  // for std::fill

int main()
{
    // Fill entire array with one value
    int numbers[10];
    std::fill(numbers, numbers + 10, 0);  // fill all 10 elements with 0

    std::cout << "Filled with 0: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Fill with a different value
    std::string menu[5];
    std::fill(menu, menu + 5, "empty");

    for (std::string item : menu) {
        std::cout << item << " ";
    }
    std::cout << "\n";

    // Fill part of an array
    int scores[5] = {100, 100, 100, 100, 100};
    std::fill(scores + 2, scores + 5, 0);  // fill index 2,3,4 with 0

    std::cout << "Partial fill: ";
    for (int s : scores) {
        std::cout << s << " ";  // 100 100 0 0 0
    }
    std::cout << "\n";

    return 0;
}
