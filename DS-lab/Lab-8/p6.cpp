

#include <iostream>
using namespace std;

#define SIZE 10

// First hash function
int h1(int key) {
    return key % SIZE;
}

// Second hash function (must not be 0)
int h2(int key) {
    return 7 - (key % 7);  // 7 is a prime less than SIZE
}

int main() {
    int keys[] = {23, 43, 13, 27};
    int n = 4;

    int hashTable[SIZE];

    // Initialize table
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    // Insert using double hashing
    for (int i = 0; i < n; i++) {
        int key = keys[i];
        int index = h1(key);
        int step = h2(key);
        int j = 0;

        // Double hashing formula
        while (hashTable[(index + j * step) % SIZE] != -1) {
            j++;
        }

        int newIndex = (index + j * step) % SIZE;
        hashTable[newIndex] = key;
    }

    // Display hash table
    cout << "Index\tValue\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i << "\t";
        if (hashTable[i] != -1)
            cout << hashTable[i];
        else
            cout << "EMPTY";
        cout << endl;
    }

    return 0;
}