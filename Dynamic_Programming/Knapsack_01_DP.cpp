#include <iostream>
using namespace std;

int main() {
    int weights[] = {1, 3, 4, 5};
    int values[] = {1, 4, 5, 7};

    int n = 4;
    int capacity = 7;

    int dp[10][20] = {0};

    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {

            if (weights[i - 1] <= w) {
                int include =
                    values[i - 1] +
                    dp[i - 1][w - weights[i - 1]];

                int exclude = dp[i - 1][w];

                dp[i][w] = max(include, exclude);
            }
            else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << "Maximum Knapsack Value: "
         << dp[n][capacity];

    return 0;
}
