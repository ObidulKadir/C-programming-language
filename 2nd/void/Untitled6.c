#include<stdio.h>
int main()
{int a[2][2]={5,7,4,8},i,j,size=0;
for(i=0;i<2;i++)

{for(j=0;j<2;j++)
printf(" %d",a[i][j]);
printf("\n");
}
for(i=1;i<size+1;i++)

{for(j=1;j<size+1;j++)
printf(" element %d %d",i,j);
printf("\n");
}getch();
return 0;
}
