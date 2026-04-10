

#include <iostream>
#include <cmath>
using namespace std;

#define SIZE 10  // hash table size

// Multiplication method hash function
int hashFunction(int key) {
    double A = 0.618; // constant (0 < A < 1)
    double temp = key * A;
    double fractional = temp - floor(temp);
    return floor(SIZE * fractional);
}

int main() {
    int keys[] = {50, 700, 76, 85, 92, 73, 101};
    int n = 7;

    int hashTable[SIZE];

    // Initialize table
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