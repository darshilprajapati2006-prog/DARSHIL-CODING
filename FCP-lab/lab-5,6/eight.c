// Q52. PALINDROME NUMBER PATTERN

#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;
    for (i = 1; i <= rows; i++) {
        for (space = i; space < rows; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}