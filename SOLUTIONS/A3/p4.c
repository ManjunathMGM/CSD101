#include <stdio.h>
int main() // ~ basic program to print a 2D array
{

    int row, col;

    printf("Enter the rows and columns");
    scanf("%d %d", &row, &col);

    int a1[row][col];
    int i, j;

    for (i = 0; i < row; i++) // ? inputs of matrix
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter %d%d element", i, j);
            scanf("%d", &a1[i][j]);
        }
    }

    for (i = 0; i < row; i++) // ? printing the matrix
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.