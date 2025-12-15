#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
    int salary;
};
    void readBook(struct Book *b);
    void displayBook(struct Book *b);

    int main() {
    struct Book b;

    readBook(&b);
    displayBook(&b);

    return 0;
}


void readBook(struct Book *b) {
    printf("Enter title: ");
    scanf("%s", b->title);

    printf("Enter author: ");
    scanf("%s", b->author);

    printf("Enter price: ");
    scanf("%f", &b->price);

    b->salary = b->price > 300;
}

void displayBook(struct Book *b) {
    printf("\n--- Book Information ---\n");
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Price: %.2f\n", b->price);
    printf("salary: %d\n", b->salary);
}

