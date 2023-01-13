#include <stdio.h>
void shift(int, int, int);
int main() // ~ program to perform a right circular shift.
{

    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);
    printf("Values\nx= %d\ty=%d\tz=%d\n", x, y, z);
    printf("After a shift:\n");

    shift(x, y, z);

    return 0;
}

void shift(int x, int y, int z) // ^ function to perform a right circular shift.
{

    int a;

    a = x;
    x = z;
    z = y;
    y = a;

    printf("Values\ny= %d\tz=%d\tx=%d", y, z, x);
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.