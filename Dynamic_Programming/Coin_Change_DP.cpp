#include <iostream>
using namespace std;

int main() {
    int coins[] = {1, 2, 5};
    int n = 3;
    int amount = 11;

    const int INF = 9999;

    int dp[100];

    for (int i = 0; i <= amount; i++)
        dp[i] = INF;

    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {

            if (coins[j] <= i &&
                dp[i - coins[j]] != INF) {

                dp[i] = min(
                    dp[i],
                    dp[i - coins[j]] + 1
                );
            }
        }
    }

    if (dp[amount] == INF)
        cout << "Amount cannot be formed";
    else
        cout << "Minimum Coins: " << dp[amount];

    return 0;
}
