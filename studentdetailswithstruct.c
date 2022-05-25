#include<stdio.h>
#include<stdlib.h>

typedef struct{
char* names[32];
char* regno[16];
int age;
int marks[7];
}student;

void main()
{
    char* units[7]={"CSC111","CSC112","CSC113","CSC126","CCS001","CCS009","CSC115"};
    student array[5];

    for(int i=0;i<5;i++)
    {
        printf("enter students name\n");
        scanf("%s",array[i].names);
        printf("enter the registration number\n");
        scanf("%s",array[i].regno);
        printf("enter the age of the student\n");
        scanf("%d",&array[i].age);
        printf("\n");

            for(int j=0;j<7;j++)
            {
                printf("enter the marks for %s\t",units[j]);
                scanf("%d",&array[i].marks[j]);
            }
    printf("\n\n");
    }


    for(int i=0;i<5;i++)
    {
        printf("%s\n",array[i].names);
        printf("%s\n",array[i].regno);
        printf("%d\n",array[i].age);

        for(int j=0;j<7;j++)
        {
            printf("%d\n",array[i].marks[j]);
        }
printf("\n\n");
    }

    FILE* fp=fopen("sudents.txt","w");
    if(fp==NULL)
    {
        printf("file unavailable try again\n");
        exit(1);
    }

    for(int i=0;i<5;i++)
    {
        fprintf(fp,"%s\n",array[i].names);
        fprintf(fp,"%s\n",array[i].regno);
        fprintf(fp,"%d\n",array[i].age);

        for(int j=0;j<7;j++)
        {
            fprintf(fp,"%s\n",units[j]);
            fprintf(fp,"%d\n",array[i].marks[j]);

        }
        fprintf(fp,"\n\n");



    }
    printf("data saved successfully");

    fclose(fp);
    printf("\n\n");




}
