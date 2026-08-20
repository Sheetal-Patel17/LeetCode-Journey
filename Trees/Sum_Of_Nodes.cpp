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

int sumNodes(Node* root) {
    if (root == NULL) {
        return 0;
    }

    return root->data + sumNodes(root->left) + sumNodes(root->right);
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Sum of Nodes: " << sumNodes(root) << endl;

    return 0;
}