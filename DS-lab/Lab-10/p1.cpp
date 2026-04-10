

#include <iostream>
using namespace std;

// ----------- LINKED LIST REPRESENTATION -----------
struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* createNode(char value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// ----------- MAIN FUNCTION -----------
int main() {

    // -------- ARRAY REPRESENTATION --------
    cout << "Array Representation:\n";
    char tree[7] = {'A', 'B', 'C', 'D', 'E', '-', 'F'};

    cout << "Index\tValue\n";
    for(int i = 0; i < 7; i++) {
        cout << i << "\t" << tree[i] << endl;
    }

    cout << "\n-----------------------------\n";

    // -------- LINKED LIST REPRESENTATION --------
    cout << "Linked List Representation:\n";

    Node* root = createNode('A');
    root->left = createNode('B');
    root->right = createNode('C');
    root->left->left = createNode('D');
    root->left->right = createNode('E');
    root->right->right = createNode('F');

    cout << "Root: " << root->data << endl;
    cout << "Left child of root: " << root->left->data << endl;
    cout << "Right child of root: " << root->right->data << endl;

    return 0;
}