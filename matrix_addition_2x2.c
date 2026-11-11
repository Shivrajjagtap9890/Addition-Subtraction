#include <stdio.h>

void main()
{
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of matrices:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}
