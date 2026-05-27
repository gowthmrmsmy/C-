// TOPIC: C++ Tutorial for Beginners — Hello World
// Your very first C++ program. Every C++ program starts from main().

#include <iostream>  // header file that lets us use std::cout and std::cin

int main()
{
    // std::cout = "character output" — prints text to the terminal
    // << is the "insertion operator" — sends data to cout
    // \n = newline (moves cursor to next line)

    std::cout << "Hello, World!\n";
    std::cout << "Welcome to C++!" << std::endl;

    // std::endl also creates a new line (and flushes the buffer)
    // \n is faster, std::endl is safer — for learning, both are fine

    return 0;  // tells the OS: "program finished successfully"
}
