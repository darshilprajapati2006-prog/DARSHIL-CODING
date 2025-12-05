#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of A must match rows of B.\n");
        return 0;
    }

    // Allocate memory dynamically
    int *A = (int *)malloc(r1 * c1 * sizeof(int));
    int *B = (int *)malloc(r2 * c2 * sizeof(int));
    int *C = (int *)malloc(r1 * c2 * sizeof(int));

    printf("\nEnter elements of Matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", (A + i * c1 + j));
        }
    }

    printf("\nEnter elements of Matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", (B + i * c2 + j));
        }
    }

    // Initialize result matrix C
    for (int i = 0; i < r1 * c2; i++) {
        C[i] = 0;
    }

    // Matrix multiplication using pointers
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                *(C + i * c2 + j) += (*(A + i * c1 + k)) * (*(B + k * c2 + j));
            }
        }
    }

    printf("\nProduct of the two matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", *(C + i * c2 + j));
        }
        printf("\n");
    }

    // Free allocated memory
    free(A);
    free(B);
    free(C);

    return 0;
}
