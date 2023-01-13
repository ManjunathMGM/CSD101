#include <stdio.h>
int main() // * basic program to check weather the triangle is valid or not
{

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) // ? properties of triangle.
        printf("THE TRIANGLE IS VALID");
    else
        printf("TRIANGLE IS NOT VALID");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.