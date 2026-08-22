#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node(value);

        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;

        delete temp;
    }

    void display() {
        Node* temp = top;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack: ";
    s.display();

    s.pop();

    cout << "After pop: ";
    s.display();

    return 0;
}