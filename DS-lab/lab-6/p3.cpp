

#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Operations ---\n";
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