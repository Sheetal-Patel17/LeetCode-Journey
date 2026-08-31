#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 15, 30, 40, 25, 35};

    int n = 7;
    bool isMinHeap = true;

    for (int i = 0; i <= (n - 2) / 2; i++)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[i] > arr[left])
        {
            isMinHeap = false;
            break;
        }

        if (right < n && arr[i] > arr[right])
        {
            isMinHeap = false;
            break;
        }
    }

    if (isMinHeap)
        cout << "Array represents a Min Heap";
    else
        cout << "Array does not represent a Min Heap";

    return 0;
}
