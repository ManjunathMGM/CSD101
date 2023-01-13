#include <stdio.h>
int main() // ~ basic program to perform given arithmetic operations.
{

    int color = 2, lime, straw = 1, red = 3, orange;
    float white, green, blue, purple = 0.32, crayon = -1.3;

    white = color * 2.5 / purple;
    green = color / purple;
    orange = color / red;
    blue = (color + straw) / (crayon + 0.3);
    lime = red / color + red % color;
    purple = straw / red * color;

    printf("the values are \n %f \n %f \n %d \n %f \n %d \n %f \n", white, green, orange, blue, lime, purple);

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.