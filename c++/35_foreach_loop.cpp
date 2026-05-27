// TOPIC: Foreach Loop (Range-based For Loop)
// A simpler way to loop through arrays/collections.
// Syntax: for (type element : array) { ... }

#include <iostream>

int main()
{
    // Regular for loop — you manage the index
    std::string animals[] = {"cat", "dog", "bird", "fish"};
    int size = sizeof(animals) / sizeof(animals[0]);

    for (int i = 0; i < size; i++) {
        std::cout << animals[i] << "\n";
    }

    std::cout << "---\n";

    // Foreach loop — cleaner, no index needed
    for (std::string animal : animals) {
        std::cout << animal << "\n";
    }

    std::cout << "---\n";

    // With numbers — sum
    int scores[] = {90, 85, 78, 92, 88};
    int total = 0;

    for (int score : scores) {
        total += score;
    }
    std::cout << "Total: " << total << "\n";
    std::cout << "Average: " << total / 5.0 << "\n";

    // Using auto — compiler figures out the type
    for (auto score : scores) {
        std::cout << score << " ";
    }
    std::cout << "\n";

    // foreach is read-only by default
    // to modify elements, use a reference (&)
    for (int& score : scores) {
        score += 5;  // adds 5 to each score
    }
    for (int score : scores) {
        std::cout << score << " ";  // 95 90 83 97 93
    }
    std::cout << "\n";

    return 0;
}
