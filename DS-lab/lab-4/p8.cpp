#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

void sortList(Node* head) {
    if (!head) return;
    bool swapped;
    Node* ptr1;
    Node* lptr = NULL;

    do {
        swapped = false;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                swap(ptr1->data, ptr1->next->data);
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

Node* mergeLists(Node* l1, Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    Node* temp = l1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = l2; 
    
    sortList(l1); 
    return l1;
}

Node* buildList(int n) {
    if (n <= 0) return NULL;
    int val;
    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
        cin >> val;
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << (head->next ? " -> " : "");
        head = head->next;
    }
    cout << " -> NULL" << endl;
}

int main() {
    int n1, n2;

    cout << "First list size: ";
    cin >> n1;
    cout << "Enter elements: ";
    Node* l1 = buildList(n1);

    cout << "Second list size: ";
    cin >> n2;
    cout << "Enter elements: ";
    Node* l2 = buildList(n2);

    Node* mergedHead = mergeLists(l1, l2);

    cout << "Merged and Sorted List: ";
    printList(mergedHead);

    return 0;
}