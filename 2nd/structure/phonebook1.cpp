#include<stdio.h>

struct person
{
    char name[35];

    long int mble_no;

};
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
int main()
{

    start();
    return 0;
}
void back()
{
    start();
}
void start()
{
    menu();
}
void menu()
{
    system("cls");
    printf("\t\tWELCOME TO PHONEBOOK");

    printf("\n\n\t\t\t  MENU\t\t\n\n");
    printf("\t1.Add New   \t2.List   \t3.Delete  \n\t4.Modify \t5.Exit");

    switch(getch())
    {
    case '1':
        addrecord();
        break;
    case '2':
        listrecord();
        break;
    case '3':
        deleterecord();
        break;
    case '4':
        modifyrecord();
        break;
    case '5':
        exit(0);
        break;
    default:
        system("cls");
        printf("\nEnter 1 to 6 only");
        printf("\n Enter any key");
        getch();

        menu();
    }
}
void addrecord()

system("cls");
FILE *f;
struct person p;
f=fopen("project","ab+");
printf("\nEnter name: ");
got(p.name);

printf("\nEnter phone number: ");
scanf("%ld",&p.mble_no);
printf("u have successfully saved\n");
printf("\n\nEnter any key");
fwrite(&p,sizeof(p),1,f);
getch();
system("cls");
menu();

}
