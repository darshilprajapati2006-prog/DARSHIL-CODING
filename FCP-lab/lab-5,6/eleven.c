// Q55. COUNT ODD AND EVEN NUMBERS

#include <stdio.h>

int main() {
    int a[10], i, even = 0, odd = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nTotal Even Numbers = %d", even);
    printf("\nTotal Odd Numbers = %d\n", odd);

    return 0;
}
