#include<stdio.h>
int main()
{
    int i,j,a[100],n,key,l;
    printf("enetr the number of elements");
    scanf("%d",&n);
    printf("\n enetr the element ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\t enter the eleements tpo deletw");
    scanf("%d",&key);
    l=n;
    for(i=0; i<l; i++)
    {
        if(a[i]==key)
        {

            for(j=1; j<l; j++)
                a[j]=a[j+1];
            l--;
        }

    }
    printf("\n the new array is\n");
    for(i=0; i<l; i++)
        {printf("%d ",a[i]);
        }
    getch();
}
