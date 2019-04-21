
#include <stdio.h>
int main()
{
    int a,i,j=0, k[4]={10,20,30,40};
    printf("Enter the number you wana check in the aray... \n");
    scanf("%d",&a);
    for(i=0;i<4;i++)
    {
        if(a==k[i])
        {
            j+=k[i];
        }
    }
    if(j==0)
    {
        printf("%d is not in the aray",a);
    }
    else
    {
        printf("%d is in the aray ", a);
    }
    return 0;
}
