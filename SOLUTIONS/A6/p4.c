#include <stdio.h>
#include <math.h>
int power(int); // ~ program to print value of 2ⁿ.
int main()
{

    int a;

    scanf("%d", &a);
    printf("%d", power(a));
    return 0;
}

int power(int a) // ^ recursive function to calculate 2ⁿ.
{

    if (a == 0)
        return 1;
    else
        return (2 * power(a - 1));
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.