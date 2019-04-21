#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int ar[r][c];
    scanf("%d%d",ar[r][c]);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
          printf("enetr the element ar[%d][%d]\n",ar[i][j]);


    }

    return 0;
}
