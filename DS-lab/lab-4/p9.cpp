#include <iostream>
#include <cmath>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

int getCount(Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

int getIntersection(Node* head1, Node* head2) {
    int c1 = getCount(head1);
    int c2 = getCount(head2);
    int d = abs(c1 - c2);

    Node* ptr1 = (c1 > c2) ? head1 : head2;
    Node* ptr2 = (c1 > c2) ? head2 : head1;

    for (int i = 0; i < d; i++) {
        if (!ptr1) return -1;
        ptr1 = ptr1->next;
    }

    while (ptr1 && ptr2) {
        if (ptr1 == ptr2) return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main() {
    int commonNodes, n1, n2, val;
    
    // Common part banana
    cout << "Common nodes ki sankhya: ";
    cin >> commonNodes;
    Node *commonHead = NULL, *commonTail = NULL;
    if (commonNodes > 0) cout << "Common elements: ";
    for (int i = 0; i < commonNodes; i++) {
        cin >> val;
        Node* newNode = new Node(val);
        if (!commonHead) commonHead = commonTail = newNode;
        else { commonTail->next = newNode; commonTail = newNode; }
    }

    // List 1 (non-common part)
    cout << "List 1 ke baki nodes: ";
    cin >> n1;
    Node *head1 = NULL, *tail1 = NULL;
    if (n1 > 0) cout << "Elements: ";
    for (int i = 0; i < n1; i++) {
        cin >> val;
        Node* newNode = new Node(val);
        if (!head1) head1 = tail1 = newNode;
        else { tail1->next = newNode; tail1 = newNode; }
    }
    if (tail1) tail1->next = commonHead; else head1 = commonHead;

    // List 2 (non-common part)
    cout << "List 2 ke baki nodes: ";
    cin >> n2;
    Node *head2 = NULL, *tail2 = NULL;
    if (n2 > 0) cout << "Elements: ";
    for (int i = 0; i < n2; i++) {
        cin >> val;
        Node* newNode = new Node(val);
        if (!head2) head2 = tail2 = newNode;
        else { tail2->next = newNode; tail2 = newNode; }
    }
    if (tail2) tail2->next = commonHead; else head2 = commonHead;

    int result = getIntersection(head1, head2);
    if (result != -1) cout << "Output: " << result << endl;
    else cout << "No Intersection" << endl;

    return 0;
}