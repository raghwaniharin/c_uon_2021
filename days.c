#include<stdio.h>
void main()
{
    int daynum;
    printf("enter the day of the number\n");
    scanf("%d",&daynum);

    switch(daynum)
    {
    case 1:
        printf("the day of the week is monday\n");
        break;

    case 2:
        printf("the day of the week is tuesday\n");
        break;

    case 3:
        printf("the day of the week is wednesday\n");
        break;

    case 4:
        printf("the day of the week is thursday\n");
        break;

    case 5:
        printf("the day of the week is friday\n");
        break;

    case 6:
        printf("the day of the week is saturday\n");
        break;

    case 7:
        printf("the day of the week is sunday\n");
        break;
    default:
        printf("invalid day of the week");
    }

}
