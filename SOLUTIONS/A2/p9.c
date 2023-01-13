#include <stdio.h>
#include <math.h>
int main() // ~ basic program to calculate roots of a quadratic equation.
{

    float a, b, c;
    float root1, root2, disc;

    //^the quad eqn is in the form of ax^2 + bx + c =0.
    printf("Enter the coeffeciants a,b,c ");
    scanf("%f%f%f", &a, &b, &c);
    disc = (b * b - 4 * a * c); // ? discriminant

    if (disc >= 0) // ? real roots condition
    {
        root1 = ((-b + sqrt(disc)) / 2 * a);
        root2 = ((-b - sqrt(disc)) / 2 * a);
        printf("THE ROOTS OF THE QUAD EQN ARE %f,%f", root1, root2);
    }
    else
        printf("THIS QUAD EQN HAS NON REAL ROOTS");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.