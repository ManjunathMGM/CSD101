#include <stdio.h>
int main() // ~ basic program to calculate and compare area and perimeter of a rectangle.
{

    int l, b, p, a;
    printf("Enter l and b");
    scanf("%d %d", &l, &b);

    a = l * b;       
    p = 2 * (l + b); 

    if (a > p)       
        printf("Area is greater than perimeter");
    else
        printf("Area is not greater than perimeter");
        
    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.