// Q75. (a) Total marks obtained by each student.
//      (b) Highest marks in each subject and the Roll No. of the student who secured it.
//      (c) The student who obtained the highest total marks.

#include <stdio.h>

int main() {
    int n = 10;                       // number of students (as per question)
    int roll[10];
    int marks[10][3];
    int totals[10];
    int i, j;

    // Input
    printf("Enter roll numbers for %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Roll no of student %d: ", i+1);
        scanf("%d", &roll[i]);
    }

    printf("\nEnter marks (Subject1 Subject2 Subject3) for each student:\n");
    for (i = 0; i < n; i++) {
        printf("Marks for roll %d: ", roll[i]);
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // (a) Compute totals for each student
    for (i = 0; i < n; i++) {
        totals[i] = 0;
        for (j = 0; j < 3; j++) totals[i] += marks[i][j];
    }

    // Print totals
    printf("\n(a) Total marks obtained by each student:\n");
    printf("Roll\tSub1\tSub2\tSub3\tTotal\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n", roll[i], marks[i][0], marks[i][1], marks[i][2], totals[i]);
    }

    // (b) Highest marks in each subject and the Roll No. who secured it
    int max_sub[3];
    int max_sub_roll[3];
    for (j = 0; j < 3; j++) {
        max_sub[j] = marks[0][j];
        max_sub_roll[j] = roll[0];
    }
    for (i = 1; i < n; i++) {
        for (j = 0; j < 3; j++) {
            if (marks[i][j] > max_sub[j]) {
                max_sub[j] = marks[i][j];
                max_sub_roll[j] = roll[i];
            }
        }
    }

    printf("\n(b) Highest marks in each subject and corresponding Roll No.:\n");
    for (j = 0; j < 3; j++) {
        printf("Subject %d -> Highest = %d (Roll No. %d)\n", j+1, max_sub[j], max_sub_roll[j]);
    }

    // (c) Student with highest total marks
    int max_total = totals[0];
    int max_total_roll = roll[0];
    for (i = 1; i < n; i++) {
        if (totals[i] > max_total) {
            max_total = totals[i];
            max_total_roll = roll[i];
        }
    }

    printf("\n(c) Student with highest total marks:\n");
    printf("Roll No. %d with Total = %d\n", max_total_roll, max_total);

    return 0;
}

