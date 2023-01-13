#include <stdio.h>
int main() // ~ basic program to calculate the electricity bill with given conditions
{

    int value;
    float price, price1, final, price2, price3, price4, total;
    
    printf("Enter the unit charges");
    scanf("%d", &value);

    if (value <= 50)
    {
        final = value * 0.50;
        total = (final + (final / 5));
        printf("THE TOTAL PRICE YOU HAVE TO PAY IS %f", total);
    }

    else if (value > 50 && value <= 150) 
    {
        price1 = 50 * 0.5;
        price2 = (value - 50) * 0.75;
        final = price1 + price2;
        total = (final + (final / 5));
        printf("THE TOTAL PRICE YOU HAVE TO PAY IS %f", total);
    }

    else if (value > 150 && value <= 250) 
    {
        price1 = 50 * 0.5;
        price2 = 100 * 0.75;
        price3 = (value - 150) * 1.20;
        final = price1 + price2 + price3;
        total = (final + (final / 5));
        printf("THE TOTAL PRICE YOU HAVE TO PAY IS %f", total);
    }

    else if (value > 250) 
    {
        price1 = 50 * 0.5;
        price2 = 100 * 0.75;
        price3 = 100 * 1.20;
        price4 = (value - 250) * 1.5;
        final = price1 + price2 + price3 + price4;
        total = (final + (final / 5));
        printf("THE TOTAL PRICE YOU HAVE TO PAY IS %f", total);
    }

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.