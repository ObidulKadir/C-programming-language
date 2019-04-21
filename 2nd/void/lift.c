#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for (i=1;i<=T;i++)
{
    int a,b;
    scanf("%d %d",&a,&b);
        printf("case %d : %d \n ",i,4*(b-a>0?b:2*a-b)+10+9);
    }

    return 0;
}
