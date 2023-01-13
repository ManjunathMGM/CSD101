#include <stdio.h>
int main() // ~ basic program to check weather 'a' is multiple of 'b'.
{

    int a, b;
    scanf("%d%d", &a, &b);

    if (a % b == 0) // ? remainder check
        printf("a is the multiple of b");
    else
        printf("a is not the multiple of b");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.