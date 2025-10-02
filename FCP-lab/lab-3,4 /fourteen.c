/*
37.⁠ ⁠PROGRAM TO PRINT SERIES 2, 4, 6, 8, 10 ... UPTO N.
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Series: ");
    for(i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
