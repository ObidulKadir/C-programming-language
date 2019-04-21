#include<stdio.h>
int main()
{
    int a[3][3]= {5,4,5,5,6,7,66,77,88};
    int b[3][3]= {1,1,1,1,1,1,1,1,1};
    int c[3][3],i,j,k,sum;
  /* printf("\n mTRIX A ia:\n\t\t");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t",a[i][j]);
        printf("\n\t\t");
    }
    printf("\n mTRIX A ia:\n\t\t");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t",b[i][j]);
        printf("\n\t\t");


    }*/
    printf("\n milyiplication A &B iS:\n\t\t");
    {
        for(i=0; i<3; i++)

            for(j=0; j<3; j++)
            {

                sum=0;
                for(k=0; k<3; k++)
                    sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
                printf("%d\t",c[i][j]);
            }

        printf("\n\t\t");
    }

    getch();
    return 0;
}
