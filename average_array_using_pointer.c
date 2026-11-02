#include <stdio.h>

void main()
{
    int numbers[5], i, *ptr;
    int sum = 0;
    float average;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &numbers[i]);

    ptr = numbers;

    for (i = 0; i < 5; i++)
        sum = sum + *(ptr + i);

    average = sum / 5.0;
    printf("Average = %.2f", average);
}
