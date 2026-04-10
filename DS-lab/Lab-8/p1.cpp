

#include <iostream>
using namespace std;

#define SIZE 10  // hash table size

// Hash function (Division Method)
int hashFunction(int key) {
    return key % SIZE;
}

int main() {
    int keys[] = {50, 700, 76, 85, 92, 73, 101};
    int n = 7;

    int hashTable[SIZE];

    // Initialize table with -1 (empty)
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    // Insert keys
    for (int i = 0; i < n; i++) {
        int index = hashFunction(keys[i]);

        // Linear probing for collision
        while (hashTable[index] != -1) {
            index = (index + 1) % SIZE;
        }

        hashTable[index] = keys[i];
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