#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


Node* insertAtBeginning(Node* head, int x) {
    Node* newNode = new Node(x);
    newNode->next = head;
    return newNode;
}

Node* insertAtEnd(Node* head, int y) {
    Node* newNode = new Node(y);
    if (head == NULL)
        return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

Node* insertAtPosition(Node* head, int pos, int val) {
    if (pos == 1)
        return insertAtBeginning(head, val);

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp != NULL) {
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}


void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    head = insertAtBeginning(head, 4);
    head = insertAtEnd(head, 10);
    head = insertAtPosition(head, 3, 4);

    cout << "Linked List after insertions:\n";
    display(head);

    return 0;
}