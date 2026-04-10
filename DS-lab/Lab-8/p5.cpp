

#include <iostream>
using namespace std;

#define SIZE 10

// Hash function
int hashFunction(int key) {
    return key % SIZE;
}

int main() {
    int keys[] = {23, 43, 13, 27};
    int n = 4;

    int hashTable[SIZE];

    // Initialize table
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    // Insert using quadratic probing
    for (int i = 0; i < n; i++) {
        int key = keys[i];
        int index = hashFunction(key);
        int j = 0;

        // Quadratic probing: (h(k) + i^2) % m
        while (hashTable[(index + j*j) % SIZE] != -1) {
            j++;
        }

        int newIndex = (index + j*j) % SIZE;
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