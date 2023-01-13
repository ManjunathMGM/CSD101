#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct data
{
    long long roll;
    char name[10];
    char dep[11];
    int year;
} student[160];

void fun1(int);
void fun2(long long);
void main()
{

    int i, j, f;
    char c;
    long long temp = 2022;
    char depart[5][11] = {"Civil", "Mechanical", "Economics", "Maths", "\0"};
    char names[5][6] = {"A", "B", "C", "D", "E"};

    for (i = 0; i < 160; i++)
    {
        student[i].roll = temp;
        temp = temp + 1;
        f = (rand() + rand()) % 5;
        strcpy(student[i].name, names[f]);
        j = rand() % 5;
        strcpy(student[i].dep, depart[j]);
        j = rand() % 2019;
        while (j < 2015)
            j = j + 4;

        student[i].year = j;
    }

    int r, s = 0;
    long long t;

    printf("Enter the Year");

    while (s == 0)
    {
        scanf("%d", &r);
        if (r < 2015 || r > 2018)
        {
            printf("Enter a Valid Year\t");
            printf("2015-2018\n");
        }
        else
            s = 1;
    }

    s = 0;

    fun1(r);

    printf("Enter the Roll No.");

    while (s == 0)
    {
        scanf("%lli", &t);
        if (t < 2022 || t > 2182)
        {
            printf("Enter a valid Roll no\t");
            printf("2022-2182\n");
        }
        else
            s = 1;
    }
    fun2(t);
}

void fun1(int g)
{

    int i;
    int j = 1;
    printf("Students joined in %d are:\n", g);
    for (i = 0; i < 160; i++)
    {
        if (student[i].year == g)
        {
            printf("%s ", student[i].name);
            j = j + 1;
            if (j % 10 == 0)
                printf("\n");
        }
    }
}

void fun2(long long g)
{
    int i;

    for (i = 0; i < 160; i++)
    {
        if (student[i].roll == g)
        {
            printf("Name %s\n", student[i].name);
            printf("Roll %lli\n", student[i].roll);
            printf("Depart %s\n", student[i].dep);
            printf("Joining year %d\n", student[i].year);
        }
    }
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.