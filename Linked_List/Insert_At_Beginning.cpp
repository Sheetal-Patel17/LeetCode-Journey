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

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(20);
    head->next = new Node(30);

    Node* newNode = new Node(10);

    newNode->next = head;
    head = newNode;

    cout << "After insertion: ";
    display(head);

    cout << endl;

    return 0;
}