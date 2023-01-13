#include <stdio.h>
int main() // ~ basic program to calculate HCF and LCM of 2 numbers.
{
    int n1, n2, i, hcf, lcm;

    printf("Enter two integers");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }

    lcm = ((n1 * n2) / hcf);
    printf("HCF is %d and LCM is %d", hcf, lcm);

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.