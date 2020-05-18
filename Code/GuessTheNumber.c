#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    char name[10];
    int guessesTaken, guess, number;
    number = (rand() % 20) + 1;

    guessesTaken = 0;
    printf("Hello! What is your name?\n");
    scanf("%s", name);

    printf("Well, %s, I am thinking of a number between 1 and 20\n", name);

    while (guessesTaken < 6)
    {
        printf("Take a guess.\n");
        scanf("%d", &guess);
        guessesTaken += 1;

        if (guess < number)
            printf("Your guess is too low.\n");
        else if (guess > number)
            printf("Your guess is too high\n");
        else
            break;
    }

    if (guess == number)
    {
        printf("Good job, %s! You guessed my number in %d guesses!\n", name, guessesTaken);
    }
    else
    {
        printf("Nope. The number I was thinking of was %d\n", number);
    }

    return 0;
}