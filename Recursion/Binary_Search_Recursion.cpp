#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;

    if (target < arr[mid])
        return binarySearch(arr, left, mid - 1, target);

    return binarySearch(arr, mid + 1, right, target);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 40;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
