
#include<stdio.h>


    struct date
    {
        int date ;
        char month;
        int year;
    };
    int main()
    {
    struct date birth_date;
    birth_date.date=26;
    birth_date.month="october";
    birth_date.year=1996;
    printf("kadir is birth date is %d-%s -%d",birth_date.date,birth_date.month,birth_date.year);
    return 0;
}
