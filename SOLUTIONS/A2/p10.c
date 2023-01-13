#include <stdio.h>
int main() // ~ basic program to check wheather it's a right angled triangle or not.
{

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // ? sides check
    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
        printf("THE TRIANGLE IS A RIGHT ANGLED TRIANGLE");
    else if (a == b && b == c)
        printf("THE TRIANGLE IS AN EQUILATERAL TRIANGLE");
    else
        printf("NONE OF THE TWO");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.