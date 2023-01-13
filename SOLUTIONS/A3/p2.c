#include <stdio.h>
int main() // ~ basic program to calculate the factorial of a number.
{

    int i, n, fact = 1;
    scanf("%d", &i);

    if (i < 0)
        printf("ERROR! Enter a Positive Number");
    else // ? factorial
    {
        for (n = 1; n <= i; n++)
            fact *= n;
        printf("factorial of %d is %d", i, fact);
    }

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.