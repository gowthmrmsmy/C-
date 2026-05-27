// TOPIC: Rock Paper Scissors Game
// Player vs computer using random numbers, loops, and conditionals.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));

    char playerChoice;
    int computerNum;
    std::string computerChoice;

    std::cout << "=== Rock Paper Scissors ===\n";
    std::cout << "Enter (r)ock, (p)aper, or (s)cissors: ";
    std::cin >> playerChoice;

    // Computer picks randomly
    computerNum = rand() % 3 + 1;
    switch (computerNum) {
        case 1: computerChoice = "rock"; break;
        case 2: computerChoice = "paper"; break;
        case 3: computerChoice = "scissors"; break;
    }
    std::cout << "Computer chose: " << computerChoice << "\n";

    // Determine winner
    switch (playerChoice) {
        case 'r':
            if (computerChoice == "rock") std::cout << "Tie!\n";
            else if (computerChoice == "scissors") std::cout << "You win!\n";
            else std::cout << "You lose!\n";
            break;
        case 'p':
            if (computerChoice == "paper") std::cout << "Tie!\n";
            else if (computerChoice == "rock") std::cout << "You win!\n";
            else std::cout << "You lose!\n";
            break;
        case 's':
            if (computerChoice == "scissors") std::cout << "Tie!\n";
            else if (computerChoice == "paper") std::cout << "You win!\n";
            else std::cout << "You lose!\n";
            break;
        default:
            std::cout << "Invalid choice!\n";
    }

    return 0;
}
