#include <stdio.h>
#include <string.h>
void rev(char *);
void main() // ~ program to reverse the string.
{

    int n = 5;
    char str[n], *p;

    printf("Enter\n");
    gets(str);
    p = &str[0];
    rev(p);

    printf("Reverse = %s\n", str);
}

void rev(char *p) // ^ function to reverse the string.
{

    strrev(p); // ? function to reverse a function.
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.