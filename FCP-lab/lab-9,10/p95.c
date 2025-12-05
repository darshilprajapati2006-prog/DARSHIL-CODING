#include <stdio.h>

struct Employee {
    int emp_no;
    char name[50];
    float basic_pay;
};

int main() {
    struct Employee employ[50];
    struct Employee *ptr = employ;
    int n;

    printf("Enter number of employees (max 50): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &(ptr + i)->emp_no);

        printf("Employee Name: ");
        scanf("%s", (ptr + i)->name);

        printf("Basic Pay: ");
        scanf("%f", &(ptr + i)->basic_pay);
    }

    printf("\n--- Employee Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Number: %d\n", (ptr + i)->emp_no);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Basic Pay: %.2f\n", (ptr + i)->basic_pay);
    }

    return 0;
}
