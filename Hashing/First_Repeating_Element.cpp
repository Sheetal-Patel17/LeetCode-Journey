#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5};
    int n = 6;

    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            cout << "First Repeating Element: " << arr[i] << endl;
            return 0;
        }

        seen.insert(arr[i]);
    }

    cout << "No repeating element" << endl;

    return 0;
}
