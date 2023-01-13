#include <stdio.h>
int main() // ~ basic program to change the value of integer using pointers.
{

    int a, b, *p;

    printf("Enter value\n");
    scanf("%d", &a);
    printf("Value to be changed\n");
    scanf("%d", &b);

    p = &a;
    *p = b;

    printf("Changed value = %d", a);

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.