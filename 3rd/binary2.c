#include<stdio.h>
int main()
{
    int i,f,l,m,n,search,ar[100];
    printf("binary serch\n enter the number");
    scanf("%d",&n);
    printf("enter the value of acending order\n");
    for(i=0;i<n;i++)
    scanf("%d",ar[i]);
    printf("enter the search\n");
    scanf("%d",&search);
    f=0;
    l=n-1;
    m=(f+l)/2;
    while(f<=l)
    {
        if(ar[m]<search)

        f=m+1;
    else if(ar[m]==search)
    {
        printf("%d found%d",search,m+1);
        break;
    }
    else
        l=m-1;
    m=(f+l)/2;
    }
    if(f>l)
        printf("not found");
    getch();
    return 0;
}
