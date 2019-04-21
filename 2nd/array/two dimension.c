#include<stdio.h>
int main()
{
    int array [10][10];
    int i,j,m,n;
    printf("Enter the order");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("MATRIX ARRAY1\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",  array[i][j]);
        }
        printf("\n");
    }
}


