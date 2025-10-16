// Q63. FIND MAXIMUM AND MINIMUM ELEMENT OF 3×3 MATRIX

#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, max, min;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("\nMaximum element = %d", max);
    printf("\nMinimum element = %d\n", min);

    return 0;
}
