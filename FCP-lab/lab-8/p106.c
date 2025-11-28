#include <stdio.h>
#include <string.h>

struct item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

int main() {
    struct item it;

    printf("Enter item name: ");
    fgets(it.item_name, sizeof(it.item_name), stdin);
    it.item_name[strcspn(it.item_name, "\n")] = '\0';

    printf("Enter quantity: ");
    scanf("%d", &it.quantity);

    printf("Enter price: ");
    scanf("%f", &it.price);

    it.amount = it.quantity * it.price;

    printf("\n--- Item Details ---\n");
    printf("Item Name : %s\n", it.item_name);
    printf("Quantity  : %d\n", it.quantity);
    printf("Price     : %.2f\n", it.price);
    printf("Amount    : %.2f\n", it.amount);

    return 0;
}
