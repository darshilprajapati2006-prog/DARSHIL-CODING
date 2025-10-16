// Q46. USING MULTIDIMENSIONAL ARRAYS

#include <stdio.h>

int main() {
    int marks[2][3];  // Example of 2D array with 2 rows and 3 columns
    int i, j;

    printf("Enter elements for a 2x3 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\nThe 2x3 matrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}