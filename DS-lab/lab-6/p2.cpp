

#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c) {
    return (c=='+' || c=='-' || c=='*' || c=='/' || c=='^');
}

string prefixToPostfix(string prefix) {
    stack<string> st;

    for (int i = prefix.length() - 1; i >= 0; i--) {

        if (isOperator(prefix[i])) {

            string op1 = st.top();
            st.pop();

            string op2 = st.top();
            st.pop();

            string temp = op1 + op2 + prefix[i];
            st.push(temp);
        }
        else {
            st.push(string(1, prefix[i]));
        }
    }

    return st.top();
}

int main() {

    string prefix;

    cout << "Enter prefix expression: ";
    cin >> prefix;

    string postfix = prefixToPostfix(prefix);

    cout << "Postfix expression: " << postfix;

    return 0;
}