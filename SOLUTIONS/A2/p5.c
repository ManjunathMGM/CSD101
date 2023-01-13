#include <stdio.h>
int main() // ~ basic program to check wheather the character is an alphabet, numerical or a spl. character
{
    
    char character;
    scanf("%c", &character);

    // ? character check
    if (character >= '0' && character <= '9')
        printf("THE CHARACTER IS A NUMERICAL");
    else if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
        printf("THE CHARACTER IS AN ALPHABET");
    else
        printf("THE CHARACTER IS SPL CHARACTER");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.