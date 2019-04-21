#include<stdio.h>
int main()
{
    int arry[6]={4,5,8,3,9};
    int n=5;
    int postion,value,i,save;
    scanf("%d%d",&postion,&value);
    if(postion<n)
    {
        for(i=n;i>postion;i--)
       {

        arry[i]=arry[i-1];

    }n++;
    arry[postion]=value;
    }
    for(i=0;i<n;i++)

        printf("%d",arry[i]);
    }
