#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1};

    int n = 4;

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // Peak is on the right
            left = mid + 1;
        }
        else {
            // Peak is on the left or at mid
            right = mid;
        }
    }

    cout << "Peak element: " << arr[left] << endl;
    cout << "Peak index: " << left << endl;

    return 0;
}