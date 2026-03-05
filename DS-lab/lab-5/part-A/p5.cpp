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

bool isPalindrome(Node* head) {
    if (!head)
        return true;

    Node* left = head;
    Node* right = head;

    while (right->next)
        right = right->next;

    while (left != right && right->next != left) {
        if (left->data != right->data)
            return false;

        left = left->next;
        right = right->prev;
    }

    return true;
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

    if (isPalindrome(head))
        cout << "The doubly linked list is a PALINDROME.";
    else
        cout << "The doubly linked list is NOT a palindrome.";

    return 0;
}
