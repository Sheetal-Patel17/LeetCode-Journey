#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {10, 2, -2, -20, 10};
    int n = 5;
    int target = -10;

    unordered_map<int, int> prefixSum;

    int sum = 0;
    int count = 0;

    prefixSum[0] = 1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        int needed = sum - target;

        if (prefixSum.find(needed) != prefixSum.end()) {
            count += prefixSum[needed];
        }

        prefixSum[sum]++;
    }

    cout << "Number of Subarrays: " << count << endl;

    return 0;
}
