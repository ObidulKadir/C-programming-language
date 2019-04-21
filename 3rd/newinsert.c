#include<stdio.h>
int main()
{
    int arr[5]={2,4,5,6};
    int n=5;
    int pos,bal,i,save;
    scanf("%d%d",&pos,&bal);
    if(pos<n)
    {
        for(i=n;i>pos;i--)
           {

           arr[i]=arr[i-1];
    }
    n++;
    arr[pos]=bal;}
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    return 0;
}
