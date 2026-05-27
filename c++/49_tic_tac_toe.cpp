// TOPIC: Tic Tac Toe Game
// 2-player game using arrays, loops, functions.

#include <iostream>

void drawBoard(char board[3][3]);
bool placeMarker(char board[3][3], int row, int col, char marker);
char checkWinner(char board[3][3]);

int main()
{
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char currentMarker = 'X';
    int row, col;
    char winner = ' ';

    std::cout << "=== Tic Tac Toe ===\n";
    std::cout << "Players take turns. Enter row (0-2) and col (0-2).\n\n";

    for (int turn = 0; turn < 9; turn++) {
        drawBoard(board);
        std::cout << "Player " << currentMarker << "'s turn.\n";
        std::cout << "Row: ";
        std::cin >> row;
        std::cout << "Col: ";
        std::cin >> col;

        if (!placeMarker(board, row, col, currentMarker)) {
            std::cout << "Invalid move! Try again.\n";
            turn--;
            continue;
        }

        winner = checkWinner(board);
        if (winner != ' ') {
            drawBoard(board);
            std::cout << "Player " << winner << " wins!\n";
            return 0;
        }

        currentMarker = (currentMarker == 'X') ? 'O' : 'X';
    }

    drawBoard(board);
    std::cout << "It's a tie!\n";

    return 0;
}

void drawBoard(char board[3][3])
{
    std::cout << "  0   1   2\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "  " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << "\n";
        if (i < 2) std::cout << " ---+---+---\n";
    }
    std::cout << "\n";
}

bool placeMarker(char board[3][3], int row, int col, char marker)
{
    if (row < 0 || row > 2 || col < 0 || col > 2) return false;
    if (board[row][col] != ' ') return false;
    board[row][col] = marker;
    return true;
}

char checkWinner(char board[3][3])
{
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];

    return ' ';
}
