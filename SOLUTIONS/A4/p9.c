#include <stdio.h>
#include <stdlib.h>

void main() // ~ program to write a number guessing game.
{

    int input, r_no, i;
    char ans;

    r_no = rand() % 1000; // ? remainder lies btw 0 and 1000.

    printf("I have a number between 1 and 1000\n");
    printf("Can you guess my number?\n");
    printf("Please type your first guess.\n");
    scanf("%d", &input);

    for (i = 0; i >= 0; i++) // ? number check
    {
        if (input == r_no)
        {
            printf("Excellent! You guessed the number!\n");
            printf("Would you like to play again(y or n)?\n");
            break; // Leaving this program here like this
            // Because, in the ques, there's no information
            // Whether to carry on the program after saying yes or no.
        }
        else if (input > r_no)
        {
            printf("Too High.Try Again\n");
            scanf("%d", &input);
        }
        else if (input < r_no)
        {
            printf("Too Low. Try Again\n");
            scanf("%d", &input);
        }
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.