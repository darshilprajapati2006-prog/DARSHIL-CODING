

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

struct compare {
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;
    }
};

Node* mergeKLists(vector<Node*>& lists) {
    priority_queue<Node*, vector<Node*>, compare> pq;

    for (Node* head : lists)
        if (head)
            pq.push(head);

    Node* dummy = new Node(0);
    Node* tail = dummy;

    while (!pq.empty()) {
        Node* temp = pq.top();
        pq.pop();

        tail->next = temp;
        tail = tail->next;

        if (temp->next)
            pq.push(temp->next);
    }

    return dummy->next;
}

int main() {
    int k;
    cin >> k;

    vector<Node*> lists(k);

    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;

        Node* head = NULL;
        Node* temp = NULL;

        for (int j = 0; j < n; j++) {
            int val;
            cin >> val;
            Node* newNode = new Node(val);

            if (!head) {
                head = temp = newNode;
            } else {
                temp->next = newNode;
                temp = newNode;
            }
        }

        lists[i] = head;
    }

    Node* result = mergeKLists(lists);

    while (result) {
        cout << result->data;
        if (result->next) cout << " -> ";
        result = result->next;
    }
    cout << " -> NULL";

    return 0;
}