#include <stdio.h>

void main()
{
    float base, height, area;

    printf("Enter triangle base: ");
    scanf("%f", &base);

    printf("Enter triangle height: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Area of triangle = %.2f", area);
}
