#include <stdio.h>
void fact(int *, int *);
void main() // ~ program to compute factorial.
{

    int x, *p, *q, y;
    printf("Enter a no");
    scanf("%d", &x);

    y = x;
    p = &x;
    q = &y;

    fact(p, q);
}

void fact(int *p, int *q) // ^ function to calculate factorial.
{

    int i;

    for (i = 0; i >= 0; i++)
    {
        if (*q == 0)
        {
            *p = 1;
            break;
        }
        if (*q == 1)
        {
            *p = *p * *q;
            break;
        }
        else
        {
            *q = *q - 1;
            *p = *p * *q;
        }
    }

    printf("ans is %d", *p);
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.