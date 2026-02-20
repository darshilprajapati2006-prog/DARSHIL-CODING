

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

int findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main() {
    Node* head = new Node(11);
    head->next = new Node(22);
    head->next->next = new Node(33);
    head->next->next->next = new Node(44);
    head->next->next->next->next = new Node(55);

    cout <<"middle term is : " << findMiddle(head);

    return 0;
}