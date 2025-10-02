/*
34.⁠ ⁠PROGRAM TO PRINT FIBONACCI SERIES. (0,1,1,2,3,5,8,....N TERMS)
*/

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}