

// Q74. MERGE TWO SORTED ARRAYS INTO A SINGLE SORTED ARRAY (ASCENDING ORDER)

#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements of first array (sorted):\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements of second array (sorted):\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    i = j = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];
    while (j < n2)
        c[k++] = b[j++];

    printf("\nMerged sorted array:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}