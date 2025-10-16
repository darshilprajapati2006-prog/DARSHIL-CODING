// Q54. READ AN ARRAY & PRINT SUM

#include <stdio.h>

int main() {
    int a[10], i, sum = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
