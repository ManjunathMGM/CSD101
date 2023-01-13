#include <stdio.h>
int main() // ~ basic program to multiply two 3x3 matrices
{

    int A[3][3], B[3][3], C[3][3];
    int i, j;

    for (i = 0; i < 3; i++) // ? inputs of matrix 1.
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the Value A%d%d\n", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++) // ? inputs of matrix 2.
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the Value B%d%d\n", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++) // ? lengthy process of multiplying both the matrices *sighs*.
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j && i == 0)

                C[i][j] = (A[i][j] * B[j][i]) + (A[i][j + 1] * B[i + 1][j]) + (A[i][j + 2] * B[i + 2][j]);

            if (i == j && i == 1)

                C[i][j] = (A[i][j - 1] * B[j - 1][i]) + (A[i][j] * B[i][j]) + (A[i][j + 1] * B[i + 1][j]);

            if (i == j && i == 2)

                C[i][j] = (A[i][j - 2] * B[j - 2][i]) + (A[i][j - 1] * B[i - 1][j]) + (A[i][j] * B[i][j]);

            if (i < j && i == 0 && j == 1)

                C[i][j] = (A[i][j - 1] * B[i][j]) + (A[i][j] * B[i + 1][j]) + (A[i][j + 1] * B[i + 2][j]);

            if (i < j && i == 0 && j == 2)

                C[i][j] = (A[i][j - 2] * B[i][j]) + (A[i][j - 1] * B[i + 1][j]) + (A[i][j] * B[i + 2][j]);

            if (i > j && i == 1 && j == 0)

                C[i][j] = (A[i][j] * B[i - 1][j]) + (A[i][j + 1] * B[i][j]) + (A[i][j + 2] * B[i + 1][j]);

            if (i < j && i == 1 && j == 2)

                C[i][j] = (A[i][j - 2] * B[i - 1][j]) + (A[i][j - 1] * B[i][j]) + (A[i][j] * B[i + 1][j]);

            if (i > j && i == 2 && j == 0)

                C[i][j] = (A[i][j] * B[i - 2][j]) + (A[i][j + 1] * B[i - 1][j]) + (A[i][j + 2] * B[i][j]);

            if (i > j && i == 2 && j == 1)

                C[i][j] = (A[i][j - 1] * B[i - 2][j]) + (A[i][j] * B[i - 1][j]) + (A[i][j + 1] * B[i][j]);
        }
    }

    for (i = 0; i < 3; i++) // ? printing the result.
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.