/*
26.⁠ ⁠PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
*/

#include <stdio.h>

int main() {
    int n, i, sumEven = 0, sumOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0)
            sumEven += i;
        else
            sumOdd += i;
    }

    printf("Sum of even numbers between 1 and %d = %d\n", n, sumEven);
    printf("Sum of odd numbers between 1 and %d = %d\n", n, sumOdd);

    return 0;
}
