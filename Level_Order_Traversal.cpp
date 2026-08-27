#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void levelOrder(Node* root) {
    if (root == NULL) {
        return;
    }

    Node* queue[100];

    int front = 0;
    int rear = 0;

    queue[rear] = root;
    rear++;

    while (front < rear) {
        Node* current = queue[front];
        front++;

        cout << current->data << " ";

        if (current->left != NULL) {
            queue[rear] = current->left;
            rear++;
        }

        if (current->right != NULL) {
            queue[rear] = current->right;
            rear++;
        }
    }
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Level Order: ";

    levelOrder(root);

    cout << endl;

    return 0;
}