#include <stdio.h>
int main() // ~ basic program to check wheather the character is upper or lower case
{

    char a;
    scanf("%c", &a);

    // ? case check
    if (a >= 'A' && a <= 'Z')
        printf("THE CHARACTER IS UPPERCASE");
    else if (a >= 'a' && a <= 'z')
        printf("THE CHARACTER IS LOWERCASE");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.