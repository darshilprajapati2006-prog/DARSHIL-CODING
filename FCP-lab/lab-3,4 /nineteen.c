/*
42.⁠ ⁠READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.
*/

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("%d is neither Prime nor Composite.\n", n);
        return 0;
    }

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is a Composite Number.\n", n);

    return 0;
}