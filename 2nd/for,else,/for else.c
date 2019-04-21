#include<stdio.h>
int main ()
{
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
            printf("%d is big",n1);
        else
            printf("%d is big",n3);

    }
    else
    {
        if(n2>n3)
            printf("%d",n2);
        else
            printf("%d",n3);
    }
    printf("\n thank you");
    return 0;
}

