

// Q60. SELECTION SORT

#include <stdio.h>

int main() {
    int a[10], i, j, min, temp;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 9; i++) {
        min = i;
        for (j = i + 1; j < 10; j++) {
            if (a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}