#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

bool detectLoop(Node* head) {
    Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(4);
    
    // Loop create karna (4 -> 3)
    head->next->next->next = head->next;

    if (detectLoop(head))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}