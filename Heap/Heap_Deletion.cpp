#include <iostream>
using namespace std;

void heapifyDown(int arr[], int n, int i) {
    int largest = i;

    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapifyDown(arr, n, largest);
    }
}

void deleteRoot(int arr[], int &n) {
    arr[0] = arr[n - 1];
    n--;

    heapifyDown(arr, n, 0);
}

int main() {
    int arr[] = {50, 30, 40, 10, 20};
    int n = 5;

    deleteRoot(arr, n);

    cout << "After Deleting Root: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
