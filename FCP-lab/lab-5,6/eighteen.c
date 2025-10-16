

// Q62. REVERSE AN ARRAY

#include <stdio.h>

int main() {
    int a[10], i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nArray in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}