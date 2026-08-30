#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    int dp[11];

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << "Fibonacci Number: " << dp[n];

    return 0;
}