#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define limit 100
int main()
{
    char input[5][limit];
    char yo[limit];
    int i, j, a, x;
    for (i = 0; i < 5; i++)
    {
        gets(input[i]);
    }
    for (a = 0; a < 5; a++)
    {
        for (i = 0, j = 1; i < 4; i++, j++)
        {
            x = strcasecmp(input[i], input[j]);
            if (x >= 0)
            {
                strcpy(yo, input[i]);
                strcpy(input[i], input[j]);
                strcpy(input[j], yo);
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s", input[i]);
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.