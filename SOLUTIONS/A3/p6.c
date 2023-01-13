#include <stdio.h>
int main() // ~ basic program to check how many times a number is repeated in the array.
{
    
    int A[20], x, i, r = 0;

    for (i = 1; i < 21; i++) // ? inputs of the matrix (20 numbers).
        scanf("%d", &A[i - 1]);

    printf("Enter the no to be searched:\n");
    scanf("%d", &x);

    for (i = 0; i < 20; i++) // ? number search
    {
        if (A[i] == x)
            r++;
    }

    if (r == 0)
        printf("Not in the Array");

    if (r != 0)
        printf(" %d is Repeated %d times", x, r);

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.