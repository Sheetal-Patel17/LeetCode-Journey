#include <iostream>
using namespace std;

void dfs(char grid[4][5], int row, int col) {
    if (row < 0 || row >= 4 || col < 0 || col >= 5)
        return;

    if (grid[row][col] != '1')
        return;

    grid[row][col] = '0';

    dfs(grid, row + 1, col);
    dfs(grid, row - 1, col);
    dfs(grid, row, col + 1);
    dfs(grid, row, col - 1);
}

int main() {
    char grid[4][5] = {
        {'1', '1', '0', '0', '0'},
        {'1', '0', '0', '1', '0'},
        {'0', '0', '1', '1', '0'},
        {'0', '0', '0', '0', '1'}
    };

    int islands = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (grid[i][j] == '1') {
                islands++;
                dfs(grid, i, j);
            }
        }
    }

    cout << "Number of Islands: " << islands;

    return 0;
}
