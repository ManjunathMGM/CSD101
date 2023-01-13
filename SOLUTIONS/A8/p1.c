#include <stdio.h>
void main() // ~ program for 1st question of asst 8.
{

    int a[3][4] = {
        {1, 2, 3, 4},
        {11, 12, 13, 14},
        {21, 22, 23, 24}};

    int(*p)[4];
    p = a;

    printf("%d %d %d\n", p, p + 1, p + 2);
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d  ", *(*(p + i) + j));
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d  ", *(*(a + i) + j));
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.