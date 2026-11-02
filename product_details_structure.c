#include <stdio.h>

struct Product
{
    int productId;
    char productName[50];
    float price;
    int quantity;
};

void main()
{
    struct Product p;
    float total;

    printf("Enter product ID: ");
    scanf("%d", &p.productId);

    printf("Enter product name: ");
    scanf(" %49[^\n]", p.productName);

    printf("Enter price: ");
    scanf("%f", &p.price);

    printf("Enter quantity: ");
    scanf("%d", &p.quantity);

    total = p.price * p.quantity;

    printf("\nProduct Details\n");
    printf("ID: %d\n", p.productId);
    printf("Name: %s\n", p.productName);
    printf("Price: %.2f\n", p.price);
    printf("Quantity: %d\n", p.quantity);
    printf("Total cost: %.2f", total);
}
