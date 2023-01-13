#include <stdio.h>
int main() // ~ basic program to print no of days in the month
{

    int m;
    printf("ENTER THE MONTH NUMBER");
    scanf("%d", &m);

    // ? month check using switch case
    switch (m)
    {
    case 1:
        printf("THERE ARE 31 DAYS IN JAN\n");
        break;
    case 2:
        printf("THERE ARE 28 OR 29 DAYS IN FEB\n");
        break;
    case 3:
        printf("THERE ARE 31 DAYS IN MARCH\n");
        break;
    case 4:
        printf("THERE ARE 30 DAYS IN APR\n");
        break;
    case 5:
        printf("THERE ARE 31 DAYS IN MAY\n");
        break;
    case 6:
        printf("THERE ARE 30 DAYS IN JUNE\n");
        break;
    case 7:
        printf("THERE ARE 31 DAYS IN JULY\n");
        break;
    case 8:
        printf("THERE ARE 31 DAYS IN AUGUST\n");
        break;
    case 9:
        printf("THERE ARE 30 DAYS IN SEPT\n");
        break;
    case 10:
        printf("THERE ARE 31 DAYS IN OCT\n");
        break;
    case 11:
        printf("THERE ARE 30 DAYS IN NOV\n");
        break;
    case 12:
        printf("THERE ARE 31 DAYS IN DEC\n");
        break;
    }

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.