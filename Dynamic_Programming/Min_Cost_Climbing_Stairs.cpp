#include <iostream>
using namespace std;

int main()
{
    int cost[5] = {10, 15, 20, 5, 10};

    int dp[5];

    dp[0] = cost[0];
    dp[1] = cost[1];

    for (int i = 2; i < 5; i++)
    {
        int oneStep = dp[i - 1];
        int twoStep = dp[i - 2];

        dp[i] = cost[i] + (oneStep < twoStep ? oneStep : twoStep);
    }

    int answer = dp[3] < dp[4] ? dp[3] : dp[4];

    cout << "Minimum Cost: " << answer;

    return 0;
}