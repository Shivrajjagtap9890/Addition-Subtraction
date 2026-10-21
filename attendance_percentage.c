#include <stdio.h>

void main()
{
    float classes_held, classes_attended, percentage;

    printf("Enter total classes held: ");
    scanf("%f", &classes_held);

    printf("Enter classes attended: ");
    scanf("%f", &classes_attended);

    if(classes_held > 0 && classes_attended >= 0 &&
       classes_attended <= classes_held)
    {
        percentage = (classes_attended / classes_held) * 100;
        printf("Attendance percentage = %.2f%%\n", percentage);
    }
    else
    {
        printf("Enter valid class counts.\n");
    }
}
