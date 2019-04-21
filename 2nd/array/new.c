#include<stdio.h>
void funx(int get_array[]);
int main (void)
{int niton[6]={2,4,5,6,8,9};
funx( niton );
getch();
return 0;
}
void funx(int get_array[])
{int i;
for(i=0;i<6;i++)
printf(" \n %d",get_array[i]);
}

