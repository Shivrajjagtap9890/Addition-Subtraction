#include <stdio.h>

void main()
{
    int answer, score = 0;

    printf("Mini Quiz!\n");
    printf("What is 7 x 6? ");
    scanf("%d", &answer);

    if (answer == 42)
    {
        printf("Correct!\n");
        score = score + 1;
    }
    else
        printf("Not quite! The answer is 42.\n");

    printf("Your score: %d out of 1\n", score);
}