#include <stdio.h>
int main() // ~ basic program to reverse a 5 digit number and compare it with the original one.
{

    int num, nd, reverse;
    scanf("%d", &num);

    // ? Iteration 1
    reverse = num % 10;

    // ? Iteration 2
    nd = (num / 10) - ((num / 100) * 10);
    reverse = reverse * 10 + nd;

    // ? Iteration 3
    nd = (num / 100) - ((num / 1000) * 10);
    reverse = (reverse * 10) + nd;

    // ? Iteration 4
    nd = (num / 1000) - ((num / 10000) * 10);
    reverse = (reverse * 10) + nd;

    // ? Iteration 5
    nd = (num / 10000);
    reverse = (reverse * 10) + nd;

    printf("%d \n", reverse);

    if (reverse == num)
        printf("Original and the reversed number are same");
    else
        printf("Original and the reversed number are not equal");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.