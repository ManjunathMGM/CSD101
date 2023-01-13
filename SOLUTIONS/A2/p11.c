#include <stdio.h>
int main() // ~ basic program to calculate the total grade.
{

   int s1, s2, s3, s4, s5, sum, total = 500;
   float per;

   printf("Enter marks of 5 subjects \n ");
   scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

   sum = (s1 + s2 + s3 + s4 + s5);
   printf("Sum of marks %d \n", sum);

   per = (sum * 100) / total;
   printf("Percentage : %f \n", per);

   // ? percentage check
   if (per >= 90)
      printf("A GRADE");
   else if (per >= 80)
      printf("B GRADE");
   else if (per >= 70)
      printf("C GRADE");
   else if (per >= 60)
      printf("D GRADE");
   else if (per >= 40)
      printf("E GRADE");
   else
      printf("F GRADE");

   return 0;
}
// & THIS CODE IS WRITTEN BY MANJUNATH MGM.