/*
== equal to
!= not equal to
< less than
> greater than
<= less than or equal to
>=greater than or equal to
&& logical and
|| logical or
!|logical not

*/

#include<stdio.h>
int main(void)
{
    int num1,num2;
            printf("enter a number\n");
                scanf("%d",&num1);
            printf("enter another number\n");
                scanf("%d",&num2);
    if (num1>num2)
    {
        printf("the first number is greater than the second number\n");
        printf("%d > %d",num1,num2);
    }
    else if (num1<num2)
    {
        printf("the second number is greater than the first number\n");
        printf("%d < %d",num1,num2);

    }
    else if(num1==num2)
    {
        printf("both numbers are equal\n");
        printf("%d = %d",num1,num2);
    }
    else if (num1==0 && num2==0)
    {
        printf("both numbers are zero\n");

    }
    else if(num1==0 || num2==0)
    {
        printf("one of the numbers is zero");
    }
}
