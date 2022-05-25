#include<stdio.h>
void main()
{
    char name[20];
    int age;
    float weight;
    printf("Enter your name\n");
    scanf("%s",name);
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your weight\n");
    scanf("%f",&weight);

    FILE *fptointer;
    fptointer=fopen("test.txt","w");
    FILE *read;
    read=fopen("test.txt","r");
    if (fptointer==NULL)
    {
        printf("The file could not be opened\n");
    }
    else
    {

        fprintf(fptointer,"%s %d %f\n",name,age,weight);
        printf("Data saved successfully\n");
    }
    //char line[100];


    fclose(fptointer);
    //Reading from a file
    //variables to store data read from a file
    char names1[10];
    int age1;
    float weight1;
    if (read==NULL)
    {
        printf("FIle could not open\n");
    }
    else
    {
        fscanf(read,"%s %d %f",names1,&age1,&weight1);
        printf("The file data is names: %s, age %d, weight %.2f",names1,age1,weight1);

    }
    fclose(read);
}
