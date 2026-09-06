#include <iostream>
using namespace std;

int main() {
    int grid[3][3] = {
        {1, 3, 1},
        {1, 5, 1},
        {4, 2, 1}
    };

    int dp[3][3];

    dp[0][0] = grid[0][0];

    for (int i = 1; i < 3; i++)
        dp[i][0] = dp[i - 1][0] + grid[i][0];

    for (int j = 1; j < 3; j++)
        dp[0][j] = dp[0][j - 1] + grid[0][j];

    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 3; j++) {

            dp[i][j] =
                min(dp[i - 1][j], dp[i][j - 1])
                + grid[i][j];
        }
    }

    cout << "Minimum Path Sum: " << dp[2][2];

    return 0;
}
