#include <stdio.h>

void main()
{
    int blinks, i;
    printf("Enter number of LED blinks (1 to 10): ");
    scanf("%d", &blinks);
    if (blinks >= 1 && blinks <= 10)
    {
        for (i = 1; i <= blinks; i++)
        {
            printf("Blink %d: LED ON\n", i);
            printf("Blink %d: LED OFF\n", i);
        }
    }
    else
        printf("Enter a number from 1 to 10.\n");
}
