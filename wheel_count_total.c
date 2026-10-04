#include <stdio.h>

void main()

{

    int left_wheel, right_wheel, total;

    printf("Enter left wheel rotations: ");

    scanf("%d", &left_wheel);

    printf("Enter right wheel rotations: ");

    scanf("%d", &right_wheel);

    total = left_wheel + right_wheel;

    printf("Total wheel rotations = %d", total);

}
