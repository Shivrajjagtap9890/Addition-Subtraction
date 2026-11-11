#include <stdio.h>

void main()
{
    int original[5], copied[5], i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &original[i]);

    for (i = 0; i < 5; i++)
        copied[i] = original[i];

    printf("Copied array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", copied[i]);
}
