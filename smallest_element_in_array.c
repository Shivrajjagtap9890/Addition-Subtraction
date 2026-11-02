#include <stdio.h>

void main()
{
    int numbers[5], i, smallest;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &numbers[i]);

    smallest = numbers[0];

    for (i = 1; i < 5; i++)
    {
        if (numbers[i] < smallest)
            smallest = numbers[i];
    }

    printf("Smallest number = %d", smallest);
}
