#include <stdio.h>
#include <stdlib.h>
float det(float **);
int main() // ~ program to
{

    float **mat1, **mat2, **mat3, **mat4, **mat5, **mat6, **mat7;
    int i, j, k, d = 2;

    mat1 = (float **)malloc(d * sizeof(float *));

    for (i = 0; i < d; i++)
        mat1[i] = (float *)malloc(d * sizeof(float));

    mat2 = (float **)malloc(d * sizeof(float *));

    for (i = 0; i < d; i++)
        mat2[i] = (float *)malloc(d * sizeof(float));

    mat3 = (float **)malloc(d * sizeof(float *));

    for (i = 0; i < d; i++)
        mat3[i] = (float *)malloc(d * sizeof(float));

    mat4 = (float **)malloc(d * sizeof(float *));

    for (i = 0; i < d; i++)
        mat4[i] = (float *)malloc(d * sizeof(float));

    mat5 = (float **)malloc(d * sizeof(float *));

    for (i = 0; i < d; i++)
        mat5[i] = (float *)malloc(d * sizeof(float));

    mat6 = (float **)malloc(d * sizeof(float *));

    for (i = 0; i < d; i++)
        mat6[i] = (float *)malloc(d * sizeof(float));

    mat7 = (float **)malloc(d * sizeof(float *));

    for (i = 0; i < d; i++)
        mat7[i] = (float *)malloc(d * sizeof(float));

    printf("Enter the Elements of Matrix A\n");

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%f", &mat1[i][j]);

    printf("Enter the Elements of Matrix B\n");

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%f", &mat3[i][j]);

    float d1, d2;

    d1 = det(mat1);
    d2 = det(mat3);

    if (d1 == 0 || d2 == 0)
        printf("Inverse not Possible\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if ((i + j) % 2 != 0)
                mat2[i][j] = -mat1[i][j];
        }
    }

    mat2[1][1] = mat1[0][0];
    mat2[0][0] = mat1[1][1];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            mat2[i][j] = mat2[i][j] / d1;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if ((i + j) % 2 != 0)
                mat4[i][j] = -mat3[i][j];
        }
    }

    mat4[1][1] = mat3[0][0];
    mat4[0][0] = mat3[1][1];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            mat4[i][j] = mat4[i][j] / d2;
    }

    printf("(A^-1)*(B^-1):\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            mat7[i][j] = 0;
            for (k = 0; k < 2; k++)
                mat7[i][j] += mat4[i][k] * mat2[k][j];
            printf("%f\t", mat7[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            mat5[i][j] = 0;
            for (k = 0; k < 2; k++)
                mat5[i][j] += mat1[i][k] * mat3[k][j];
        }
    }

    float d3;

    d3 = det(mat5);

    if (d3 == 0)
        printf("Inverse not Possible\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if ((i + j) % 2 != 0)
                mat6[i][j] = -mat5[i][j] / d3;
        }
    }

    mat6[1][1] = mat5[0][0] / d3;
    mat6[0][0] = mat5[1][1] / d3;

    printf("(A*B)^-1\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%f\t", mat6[i][j]);

        printf("\n");
    }

    int c = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (mat6[i][j] == mat7[i][j])
                c = c + 1;
        }
    }

    if (c == 4)

        printf("LHS=RHS");

    free(mat1);
    free(mat3);
    free(mat2);
    free(mat4);
    free(mat5);
    free(mat6);
    free(mat7);

    return 0;
}

float det(float **A)
{

    float i;
    i = (A[0][0] * A[1][1]) - (A[1][0] * A[0][1]);

    return i;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.