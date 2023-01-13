#include <stdio.h>
#include <stdlib.h>
#define limit 500
struct data
{
    char name[10];
    int age;
    int match;
    int runs[limit];
    int avg;
} play[20], te;
int main()
{
    int i, j, a;
    char c;
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 1; j++)
        {
            int g = 0;
            while (g == 0)
            {
                c = rand() % 80;
                if (c >= 65 && c <= 80)
                {
                    play[i].name[j] = c;
                    g = 1;
                }
            }
        }
        int g = 0;
        while (g == 0)
        {
            a = rand() % 35;
            if (a >= 20 && a <= 35)
            {
                play[i].age = a;
                g = 1;
            }
        }
        g = 0;
        while (g == 0)
        {
            a = rand() % 150;
            if (a >= 50 && a <= 150)
            {
                play[i].match = a;
                g = 1;
            }
        }
        g = 0;
        while (g < play[i].match)
        {
            a = rand() % 500;
            play[i].runs[g] = a;
            g++;
        }
        int b;
        int add = 0;
        for (b = 0; b < play[i].match; b++)
        {

            add = add + play[i].runs[b];
        }
        play[i].avg = add / play[i].match;
    }
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
            if (play[i].avg <= play[j].avg)
            {
                te = play[i];
                play[i] = play[j];
                play[j] = te;
            }
    }
    for (i = 0; i < 20; i++)
    {
        printf("play%d\n", i + 1);
        printf("Name%s\n", play[i].name);
        printf("Age%d\n", play[i].age);
        printf("No.of match Played%d\n", play[i].match);
        printf("avg Runs%d\n", play[i].avg);
        printf("\n");
    }
    int g = 0;
    for (i = 0; i < 19; i++)
    {
        if (play[i].avg <= play[i + 1].avg)
            g = 1;
        else
            g = 0;
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.