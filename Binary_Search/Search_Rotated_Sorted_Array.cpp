#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};

    int n = 7;
    int target = 0;

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }

        // Left half is sorted
        if (arr[left] <= arr[mid]) {
            if (arr[left] <= target && target < arr[mid]) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if (arr[mid] < target && target <= arr[right]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
    }

    cout << "Element not found" << endl;

    return 0;
}