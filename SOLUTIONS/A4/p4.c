#include <math.h>
#include <stdio.h>
float hypotenuse(float, float);
int main() // ~ program to calculate hypotenuse of a traingle.
{

    float a, b;
    scanf("%f%f", &a, &b);
    printf("The length of the hypotenuse is %f", hypotenuse(a, b));

    return 0;
}

float hypotenuse(float a, float b) // ^ function to find hypotenuse.
{

    float c;
    c = sqrt((a * a) + (b * b));

    return c;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.