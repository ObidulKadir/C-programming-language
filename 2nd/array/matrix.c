#include<stdio.h>
int main()

{ int row,col,array2d[2][2]={5,4,4,5};


for(row=0;row<2;row++)
{for(col=0;col<2;col++)
     printf("%d\t",array2d[row][col]);
printf("\n\t\t");
}
getch();
	return 0;
}
