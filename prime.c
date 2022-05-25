#include<stdio.h>
int main(void)
{
    int num1;
    printf("enter a number\n");
    scanf("%d",&num1);
    int i, factor=0;
    for(i=1;i<=num1;i++)
    {
        if(num1%i==0)
        {
            factor++;
        }

    }

    if (factor==2)
    {
        printf("%d  is prime\n",num1);
    }
    else
        printf("%d is not prime",num1);
}
