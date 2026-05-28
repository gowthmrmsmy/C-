# C++ Practice

Learning C++ as a product designer who codes. This repo tracks my progress through C++ fundamentals, LeetCode problem solving, and concepts I pick up along the way.

## Folder Structure

```
C++ Practice/
├── c++/          → 60 topic files covering C++ basics to OOP
├── leetcode/     → Daily LeetCode problems with local test cases
├── FAQ/          → Questions I asked while learning, with answers
└── build/        → Compiled binaries (gitignored)
```

## C++ Topics (60 files)

Covers the full beginner path:

| # | Topic | # | Topic |
|---|-------|---|-------|
| 01 | Hello World | 31 | Rock Paper Scissors |
| 02 | Variables & Data Types | 32 | Arrays |
| 03 | Const | 33 | sizeof Operator |
| 04 | Namespaces | 34 | Iterate Over Array |
| 05 | Typedef & Type Aliases | 35 | Foreach Loop |
| 06 | Arithmetic Operators | 36 | Pass Array to Function |
| 07 | Type Conversion | 37 | Search Array |
| 08 | User Input | 38 | Sort Array |
| 09 | Math Functions | 39 | fill() Function |
| 10 | Hypotenuse Calculator | 40 | Fill Array with Input |
| 11 | If Statements | 41 | Multidimensional Arrays |
| 12 | Switches | 42 | Quiz Game |
| 13 | Console Calculator | 43 | Memory Addresses |
| 14 | Ternary Operator | 44 | Pass by Value vs Reference |
| 15 | Logical Operators | 45 | Const Parameters |
| 16 | Temperature Conversion | 46 | Credit Card Validator |
| 17 | String Methods | 47 | Pointers |
| 18 | While Loops | 48 | Null Pointers |
| 19 | Do While Loops | 49 | Tic Tac Toe |
| 20 | For Loops | 50 | Dynamic Memory |
| 21 | Break & Continue | 51 | Recursion |
| 22 | Nested Loops | 52 | Function Templates |
| 23 | Random Number Generator | 53 | Structs |
| 24 | Random Event Generator | 54 | Pass Structs as Args |
| 25 | Number Guessing Game | 55 | Enums |
| 26 | User Defined Functions | 56 | OOP Basics |
| 27 | Return Keyword | 57 | Constructors |
| 28 | Overloaded Functions | 58 | Constructor Overloading |
| 29 | Variable Scope | 59 | Getters & Setters |
| 30 | Banking Program | 60 | Inheritance |

Each file is self-contained with includes, `main()`, working examples, and comments.

## LeetCode

Solving one problem a day, locally with `main()` and test cases.

| # | Problem | Status |
|---|---------|--------|
| 001 | Two Sum | Done |
| 002 | Palindrome Number | Done |
| 003 | Roman to Integer | - |
| 010 | Longest Common Prefix | Done |
| 004 | Maximum Subarray | - |
| 005 | Remove Element | - |
| 006 | Contains Duplicate | - |
| 007 | Add Two Numbers | - |
| 008 | Majority Element | - |
| 009 | Remove Duplicates from Sorted Array | - |

## FAQ

Questions I had while learning, documented with answers:

- What is getline?
- What are free functions?
- JS vs C++ functions
- How do while loops work?
- What does srand do?
- Why return 0?
- What is function overloading?
- What is a vector?

## How to compile and run

```bash
g++ "c++/01_hello_world.cpp" -o hello
./hello
```

## Tech

- **Language:** C++17
- **Compiler:** g++ (MinGW/WinLibs)
- **Editor:** Cursor
