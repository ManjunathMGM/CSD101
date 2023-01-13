#include <stdio.h>
int convert(int);
int main() // ~ program to convert a number into binary system.
{

    int a;

    scanf("%d", &a);
    printf("%d", convert(a));

    return 0;
}

int convert(int dec) // ~ recursive function to convert a no. into binary system.
{

    int b;

    if (dec == 0)
        return 0;
    else
    {
        b = (dec % 2) + (10 * convert(dec / 2));
        return b;
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.