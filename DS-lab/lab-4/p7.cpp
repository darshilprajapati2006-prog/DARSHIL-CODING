#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* moveLastToFront(Node* head) {
    if (!head || !head->next) return head;

    Node* secondLast = NULL;
    Node* last = head;

    while (last->next != NULL) {
        secondLast = last;
        last = last->next;
    }

    secondLast->next = NULL;
    last->next = head;
    head = last;

    return head;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << (head->next ? " -> " : "");
        head = head->next;
    }
    cout << " -> NULL" << endl;
}

int main() {
    int n, val;
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

    head = moveLastToFront(head);

    cout << "Output: ";
    printList(head);

    return 0;
}