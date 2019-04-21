#include<stdio.h>
void main()
{
    int ary[6]={4,5,6,7,8};
    int n=5;
    int position,value,i,save;
    scanf("%d%d",&position,&value);
    if(position<n)
    {
        for(i=n;i>position;i--)
            ary[i]=ary[i-1];
    }
    n++;
    ary[position]=value;
    for(i=0;i<n;i++)
        printf("%d",ary[i]);
}
