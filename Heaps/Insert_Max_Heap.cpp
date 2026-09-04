#include <iostream>
using namespace std;

void insertMaxHeap(int arr[], int &n, int value) {
    int i = n;
    arr[n] = value;
    n++;

    while (i > 0) {
        int parent = (i - 1) / 2;

        if (arr[parent] >= arr[i])
            break;

        swap(arr[parent], arr[i]);
        i = parent;
    }
}

int main() {
    int arr[100] = {50, 30, 40, 10, 20};
    int n = 5;

    insertMaxHeap(arr, n, 60);

    cout << "After Insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
