#include<stdio.h>
int main()
{
    int i,j,J,I;

    int array[3][5]={{1,2,3,4,5},{1,2,3,5,6},{2,3,4,5,6}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\nelement [%d][%d]=%d\n",i,j,array[i][j]);
        }
    }
    return 0;
}
