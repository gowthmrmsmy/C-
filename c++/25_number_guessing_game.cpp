// TOPIC: Number Guessing Game — Practice Program
// Computer picks a random number, player tries to guess it.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));

    int answer = rand() % 100 + 1;  // 1 to 100
    int guess;
    int attempts = 0;

    std::cout << "=== Number Guessing Game ===\n";
    std::cout << "I'm thinking of a number between 1 and 100\n";

    do {
        std::cout << "Your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > answer) {
            std::cout << "Too high!\n";
        } else if (guess < answer) {
            std::cout << "Too low!\n";
        } else {
            std::cout << "Correct! You got it in " << attempts << " attempts!\n";
        }
    } while (guess != answer);

    return 0;
}
