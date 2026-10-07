#include <stdio.h>

void main()
{
    int stations, i;

    printf("Enter number of robot stations: ");
    scanf("%d", &stations);

    printf("Robot station numbers:\n");

    for (i = 1; i <= stations; i++)
    {
        printf("Station %d\n", i);
    }
}