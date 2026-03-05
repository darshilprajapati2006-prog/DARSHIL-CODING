#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return (top == NULL);
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed into stack\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;
        cout << top->data << " popped from stack\n";
        top = top->next;
        delete temp;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Top element: " << top->data << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack using Linked List ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. IsEmpty\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                if (s.isEmpty())
                    cout << "Stack is empty\n";
                else
                    cout << "Stack is not empty\n";
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}
