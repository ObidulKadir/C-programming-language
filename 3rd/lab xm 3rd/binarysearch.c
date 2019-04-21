#include<stdio.h>
int  main()
{
    int i,f,l,m,n,search,a[100];
    printf("enter the number of values");
    scanf("%d",&n);
    printf("entwr the values in ascendings order");
    for(i=0; i<n; i++)
        {scanf("%d",a[i]);}
    printf("enetr the search");
    scanf("%d",&search);
    f=0;
    l=n-1;
    m=(f+l)/2;
    while(f<=l)
    {
        if(a[m]<search)
            f=m+1;
        else if(a[m]==search)
        {
            printf("%d%d",search,m+1);
            break;
        }
        else
            l=m-1;
        m=(f+l)/2;

    }
    if(f>l)
        printf("not found");
    return 0;
}
