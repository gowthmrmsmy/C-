// TOPIC: Multidimensional Arrays
// An array of arrays — like a table with rows and columns.
// 2D array: type name[rows][cols]

#include <iostream>

int main()
{
    // 2D array — like a grid/table
    int grid[3][4] = {
        {1, 2, 3, 4},    // row 0
        {5, 6, 7, 8},    // row 1
        {9, 10, 11, 12}  // row 2
    };

    // Access: grid[row][col]
    std::cout << "grid[0][0] = " << grid[0][0] << "\n";  // 1
    std::cout << "grid[1][2] = " << grid[1][2] << "\n";  // 7
    std::cout << "grid[2][3] = " << grid[2][3] << "\n";  // 12

    // Print entire grid with nested loops
    int rows = 3;
    int cols = 4;

    std::cout << "\nFull grid:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << grid[i][j] << "\t";
        }
        std::cout << "\n";
    }

    // Practical example: student grades
    std::string students[] = {"Alice", "Bob", "Charlie"};
    int grades[3][3] = {
        {90, 85, 92},   // Alice's grades
        {78, 88, 76},   // Bob's grades
        {95, 91, 89}    // Charlie's grades
    };

    std::cout << "\n=== Student Grades ===\n";
    for (int i = 0; i < 3; i++) {
        std::cout << students[i] << ": ";
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            std::cout << grades[i][j] << " ";
            sum += grades[i][j];
        }
        std::cout << " (avg: " << sum / 3.0 << ")\n";
    }

    return 0;
}
