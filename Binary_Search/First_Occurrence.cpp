#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};

    int n = 7;
    int target = 2;

    int left = 0;
    int right = n - 1;
    int answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            answer = mid;

            // Search on the left side
            right = mid - 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (answer != -1) {
        cout << "First occurrence: " << answer << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}