#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;
public:
    bool isEmpty() {
        return (s1.empty() && s2.empty());
    }
    void enqueue(int value) {
        s1.push(value);
        cout << value << " inserted\n";
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << " removed\n";
        s2.pop();
    }
    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << "Front element: " << s2.top() << endl;
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        stack<int> temp1 = s1;
        stack<int> temp2 = s2;
        cout << "Queue elements: ";
        while (!temp2.empty()) {
            cout << temp2.top() << " ";
            temp2.pop();
        }
        stack<int> temp3;
        while (!temp1.empty()) {
            temp3.push(temp1.top());
            temp1.pop();
        }
        while (!temp3.empty()) {
            cout << temp3.top() << " ";
            temp3.pop();
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;
    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                q.peek();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}