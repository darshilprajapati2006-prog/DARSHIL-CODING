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

Node* swapNodes(Node* head, int p1, int p2) {
    if (p1 == p2)
        return head;

    Node* node1 = head;
    Node* node2 = head;

    for (int i = 1; node1 && i < p1; i++)
        node1 = node1->next;

    for (int i = 1; node2 && i < p2; i++)
        node2 = node2->next;

    if (!node1 || !node2)
        return head;

    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;

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

    int p1, p2;
    cout << "Enter first position to swap: ";
    cin >> p1;
    cout << "Enter second position to swap: ";
    cin >> p2;

    head = swapNodes(head, p1, p2);

    cout << "List after swapping nodes: ";
    display(head);

    return 0;
}
