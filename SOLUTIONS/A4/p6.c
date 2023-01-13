#include <stdio.h>
int multiple(int, int);
int main() // ~ program to check if 'b' is multiple of 'a'.
{

    int a, b;
    scanf("%d%d", &a, &b);
    printf("Result is %d", multiple(a, b));

    return 0;
}

int multiple(int a, int b) // ^ function to check if the 2nd no is multiple of 1st no or not.
{
    if (b % a == 0) // ? remainder check
        return 1;
    else
        return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.