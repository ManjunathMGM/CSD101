#include <stdio.h>
int main() // ~ basic program to check wheather the number is divisible by 5 and 11.
{

    int a;
    scanf("%d", &a);

    if ((a % 5 == 0) && (a % 11 == 0)) // ? remainder check
        printf("A IS DIVISIBLE BY BOTH 5 AND 11");
    else
        printf("A IS NOT DIVISIBLE BY BOTH 5 AND 11");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.