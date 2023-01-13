#include <stdio.h>
#include <math.h>
void palindrome(int);
int reverse(int);
void main() // ~ program to check if the no. is palindrome or not.
{

    int a;

    scanf("%d", &a);
    palindrome(a);
}

void palindrome(int a) // ^ function to check palindrome.
{

    if (a == reverse(a))
        printf("It's a palindrome");
    else
        printf("It's not a palindrome");
}

int reverse(int a) // ^ recursive function to reverse the no.
{

    int b, c = 0;

    if (a == 0)
        return 0;
    else
        b = ((a % 10) * pow(10, (int)(log10(a)))) + (reverse(a / 10));

    return b;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.