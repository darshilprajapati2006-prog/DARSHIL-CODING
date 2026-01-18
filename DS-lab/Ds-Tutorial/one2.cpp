#include <iostream>
using namespace std;

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    cin.getline(str, 100);
    cin >> ch;

    cout << "String with occurrences: " << str << endl;

    cout << "String without occurrences: ";
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        } else {
            cout << str[i];
        }
        i++;
    }
    cout << endl;

    cout << "Occurrences: " << count << endl;

    return 0;
}