#include <stdio.h>
int sub5(int);
int main() // ~ program to subtract the given value by 5 using functions.

{

    int a, b;
    scanf("%d", &a);
    printf("ans is %d", sub5(a));

    return 0;
}

int sub5(int a) // ^ function to subtract 5.
{

    a -= 5;
    return a;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.