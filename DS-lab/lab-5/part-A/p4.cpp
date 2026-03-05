

#include <iostream>
#include <vector>
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

    if (!head)
        return newNode;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

void findMaxSumSublist(Node* head) {
    vector<int> arr;
    Node* temp = head;

    while (temp) {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    int maxSum = arr[0];
    int currentSum = arr[0];
    int start = 0, end = 0, tempStart = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (currentSum + arr[i] < arr[i]) {
            currentSum = arr[i];
            tempStart = i;
        } else {
            currentSum += arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }
    }

    cout << "Maximum sum sublist: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i];
        if (i < end)
            cout << " ⇄ ";
    }

    cout << ", Maximum Sum = " << maxSum;
}

int main() {
    int n;

    cout << "Enter number of elements in the doubly linked list: ";
    cin >> n;

    Node* head = NULL;

    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insertEnd(head, x);
    }

    findMaxSumSublist(head);

    return 0;
}