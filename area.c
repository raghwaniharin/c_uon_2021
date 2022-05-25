#include<stdio.h>
void main()
{
    const float pi=3.141592653589;
    float a,b,r;
    int shape;
    printf("enter the shape number you want the area \n 1.triangle \n 2.rectangle  \n 3.circle\n");
    scanf("%d",&shape);
    printf("***********************************************\n");

    switch(shape)
    {
    case 1:
        printf("enter the length of the base\n");
        scanf("%f",&a);
        printf("enter the height of the triangle\n");
        scanf("%f",&b);
        printf("***********************************************\n");
        printf("\n the total area is %.2f",(0.5*a*b));
        printf("\n***********************************************\n");
        break;
    case 2:
        printf("enter length of rectangle\n");
        scanf("%f",&a);
        printf("enter height of rectangle\n");
        scanf("%f",&b);
        printf("***********************************************\n");
        printf("\n the total area is %.2f",(a*b));
        printf("\n***********************************************\n");
        break;
    case 3:
        printf("enter radius of circle\n");
        scanf("%f",&r);
        printf("***********************************************\n");
        printf("\n the total area is %f\n",(pi*r*r));
        printf("***********************************************\n");
        break;
    default:
        printf("invalid\n");
    }
}
