// TOPIC: Enums (Enumerations)
// A named set of integer constants. Makes code more readable
// when you have a fixed set of options.

#include <iostream>

// Define an enum
enum Day {
    Sunday,     // 0
    Monday,     // 1
    Tuesday,    // 2
    Wednesday,  // 3
    Thursday,   // 4
    Friday,     // 5
    Saturday    // 6
};

enum Season { Spring, Summer, Fall, Winter };

// Custom values
enum ErrorCode {
    Success = 0,
    NotFound = 404,
    ServerError = 500
};

int main()
{
    // Use enum values instead of magic numbers
    Day today = Friday;

    if (today == Friday || today == Saturday) {
        std::cout << "Weekend vibes!\n";
    } else {
        std::cout << "Weekday\n";
    }

    // Switch with enum
    Season now = Summer;
    switch (now) {
        case Spring: std::cout << "Spring\n"; break;
        case Summer: std::cout << "Summer — it's hot!\n"; break;
        case Fall:   std::cout << "Fall\n"; break;
        case Winter: std::cout << "Winter — it's cold!\n"; break;
    }

    // Enums are integers underneath
    std::cout << "\nMonday = " << Monday << "\n";     // 1
    std::cout << "Friday = " << Friday << "\n";       // 5
    std::cout << "NotFound = " << NotFound << "\n";   // 404

    // Without enums: if (status == 404) — what does 404 mean?
    // With enums:    if (status == NotFound) — clear!

    return 0;
}
