#include <stdio.h>
int prime_verifier(int, int);
int main() // ~ program to print all the prime nos btw 2 nos.
{

    int n1, n2, i, flag = 0, temp;

    printf("Enter the numbers between which you want to print prime numbers:\n");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
    {
        temp = n2;
        n2 = n1;
        n1 = temp;
    }
    if (n1 == 1)
        n1 = 2;

    for (i = n1; i <= n2; i++)
    {
        if (n1 == 0 || n2 == 0)
        {
            printf("Enter Valid Numbers\n");
            break;
        }
        flag = prime_verifier(i, i / 2);

        if (flag == 1)
            printf("%d  ", i);
    }
}

int prime_verifier(int a, int b) // ^ recursive function to check primes.
{

    if (b == 1)
        return 1;
    else if (a % b == 0)
        return 0;
    else
        return prime_verifier(a, b - 1);
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.