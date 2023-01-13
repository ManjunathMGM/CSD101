#include <stdio.h>
int main() // ~ program to print the elements in an array in ascending order.
{

	int arr[3][5] = {{2, 5, 1, 3, 4}, {2, 5, 1, 3, 4}, {2, 5, 1, 3, 4}};
	int *p, i, j, k, l, point;

	p = &arr[0][0];

	for (j = 0; j < 5; j++)
	{
		for (l = 0; l < 5; l++)
		{
			if (arr[0][j] <= arr[0][l])
			{
				point = arr[0][j];
				arr[0][j] = arr[0][l];
				arr[0][l] = point;
			}
		}
	}

	for (j = 0; j < 5; j++)
	{
		for (l = 0; l < 5; l++)
		{
			if (arr[1][j] <= arr[1][l])
			{
				point = arr[1][j];
				arr[1][j] = arr[1][l];
				arr[1][l] = point;
			}
		}
	}

	for (j = 0; j < 5; j++)
	{
		for (l = 0; l < 5; l++)
		{
			if (arr[2][j] <= arr[2][l])
			{
				point = arr[2][j];
				arr[2][j] = arr[2][l];
				arr[2][l] = point;
			}
		}
	}

	for (i = 0; i < 15; i++)
		printf("%d  ", *(p + i));
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.