

// Q59. SWAP TWO ARRAYS

#include <stdio.h>

int main() {
    int a[10], b[10], temp;
    int i;

    printf("Enter 10 elements of first array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 10 elements of second array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 10; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("\nAfter swapping:\n");
    printf("First array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    printf("\nSecond array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }

    printf("\n");
    return 0;
}