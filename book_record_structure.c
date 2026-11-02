#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    float price;
};

void main()
{
    struct Book b;

    printf("Enter book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter book title: ");
    scanf(" %49[^\n]", b.title);

    printf("Enter book price: ");
    scanf("%f", &b.price);

    printf("\nBook Record\n");
    printf("ID: %d\n", b.bookId);
    printf("Title: %s\n", b.title);
    printf("Price: %.2f", b.price);
}
