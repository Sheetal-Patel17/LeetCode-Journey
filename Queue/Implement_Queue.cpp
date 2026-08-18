#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == 99;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear++;
        arr[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Removed: " << arr[front] << endl;
        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[front];
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.getFront() << endl;

    q.dequeue();

    cout << "Front: " << q.getFront() << endl;

    return 0;
}