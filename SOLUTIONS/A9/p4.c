#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Bank
{
    long long acc_no;
    char name[10];
    int amt;
} candidate[15];
void print();
void tra(long long, int, int);
int main()
{
    int i, j, k, g, y, z;
    long long a = 2022, x;
    char yo[5][6] = {"A", "B", "C", "D", "E"};
    for (i = 0; i < 15; i++)
    {
        j = rand() % 5 + 1;
        strcpy(candidate[i].name, yo[j]);
        candidate[i].acc_no = a;
        a = a + 1;
        candidate[i].amt = rand() % 200;
    }
    print();
    i = 0;
    printf("Enter account no-");
    while (i == 0)
    {
        scanf("%lli", &x);
        if (x < 2022 || x > 2036)
        {
            printf("Enter a Valid Account Number");
            printf("2022-2036");
        }
        else
            i = 1;
    }
    printf("Enter amt:");
    scanf("%d", &y);
    printf("Enter code");
    printf("0-Withdrawal 1-Deposit");
    scanf("%d", &z);
    tra(x, y, z);
}

void print()
{
    int i;
    printf("Account Number Name amt\n");
    for (i = 0; i < 15; i++)
    {
        if (candidate[i].amt < 100)
        {
            printf("%lli  ", candidate[i].acc_no);
            printf("%s  ", candidate[i].name);
            printf("%d  \n", candidate[i].amt);
        }
    }
}

void tra(long long acc, int amt, int flag)
{
    int i;
    for (i = 0; i < 15; i++)
    {
        if (candidate[i].acc_no == acc)
        {
            if (flag == 0)
            {
                if (candidate[i].amt - amt < 0)
                {
                    printf("Insufficient Balance");
                }
                else
                {
                    candidate[i].amt = candidate[i].amt - amt;
                    printf("Rs.%d decucted", amt);
                }
            }
            if (flag == 1)
            {
                candidate[i].amt = candidate[i].amt + amt;
                printf("Rs.%d deposited", amt);
            }
        }
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.