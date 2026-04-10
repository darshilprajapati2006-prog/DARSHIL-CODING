

#include <iostream>
#include <cmath>
using namespace std;

#define SIZE 10

// -------- Mid-Square Method --------
int midSquareHash(int key) {
    long long square = (long long)key * key;

    // Count digits in square
    int digits = 0;
    long long temp = square;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Extract middle 2 digits (simple approach)
    int mid = digits / 2;
    int divisor = pow(10, mid - 1);
    int middle = (square / divisor) % 100;

    return middle % SIZE;
}

// -------- Folding Method --------
int foldingHash(int key) {
    int sum = 0;

    while (key > 0) {
        sum += key % 100; // take 2-digit parts
        key /= 100;
    }

    return sum % SIZE;
}

// -------- Insert with Linear Probing --------
void insert(int table[], int key, int index) {
    while (table[index] != -1) {
        index = (index + 1) % SIZE;
    }
    table[index] = key;
}

// -------- Display --------
void display(int table[]) {
    cout << "Index\tValue\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i << "\t";
        if (table[i] != -1)
            cout << table[i];
        else
            cout << "EMPTY";
        cout << endl;
    }
}

int main() {
    int keys[] = {50, 700, 76, 85, 92, 73, 101};
    int n = 7;

    int choice;
    cout << "Choose Method:\n1. Mid-Square\n2. Folding\nEnter choice: ";
    cin >> choice;

    int hashTable[SIZE];

    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    for (int i = 0; i < n; i++) {
        int index;

        if (choice == 1)
            index = midSquareHash(keys[i]);
        else
            index = foldingHash(keys[i]);

        insert(hashTable, keys[i], index);
    }

    cout << "\nHash Table:\n";
    display(hashTable);

    return 0;
}