// Q70. COUNT OCCURRENCE OF A PARTICULAR ELEMENT IN AN ARRAY

#include <stdio.h>

int main() {
    int a[10], i, n, key, count = 0;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to count: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            count++;
        }
    }

    printf("\nThe element %d occurs %d time(s) in the array.\n", key, count);

    return 0;
}
