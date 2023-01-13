#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main() // ~ program to check if the triangle if valid or not and to compute the length of each side.
{

    typedef struct C
    {
        int x, y;
    } point;

    struct triangle
    {
        point p1, p2, p3;
    } T;

    float d1, d2, d3, d;

    printf("Point A:  ");
    scanf("%d%d", &T.p1.x, &T.p1.y);
    printf("Point B:  ");
    scanf("%d%d", &T.p2.x, &T.p2.y);
    printf("Point C:  ");
    scanf("%d%d", &T.p3.x, &T.p3.y);

    d1 = sqrt(((T.p1.x - T.p2.x) * (T.p1.x - T.p2.x)) + ((T.p1.y - T.p2.y) * (T.p1.y - T.p2.y)));
    d2 = sqrt(((T.p2.x - T.p3.x) * (T.p2.x - T.p3.x)) + ((T.p2.y - T.p3.y) * (T.p2.y - T.p3.y)));
    d3 = sqrt(((T.p3.x - T.p1.x) * (T.p3.x - T.p1.x)) + ((T.p3.y - T.p1.y) * (T.p3.y - T.p1.y)));

    if (d1 + d2 <= d3 || d2 + d3 <= d1 || d1 + d3 <= d2) // ? properties of triangles.
        printf("Invalid Coordinates");
    else
    {
        d = d1 + d2 + d3;
        printf("Distance = %f", d);
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.