#include<stdio.h>

char grade_marks[16](int marks)
 {

    if(marks>0 && marks<40)
    {
        return 'U';
    }

    else if (marks>39 && marks<50)
    {
        return 'E';
    }

    else if (marks>49 && marks<60)
    {
        return 'D';
    }
    else if (marks>59 && marks<70)
    {
        return 'C';
    }
    else if(marks>69 && marks<80)
    {
        return 'B';
    }

    else if(marks>79 && marks <=100)
    {
        return 'A';
    }
  else
    {
         return '';
    }
 }
int main(void)
{
    int marks;
    printf("enter yur marks\n");
    scanf("%d",&marks);
    char grade=grade_marks(marks);
    printf("the grade is %c ",grade);



}
