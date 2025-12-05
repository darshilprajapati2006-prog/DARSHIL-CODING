#include <stdio.h>

int main() {
    char str[300];
    char *p = str;
    int words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Skip leading spaces
    while (*p == ' ' || *p == '\t' || *p == '\n') {
        p++;
    }

    if (*p != '\0') {
        words = 1; // at least one word exists
    }

    while (*p != '\0') {
        if ((*p == ' ' || *p == '\t' || *p == '\n') &&
            (*(p + 1) != ' ' && *(p + 1) != '\t' && *(p + 1) != '\n' && *(p + 1) != '\0')) {
            words++;
        }
        p++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}
