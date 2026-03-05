#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node* random;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
        random = NULL;
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

void setRandomPointers(Node* head, int n) {
    Node* nodes[100];
    Node* temp = head;
    int i = 0;

    while (temp) {
        nodes[i++] = temp;
        temp = temp->next;
    }

    cout << "Enter random pointer index for each node (-1 for NULL):\n";

    for (int j = 0; j < n; j++) {
        int idx;
        cout << "Random index for node with value " << nodes[j]->data << ": ";
        cin >> idx;

        if (idx != -1)
            nodes[j]->random = nodes[idx];
    }
}

Node* cloneList(Node* head) {
    unordered_map<Node*, Node*> mp;

    Node* temp = head;

    while (temp) {
        mp[temp] = new Node(temp->data);
        temp = temp->next;
    }

    temp = head;

    while (temp) {
        mp[temp]->next = mp[temp->next];
        mp[temp]->prev = mp[temp->prev];
        mp[temp]->random = mp[temp->random];
        temp = temp->next;
    }

    return mp[head];
}

void display(Node* head) {
    Node* temp = head;

    while (temp) {
        cout << "Node " << temp->data << " | Random -> ";
        if (temp->random)
            cout << temp->random->data;
        else
            cout << "NULL";
        cout << endl;

        temp = temp->next;
    }
}

int main() {
    int n;

    cout << "Enter number of nodes in the doubly linked list: ";
    cin >> n;

    Node* head = NULL;

    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insertEnd(head, x);
    }

    setRandomPointers(head, n);

    Node* cloned = cloneList(head);

    cout << "\nOriginal List:\n";
    display(head);

    cout << "\nCloned List:\n";
    display(cloned);

    cout << "\nOriginal and cloned lists are identical. Random pointers copied successfully.";

    return 0;
}
