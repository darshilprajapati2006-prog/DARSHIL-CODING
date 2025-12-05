#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Copy in reverse order
    for (int i = 0; i < n; i++) {
        b[i] = a[n - 1 - i];
    }

    printf("Second array in reverse order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
