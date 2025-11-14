#include <stdio.h>

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int main() {
    char text[200];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    printf("Length = %d\n", stringLength(text));

    return 0;
}
