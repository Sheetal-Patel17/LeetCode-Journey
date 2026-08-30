#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {10, 9, 2, 5, 3, 7, 101, 18};

    int dp[8];

    for (int i = 0; i < 8; i++)
        dp[i] = 1;

    int answer = 1;

    for (int i = 1; i < 8; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                int value = dp[j] + 1;

                if (value > dp[i])
                    dp[i] = value;
            }
        }

        if (dp[i] > answer)
            answer = dp[i];
    }

    cout << "Longest Increasing Subsequence: " << answer;

    return 0;
}