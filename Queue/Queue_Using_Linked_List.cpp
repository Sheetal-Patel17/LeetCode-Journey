#include <iostream>
using namespace std;

class Queue {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node();

        newNode->data = value;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } 
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;

        cout << "Removed: " << front->data << endl;

        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }

        return front->data;
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