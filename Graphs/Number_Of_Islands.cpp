#include <iostream>
using namespace std;

char grid[4][5] =
{
    {'1', '1', '0', '0', '0'},
    {'1', '1', '0', '1', '0'},
    {'0', '0', '1', '0', '0'},
    {'0', '0', '0', '1', '1'}
};

void DFS(int row, int col)
{
    if (row < 0 || row >= 4 || col < 0 || col >= 5)
        return;

    if (grid[row][col] == '0')
        return;

    grid[row][col] = '0';

    DFS(row + 1, col);
    DFS(row - 1, col);
    DFS(row, col + 1);
    DFS(row, col - 1);
}

int main()
{
    int islands = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (grid[i][j] == '1')
            {
                islands++;
                DFS(i, j);
            }
        }
    }

    cout << "Number of Islands: " << islands;

    return 0;
}