// Q56. COUNT POSITIVE, NEGATIVE AND ZERO NUMBERS

#include <stdio.h>

int main() {
    int a[10], i, pos = 0, neg = 0, zero = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("\nTotal Positive Numbers = %d", pos);
    printf("\nTotal Negative Numbers = %d", neg);
    printf("\nTotal Zeros = %d\n", zero);

    return 0;
}
