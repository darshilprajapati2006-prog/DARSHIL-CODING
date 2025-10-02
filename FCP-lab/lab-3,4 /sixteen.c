/*
39.⁠ ⁠PROGRAM TO PRINT 1/1! + 2/2! + 3/3! + 4/4! + ....... + N/N!.
*/

#include <stdio.h>

int main() {
    int n, i, j, fact;
    float sum = 0.0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = 1;
        for(j = 1; j <= i; j++) {
            fact = fact * j;
        }
        sum = sum + (float)i / fact;
    }

    printf("Sum of series = %.4f\n", sum);

    return 0;
}
