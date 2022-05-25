#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int count;
int choose_op()
{   int y;
    printf("welcome to the arithmetic game\n");
    printf("choose the operation to practice with such as:\n");
    printf("1.addition\n");
    printf("2. subtraction\n");
    printf("3 multiplication\n");
    printf("4.division\n");
    printf("5.exit\n");
    scanf("%d",&y);
    return y;

}
void exitprog()
{
    exit(0);
}
int choose_level()
{
    int level;
    printf("choose a level from below\n");
    printf("level 1 [1-10]\n");
    printf("level 2 [11-50]\n");
    printf("level 3 [51-100]\n");
    scanf("%d",&level);
    return level;
}
int* rand_num(int level)
{
    srand(time(0));
    static int nums[2];

    switch(level)
    {
    case 1:
       nums[0]=rand()%10+1;
       nums[1]=rand()%10+1;
        break;
    case 2:

       nums[0]=rand()%39+11;
       nums[1]=rand()%39+11;
        break;

    case 3:

       nums[0]=rand()%49+51;
       nums[1]=rand()%49+51;
        break;
    }

}

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    if(a>b)
    {return a-b;}
    else
    {return b-a;}
}
int mult(int a,int b)
{
    return a*b;
}
int divide(float a, float b)
{
    if(a>b)
    {return a/b;}
    else
    {return b/a;}
}



void main()
{

    int answer,y;
    int* num;
    LOOP:
    choose_op();
    int level1=choose_level();
    rand_num(level1);



    switch(y)
    {
        int result1,result2,result3,result4;

    case 1:

        result1=add(num[1],num[2]);
        printf("the numbers are %d %d\n",num[1],num[2]);
        printf("the sumis %d\n",result1);
        goto LOOP;
        break;
    case 2:
        result2=sub(num[1],num[2]);
        printf("the numbers are %d %d\n",num[1],num[2]);
        printf("the difference is %d\n",result2);
        goto LOOP;
        break;
    case 3:
        result3=mult(num[1],num[2]);
        printf("the numbers are %d %d\n",num[1],num[2]);
        printf("the multiple is %d\n",result3);
        goto LOOP;

        break;
    case 4:
        result4=divide(num[1],num[2]);
        printf("the numbers are %d %d\n",num[1],num[2]);
        printf("the divisor is  %d\n",result4);
        goto LOOP;

        break;
    case 5:
        exitprog();
    }



}
