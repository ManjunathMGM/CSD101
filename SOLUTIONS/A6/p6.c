#include <stdio.h>
#define limit 500
int main() // ~ program to call the main() function recursively.
{

    static int count = 1;
    printf("%d\n ", count++);

    if (count < limit)
        main();
    else
        printf("\n The main function is called %d times. Hence post increment is done upto %d", limit, count);

    return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.