/*              -:  NUMBER GUESSING GAME 🎮  :-                          */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, mode, R_N, N_O_G = 0, G_N;
    printf("Easy-> 1 , Medium-> 2 , Hard-> 3 \n");
    printf("Enter mode number : ");
    scanf("%d", &mode);
    if (mode == 1)
    {
        n = 75;
    }
    else if (mode == 2)
    {
        n = 200;
    }
    else if (mode == 3)
    {
        n = 500;
    }
    else
    {
        printf("Wrong mode number !");
        return 0;
    }
    srand(time(0));
    R_N = (rand() % n) + 1;
    do
    {
        printf("\nGuess the number =");
        scanf("%d", &G_N);
        if (G_N > R_N)
        {
            printf("Your number is High please enter Lower number !");
        }
        else if (G_N < R_N)
        {
            printf("Your number is Low please enter Higher number!");
        }
        else
        {
            printf("Congrats !\n");
        }
        N_O_G++;
    } while (G_N != R_N);

    if (n == 75)
    {
        if (N_O_G <= 6)
        {
            printf("\nExlaint 🎉\n");
            printf("⭐⭐⭐");
        }
        else if (N_O_G <= 10)
        {
            printf("\nGood 🎉\n");
            printf("⭐⭐");
        }
        else if (N_O_G <= 15)
        {
            printf("\nAverage 🎉\n");
            printf("   ⭐");
        }
        else
        {
            printf("\nPoor 😅\n");
        }
    }
    else if (n == 200)
    {
        if (N_O_G <= 8)
        {
            printf("\nExlaint 🎉\n");
            printf("⭐⭐⭐");
        }
        else if (N_O_G <= 12)
        {
            printf("\nGood 🎉\n");
            printf("⭐⭐");
        }
        else if (N_O_G <= 20)
        {
            printf("\nAverage 🎉\n");
            printf("⭐");
        }
        else
        {
            printf("\nPoor 😅\n");
        }
    }
    else if (n == 500)
    {

        if (N_O_G <= 9)
        {
            printf("\nExlaint 🎉\n");
            printf("⭐⭐⭐");
        }
        else if (N_O_G <= 15)
        {
            printf("\nGood 🎉\n");
            printf("⭐⭐");
        }
        else if (N_O_G <= 25)
        {
            printf("\nAverage 🎉\n");
            printf("⭐");
        }
        else
        {
            printf("\nPoor 😅\n");
        }
    }
    printf("You guessed the number in %d guesses", N_O_G);

    return 0;
}