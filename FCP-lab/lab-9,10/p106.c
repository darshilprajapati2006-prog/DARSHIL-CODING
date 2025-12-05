#include <stdio.h>

struct Item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

// Function to read item details and calculate amount
void readItem(struct Item *it) {
    printf("Enter item name: ");
    scanf("%s", it->item_name);

    printf("Enter quantity: ");
    scanf("%d", &it->quantity);

    printf("Enter price: ");
    scanf("%f", &it->price);

    it->amount = it->quantity * it->price;
}

int main() {
    struct Item it;

    readItem(&it);

    printf("\n--- ITEM DETAILS ---\n");
    printf("Item Name: %s\n", it.item_name);
    printf("Quantity: %d\n", it.quantity);
    printf("Price: %.2f\n", it.price);
    printf("Amount: %.2f\n", it.amount);

    return 0;
}
