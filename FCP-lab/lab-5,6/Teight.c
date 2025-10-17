// Q72. ROTATE AN ARRAY BY N POSITIONS

#include <stdio.h>

int main() {
    int a[50], n, i, j, temp, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &pos);

    // Rotate array to the left by 'pos' positions
    for (i = 0; i < pos; i++) {
        temp = a[0];
        for (j = 0; j < n - 1; j++) {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp;
    }

    printf("\nArray after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

