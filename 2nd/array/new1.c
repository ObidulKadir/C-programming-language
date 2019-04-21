#include<stdio.h>
int main()
{
    int i,num,a[]={2,4,6,7},flag=0;

    for(i=0;i<4; i++)
   {
       if (a[i]>flag)
       {
           flag=a[i];
       }
   }
 printf("smaller than%d",flag);


    return 0;
}
