#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

void main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.rollNumber);

    printf("Enter name: ");
    scanf(" %49[^\n]", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Record\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
