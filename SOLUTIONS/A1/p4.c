#include <stdio.h>
int main() // ~ basic program to check which is the largest and smallest number.
{

    int a, b, c;
    printf("Enter the values of a,b,c");
    scanf("%d %d %d", &a, &b, &c);

    // ? checking the largest no.
    if (a > b && a > c)
        printf("Largest num is %d \n", a);
    else if (b > a && b > c)
        printf("Largest num is %d \n", b);
    else if (c > a && c > b)
        printf("Largest num is %d \n", c);
        
    // ? checking the smallest no.
    if (a < b && a < c)
        printf("Smallest num is %d \n", a);
    else if (b < a && b < c)
        printf("Smallest num is %d \n", b);
    else if (c < b && c < a)
        printf("Smallest num is %d \n", c);

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.