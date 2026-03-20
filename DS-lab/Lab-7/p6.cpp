


#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class QueueOps {
    queue<int> q;

public:
    void enqueue(int value) {
        q.push(value);
        cout << value << " inserted\n";
    }

    void display() {
        if (q.empty()) {
            cout << "Queue is Empty\n";
            return;
        }
        queue<int> temp = q;
        cout << "Queue elements: ";
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }

    void countElements() {
        cout << "Count: " << q.size() << endl;
    }

    void sumElements() {
        if (q.empty()) {
            cout << "Queue is Empty\n";
            return;
        }
        queue<int> temp = q;
        int sum = 0;
        while (!temp.empty()) {
            sum += temp.front();
            temp.pop();
        }
        cout << "Sum: " << sum << endl;
    }

    void minElement() {
        if (q.empty()) {
            cout << "Queue is Empty\n";
            return;
        }
        queue<int> temp = q;
        int mn = temp.front();
        while (!temp.empty()) {
            if (temp.front() < mn) mn = temp.front();
            temp.pop();
        }
        cout << "Min: " << mn << endl;
    }

    void maxElement() {
        if (q.empty()) {
            cout << "Queue is Empty\n";
            return;
        }
        queue<int> temp = q;
        int mx = temp.front();
        while (!temp.empty()) {
            if (temp.front() > mx) mx = temp.front();
            temp.pop();
        }
        cout << "Max: " << mx << endl;
    }

    void reverseQueue() {
        if (q.empty()) {
            cout << "Queue is Empty\n";
            return;
        }
        stack<int> st;
        while (!q.empty()) {
            st.push(q.front());
            q.pop();
        }
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }
        cout << "Queue Reversed\n";
    }
};

int main() {
    QueueOps obj;
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Display\n3. Count\n4. Sum\n5. Min\n6. Max\n7. Reverse\n8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int n;
                cout << "How many elements to insert: ";
                cin >> n;
                for(int i = 0; i < n; i++) {
                    cout << "Enter value: ";
                    cin >> value;
                    obj.enqueue(value);
                }
                break;
            case 2:
                obj.display();
                break;
            case 3:
                obj.countElements();
                break;
            case 4:
                obj.sumElements();
                break;
            case 5:
                obj.minElement();
                break;
            case 6:
                obj.maxElement();
                break;
            case 7:
                obj.reverseQueue();
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 8);

    return 0;
}