// TOPIC: Useful String Methods in C++
// std::string has many built-in member functions.

#include <iostream>

int main()
{
    std::string name = "Gowtham Designer";

    // length / size — number of characters
    std::cout << "Length: " << name.length() << "\n";   // 16
    std::cout << "Size: " << name.size() << "\n";       // same as length

    // empty — check if string is empty
    std::cout << "Is empty: " << name.empty() << "\n";  // 0 (false)

    // clear — remove all characters
    // name.clear();

    // append — add to end
    name.append(" Pro");
    std::cout << "After append: " << name << "\n";

    // at — get character at index (0-based)
    std::cout << "Char at 0: " << name.at(0) << "\n";   // G

    // insert — insert text at position
    name.insert(0, "Mr. ");
    std::cout << "After insert: " << name << "\n";

    // find — find position of substring (returns index or string::npos if not found)
    int pos = name.find("Designer");
    if (pos != std::string::npos) {
        std::cout << "Found 'Designer' at index: " << pos << "\n";
    }

    // substr — extract a portion
    std::string sub = name.substr(4, 7);  // start at 4, take 7 chars
    std::cout << "Substring: " << sub << "\n";

    // erase — remove characters
    name.erase(0, 4);  // remove first 4 characters
    std::cout << "After erase: " << name << "\n";

    // replace
    std::string greeting = "Hello World";
    greeting.replace(6, 5, "C++");  // at pos 6, replace 5 chars with "C++"
    std::cout << "After replace: " << greeting << "\n";

    return 0;
}
