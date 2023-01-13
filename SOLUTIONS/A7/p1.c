#include <stdio.h>
void shift(int *, int *, int *);
void main() // ~ program to perform a cyclic shift using pointers.
{

    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    printf("Values\nx= %d\ty=%d\tz=%d\n", a, b, c);
    printf("After a shift:\n");

    shift(&a, &b, &c);
}

void shift(int *p, int *q, int *r) // ^ function performing the cyclic shift.
{

    int x, y;

    x = *p;
    y = *q;
    *p = *r;
    *r = y;
    *q = x;

    printf("x=%d\ty=%d\tz=%d\n", *p, *q, *r);
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.