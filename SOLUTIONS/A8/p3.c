#include <stdio.h>
int main() // ~ print the values of a 3D array using pointer arithmetic and finding the largest number in the array.
{

	int array[2][3][2] = {{{1, 2}, {3, 4}, {5, 6}}, {{1, 2}, {3, 4}, {5, 6}}};
	int i, j, k;
	int *point;

	point = &array[0][0][0];
	j = *point;

	for (i = 0; i < 12; i++)
		printf("%d  ", *(point + i));

	printf("\n");

	for (i = 0; i < 12; i++)
	{
		if (*(point + i) >= *point)
			*point = *(point + i);
	}

	printf("%d\n", *point);
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.