#include<stdio.h>
struct phonebook
{
    char* name;
    long int mobile_no;

};

int main()
{
    struct phonebook add;
    add.name="kadir";
    add.mobile_no=0;
    printf("%s ",add.name);
    printf("%ld",add.mobile_no);
    return 0;
}

