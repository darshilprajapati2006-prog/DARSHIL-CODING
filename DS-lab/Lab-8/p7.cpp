

#include <iostream>
using namespace std;

#define SIZE 10

// Node for linked list
struct Node {
    int data;
    Node* next;
};

// Hash function
int hashFunction(int key) {
    return key % SIZE;
}

// Insert at beginning of linked list
void insert(Node* table[], int key) {
    int index = hashFunction(key);

    Node* newNode = new Node{key, NULL};

    // Insert at beginning
    newNode->next = table[index];
    table[index] = newNode;
}

// Display hash table
void display(Node* table[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << i << " -> ";

        Node* temp = table[i];
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
}

int main() {
    int keys[] = {23, 43, 13, 27};
    int n = 4;

    Node* hashTable[SIZE];

    // Initialize table
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = NULL;

    // Insert keys
    for (int i = 0; i < n; i++) {
        insert(hashTable, keys[i]);
    }

    // Display
    cout << "Hash Table using Chaining:\n";
    display(hashTable);

    return 0;
}