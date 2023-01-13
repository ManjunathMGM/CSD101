#include <stdio.h>
int main() // ~ basic program to print the least denominations of a given amount.
{

    int amt, d1, d2, d5, d10, d50, d100;
    printf("Enter the amount");
    scanf("%d", &amt);

    // ? Iteration 1 (100rs)
    d100 = amt / 100;
    amt %= 100;

    // ? Iteration 2 (50rs)
    d50 = amt / 50;
    amt %= 50;

    // ? Iteration 3 (10rs)
    d10 = amt / 10;
    amt %= 10;

    // ? Iteration 4 (5rs)
    d5 = amt / 5;
    amt %= 5;

    // ? Iteration 5 (2rs)
    d2 = amt / 2;
    amt %= 2;

    // ? Iteration 6 (1rs)
    d1 = amt / 1;

    printf("For the given amount, the smallest denominations required are \n");
    printf("%d of 100 notes \n", d100);
    printf("%d of 50 notes \n", d50);
    printf("%d of 10 notes \n", d10);
    printf("%d of 5 notes \n", d5);
    printf("%d of 2 coins \n", d2);
    printf("%d of 1 coins \n", d1);

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.