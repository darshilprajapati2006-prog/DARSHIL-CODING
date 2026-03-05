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

Node* convertToLinear(Node* head) {
    if (!head)
        return NULL;

    Node* temp = head;

    while (temp->next != head)
        temp = temp->next;

    temp->next = NULL;

    return head;
}

void display(Node* head) {
    Node* temp = head;

    while (temp) {
        cout << temp->data;
        if (temp->next)
            cout << " -> ";
        temp = temp->next;
    }

    cout << " -> NULL";
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

    head = convertToLinear(head);

    cout << "Linear list: ";
    display(head);

    return 0;
}
