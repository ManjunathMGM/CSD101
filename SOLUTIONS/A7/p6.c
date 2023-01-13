#include <stdio.h>
#include <string.h>
void main()
{

    char str[100];
    int l, n, a, b, c, i, w, j, k = 0;
    char array[n][5];

    printf("Enter String\n");
    gets(str);

    printf("Encryption Key\n");
    printf("a\n");
    scanf("%d", &a);
    printf("b\n");
    scanf("%d", &b);
    printf("n\n");
    scanf("%d", &c);

    l = strlen(str);

    if (n % 5 == 0)
        n = l / 5;
    else
        n = (l / 5) + 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
        {
            array[i][j] = str[k];
            k = k + 1;
        }
    }

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < 5; j++)
        {
            w = ((a * j) + b) % c;
            printf("%c", array[i][w]);
        }
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.