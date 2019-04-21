#include<stdio.h>///number, name, delete, save, search, exit
#include<string.h>
struct phnbk
{
    int phnnmbr[20][12];
    char nm[20];
};
int main()
{
    int ck,chek;
    char nme[25], nmbr[12],delnme[25],search[100];
    phnbk iphn;

    while (1)
    {
        printf("wellcome to phonebook \n\n");
        printf("\t1.add num\n");

        printf("\t2.delete?\n");
        printf("\t3.search?\n");
        printf("\t4.exit?\n");
        scanf("%d",&ck);
        switch (ck)
        {

        case 1:
            printf("enter ur nme\n");
            scanf("%s",&nme);
            printf("enter ur nmbr\n");
            scanf("%s",&nmbr);
            printf("%s \n%s\n",nme,nmbr);
            printf("u have successfully saved\n");
            break;


        case 2:
            printf("enter ur nme\n");
            scanf("%s",&delnme);
           // if(nme==delnme)

                printf("you succssfully deleted");
           // else
                //printf("entered nme is invalid");
        case 3:
            printf("enter nme");
            scanf("s",&search);
            printf("search");
            break;
        case 4:
            printf("")

        }
    }
return 0;

}
