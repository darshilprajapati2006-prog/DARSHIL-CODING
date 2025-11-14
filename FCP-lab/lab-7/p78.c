#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    int t = n;

    while (t != 0) {
        digits++;
        t /= 10;
    }

    while (temp != 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}
