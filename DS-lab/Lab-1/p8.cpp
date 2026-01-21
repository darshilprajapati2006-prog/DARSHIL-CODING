#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int A[m][n];

    cout << "Enter elements:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int i, j;
    cout << "Enter index i and j: ";
    cin >> i >> j;

    uintptr_t base = (uintptr_t)&A[0][0];
    uintptr_t w = sizeof(int);

    uintptr_t rowMajor = base + ((i * n + j) * w);
    uintptr_t colMajor = base + ((j * m + i) * w);
    uintptr_t actual = (uintptr_t)&A[i][j];

    cout << "\nBase Address = " << base;
    cout << "\nRow-Major Address = " << rowMajor;
    cout << "\nColumn-Major Address = " << colMajor;
    cout << "\nActual Address = " << actual;

    return 0;
}