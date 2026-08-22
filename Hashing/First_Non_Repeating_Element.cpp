#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = 7;

    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (frequency[arr[i]] == 1) {
            cout << "First Non-Repeating Element: " << arr[i] << endl;
            return 0;
        }
    }

    cout << "No non-repeating element" << endl;

    return 0;
}
