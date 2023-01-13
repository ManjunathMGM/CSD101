#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
int main() // ~ program to
{

	char str[MAX];
	printf("Enter a Word\n");
	gets(str);

	int l;
	l = strlen(str);

	char str2[l], c;
	strcpy(str2, str);

	int i, n, flag = 0, score = 0;

	for (i = 0; i < l; i++)
	{
		str2[i] = toupper(str2[i]);
		n = str2[i];

		if (n >= 65 && n <= 90)
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}

	if (flag == 1)
	{
		for (i = 0; i < l; i++)
		{
			c = str2[i];
			if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'N' || c == 'T' || c == 'L' || c == 'R' || c == 'S')
				score = score + 1;
			if (c == 'D' || c == 'G')
				score = score + 2;
			if (c == 'B' || c == 'C' || c == 'M' || c == 'P')
				score = score + 3;
			if (c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y')
				score = score + 4;
			if (c == 'K')
				score = score + 5;
			if (c == 'J' || c == 'X')
				score = score + 8;
			if (c == 'Q' || c == 'Z')
				score = score + 10;
		}
		printf("%d", score);
	}

	else
		printf("Illegal Input");
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.