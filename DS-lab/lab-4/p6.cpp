#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* reverseList(Node* head) {
    Node *prev = NULL, *curr = head, *next = NULL;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node* head) {
    if (!head || !head->next) return true;

    Node *slow = head, *fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* secondHalf = reverseList(slow->next);
    Node* firstHalf = head;
    Node* temp = secondHalf;

    bool result = true;
    while (temp) {
        if (firstHalf->data != temp->data) {
            result = false;
            break;
        }
        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    reverseList(secondHalf); 
    return result;
}

int main() {
    int n, val;
    Node *head = NULL, *tail = NULL;

    cout << "Nodes ki sankhya: ";
    cin >> n;

    if (n <= 0) {
        cout << "Palindrome" << endl;
        return 0;
    }

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

    if (isPalindrome(head))
        cout << "Output: Palindrome" << endl;
    else
        cout << "Output: Not a Palindrome" << endl;

    return 0;
}