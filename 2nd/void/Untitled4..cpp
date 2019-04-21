#include<stdio.h>




    struct date
    {
        int day;
        int month;
        int year;

    };
    int main()
    {date birth_date;

    birth_date.day=26;
    birth_date.month=10;
    birth_date.year=1996;

    printf("\n kadir's birth date is %d-%d-%d.",birth_date.day,birth_date.month,birth_date.year);

    return 0;
    }
