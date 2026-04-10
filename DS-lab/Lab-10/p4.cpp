

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create node
Node* createNode(int value) {
    return new Node{value, NULL, NULL};
}

// Insert into BST
Node* insert(Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Search in BST
bool search(Node* root, int key) {
    if (root == NULL)
        return false;

    if (key == root->data)
        return true;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    Node* root = NULL;
    int n, value, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Enter element to search: ";
    cin >> key;

    if (search(root, key))
        cout << key << " Found in BST\n";
    else
        cout << key << " Not Found in BST\n";

    return 0;
}