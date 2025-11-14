#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void displayAbove500(struct Student s[], int n) {
    printf("\nStudents with marks > 500:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].marks > 500) {
            printf("Name: %s  Roll: %d  Marks: %d\n", s[i].name, s[i].roll, s[i].marks);
        }
    }
}

int main() {
    struct Student s[10];

    for (int i = 0; i < 10; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    displayAbove500(s, 10);

    return 0;
}
