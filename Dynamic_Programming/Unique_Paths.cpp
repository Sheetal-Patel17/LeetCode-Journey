#include <iostream>
using namespace std;

int main()
{
    int rows = 3;
    int cols = 7;

    int dp[3][7];

    for (int i = 0; i < rows; i++)
        dp[i][0] = 1;

    for (int j = 0; j < cols; j++)
        dp[0][j] = 1;

    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    cout << "Unique Paths: " << dp[rows - 1][cols - 1];

    return 0;
}