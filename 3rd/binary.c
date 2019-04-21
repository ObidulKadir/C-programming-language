#include<stdio.h>
int main()
{
    int i,f,l,m,n,search,array[100];
    printf("enter the number \tbinary serach  ");
    scanf("%d",&n);
    printf("enetr the ascending order \n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("enter te search\n");
    scanf("%d",&search);
    f=0;
    l=n-1;
    m=(f+l)/2;
    while(f<=l)
    {
        if(array[m]<search)
            f=m+1;
            else if (array[m]==search)
            {
                printf("%d found at location %d\n",search,m+1);
                break;

            }
            else
                l=m-1;

            m=(f+l)/2;
    }
    if(f>l)
        printf("not  found!! %d not in list",search);
    getch();
    return 0;
}
