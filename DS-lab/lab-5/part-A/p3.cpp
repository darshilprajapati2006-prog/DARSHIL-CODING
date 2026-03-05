

#include <iostream>
#include <unordered_map>
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

Node* removeDuplicates(Node* head) {
    unordered_map<int,int> count;

    Node* temp = head;
    while (temp) {
        count[temp->data]++;
        temp = temp->next;
    }

    Node* newHead = NULL;
    Node* tail = NULL;

    temp = head;
    while (temp) {
        if (count[temp->data] == 1) {
            Node* newNode = new Node(temp->data);

            if (!newHead) {
                newHead = tail = newNode;
            } else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
        }
        temp = temp->next;
    }

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

    head = removeDuplicates(head);

    cout << "List after removing all duplicates: ";
    display(head);

    return 0;
}