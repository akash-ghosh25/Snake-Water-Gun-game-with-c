#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // Seed the random number generator

    int computer = rand() % 3; // Generates a random number between 0 and 2
    int player;
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */
    printf("Choose 0 for snake, 1 for Water, 2 for Gun: \n");
    scanf("%d", &player);
    printf("Computer choose = %d\n", computer);

    if (player == computer)
    {
        printf("Its a Draw! Play again\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("TYou Lose\n");
    }
    else
        printf("Something went wrong!\n");

    return 0;
}