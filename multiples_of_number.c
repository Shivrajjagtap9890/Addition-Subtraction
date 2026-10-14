#include <stdio.h>

void main()
{
    int n, limit, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("How many multiples do you want? ");
    scanf("%d", &limit);

    if (limit > 0)
    {
        for (i = 1; i <= limit; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
    else
    {
        printf("Please enter a positive limit.");
    }
}
