#include <stdio.h>
int main() // ~ basic program to print values and addresses using pointers.
{

    int a, *i;
    float b, *f;
    char ch, *c;

    printf("Enter an Integer, Float, Character   ");
    scanf("%d%f %c", &a, &b, &ch);

    i = &a;
    f = &b;
    c = &ch;

    printf("value=%d\t address=%d\n", *i, i);
    printf("value=%f\t address=%d\n", *f, f);
    printf("value=%c\t address=%d\n", *c, c);

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.