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

Node* mergeLists(Node* head1, Node* head2) {
    if (!head1) return head2;
    if (!head2) return head1;

    Node* head = NULL;
    Node* tail = NULL;

    while (head1 && head2) {
        Node* newNode;

        if (head1->data < head2->data) {
            newNode = new Node(head1->data);
            head1 = head1->next;
        } else {
            newNode = new Node(head2->data);
            head2 = head2->next;
        }

        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    while (head1) {
        Node* newNode = new Node(head1->data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        head1 = head1->next;
    }

    while (head2) {
        Node* newNode = new Node(head2->data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        head2 = head2->next;
    }

    return head;
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
    int n1, n2;

    cout << "Enter number of elements in List 1: ";
    cin >> n1;

    Node* head1 = NULL;

    cout << "Enter elements of sorted List 1: ";
    for (int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        head1 = insertEnd(head1, x);
    }

    cout << "Enter number of elements in List 2: ";
    cin >> n2;

    Node* head2 = NULL;

    cout << "Enter elements of sorted List 2: ";
    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        head2 = insertEnd(head2, x);
    }

    Node* merged = mergeLists(head1, head2);

    cout << "Merged Sorted Doubly Linked List: ";
    display(merged);

    return 0;
}
