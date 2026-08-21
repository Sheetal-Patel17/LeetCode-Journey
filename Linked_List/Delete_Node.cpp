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
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    int target = 20;

    Node* temp = head;

    if (head != NULL && head->data == target) {
        head = head->next;
    }
    else {
        while (temp->next != NULL &&
               temp->next->data != target) {
            temp = temp->next;
        }

        if (temp->next != NULL) {
            temp->next = temp->next->next;
        }
    }

    cout << "After deletion: ";
    display(head);

    cout << endl;

    return 0;
}