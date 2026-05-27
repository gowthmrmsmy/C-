// TOPIC: Random Number Generator
// rand() generates pseudo-random numbers.
// srand() seeds the generator so numbers differ each run.

#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

int main()
{
    // Seed with current time so each run is different
    srand(time(NULL));

    // Random number (0 to RAND_MAX, usually 32767)
    int num = rand();
    std::cout << "Random number: " << num << "\n";

    // Random number in a range: 1 to 6 (dice roll)
    int dice = (rand() % 6) + 1;
    std::cout << "Dice roll: " << dice << "\n";
    // rand() % 6 gives 0-5, then +1 shifts to 1-6

    // Random number 1 to 100
    int percent = (rand() % 100) + 1;
    std::cout << "Random 1-100: " << percent << "\n";

    // Generate 10 random numbers
    std::cout << "\n10 random dice rolls: ";
    for (int i = 0; i < 10; i++) {
        std::cout << (rand() % 6) + 1 << " ";
    }
    std::cout << "\n";

    // Without srand: same numbers every run
    // With srand(42): same numbers every run (fixed seed)
    // With srand(time(NULL)): different numbers each run

    return 0;
}
