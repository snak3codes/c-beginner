#include <stdio.h>
#include <stdlib.h>

// Define item structure
struct item {
    char* itemName;
    int quantity;
    float price;
    float amount;
};

// Prototypes
void readItem(struct item* i);
void printItem(struct item* i);

// main function
int main()
{
    // == Structure Pointers and Functions ==
    struct item item1;
    struct item* pItem;
    pItem = &item1;

    // Assign memory for itemName
    pItem->itemName = (char*)malloc(30 * sizeof(char));

    // Check for NULL
    if (!pItem)
        return -1;

    // read item
    readItem(pItem);

    // print item
    printf("\n-- Order Details --");
    printItem(pItem);

    // Free memory allocated for itemName
    free(pItem->itemName);

    return 0;
}

void readItem(struct item* i)
{
    printf("Enter product name: ");
    scanf("%s", i->itemName);

    printf("Enter price: ");
    scanf("%f", &i->price);

    printf("Enter quantity: ");
    scanf("%d", &i->quantity);

    i->amount = (float)i->quantity * i->price;
}

void printItem(struct item* i)
{
    printf("\nName: %s\nPrice: %.2f\nQuantity: %d\nTotal Amount: %.2f\n",
        i->itemName, i->price, i->quantity, i->amount);
}
