#include <stdio.h>
int main() // ~ program of question 1.
{

    int array1[26], i;
    char ch;

    for (i = 0, ch = 'A'; i < 26; i++, ch++)
    {
        array1[i] = i + ch;
        printf("%d\n", array1[i]);
    }

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.