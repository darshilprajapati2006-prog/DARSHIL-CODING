// Q49. STAR PATTERN

#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for (i = 1; i <= rows; i++) {
        for (k = 1; k <= rows - i; k++)
            printf(" ");
        for (j = 1; j <= (2*i - 1); j++)
            printf("*");
        printf("\n");
    }
    return 0;
}