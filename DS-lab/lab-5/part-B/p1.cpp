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

void splitList(Node* head, Node*& head1, Node*& head2) {
    if (!head || head->next == head)
        return;

    Node* slow = head;
    Node* fast = head;

    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast->next->next == head)
        fast = fast->next;

    head1 = head;
    head2 = slow->next;

    fast->next = slow->next;
    slow->next = head;
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

    Node* head1 = NULL;
    Node* head2 = NULL;

    splitList(head, head1, head2);

    cout << "First Half: ";
    display(head1);

    cout << "\nSecond Half: ";
    display(head2);

    return 0;
}
