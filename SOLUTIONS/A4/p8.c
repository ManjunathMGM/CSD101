#include <stdio.h>
#include <stdlib.h>
int flip();
int main() // ~ program to calculate no. of heads and tails when a coin is tossed 100 times.
{

    int tails = 0, heads = 0, a;

    for (int i = 0; i < 100; i++)
    {
        a = flip();
        if (a == 0) // ? heads and tails check.
            tails += 1;
        else
            heads += 1;
    }
    printf("No of heads= %d\nNo of tails=%d", heads, tails);

    return 0;
}

int flip() // ^ function to return either 1 or 0 on a random basis.
{

    int toss;
    toss = (rand() % 2); // ? remainder = 1 or 0

    return toss;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.