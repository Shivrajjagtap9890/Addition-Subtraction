#include <stdio.h>

void main()
{
    int i, limit, sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    for(i = 1; i <= limit; i++)
    {
        if(i % 2 != 0)
            sum = sum + i;
    }

    printf("Sum of odd numbers from 1 to %d = %d\n", limit, sum);
}
