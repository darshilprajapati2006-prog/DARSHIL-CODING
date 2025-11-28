#include <stdio.h>
#include <string.h>

int count = 0;

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l, int r) {
    if (l == r) {
        printf("%s\n", a);
        count++;
    } else {
        for (int i = l; i <= r; i++) {
            swap(&a[l], &a[i]);
            permute(a, l + 1, r);
            swap(&a[l], &a[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) return 0;
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);
    if (n > 0) permute(str, 0, n - 1);
    printf("Total permutations: %d\n", count);

    return 0;
}
