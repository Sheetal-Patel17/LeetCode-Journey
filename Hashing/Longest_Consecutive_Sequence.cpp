#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = 6;

    unordered_set<int> numbers;

    for (int i = 0; i < n; i++)
        numbers.insert(arr[i]);

    int longest = 0;

    for (int i = 0; i < n; i++) {
        int current = arr[i];

        if (numbers.find(current - 1) == numbers.end()) {
            int length = 1;

            while (numbers.find(current + 1) != numbers.end()) {
                current++;
                length++;
            }

            if (length > longest)
                longest = length;
        }
    }

    cout << "Longest Consecutive Sequence: " << longest << endl;

    return 0;
}
