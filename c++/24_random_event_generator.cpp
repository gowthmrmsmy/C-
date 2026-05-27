// TOPIC: Random Event Generator — Practice Program
// Use random numbers to simulate events with different probabilities.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));

    // Simulate a random event (like loot drops in a game)
    int event = rand() % 5 + 1;  // 1 to 5

    std::cout << "=== Random Event ===\n";
    switch (event) {
        case 1:
            std::cout << "You found a sword!\n";
            break;
        case 2:
            std::cout << "You found a shield!\n";
            break;
        case 3:
            std::cout << "You found a potion!\n";
            break;
        case 4:
            std::cout << "You encountered a monster!\n";
            break;
        case 5:
            std::cout << "Nothing happened...\n";
            break;
    }

    // Probability-based events
    int chance = rand() % 100 + 1;  // 1 to 100

    std::cout << "\n=== Treasure Chest ===\n";
    if (chance <= 5) {
        std::cout << "LEGENDARY item! (5% chance)\n";
    } else if (chance <= 20) {
        std::cout << "Rare item! (15% chance)\n";
    } else if (chance <= 50) {
        std::cout << "Common item (30% chance)\n";
    } else {
        std::cout << "Empty chest (50% chance)\n";
    }

    return 0;
}
