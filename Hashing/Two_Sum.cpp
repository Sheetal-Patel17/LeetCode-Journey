#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    unordered_map<int, int> seen;

    for (int i = 0; i < n; i++) {
        int needed = target - arr[i];

        if (seen.find(needed) != seen.end()) {
            cout << "Indices: " << seen[needed] << " and " << i << endl;
            return 0;
        }

        seen[arr[i]] = i;
    }

    cout << "No pair found" << endl;

    return 0;
}
