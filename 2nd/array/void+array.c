#include<stdio.h>
void niton(int get_array[])
{
int  n;
for(n=0;n<5;n++)
    printf("\n %d",get_array[n]);
}
int main()
{

int ar[5]={10,19,10,20,2};

niton(ar);
getch();

return 0;
}
