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

    fp = fopen("LNMIITSTUDENT.java", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Total Marks: ");
        scanf("%f", &s.marks);

        // Write to file
        fprintf(fp, "Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);

    printf("\nStudent details written to LNMIITSTUDENT.java successfully!\n");

    return 0;
}
