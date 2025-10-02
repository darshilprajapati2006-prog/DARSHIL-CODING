/*
32.⁠ ⁠PROGRAM TO FIND OUT MAX AND SECOND MAX FROM 'N' NOS.
*/

#include <stdio.h>

int main() {
    int n, i, num, max1, max2;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Need at least 2 numbers.\n");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max1 = num;
    max2 = -999999;  

    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max1) {
            max2 = max1;
            max1 = num;
        }
        else if(num > max2 && num < max1) {
            max2 = num;
        }
    }

    printf("Maximum = %d\n", max1);
    if(max2 != -999999)
        printf("Second Maximum = %d\n", max2);
    else
        printf("No second maximum found (all numbers equal).\n");

    return 0;
}
