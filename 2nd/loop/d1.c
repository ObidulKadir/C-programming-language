#include<stdio.h>
int main()

{
    int length,height,a,j,k,i,t;
    scanf("%d",&t);
    for(a=0; a<t; i++)
    {
        scanf("%d%d",&length,&height);
        {
            for(i=0; i<length; i++)
            {
                for(j=1; j<height; j++)
                {
                    for(k=1; k<=j; k++)
                        printf("%d",j);
                    printf("\n");
                }
                for(k=height-1; j>=1; j--)
                {
                    for(k=1; k<=j; k++)
                        printf("%d", j);
                    printf("\n");
                }
                if(i!=(length-1))printf("\n");
            }
            if(a!=(t-1))printf("\n");
        }
    }
}
