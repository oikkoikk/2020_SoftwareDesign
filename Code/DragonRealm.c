#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WINDOWS
#include <windows.h>

#else
#include <unistd.h>
#define sleep(x) usleep((x)*1000)

#endif

void displayIntro();
int chooseCave(void);
void checkCave(int chooseCave);

int main()
{
    char playAgain[5] = "yes";
    int caveNumber;

    while (strcmp(playAgain, "yes") == 0 || (strcmp(playAgain, "y") == 0))
    {
        displayIntro();

        caveNumber = chooseCave();
        checkCave(caveNumber);

        printf("Do you want to play again? (yes or no)\n");
        scanf("%s", playAgain);
    }

    return 0;
}
void displayIntro()
{
    printf("You are in a land full of dragons. In front of you, \n");
    printf("you see two caves. In one cave, the dragon is friendly\n");
    printf("and will share his treasure with you. The other dragon\n");
    printf("is greedy and hungry, and will eat you on sight.\n\n");
}

int chooseCave()
{
    int cave = 0;

    while (cave != 1 && cave != 2)
    {
        printf("Which cave will you go into? (1 or 2) \n");
        scanf("%d", &cave);
    }

    return cave;
}

void checkCave(int chooseCave)
{
    int friendlyCave;

    printf("You approach the cave...\n");
    sleep(2000);
    printf("It is dark and spooky...\n");
    sleep(2000);
    printf("A large dragon jumps out in front of you! He opens his jaws and...\n\n");
    sleep(2000);

    srand(time(NULL));
    friendlyCave = (rand() % 2) + 1;

    if (chooseCave == friendlyCave)
        printf("Gives you his treasure!\n");
    else
        printf("Gobbles you down in one bite!\n");
}
