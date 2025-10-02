/*
38.⁠ ⁠PROGRAM TO PRINT SERIES 1, 4, 9, 16, 25 ... UPTO N.
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }

    printf("\n");
    return 0;
}