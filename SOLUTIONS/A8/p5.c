#include <stdio.h>
#include <stdlib.h>
int main() // ~ program to dynamically allocate memories to matrices and perform their multiplication using malloc() function.
{

    int **mat1, **mat2, **res, i, j, r1, c1, r2, c2, k;

    printf("\nEnter the Order of the M1\n");
    scanf("%d %d", &r1, &c1);
    printf("\nEnter the Order of the M2\n");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2 || r1 != c1)
    {
        printf("Invalid");
        exit(EXIT_SUCCESS);
    }

    mat1 = (int **)malloc(r1 * sizeof(int *));

    for (i = 0; i < c1; i++)
        mat1[i] = (int *)malloc(c1 * sizeof(int));

    mat2 = (int **)malloc(r2 * sizeof(int *));

    for (i = 0; i < c2; i++)
        mat2[i] = (int *)malloc(c2 * sizeof(int));

    res = (int **)calloc(r1, sizeof(int *));

    for (i = 0; i < c2; i++)
        res[i] = (int *)calloc(c2, sizeof(int));

    printf("Enter the Elements\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter the Elements\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < c1; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }

        printf("\n");
    }

    printf("\n Multiplication\n");

    for (i = 0; i < r1; i++)
    {
        printf("\n");
        for (j = 0; j < c2; j++)
            printf("%d\t", res[i][j]);
    }

    printf("\n");
    free(res);

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.