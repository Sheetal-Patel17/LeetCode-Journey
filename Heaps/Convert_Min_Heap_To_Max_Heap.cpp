#include <iostream>
using namespace std;

void minHeapify(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i)
    {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;

        minHeapify(arr, n, smallest);
    }
}

void maxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        maxHeapify(arr, n, largest);
    }
}

int main()
{
    int arr[7] = {10, 20, 15, 30, 40, 25, 35};

    int n = 7;

    for (int i = n / 2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);

    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);

    cout << "Max Heap: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
