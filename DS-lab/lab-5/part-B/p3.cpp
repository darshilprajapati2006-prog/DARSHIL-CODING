#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node(val);

    if (!head) {
        head = newNode;
        newNode->next = head;
        return head;
    }

    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;

    return head;
}

Node* insertSorted(Node* head, int val) {
    Node* newNode = new Node(val);

    if (!head) {
        newNode->next = newNode;
        return newNode;
    }

    if (val < head->data) {
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
        head = newNode;

        return head;
    }

    Node* curr = head;

    while (curr->next != head && curr->next->data < val)
        curr = curr->next;

    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

void display(Node* head) {
    if (!head) return;

    Node* temp = head;

    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to " << head->data << ")";
}

int main() {
    int n;

    cout << "Enter number of nodes in the sorted circular linked list: ";
    cin >> n;

    Node* head = NULL;

    cout << "Enter the elements of the sorted list: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insertEnd(head, x);
    }

    int val;
    cout << "Enter value to insert: ";
    cin >> val;

    head = insertSorted(head, val);

    cout << "After insertion: ";
    display(head);

    return 0;
}
