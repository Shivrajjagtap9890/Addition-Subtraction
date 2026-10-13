#include <stdio.h>

void main()
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number from 0 to 20: ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Please enter a number from 0 to 20.");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("Factorial of %d = %llu", n, fact);
    }
}
