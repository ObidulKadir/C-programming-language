#include<stdio.h>
#include<conio.h>
struct student
{
    char*   name;
    long int id;
    char*  dept_name;
    float   cgpa;
} niton= {"niton",942044,"cse",3.55};
int main(void)
{
    clrscr();
    printf("\n student name : %s",student.name);
    printf("\n id_no#  :%ld",student.id);
    printf("\n dept . name: %.2f",student.name);

    printf("\n cgpa     :%.2f",student.cgpa);
    getch();
    return 0;
}



