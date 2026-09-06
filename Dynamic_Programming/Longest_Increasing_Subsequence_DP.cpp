#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 9, 2, 5, 3, 7, 101, 18};
    int n = 8;

    int dp[100];

    for (int i = 0; i < n; i++)
        dp[i] = 1;

    int answer = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {

            if (arr[j] < arr[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }

        answer = max(answer, dp[i]);
    }

    cout << "LIS Length: " << answer;

    return 0;
}
