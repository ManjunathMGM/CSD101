#include <stdio.h>
#include <math.h>
double distance(double, double, double, double);
int main() // ~ basic program to calculate the distance btw 2 points using double.
{

    double x1, y1, x2, y2;

    printf("POINT A\n");
    scanf("%lf%lf", &x1, &y1);
    printf("POINT B\n");
    scanf("%lf%lf", &x2, &y2);
    printf("Distance = %lf", distance(x1, y1, x2, y2));

    return 0;
}

double distance(double a, double b, double c, double d) // ^ function to calculate distance btw 2 points.
{

    double dis = sqrt(pow((a - c), 2) + pow((b - d), 2));
    return dis;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.