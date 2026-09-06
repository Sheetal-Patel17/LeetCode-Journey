#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int dp[100];

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    cout << "Ways to Climb " << n << " Stairs: " << dp[n];

    return 0;
}
