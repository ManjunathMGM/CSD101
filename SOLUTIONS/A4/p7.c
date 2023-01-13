#include <stdio.h>

int rem(int, int);
int quotient(int, int);
void dig(int);

int main() // ~ program to calculate remainder, quotient, and print an integer as a series of digits with 2 spaces btw them.
{

    int a, b, z;
    printf("Enter 2 nos\n");
    scanf("%d%d", &a, &b);
    printf("1.  Quotient=%d\n", quotient(a, b));
    printf("2.  Reminder=%d\n", rem(a, b));
    printf("3.  Enter a Number \n");
    scanf("%d", &z);
    dig(z);

    return 0;
}

int rem(int a, int b) // ^ function to find the remainder.
{
    return a % b;
}

int quotient(int a, int b) // ^ function to find the quotient
{
    return a / b;
}

void dig(int no) // ^ function to print the integer as a series of digits with 2 spaces within them.
{
    int j, ar[j], digit;
    j = 0;
    while (no > 0 && no < 327667)
    {
        digit = rem(no, 10);
        no = quotient(no, 10);
        ar[j] = digit;
        j += 1;
    }
    for (int i = 0; i < j; i++)
        printf("%d  ", ar[j - i - 1]);
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.