#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
    int pages;
};
    struct Book readBook();
    void displayBook(struct Book b);
    int countBooks(struct Book b[], int n);

int main() {
    struct Book b[5];
    int count;

    for(int i = 0; i < 5; i++) {
        printf("\nEnter details of book %d\n", i + 1);
        b[i] = readBook();
    }

    count = countBooks(b, 5);
    printf("\nNumber of books with more than 50 pages = %d\n", count);

    return 0;
}


struct Book readBook() {
    struct Book b;
    printf("Enter title: ");
    scanf("%s", b.title);

    printf("Enter author: ");
    scanf("%s", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);
    printf("Enter number of pages: ");
    scanf("%d", &b.pages);
    return b;
}

void displayBook(struct Book b) {
    printf("\n--- Book Information ---\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int countBooks(struct Book b[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++){
        if(b[i].pages > 50)
            count++;
    }
    return count;
}

