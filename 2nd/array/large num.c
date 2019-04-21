#include<stdio.h>
int main(){int  i,a[4],large=0;
for(i=0;i<4;i++)
{scanf("%d",&a[i]);
if(a[i]>large)
large=a[i];

} printf("%d",large);
return  0;
}
 

