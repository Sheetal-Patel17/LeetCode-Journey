#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
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

        heapify(arr, n, largest);
    }
}

int main() {
    int arr[] = {10, 5, 20, 2, 15};
    int n = 5;

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    cout << "Built Max Heap: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
