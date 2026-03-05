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

Node* reverseCircular(Node* head) {
    if (!head || head->next == head)
        return head;

    Node *prev = NULL, *curr = head, *nextNode = NULL;
    Node* last = head;

    while (last->next != head)
        last = last->next;

    do {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    } while (curr != head);

    head->next = prev;
    head = prev;

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

    cout << "Enter number of nodes in the circular linked list: ";
    cin >> n;

    Node* head = NULL;

    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insertEnd(head, x);
    }

    head = reverseCircular(head);

    cout << "Reversed Circular Linked List: ";
    display(head);

    return 0;
}

