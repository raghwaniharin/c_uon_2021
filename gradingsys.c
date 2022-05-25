#include<stdio.h>
char* grade_marks(int marks)
/*
if you want a return of a string in a function then its char* var name(input data tyoe and variable name)
if its  a return of characters only then its char var_name(input data tyoe and variable name)
*/
 {

    if  (marks>=0 && marks<=39)
        {return "F";}
    else if (marks>=40 && marks<=49)
        {return "D";}
    else if (marks>=50 && marks<=59)
        {return "C";}
    else if (marks>=60&& marks<=69)
        {return "B";}
    else if(marks>=70 && marks<=100)
        {return "A";}
    else
        {return "INVALID MARKS";}
  }
void main()
{
   int csc111m,csc112m,csc113m,csc115m,csc126m,ccs009m,ccs001m,total,ave;
    char names[32];
    char regno[32];
    printf("enter your full name:\n");
    fgets(names,32,stdin);
    printf("enter your registration number:\n");
    fgets(regno,32,stdin);

    printf("enter marks for CSC111\n");
        scanf("%d",&csc111m);
    printf("enter marks for csc112\n");
        scanf("%d",&csc112m);
    printf("enter marks for csc113\n");
        scanf("%d",&csc113m);
    printf("enter marks for csc115\n");
        scanf("%d",&csc115m);
    printf("enter marks for csc126\n");
        scanf("%d",&csc126m);
    printf("enter marks for ccs001\n");
        scanf("%d",&ccs001m);
    printf("enter marks for ccs009\n");
        scanf("%d",&ccs009m);


    total=csc111m+csc112m+csc113m+csc115m+csc126m+ccs009m+ccs001m;
    ave=total/7;

    printf("\n\nSTUDENT NAME: \t\t%s",names);
    printf("STUDENT ID NO:\t\t%s",regno);
    printf("Course Code:\t\tMarks:\t\tGrade\n");
    printf("CSC111:\t\t\t%d\t\t%s\n",csc111m,grade_marks(csc111m));
    printf("CSC112:\t\t\t%d\t\t%s\n",csc112m,grade_marks(csc112m));
    printf("CSC113:\t\t\t%d\t\t%s\n",csc113m,grade_marks(csc113m));
    printf("CSC115:\t\t\t%d\t\t%s\n",csc115m,grade_marks(csc115m));
    printf("CSC126:\t\t\t%d\t\t%s\n",csc126m,grade_marks(csc126m));
    printf("CCS001:\t\t\t%d\t\t%s\n",ccs001m,grade_marks(ccs001m));
    printf("CCS009:\t\t\t%d\t\t%s\n",ccs009m,grade_marks(ccs009m));
    printf("Total\t\t\t\t%d\n",total);
    printf("Average\t\t\t\t%d\t\t%s\n",ave,grade_marks(ave));
}

