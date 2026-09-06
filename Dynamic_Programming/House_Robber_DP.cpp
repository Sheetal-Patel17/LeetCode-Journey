#include <iostream>
using namespace std;

int main() {
    int money[] = {2, 7, 9, 3, 1};
    int n = 5;

    int dp[100];

    dp[0] = money[0];
    dp[1] = max(money[0], money[1]);

    for (int i = 2; i < n; i++) {
        int rob = money[i] + dp[i - 2];
        int skip = dp[i - 1];

        dp[i] = max(rob, skip);
    }

    cout << "Maximum Money: " << dp[n - 1];

    return 0;
}
