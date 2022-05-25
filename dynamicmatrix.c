#include<stdio.h>
void main()
{   int n,m;
    printf("enter rows of matrix\n");
    scanf("%d",&n);
    printf("enter columns of matrix\n");
    scanf("%d",&m);
    int i,j;
    int matrix1[n][m],matrix2[n][m],sum[n][m];
    printf("enter values for matrix1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("[%d][%d]",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("enter values for matrix2\n");

        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("[%d][%d]",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    printf("the matrices were\n");
    int x,y;
    for(x=0;x<n;x++)
    {
        for(y=0;y<m;y++)
        {
            printf("%d ",matrix1[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    for(x=0;x<n;x++)
    {
        for(y=0;y<m;y++)
        {
            printf("%d ",matrix2[x][y]);
        }
        printf("\n");
    }
    printf("adding the matrices............\n");
    printf("and the sum is\n");
    for(x=0;x<n;x++)
    {
        for(y=0;y<m;y++)
        {
            printf("%d ",sum[x][y]);
        }
        printf("\n");
    }


}
