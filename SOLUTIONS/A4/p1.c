#include <stdio.h>
#include <math.h>
int main() // ~ basic program to perform the given math library functions.
{

    float a = 7.5, b = 0, c = -6.4, d = -8, e = -5.5;

    printf("x=%f\n", fabs(a));
    printf("x=%f\n", floor(a));
    printf("x=%f\n", fabs(b));
    printf("x=%f\n", ceil(b));
    printf("x=%f\n", fabs(c));
    printf("x=%f\n", ceil(-fabs(d + floor(e))));

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.