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

void invertTree(Node* root) {
    if (root == NULL) {
        return;
    }

    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertTree(root->left);
    invertTree(root->right);
}

void preorder(Node* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    cout << "Before Invert: ";
    preorder(root);

    invertTree(root);

    cout << endl;

    cout << "After Invert: ";
    preorder(root);

    cout << endl;

    return 0;
}