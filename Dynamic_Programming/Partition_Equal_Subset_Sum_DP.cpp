#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 11, 5};
    int n = 4;

    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];

    if (total % 2 != 0) {
        cout << "Cannot Partition";
        return 0;
    }

    int target = total / 2;
    bool dp[100] = {false};

    dp[0] = true;

    for (int i = 0; i < n; i++) {
        for (int j = target; j >= arr[i]; j--) {
            if (dp[j - arr[i]])
                dp[j] = true;
        }
    }

    if (dp[target])
        cout << "Equal Partition Possible";
    else
        cout << "Equal Partition Not Possible";

    return 0;
}
