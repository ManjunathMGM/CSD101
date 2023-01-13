#include <stdio.h>
int main() // ~ basic program to move all the zeros to the right side of an array.
{

    int n;
    printf("Enter Array size\n");
    scanf("%d", &n);

    int A[n], B[n];
    int temp, i, j = 0;
    int x;

    for (i = 0; i < n; i++) // ? Matrix inputs
    {
        printf("Enter %d Element:\n", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++) // ? Removing all the zeros
    {
        if (A[i] != 0)
        {
            B[j] = A[i];
            j++;
        }
    }

    while (j < n) // ? Moving all the zeros to the end.
    {
        B[j] = 0;
        j++;
    }

    for (i = 0; i < n; i++) // ? Printing the new number
    {
        printf("%d", B[i]);
    }
    
    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.