#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};

    int n = 7;
    int target = 9;

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Element not found" << endl;

    return 0;
}