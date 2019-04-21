#include<stdio.h>
int main()
{

    int n,n1,sum,i,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
{

        scanf("%d %d",&n,&n1);


        if(n>n1)
        {
            printf(">");
        }
        if(n<n1)
        {
            printf("<");
        }
        if(n==n1)
        {
            printf("=");
        }
    }

    return 0;
}


