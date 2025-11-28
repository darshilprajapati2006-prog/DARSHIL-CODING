#include <stdio.h>

int main() {
    char str[200];
    int i, length_including = 0, length_excluding = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            length_including++;
        }
        if (str[i] != ' ' && str[i] != '\n') {
            length_excluding++;
        }
    }

    printf("Length including spaces: %d\n", length_including);
    printf("Length excluding spaces: %d\n", length_excluding);

    return 0;
}
