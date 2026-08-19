#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};

    int n = 7;

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[right]) {
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }

    cout << "Minimum element: " << arr[left] << endl;
    cout << "Minimum index: " << left << endl;

    return 0;
}