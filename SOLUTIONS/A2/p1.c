#include <stdio.h>
int main() // ~ basic program to print the greatest value.
{

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
        printf("A IS THE GREATEST NUMBER");
    else if (b > a && b > c)
        printf("B IS THE GREATEST NUMBER");
    else
        printf("C IS THE GREATEST NUMBER");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.