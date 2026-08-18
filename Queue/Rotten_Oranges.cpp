#include <iostream>
#include <queue>
using namespace std;

int main() {
    int grid[3][3] = {
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}
    };

    queue<pair<int, int>> q;

    int fresh = 0;
    int minutes = 0;

    // Find rotten and fresh oranges
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (grid[i][j] == 2) {
                q.push({i, j});
            }

            if (grid[i][j] == 1) {
                fresh++;
            }
        }
    }

    int row[] = {-1, 1, 0, 0};
    int col[] = {0, 0, -1, 1};

    while (!q.empty() && fresh > 0) {

        int size = q.size();

        for (int i = 0; i < size; i++) {

            int r = q.front().first;
            int c = q.front().second;

            q.pop();

            for (int j = 0; j < 4; j++) {

                int newRow = r + row[j];
                int newCol = c + col[j];

                if (newRow >= 0 && newRow < 3 &&
                    newCol >= 0 && newCol < 3 &&
                    grid[newRow][newCol] == 1) {

                    grid[newRow][newCol] = 2;

                    fresh--;

                    q.push({newRow, newCol});
                }
            }
        }

        minutes++;
    }

    if (fresh == 0) {
        cout << "Minutes required: " << minutes << endl;
    }
    else {
        cout << "Not all oranges can rot" << endl;
    }

    return 0;
}