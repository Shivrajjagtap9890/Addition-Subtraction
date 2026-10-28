#include <stdio.h>

void main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("This month has 31 days.\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("This month has 30 days.\n");
            break;

        case 2:
            printf("February has 28 days in a normal year.\n");
            break;

        default:
            printf("Invalid month number.\n");
    }
}
