#include <stdio.h>

void main()
{
    int status, i;

    printf("===== ROBOT PARKING SCANNER =====\n");

    for (i = 1; i <= 5; i++)
    {
        printf("\nEnter status for slot %d (1=Occupied, 0=Free): ", i);
        scanf("%d", &status);

        if (status == 1)
        {
            printf("Slot %d: Occupied", i);
        }
        else
        {
            printf("Slot %d: Free", i);
        }
    }

    printf("\n\nParking scan completed.");
}
