#include<stdio.h>
#include<stdlib.h>

typedef struct{
char* book_title[32];
char* book_author[16];
int quantity;
float price;
}book_details;

int  menu()
{
    menu_loop:;
    int choice;
    printf("choose option\n");
    printf("1.add book details\n");
    printf("2.save book details to a file\n");
    printf("3.view book details\n");
    printf("4.view total number of books\n");
    scanf("%d",&choice);
    if(choice<1 || choice>4)
    {
        printf("invalid number\n try again\n");
        goto menu_loop;
    }
    return choice;
}

void main()
{
    FILE* fp2=fopen("book.txt","r");
    FILE* fp=fopen("book.txt","w");
    LOOP:;
    int choice=menu();
    static int count=0;
    int select;
    book_details book;


    switch(choice)
    {
    case 1:
        printf("enter the title of the book\n");
        scanf("%s",book.book_title);
        printf("enter the name of the author\n");
        scanf("%s",book.book_author);
        printf("enter quantity of book\n");
        scanf("%d",&book.quantity);
        printf("enter price of book\n");
        scanf("%f",&book.price);
        printf("do you want to try another task press 1\n");
        scanf("%d",&select);
        if (select==1)
        {
        count=count+1;
        system("cls");
        goto LOOP;}
        else{exit(1);}
        break;

    case 2:
         printf("\n\nthe details are\n");
        printf("%s\n",book.book_title);
        printf("%s\n",book.book_author);
        printf("%d\n",book.quantity);
        printf("%.2f\n",book.price);


        if(fp==NULL)
        {
            printf("file unavailable try again\n");
            exit(1);
        }
        fprintf(fp,"%s\n",book.book_title);
        fprintf(fp,"%s\n",book.book_author);
        fprintf(fp,"%d\n",book.quantity);
        fprintf(fp,"%.2f\n",book.price);

        fclose(fp);
        printf("data saved successfully\n");
        printf("do you want to try another task press 1\n");
        scanf("%d",&select);
        if (select==1)
        {
        system("cls");
        goto LOOP;}
        else{exit(1);}
        break;

    case 3:
        printf("retrieving data from book.txt\n");

        if(fp2==NULL)
        {
            printf("file unavailable try again\n");
            exit(1);
        }
        fscanf(fp2,"%s",book.book_title);
        fscanf(fp2,"%s",book.book_author);
        fscanf(fp2,"%d",&book.quantity);
        fscanf(fp2,"%.2f",&book.price);
        fclose(fp2);
        printf("\n\nthe details are\n");
        printf("%s\n",book.book_title);
        printf("%s\n",book.book_author);
        printf("%d\n",book.quantity);
        printf("%.2f\n",book.price);
        printf("do you want to try another task press 1");
        scanf("%d",&select);
        if (select==1)
        {
        system("cls");
        goto LOOP;}
        else{exit(1);}
        break;
    case 4:
        printf("the number of books are\n%d\n",count);
         printf("do you want to try another task press 1");
        scanf("%d",&select);
        if (select==1)
        {
        system("cls");
        goto LOOP;}
        else{exit(1);}
        break;
    default:
        printf("invalid input\n");
        printf("do you want to try another task press 1");
        scanf("%d",&select);
        if (select==1)
        {
        system("cls");
        goto LOOP;}
        else{exit(1);}
        break;
    }


}
