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

void removeDuplicates(Node* head) {
    Node* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            current->next = current->next->next;
        }
        else {
            current = current->next;
        }
    }
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);

    removeDuplicates(head);

    cout << "After removing duplicates: ";
    display(head);

    cout << endl;

    return 0;
}