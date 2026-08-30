#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "abcde";
    char b[] = "ace";

    int n = strlen(a);
    int m = strlen(b);

    int dp[6][4] = {0};

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = dp[i - 1][j] > dp[i][j - 1]
                               ? dp[i - 1][j]
                               : dp[i][j - 1];
            }
        }
    }

    cout << "Longest Common Subsequence: " << dp[n][m];

    return 0;
}