#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* reverseKGroup(Node* head, int k) {
    if (!head) return NULL;

    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;

    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != NULL) {
        head->next = reverseKGroup(next, k);
    }

    return prev;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << (node->next ? " -> " : "");
        node = node->next;
    }
    cout << endl;
}

int main() {
    int n, k, val;
    Node *head = NULL, *tail = NULL;

    cout << "Nodes ki sankhya: ";
    cin >> n;

    if (n <= 0) return 0;

    cout << "Elements enter karein: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> val;
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Group size (k) enter karein: ";
    cin >> k;

    head = reverseKGroup(head, k);

    cout << "Output: ";
    printList(head);

    return 0;
}