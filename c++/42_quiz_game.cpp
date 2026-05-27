// TOPIC: Quiz Game — Practice Program
// Uses arrays, loops, conditionals, and scoring.

#include <iostream>

int main()
{
    // Questions, options, and answers
    std::string questions[] = {
        "1. What language is this program written in?\n",
        "2. What does cout stand for?\n",
        "3. Which symbol starts a single-line comment?\n",
        "4. What is the index of the first element in an array?\n"
    };

    std::string options[][4] = {
        {"A. Python", "B. Java", "C. C++", "D. JavaScript"},
        {"A. Count Out", "B. Character Output", "C. Console Output", "D. C Output"},
        {"A. #", "B. //", "C. --", "D. **"},
        {"A. 1", "B. 0", "C. -1", "D. 2"}
    };

    char answers[] = {'C', 'B', 'B', 'B'};

    int numQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;
    char guess;

    std::cout << "=== C++ Quiz Game ===\n\n";

    for (int i = 0; i < numQuestions; i++) {
        std::cout << questions[i];
        for (int j = 0; j < 4; j++) {
            std::cout << options[i][j] << "\n";
        }
        std::cout << "Your answer: ";
        std::cin >> guess;
        guess = toupper(guess);  // accept lowercase too

        if (guess == answers[i]) {
            std::cout << "Correct!\n\n";
            score++;
        } else {
            std::cout << "Wrong! Answer: " << answers[i] << "\n\n";
        }
    }

    std::cout << "=== Results ===\n";
    std::cout << "Score: " << score << "/" << numQuestions << "\n";

    double percent = (double)score / numQuestions * 100;
    std::cout << "Percentage: " << percent << "%\n";

    if (percent >= 80) std::cout << "Great job!\n";
    else if (percent >= 50) std::cout << "Not bad!\n";
    else std::cout << "Keep studying!\n";

    return 0;
}
