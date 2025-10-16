

// Q64. PRINT SUM OF EACH ROW IN 3×3 MATRIX

#include <stdio.h>

int main() {
    int a[3][3], i, j, sum;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nSum of each row:\n");
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        printf("Row %d = %d\n", i + 1, sum);
    }

    return 0;
}