#include <stdio.h>
int main() // ~ program to add 5 to all the elements in the array using pointers.
{

	int *point[5];
	int array[5] = {1, 2, 3, 4, 5};
	int i;

	for (i = 0; i < 5; i++)
	{
		point[i] = &array[i];
		*point[i] += 5;
	}

	for (i = 0; i < 5; i++)
		printf("%d  ", array[i]);

	printf("\n");

	for (i = 0; i < 5; i++)
		printf("%u  ", *(point[i]));

	printf("\n");

	return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.