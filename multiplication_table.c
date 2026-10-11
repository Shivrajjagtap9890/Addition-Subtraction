#include <stdio.h>

void main()
{
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
