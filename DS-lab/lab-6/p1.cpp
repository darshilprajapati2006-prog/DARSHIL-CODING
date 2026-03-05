#include <iostream>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;

int applyOperator(int a, int b, string op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") return floor((double)a / b);
    if (op == "^") return pow(a, b);
    return 0;
}

bool isOperator(string s) {
    return s == "+" || s == "-" || s == "*" || s == "/" || s == "^";
}

int evaluatePostfix(vector<string> arr) {
    stack<int> st;

    for (string token : arr) {
        if (!isOperator(token)) {
            st.push(stoi(token));
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int result = applyOperator(a, b, token);
            st.push(result);
        }
    }

    return st.top();
}

int main() {
    int n;

    cout << "Enter number of elements in postfix expression: ";
    cin >> n;

    vector<string> arr(n);

    cout << "Enter postfix expression elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = evaluatePostfix(arr);

    cout << "Result: " << result;

    return 0;
}
