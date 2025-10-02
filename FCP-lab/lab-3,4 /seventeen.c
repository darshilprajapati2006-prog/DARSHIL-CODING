/*
40.⁠ ⁠READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.
*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (enter a negative number to stop):\n");

    while(1) {
        scanf("%d", &num);
        if(num < 0)
            break;
        sum += num;
    }

    printf("Sum of numbers = %d\n", sum);

    return 0;
}