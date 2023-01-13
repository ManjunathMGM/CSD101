#include <stdio.h>
int fibonacci(int);
int main() // ~ program to print fibonacci numbers.
{
    int a;

    printf("Enter a no. \n");
    scanf("%d", &a);
    printf("%d", fibonacci(a));

    return 0;
}

int fibonacci(int a) // ^ recursive function to find fibonacci numbers.
{

    if (a == 0 || a == 1)
        return a;
    else
        return fibonacci(a - 1) + fibonacci(a - 2); // ? Fₙ = Fₙ₋₁ + Fₙ₋₂
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.