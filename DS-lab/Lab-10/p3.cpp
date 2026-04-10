#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    return new Node{value, NULL, NULL};
}

Node* insert(Node* root, int value) {
    if (root == NULL) {
        cout << "Inserting " << value << " as root node\n";
        return createNode(value);
    }

    if (value < root->data) {
        cout << value << " < " << root->data << " → LEFT (LST)\n";
        root->left = insert(root->left, value);
    } 
    else if (value > root->data) {
        cout << value << " > " << root->data << " → RIGHT (RST)\n";
        root->right = insert(root->right, value);
    } 
    else {
        cout << value << " already exists\n";
    }

    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "\nInorder Traversal (Sorted BST): ";
    inorder(root);

    return 0;
}