0#include<stdio.h>
int main()
{int grade[5],i,sum=0;

float avg;
for(i=0;i<5;i++)
{
printf("\n enter grade [%d]:",i+1);
scanf("%d", &grade[i]);
sum+=grade[i];

}
avg=(float)(sum)/5.0;
printf("\n \n avg :%f",avg);
getch();




return 0;
}
