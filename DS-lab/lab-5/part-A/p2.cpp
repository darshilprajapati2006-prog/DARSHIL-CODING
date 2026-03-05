#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node(val);

    if (!head)
        return newNode;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

Node* rotateList(Node* head, int k) {
    if (!head || k == 0)
        return head;

    Node* temp = head;
    int count = 1;

    while (count < k && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
        return head;

    Node* newHead = temp->next;
    if (newHead == NULL)
        return head;

    newHead->prev = NULL;
    temp->next = NULL;

    Node* tail = newHead;
    while (tail->next)
        tail = tail->next;

    tail->next = head;
    head->prev = tail;

    return newHead;
}

void display(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next)
            cout << " ⇄ ";
        temp = temp->next;
    }
    cout << " ⇄ NULL";
}

int main() {
    int n;
    cout << "Enter number of elements in the doubly linked list: ";
    cin >> n;

    Node* head = NULL;

    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insertEnd(head, x);
    }

    int k;
    cout << "Enter value of k (number of nodes to rotate): ";
    cin >> k;

    head = rotateList(head, k);

    cout << "List after rotation: ";
    display(head);

    return 0;
}
