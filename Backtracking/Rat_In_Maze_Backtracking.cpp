#include <iostream>
using namespace std;

bool solveMaze(int maze[10][10], int solution[10][10],
               int row, int col, int n) {

    if (row == n - 1 && col == n - 1) {
        solution[row][col] = 1;
        return true;
    }

    if (row >= n || col >= n ||
        maze[row][col] == 0)
        return false;

    solution[row][col] = 1;

    if (solveMaze(maze, solution, row + 1, col, n))
        return true;

    if (solveMaze(maze, solution, row, col + 1, n))
        return true;

    solution[row][col] = 0;

    return false;
}

int main() {
    int maze[10][10] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int solution[10][10] = {0};
    int n = 4;

    if (solveMaze(maze, solution, 0, 0, n)) {

        cout << "Maze Solution:" << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << solution[i][j] << " ";
            cout << endl;
        }
    }
    else {
        cout << "No Path";
    }

    return 0;
}
