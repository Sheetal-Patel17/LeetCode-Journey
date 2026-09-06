#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[] = "abcde";
    char b[] = "ace";

    int m = strlen(a);
    int n = strlen(b);

    int dp[20][20] = {0};

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {

            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(
                    dp[i - 1][j],
                    dp[i][j - 1]
                );
        }
    }

    cout << "LCS Length: " << dp[m][n];

    return 0;
}
