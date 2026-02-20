#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node *next, *random;
    Node(int val) : data(val), next(NULL), random(NULL) {}
};

Node* cloneList(Node* head) {
    if (!head) return NULL;

    Node* curr = head;
    while (curr) {
        Node* temp = curr->next;
        curr->next = new Node(curr->data);
        curr->next->next = temp;
        curr = temp;
    }

    curr = head;
    while (curr) {
        if (curr->random)
            curr->next->random = curr->random->next;
        curr = curr->next->next;
    }

    Node* curr_old = head;
    Node* new_head = head->next;
    Node* curr_new = new_head;

    while (curr_old) {
        curr_old->next = curr_old->next->next;
        curr_new->next = (curr_new->next) ? curr_new->next->next : NULL;
        curr_old = curr_old->next;
        curr_new = curr_new->next;
    }

    return new_head;
}

void printClonedList(Node* head) {
    cout << "[";
    while (head) {
        cout << "(" << head->data << ",";
        if (head->random) cout << head->random->data;
        else cout << "NULL";
        cout << ")";
        if (head->next) cout << ", ";
        head = head->next;
    }
    cout << "]" << endl;
}

int main() {
    int n;
    cout << "Nodes ki sankhya: ";
    cin >> n;

    if (n <= 0) return 0;

    vector<Node*> nodes(n);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        nodes[i] = new Node(val);
    }

    for (int i = 0; i < n - 1; i++) {
        nodes[i]->next = nodes[i + 1];
    }

    cout << "Har node ke liye random index (0 se " << n-1 << " ya -1 NULL ke liye): " << endl;
    for (int i = 0; i < n; i++) {
        int randIdx;
        cin >> randIdx;
        if (randIdx != -1 && randIdx < n) {
            nodes[i]->random = nodes[randIdx];
        }
    }

    Node* clonedHead = cloneList(nodes[0]);
    cout << "Output: ";
    printClonedList(clonedHead);

    return 0;
}