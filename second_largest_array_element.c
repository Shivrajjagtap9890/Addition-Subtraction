#include <stdio.h>

void main()
{
    int a[6], i, largest, second, found = 0;

    printf("Enter 6 numbers:\n");
    for (i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    largest = a[0];

    for (i = 1; i < 6; i++)
        if (a[i] > largest)
            largest = a[i];

    for (i = 0; i < 6; i++)
    {
        if (a[i] < largest)
        {
            if (found == 0 || a[i] > second)
            {
                second = a[i];
                found = 1;
            }
        }
    }

    if (found == 1)
        printf("Second largest distinct value = %d", second);
    else
        printf("A second distinct value does not exist.");
}
