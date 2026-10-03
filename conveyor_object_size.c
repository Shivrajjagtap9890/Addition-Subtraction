#include <stdio.h>

void main()

{

    float size;

    printf("Enter object size in cm: ");

    scanf("%f", &size);

    if (size < 5)

    {

        printf("Object: Small");

    }

    else if (size <= 15)

    {

        printf("Object: Medium");

    }

    else

    {

        printf("Object: Large");

    }

}
