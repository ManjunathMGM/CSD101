#include <stdio.h>
int main() // ~ basic program to check wheather the character is an vowel or not.
{

    char input;
    scanf("%c", &input);

    // ? vowel check
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')
        printf("ENTERED CHARACTER IS A VOWEL");
    else
        printf("ENTERED CHARACTER IS A CONSONANT");

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.