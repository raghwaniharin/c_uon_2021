#include<stdio.h>
main()
{
   /*Arithmetic operations are used for manipulating numeric data
   The following are the various arithmetic operations in C

   + For adding
   / For Division
   * Multiplications
   % Reminder of a division)
   - Subtraction
   ++ increment by 1
   -- Decrement by 1
   ______________________________________________________________________

   Example
   */

   int a=56;
   int b=23;

   /*addition*/
   int add=a+b;

   /*Subtraction*/
   int sub=a-b;

   /*Division*/
   float div=a/b;
   /*Multiplication*/
    int mult=a*b;
    /* Reminder of a division*/
    int rem=a%b;
    /* Increment a*/
    //int inc=a++;
    /*Decrement b*/
    //int dec=b--;
    /*Display values to  the screen*/

    printf("My numbers are %d and %d \n",a,b);
    printf("Addition\tSubtraction\tDivision\tMultiplication\tReminder\taincrement\tbDecrement\n");
    printf("%d\t\t%d\t\t%.2f\t\t%d\t\t%d\t\t%d\t\t%d\n",add,sub,div,mult,rem,a++,--b);
}
