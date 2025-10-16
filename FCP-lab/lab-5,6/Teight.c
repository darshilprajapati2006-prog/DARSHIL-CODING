

// Q72. FIND SUM OF ARRAY ELEMENTS USING POINTERS

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int a[50];
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    ptr = a; // Pointer points to array

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("\nSum of all array elements = %d\n", sum);

    return 0;
}