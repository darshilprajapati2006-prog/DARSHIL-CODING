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

bool isSorted(Node* head) {
    if (!head || head->next == head)
        return true;

    Node* temp = head;

    do {
        if (temp->data > temp->next->data && temp->next != head)
            return false;
        temp = temp->next;
    } while (temp->next != head);

    return true;
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

    if (isSorted(head))
        cout << "The circular linked list is SORTED.";
    else
        cout << "The circular linked list is NOT sorted.";

    return 0;
}
