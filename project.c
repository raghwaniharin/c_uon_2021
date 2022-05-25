/*
author HARIN HARISH RAMJI
credentials
P15/142622/2021
csc115 project end of year 2021 and start of 2022
*/

/*the following project entails a way to solve the problem of entering vaccination details into
a file. vaccine and the persons details will be taken and shall then be stored in a text file which will then
be appended for new entries and shall also be user friendly.once the text file is created it is stored with the c file in the same folder.
because some people who are not Kenyan citizens will not have a Kenyan ID so the program allows use of alien ID. for the people who are
under 18 they have to use their passport number. this program takes into consideration this issues hence the use of if else in the function.

*/
#include<stdio.h>
#include<stdlib.h>

//have some global variables to avoid repetition of declaration in different functions
    char identification[16];
    char name[32];
    char org_name[32];
    char vc_name[16];
    char dummy[16];
    int vc_batch;
    int choice;
char* option()
{
    if(choice==1)
    {
        return "NATIONAL IDENTIFICATION NUMBER";
    }
    else if(choice==2)
    {
        return "ALIEN IDENTIFICATION NUMBER";
    }
    else if(choice==3)
    {
        return "PASSPORT NUMBER";
    }
    else
    {
        return "invalid input";
    }
}
void data_type()
{
    printf("\n\twelcome to the vaccination program\n\n\n");
    printf("please choose the identification type.\n1.NATIONAL IDENTIFICATION NUMBER\n2.ALIEN IDENTIFICATION NUMBER\n3.PASSPORT NUMBER\n");
    //this cannot be an integer because passport number contains a letter so we now have to store as a string
    scanf("%d",&choice);
}
void data_entry()
{
    /*the vaccine details are taken first because generally the hospital/clinic providing the
    vaccine shall be using this program*/
    printf("enter batch number\n");
    scanf("%d",&vc_batch);
    fgets(dummy,16,stdin);
    printf("enter name of organisation providing vaccination\n");
    fgets(org_name,32,stdin);
    printf("enter vaccine name\n");
    fgets(vc_name,16,stdin);
    printf("\n");
    if (choice==1 ||choice==2){
    printf("please enter the %s\n",option());
    scanf("%d",&identification);
    }
    else if(choice==3)
    {
        printf("please enter the %s\n",option());
        scanf("%s",identification);
    }
    else
    {
        printf("invalid input. try again\n");
        system("cls");
        exit(0);
    }
    fgets(dummy,16,stdin);
    printf("enter the full name according to the %s\n",option());
    /* the use of the dummy is for the buffer to move from scanf to fgets it skips one instruction hence there is no particular
    use of dummy just that it intergrates scanf with fgets*/

    fgets(name,32,stdin);



}
void print_data()
{
    printf("\n\nthe details are\n\n");
    printf("%s\n",option());
    printf("full name:: %s\n",name);
    printf("organisation name:: %s\n",org_name);
    printf("vaccine name:: %s\n",vc_name);
    printf("batch number:: %d\n",vc_batch);
}


void main()
{
    LOOP:;
    static int count=0;
    data_type();
    data_entry();
    print_data();
    int reentry;
    int data_save;


     printf("\n\ndo you want reenter the data due to some clerical errors.\nif yes press 1 if not press 2\n");
    scanf("%d",&reentry);
    if (reentry==1)
    {
        system("cls");
        goto LOOP;
    }

    printf("do you want to save the data to the file?\nif yes press 1\n");
    scanf("%d",&data_save);


    if(data_save==1)
    {
        FILE* fp=fopen("vaccine.txt","a");
        if(fp==NULL)
        {
            printf("file unavailable try again\n");
            exit(1);
        }

        fprintf(fp,"entry %d\n\n",count+1);
        fprintf(fp,"%s\n",name);
        fprintf(fp,"%s\n",org_name);
        fprintf(fp,"%s\n",vc_name);
        fprintf(fp,"%d\n",vc_batch);
        fprintf(fp,"\n\n");

        fclose(fp);
    }
    else{
        exit(1);
    }


    printf("\n\ndo you want to add another entry press 1 for yes and 2 for no\n");
    scanf("%d",&reentry);
    if (reentry==1)
    {
        system("cls");
        goto LOOP;
    }
    else
    {
        printf("thank you for using or vaccination data entry program\n");
        exit(1);
    }







}


