#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *next, *bottom;
    Node(int val) : data(val), next(NULL), bottom(NULL) {}
};

void printFlattenedList(Node* root) {
    while (root) {
        cout << root->data << (root->bottom ? " -> " : "");
        root = root->bottom;
    }
    cout << " -> NULL" << endl;
}

int main() {
    int n, m, val;
    cout << "Main (next) nodes ki sankhya: ";
    cin >> n;

    vector<int> values;

    for (int i = 0; i < n; i++) {
        cout << "Main node " << i + 1 << " ki value: ";
        cin >> val;
        values.push_back(val);

        cout << "Is node ke bottom mein kitne elements hain? ";
        cin >> m;

        for (int j = 0; j < m; j++) {
            cin >> val;
            values.push_back(val);
        }
    }

    sort(values.begin(), values.end());

    Node* head = NULL;
    Node* temp = NULL;

    for (int x : values) {
        Node* newNode = new Node(x);
        if (!head) {
            head = temp = newNode;
        } else {
            temp->bottom = newNode;
            temp = newNode;
        }
    }

    cout << "Flattened Sorted List: ";
    printFlattenedList(head);

    return 0;
}