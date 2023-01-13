#include <stdio.h>
int getMaxElement(int a[], int);
int main() // ~ program to find the largest number in an array.
{

    int size, i;
    printf("Size of array");
    scanf("%d", &size);
    int ar[size];
    printf("Enter %d elements\n", size);

    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);

    printf("Largest element of the array is %d\n", getMaxElement(ar, size));

    return 0;
}

int getMaxElement(int a[], int size) // ^ recursive function to find the largest no in an array.
{

    static int i = 1, maxi = -1;
    if (i < size) // ? number check
    {
        if (maxi < a[i])
            maxi = a[i];
        i++;
        getMaxElement(a, size);
    }

    return maxi;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.