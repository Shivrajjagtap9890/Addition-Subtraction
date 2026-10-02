#include<stdio.h>

void main()
{
    int pressure;
    printf("Enter pressure sensor value: ");
    scanf("%d",&pressure);
    if(pressure <= 50)
        printf("Pressure Status: Safe");
    else if(pressure <= 80)
        printf("Pressure Status: Warning");
    else
        printf("Pressure Status: Danger");
}
