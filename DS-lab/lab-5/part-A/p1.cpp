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
    if (!head) return newNode;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

void findPairs(Node* head, int sum) {
    Node* first = head;
    Node* last = head;

    while (last->next)
        last = last->next;

    bool found = false;

    while (first && last && first != last && last->next != first) {
        int s = first->data + last->data;

        if (s == sum) {
            cout << "(" << first->data << ", " << last->data << ") ";
            found = true;
            first = first->next;
            last = last->prev;
        }
        else if (s < sum)
            first = first->next;
        else
            last = last->prev;
    }

    if (!found)
        cout << "No pair found";
}

int main() {
    int n;
    cout << "Enter number of elements in the list: ";
    cin >> n;

    Node* head = NULL;

    cout << "Enter the elements of the sorted doubly linked list: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insertEnd(head, x);
    }

    int sum;
    cout << "Enter the target sum: ";
    cin >> sum;

    cout << "Pairs with given sum: ";
    findPairs(head, sum);

    return 0;
}
