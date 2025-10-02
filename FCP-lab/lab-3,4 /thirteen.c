/*
36.⁠ ⁠PROGRAM TO PRINT SERIES 1, 3, 5, 7, 9 ... UPTO N.
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Series: ");
    for(i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}