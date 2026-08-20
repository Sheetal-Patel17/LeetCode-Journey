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

bool searchBST(Node* root, int target) {
    if (root == NULL) {
        return false;
    }

    if (root->data == target) {
        return true;
    }

    if (target < root->data) {
        return searchBST(root->left, target);
    }
    else {
        return searchBST(root->right, target);
    }
}

int main() {
    Node* root = new Node(8);

    root->left = new Node(4);
    root->right = new Node(12);

    root->left->left = new Node(2);
    root->left->right = new Node(6);

    root->right->left = new Node(10);
    root->right->right = new Node(14);

    int target = 10;

    if (searchBST(root, target)) {
        cout << "Element found in BST" << endl;
    }
    else {
        cout << "Element not found in BST" << endl;
    }

    return 0;
}