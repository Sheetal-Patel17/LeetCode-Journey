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

bool isSameTree(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL) {
        return true;
    }

    if (root1 == NULL || root2 == NULL) {
        return false;
    }

    if (root1->data != root2->data) {
        return false;
    }

    return isSameTree(root1->left, root2->left) &&
           isSameTree(root1->right, root2->right);
}

int main() {
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);

    if (isSameTree(root1, root2)) {
        cout << "Trees are same" << endl;
    }
    else {
        cout << "Trees are different" << endl;
    }

    return 0;
}