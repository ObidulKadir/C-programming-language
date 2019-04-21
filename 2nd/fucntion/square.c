#include<stdio.h>
void square_num(void)
{
    int i,num;
    printf("\n number ids square");
    for(num=1;num<=10;num++)
        printf("%3d %3d\n",num,num*num);
}
void cube_num(void)
{int i,num;
printf("\n\n number cube\n");
for(num=1;num<=10;num++)
printf("\n%3d %4d\n",num,num*num*num);

}
void main(void)
{square_num();
getch();
printf("\n\n press any key to see cubic number");
getch();
cube_num();
getch();
}
