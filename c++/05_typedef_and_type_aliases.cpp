// TOPIC: Typedef and Type Aliases
// typedef gives an existing type a new name — makes code more readable.
// "using" is the modern C++ way to do the same thing.

#include <iostream>
#include <vector>

// Old way: typedef
typedef std::string text_t;
typedef int number_t;

// Modern way: using (preferred in C++11 and later)
using text = std::string;
using number = int;

int main()
{
    // Without typedef — verbose
    std::string name1 = "Gowtham";

    // With typedef — same thing, shorter alias
    text_t name2 = "Gowtham";
    number_t age1 = 25;

    // With "using" — modern style
    text name3 = "Gowtham";
    number age2 = 25;

    std::cout << name1 << ", " << age1 << "\n";
    std::cout << name2 << ", " << age2 << "\n";
    std::cout << name3 << "\n";

    // Useful for long types
    typedef std::vector<std::pair<std::string, int>> pairlist_t;
    // Now instead of writing that long type every time:
    pairlist_t students;
    students.push_back({"Alice", 90});
    students.push_back({"Bob", 85});

    for (auto& s : students) {
        std::cout << s.first << ": " << s.second << "\n";
    }

    return 0;
}
