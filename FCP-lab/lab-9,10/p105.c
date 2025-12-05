#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
        return;
    }

    for (int i = left; i <= right; i++) {
        // swap using pointers
        swap(str + left, str + i);

        // recurse for the next position
        permute(str, left + 1, right);

        // backtrack (restore original configuration)
        swap(str + left, str + i);
    }
}

int main() {
    char s[100];

    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    // remove trailing newline if present
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';

    int n = strlen(s);
    if (n == 0) {
        printf("Empty string.\n");
        return 0;
    }

    printf("Permutations:\n");
    permute(s, 0, n - 1);

    return 0;
}
