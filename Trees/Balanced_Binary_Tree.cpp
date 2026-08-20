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

int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);

    if (leftHeight == -1) {
        return -1;
    }

    int rightHeight = height(root->right);

    if (rightHeight == -1) {
        return -1;
    }

    if (leftHeight - rightHeight > 1 ||
        rightHeight - leftHeight > 1) {
        return -1;
    }

    if (leftHeight > rightHeight) {
        return leftHeight + 1;
    }
    else {
        return rightHeight + 1;
    }
}

bool isBalanced(Node* root) {
    return height(root) != -1;
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    if (isBalanced(root)) {
        cout << "Tree is balanced" << endl;
    }
    else {
        cout << "Tree is not balanced" << endl;
    }

    return 0;
}