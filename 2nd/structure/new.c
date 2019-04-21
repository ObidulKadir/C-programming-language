#include<stdio.h>
struct phonebook
{
    char name[1000];
    long long int mobile_no;

};

int main()
{
    struct phonebook add;
    add.name=kadir;
    add.mobile_no=01916358399;
    printf("%s ",add.name);
    printf("lld",add.mobile_no);
    return 0;
}
