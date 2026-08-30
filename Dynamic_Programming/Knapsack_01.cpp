#include <iostream>
using namespace std;

int main()
{
    int weight[4] = {1, 3, 4, 5};
    int value[4] = {1, 4, 5, 7};

    int n = 4;
    int capacity = 7;

    int dp[5][8] = {0};

    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= capacity; w++)
        {
            if (weight[i - 1] <= w)
            {
                int take = value[i - 1] +
                           dp[i - 1][w - weight[i - 1]];

                int skip = dp[i - 1][w];

                dp[i][w] = take > skip ? take : skip;
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << "Maximum Value: " << dp[n][capacity];

    return 0;
}