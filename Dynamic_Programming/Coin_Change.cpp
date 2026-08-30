#include <iostream>
using namespace std;

int main()
{
    int coins[3] = {1, 2, 5};
    int amount = 11;

    int dp[12];

    for (int i = 0; i <= amount; i++)
        dp[i] = amount + 1;

    dp[0] = 0;

    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (coins[j] <= i)
            {
                int value = dp[i - coins[j]] + 1;

                if (value < dp[i])
                    dp[i] = value;
            }
        }
    }

    if (dp[amount] > amount)
        cout << "Minimum Coins: -1";
    else
        cout << "Minimum Coins: " << dp[amount];

    return 0;
}