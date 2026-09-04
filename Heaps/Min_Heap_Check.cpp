#include <iostream>
using namespace std;

bool isMinHeap(int arr[], int n) {
    for (int i = 0; i <= (n - 2) / 2; i++) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[i] > arr[left])
            return false;

        if (right < n && arr[i] > arr[right])
            return false;
    }

    return true;
}

int main() {
    int arr[] = {10, 20, 15, 30, 40};
    int n = 5;

    if (isMinHeap(arr, n))
        cout << "Array is a Min Heap";
    else
        cout << "Array is NOT a Min Heap";

    return 0;
}
