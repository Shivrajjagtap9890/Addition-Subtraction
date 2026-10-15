#include <stdio.h>

void main()
{
    int i, n, count = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Numbers divisible by 5:\n");

    for(i = 1; i <= n; i++)
    {
        if(i % 5 == 0)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal numbers divisible by 5 = %d\n", count);
}
