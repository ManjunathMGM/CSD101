#include <stdio.h>
void main() // ~ basic program to perform a few operations on pointers as per given question.
{

    int i, *p, **q;
    printf("Value of i\n");
    scanf("%d", &i);

    p = &i;
    q = &p;

    printf("Address of i = %u or p=%u or *q=%u\n", &i, p, *q);
    printf("Address of p = %u or q= %u\n", &p, q);
    printf("Address of q = %u\n", &q);
    printf("Value of i = %d or *(&i) = %d or *p = %d or **q=%d\n", i, *(&i), *p, **q);
    printf("Value of q = %d\n", q);
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.