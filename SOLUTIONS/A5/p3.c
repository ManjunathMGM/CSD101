#include <stdio.h>
int reverse(int);
int main() // ~ program to reverse a number
{

    int a;
    scanf("%d", &a);
    printf("reverse no is %d", reverse(a));

    return 0;
}

int reverse(int a) // ^ recursive function to reverse the number.
{

    int b, c = 0;

    while (a != 0)
    {
        b = a % 10;
        c = (c * 10) + b;
        a = a / 10;

        reverse(a);
    }

    return c;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.