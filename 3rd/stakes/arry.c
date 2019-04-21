
#include<stdio.h>
#include<conio.h>
void main()
{
    int ary[8]={2,3,4,5,6,7,8};
    int n=7;
    int position,value,save,i;
    scanf("%d %d",&position,&value);
    if(position<n)
    {
        for(i=n; i>position; i--)
        {
            ary[i]=ary[i-1];
        }n++;
        ary[position]=value;
    }
    for(i=0; i<n; i++)
        printf("\n%d\n",ary[i]);
}
