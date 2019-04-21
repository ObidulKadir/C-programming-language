#include<stdio.h>

int main()
{
    int p,q,m,n;
    printf("\n how many lines:");
    scanf("%d",&n);
    printf("\n\n");
    for(p=1;p<=n;p++)
    {
        for(q=1;q<=(n-p);q++)
            printf("     ");
        m=p;
        for(q=1;q<=p;q++)
            printf("%5d",m++);
        m-=2;
            for(q=1;q<p;q++)
            printf("%5d",m--);
            printf("\n");
    }
    getch();
}
