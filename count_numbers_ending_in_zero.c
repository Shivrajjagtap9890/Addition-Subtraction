#include <stdio.h>

void main()
{
    int i, n, number;
    int count = 0;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if(number % 10 == 0)
            count++;
    }

    printf("Numbers ending in zero = %d\n", count);
}
