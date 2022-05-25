#include<stdio.h>
int main(void)
{
    float n1,n2;
    printf("enter a number\n");
        scanf("%f",&n1);
    printf("enter another number\n");
        scanf("%f",&n2);

    float n3=n1+n2;
        printf("the sum of the numbers is %.2f\n",n3);
    float n4=n1*n2;
        printf("the multiple of the numbers are %.2f\n",n4);
    float n5=n1-n2;
        printf("the difference between the two numbers is %.2f\n",n5);
    float n6=n1/n2;
        printf("the divisor of the two numbers is %.8f\n",n6);

}
