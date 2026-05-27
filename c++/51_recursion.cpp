// TOPIC: Recursion
// A function that calls ITSELF. It keeps calling until it hits a
// "base case" (stopping condition), then unwinds back.

#include <iostream>

int factorial(int n);
void countDown(int n);
int fibonacci(int n);

int main()
{
    // Factorial: 5! = 5 * 4 * 3 * 2 * 1 = 120
    std::cout << "5! = " << factorial(5) << "\n";    // 120
    std::cout << "7! = " << factorial(7) << "\n";    // 5040

    std::cout << "\nCountdown:\n";
    countDown(5);

    // Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21...
    std::cout << "\nFirst 10 Fibonacci numbers:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << "\n";

    return 0;
}

int factorial(int n)
{
    if (n <= 1) return 1;  // base case — stops the recursion
    return n * factorial(n - 1);  // recursive case — calls itself
    // factorial(5) → 5 * factorial(4) → 5 * 4 * factorial(3) → ... → 5*4*3*2*1
}

void countDown(int n)
{
    if (n <= 0) {
        std::cout << "Go!\n";
        return;  // base case
    }
    std::cout << n << "\n";
    countDown(n - 1);  // recursive call
}

int fibonacci(int n)
{
    if (n <= 0) return 0;  // base case
    if (n == 1) return 1;  // base case
    return fibonacci(n - 1) + fibonacci(n - 2);  // sum of previous two
}

// Every recursive function needs:
// 1. Base case — when to stop
// 2. Recursive case — calling itself with a smaller problem
// Without a base case → infinite recursion → stack overflow crash
