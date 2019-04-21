#include<stdio.h>
#define true 1
#define false 0
int main()
{
    int n,i,search;
  //  printf("\n enter the number:");
   // scanf("%d",&n);
    int a[5];
    printf("array element:");
    for(i=0; i<=3; i++)
    {
       printf("array size %d ",i);
        scanf("%d",&a[i]);
    }
    //printf("%d",a[i]);
     int   boolean=false;
    printf("\nsearch number:");
    scanf("%d",&search);
    for(i=0; i<=3; i++)
    {
        if(a[i]==search)
        {
           boolean=true;
        }


    }
    if(boolean){
        printf("item found");
    }
    else
    {

        printf("not found");
    }
return 0;

}
