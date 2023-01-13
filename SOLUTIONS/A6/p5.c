#include <stdio.h>
int sequence(int);
int main() // ~ program to print the value of Aₙ
{

    int a;
    scanf("%d", &a);
    printf("A₀ = %d", sequence(a));

    return 0;
}
int sequence(int a) // ^ function to calculate the value of Aₙ.
{

    int arr[a], x = 3;

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    for (x = 3; x <= a; x++)
        arr[x] = arr[x - 1] + arr[x - 2] + arr[x - 3]; // ? Aₙ = Aₙ₋₁ + Aₙ₋₂ + Aₙ₋₃

    return arr[a];
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.