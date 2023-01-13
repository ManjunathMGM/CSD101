#include <stdio.h>
int squaresum(int);
int main() // ~ program to print sum of squares of consecutive numbers.
{

    int a;

    scanf("%d", &a);
    printf("%d", squaresum(a));

    return 0;
}

int squaresum(int a) // ^ recursive function to calculate sum of squares of consecutive numbers
{

    if (a == 0 || a == 1)
        return a;
    else
        return ((a * a) + squaresum(a - 1));
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.