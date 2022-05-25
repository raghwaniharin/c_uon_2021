#include<stdio.h>
void fibonacciSeries(int x)
{
   int a=0, b=1, c;
   for(int i=0;i<x;i++)
   {
     printf("\t%d\n", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int x;
   LOOP:

   printf("Enter how many numbers are needed: ");
   scanf("%d", &x);

   printf("The fibonacci series is: \n");

   fibonacciSeries(x);

   goto LOOP;

   return 0;
}
