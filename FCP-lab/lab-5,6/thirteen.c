

// Q57. FIND MAXIMUM AND SECOND MAXIMUM NUMBER

#include <stdio.h>

int main() {
    int n, i, max1, max2;
    int a[50];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max1 = max2 = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    printf("\nMaximum Number = %d", max1);
    printf("\nSecond Maximum Number = %d\n", max2);

    return 0;
}