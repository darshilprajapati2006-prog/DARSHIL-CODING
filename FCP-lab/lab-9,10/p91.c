#include <stdio.h>

int main() {
    int num;
    int *p = &num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int square = (*p) * (*p);
    int cube = (*p) * (*p) * (*p);

    printf("Square of %d is: %d\n", *p, square);
    printf("Cube of %d is: %d\n", *p, cube);

    return 0;
}
