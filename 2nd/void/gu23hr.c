#include<stdio.h>
int main()
#define ROW 2
#define COL 5
{ int row,col;

float array2d[ROW][COL]={{5,4,4,5},{6,7,4,8}};
for(row=0;row<ROW;row++)
{for(col=0;col<COL;col++)
{printf("\n element [%d][%d]=%6f",row,col,array2d[row][col]);
}
}getch();
	return 0;
}
