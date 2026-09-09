#include <iostream>
using namespace std;

bool isSafe(int board[10][10], int row, int col, int n) {

    for (int i = 0; i < row; i++)
        if (board[i][col])
            return false;

    for (int i = row - 1, j = col - 1;
         i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    for (int i = row - 1, j = col + 1;
         i >= 0 && j < n; i--, j++)
        if (board[i][j])
            return false;

    return true;
}

bool solve(int board[10][10], int row, int n) {

    if (row == n)
        return true;

    for (int col = 0; col < n; col++) {

        if (isSafe(board, row, col, n)) {

            board[row][col] = 1;

            if (solve(board, row + 1, n))
                return true;

            board[row][col] = 0;
        }
    }

    return false;
}

int main() {
    int n = 4;
    int board[10][10] = {0};

    if (solve(board, 0, n)) {
        cout << "N-Queens Solution:" << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
    }
    else {
        cout << "No Solution";
    }

    return 0;
}
