#include <stdio.h>
void sum(int *, int *, int *);
void main() // ~ program to print sum of elements in an array.
{

    int n, k = 0, i, *p, *s, *l;
    int ar1[n];

    printf("No.of Elements\n");
    scanf("%d", &n);
    printf("Enter Elements\n");

    for (i = 0; i < n; i++)

        scanf("%d", &ar1[i]);

    p = &ar1[0];
    s = &k;
    l = &n;

    sum(p, s, l);
    printf("%d", *s);
}

void sum(int *a, int *b, int *c) // ^ function to print sum of elements in an array.
{

    int i;

    for (i = 0; i < *c; i++)
        *b = *b + *(a + i);
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.