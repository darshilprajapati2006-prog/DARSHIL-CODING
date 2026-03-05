

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

    if (!head)
        return newNode;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;

    return head;
}

void createLoop(Node* head, int pos) {
    if (pos == -1) return;

    Node* loopNode = head;
    for (int i = 1; i < pos && loopNode; i++)
        loopNode = loopNode->next;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = loopNode;
}

int countLoopNodes(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            int count = 1;
            Node* temp = slow->next;

            while (temp != slow) {
                count++;
                temp = temp->next;
            }

            return count;
        }
    }

    return 0;
}

int main() {
    int n;

    cout << "Enter number of nodes in the linked list: ";
    cin >> n;

    Node* head = NULL;

    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insertEnd(head, x);
    }

    int pos;
    cout << "Enter position to create loop (-1 for no loop): ";
    cin >> pos;

    createLoop(head, pos);

    int loopCount = countLoopNodes(head);

    if (loopCount > 0)
        cout << "Loop detected. Number of nodes in loop = " << loopCount;
    else
        cout << "No loop detected.";

    return 0;
}