#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n;

    fp = fopen("LNMIITSTUDENT.dat", "a"); // append mode
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 0;
    }

    printf("Enter number of students to append: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Total Marks: ");
        scanf("%f", &s.marks);

        // write structure to file in binary format
        fwrite(&s, sizeof(struct Student), 1, fp);
    }

    fclose(fp);

    printf("\nStudent details appended to LNMIITSTUDENT.dat successfully!\n");

    return 0;
}
