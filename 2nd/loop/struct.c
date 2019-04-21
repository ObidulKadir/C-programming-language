#include<stdio.h>
struct student
{
    char name[50];
    int id;
    double cgpa;
};
int main()

{
    struct student x;
    strcpy(x.name,"kadir");
    x.id=528;
    x.cgpa=3.56;
    printf("name %s \n id is=%d\n cgpa=%d",x.name,x.id,x.cgpa);
    return 0;
}
