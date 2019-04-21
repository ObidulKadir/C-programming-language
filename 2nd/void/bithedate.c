#include<stdio.h>

void B_date(int x,int y,int z){

printf("\n kadir's birth date is %d-%d-%d.",x,y,z);
}
int main(void)
{

    struct date
    {
        int day;
        int month;
        int year;

    };
    struct date birth_date;

    birth_date.day=26;
    birth_date.month=10;
    birth_date.year=1996;
    B_date(birth_date.day,birth_date.month,birth_date.year);
    getch();
    return 0;
}
