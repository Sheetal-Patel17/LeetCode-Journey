#include <iostream>
using namespace std;

int main()
{
    int money[5] = {2, 7, 9, 3, 1};

    int dp[5];

    dp[0] = money[0];
    dp[1] = money[1] > money[0] ? money[1] : money[0];

    for (int i = 2; i < 5; i++)
    {
        int rob = money[i] + dp[i - 2];
        int skip = dp[i - 1];

        dp[i] = rob > skip ? rob : skip;
    }

    cout << "Maximum Money: " << dp[4];

    return 0;
}