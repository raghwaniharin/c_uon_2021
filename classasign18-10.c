#include<stdio.h>
int main(void)
{
    int csc111=85;
    int csc112=90;
    int csc113=95;
    int csc115=88;
    int csc126=99;
    int ccs009=85;
    int ccs001=100;
    int total=csc111+csc112+csc113+csc115+csc126+ccs001+ccs009;
    int average= total/7;

    printf("UNIT\t\tMARK\t\tGRADE\n");
    printf("CSC111:\t\t%d\t\tA\n",csc111);
    printf("CSC112:\t\t%d\t\tA\n",csc112);
    printf("CSC126:\t\t%d\t\tA\n",csc126);
    printf("CSC113:\t\t%d\t\tA\n",csc113);
    printf("CSC115:\t\t%d\t\tA\n",csc115);
    printf("CCS001:\t\t%d\t\tA\n",ccs001);
    printf("CCS009:\t\t%d\t\tA\n\n",ccs009);
    printf("total\t\t%d\n",total);
    printf("average\t\t%d\n",average);

}
