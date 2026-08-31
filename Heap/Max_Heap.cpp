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

int main() {
    int arr[] = {10, 20, 15, 30, 40};
    int n = 5;

    for (int i = n / 2 - 1; i >= 0; i--)
        heapifyDown(arr, n, i);

    cout << "Max Heap: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
