#include <stdio.h>
void seq(int *);
void main() // ~ program to fill and print an array with the values following the given formulae.
{

    int arr[30], *p, i;

    p = &arr[0];
    seq(p);

    for (i = 0; i < 31; i++)
        printf("%d\n", arr[i]);
}

void seq(int *p) // ^ function to fill the array with given values.
{

    int i;

    *p = 0;
    *(p + 1) = 1;
    *(p + 2) = 1;
    for (i = 3; i <= 30; i++)
        *(p + i) = *(p + (i - 1)) + *(p + (i - 3)); // ? Tₙ = Tₙ₋₁ + Tₙ₋₃
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.