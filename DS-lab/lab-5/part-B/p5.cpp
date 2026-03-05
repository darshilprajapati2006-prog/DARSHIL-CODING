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

Node* josephus(Node* head, int k) {
    Node* curr = head;
    Node* prev = NULL;

    while (curr->next != curr) {
        for (int i = 1; i < k; i++) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;
        curr = prev->next;
    }

    return curr;
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

    int k;
    cout << "Enter value of k (delete every k-th node): ";
    cin >> k;

    Node* result = josephus(head, k);

    cout << "Remaining node: " << result->data;

    return 0;
}
