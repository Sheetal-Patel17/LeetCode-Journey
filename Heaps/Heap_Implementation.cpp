#include <iostream>
using namespace std;

class MaxHeap
{
    int heap[100];
    int size;

public:
    MaxHeap()
    {
        size = 0;
    }

    void insert(int value)
    {
        size++;
        int i = size;

        heap[i] = value;

        while (i > 1 && heap[i] > heap[i / 2])
        {
            int temp = heap[i];
            heap[i] = heap[i / 2];
            heap[i / 2] = temp;

            i = i / 2;
        }
    }

    void display()
    {
        for (int i = 1; i <= size; i++)
            cout << heap[i] << " ";
    }
};

int main()
{
    MaxHeap heap;

    heap.insert(50);
    heap.insert(30);
    heap.insert(40);
    heap.insert(10);
    heap.insert(20);

    cout << "Heap: ";
    heap.display();

    return 0;
}
