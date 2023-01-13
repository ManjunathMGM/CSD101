#include <stdio.h>
int main() // ~ basic program to decode a message by the given conditions
{

    int i, j, n, temp, n1, n2, n3, n4, n5, n6;
    char A[26], B[26], C[6] = {'k', 'h', 'o', 's', 'p', 'h'}, x1, x2, x3, x4, x5, x6, x, E[6];

    for (i = 97; i < 123; i++)
    {
        x = i;
        A[i - 97] = x;
    }

    for (i = 0; i < 23; i++)
        B[i] = A[i + 3];

    B[23] = 'a';
    B[24] = 'b';
    B[25] = 'c';

    for (i = 0; i < 26; i++)
    {
        if (B[i] == C[0])
        {
            x1 = C[0];
            temp = x1;
            n = temp - 100;
            n1 = i;
            E[0] = A[n];
        }

        if (B[i] == C[1])
        {
            x2 = C[1];
            temp = x2;
            n = temp - 100;
            n2 = i;
            E[1] = A[n];
        }

        if (B[i] == C[2])
        {
            x3 = C[2];
            temp = x3;
            n = temp - 100;
            n3 = i;
            E[2] = A[n];
        }

        if (B[i] == C[3])
        {
            x4 = C[3];
            temp = x4;
            n = temp - 100;
            n4 = i;
            E[3] = A[n];
        }

        if (B[i] == C[4])
        {
            x5 = C[4];
            temp = x5;
            n = temp - 100;
            n5 = i;
            E[4] = A[n];
        }

        if (B[i] == C[5])
        {
            x6 = C[5];
            temp = x6;
            n = temp - 100;
            n6 = i;
            E[5] = A[n];
        }
    }

    for (i = 0; i < 6; i++)
    {
        printf("%c", E[i]);
    }

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.