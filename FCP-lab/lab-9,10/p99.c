

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int count = 0;

    printf("Enter filename to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); // convert to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            count++;
        }
    }

    fclose(fp);

    printf("Number of vowels in the file: %d\n", count);

    return 0;
}