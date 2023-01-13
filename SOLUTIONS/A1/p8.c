#include <stdio.h>
int main() // ~ basic program to check if the year is a leap yr or not.
{

    int year;
    printf("enter year");
    scanf("%d", &year);

    if (year % 4 == 0)
        printf("Its a leap year");
    else
        printf("Its not a leap year");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.