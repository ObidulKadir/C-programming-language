#include<stdio.h>
int main()
{
    int a[2][2]={5,4,2,1};
    int b[2][2]={6,7,8,9};
    int c[2][2],i,j,k,sum;
    printf("matrix A IS \n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",a[i][j]);
        printf("\n\n");
    }
    printf("\n matrix B is:\n\n");
    for(i=0;i<2;i++)
          {
        for(j=0;j<2;j++)
            printf("%d\t",b[i][j]);
        printf("\n\n");
    }

    printf("\n multiplication of A AND B IS:\n\t\t");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
            sum=sum+a[i][j]*b[i][j];
            c[i][j]=sum;
            printf("%d \t",c[i][j]);

        }printf("\n\t\t");
    }

    getch();
    return 0;
}
