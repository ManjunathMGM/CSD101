#include <stdio.h>
int calculateCharges(int);
int main() // ~ program to calculate parking charges of 3 cars with given conditions.
{

    int c1, c2, c3, p1, p2, p3;
    printf("Enter hours of car1, car2, car3");
    scanf("%d%d%d", &c1, &c2, &c3);

    p1 = calculateCharges(c1);
    p2 = calculateCharges(c2);
    p3 = calculateCharges(c3);

    // ? printing the values in the specified format.
    printf("CAR             HOURS           CHARGE\n");
    printf("1.               %dhrs            %drs \n", c1, p1);
    printf("2.               %dhrs            %drs \n", c2, p2);
    printf("3.               %dhrs            %drs \n", c3, p3);
    printf("TOTAL           %dhrs           %drs \n", c1 + c2 + c3, p1 + p2 + p3);

    return 0;
}

int calculateCharges(int a) // ^ function to calculate parking charge.
{

    int b = 0, c = 0;
    if (a > 3)
    {
        a -= 3;
        b = a * 10;
        c = 20 + b;
    }
    else
        c = 20;

    return c;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.