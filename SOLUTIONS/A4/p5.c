#include <stdio.h>
void square(int);
void main() // ~ program to print a square of asterisks.
{

    int a;
    printf("Enter side");
    scanf("%d", &a);

    square(a);
}

void square(int a) // ^ function to print square.
{

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
            printf("*  ");
        printf("\n");
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.