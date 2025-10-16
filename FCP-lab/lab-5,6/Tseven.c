

// Q71. FIND LARGEST AND SMALLEST ELEMENT USING POINTERS

#include <stdio.h>

int main() {
    int n, i;
    int a[50];
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    ptr = a;
    int max = *ptr, min = *ptr;

    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max)
            max = *(ptr + i);
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    printf("\nLargest element = %d", max);
    printf("\nSmallest element = %d\n", min);

    return 0;
}