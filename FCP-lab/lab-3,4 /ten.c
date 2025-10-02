/*
33.⁠ ⁠PROGRAM TO FIND OUT MAX AND MIN FROM 'N' NOS.
*/

#include <stdio.h>

int main() {
    int n, i, num, max, min;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if(n < 1) {
        printf("Need at least 1 number.\n");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
    min = num;

    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
            max = num;
        if(num < min)
            min = num;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}