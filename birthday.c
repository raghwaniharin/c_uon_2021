#include<stdio.h>
void main()
{
    int num;
    loop:
    printf("enter your index birth month\n\nexample january is 1 october is 10 ETC\n\n");
    scanf("%d",&num);

    printf("***********************************\n");
    switch(num)
    {
    case 1:
        printf("your birthday was 9 months ago\n");
        break;

    case 2:
        printf("your birthday was 8 months ago\n");
        break;

    case 3:
        printf("your birthday was 7 months ago\n");
        break;

    case 4:
        printf("your birthday was 6 months ago\n");
        break;

    case 5:
        printf("your birthday was 5 months ago\n");
        break;

    case 6:
        printf("your birthday was 4 months ago\n");
        break;

    case 7:
        printf("your birthday was 3 months ago\n");
        break;

    case 8:
        printf("your birthday was 2 months ago\n");
        break;

    case 9:
        printf("your birthday was 1 month ago\n");
        break;

    case 10:
        printf("YOUR BIRTHDAY IS IN THE CURRENT MONTH\n HAPPY BIRTHDAY\n");
        break;

    case 11:
        printf("your birthday will be in one month\n make preparations for a party\n");
        break;

    case 12:
        printf("your birthday will be in two months\n");
        break;

    default:
        printf("invalid month number please try again\n");
        //system("cls");//clear the screen
        goto loop;// goes back to loop label and will rerun the program
        system("pause");//runs executable file
   }

}
