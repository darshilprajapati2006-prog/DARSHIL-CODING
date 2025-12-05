#include <stdio.h>

int main() {
    char str[200];
    char *p = str;
    int length_including = 0, length_excluding = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count length including spaces
    while (*p != '\0') {
        length_including++;

        if (*p != ' ' && *p != '\n') {
            length_excluding++;
        }

        p++;
    }

    printf("Length including spaces: %d\n", length_including - 1); // removing newline
    printf("Length excluding spaces: %d\n", length_excluding);

    return 0;
}
