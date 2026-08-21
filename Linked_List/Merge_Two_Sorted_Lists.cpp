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

Node* mergeLists(Node* first, Node* second) {
    Node dummy(0);
    Node* current = &dummy;

    while (first != NULL && second != NULL) {
        if (first->data < second->data) {
            current->next = first;
            first = first->next;
        }
        else {
            current->next = second;
            second = second->next;
        }

        current = current->next;
    }

    if (first != NULL) {
        current->next = first;
    }
    else {
        current->next = second;
    }

    return dummy.next;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* first = new Node(1);
    first->next = new Node(3);
    first->next->next = new Node(5);

    Node* second = new Node(2);
    second->next = new Node(4);
    second->next->next = new Node(6);

    Node* result = mergeLists(first, second);

    cout << "Merged List: ";
    display(result);

    cout << endl;

    return 0;
}