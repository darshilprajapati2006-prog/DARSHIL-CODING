

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[50][100], temp[100];

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Strings in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}