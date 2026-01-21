#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;

void insert(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) printf(" -> ");
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, rev = 0, d;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    while (rev > 0) {
        d = rev % 10;
        insert(d);
        rev /= 10;
    }

    printf("Linked List: ");
    display();

    return 0;
}