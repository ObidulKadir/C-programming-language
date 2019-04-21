#include <stdio.h>
#include <stdlib.h>

void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
struct element{

    char name[20];

    char phone[20];

}profile;

int main(void){
    int a;

    for(a=0;;a++){
       Menu();
    }
    return 0;
}

void Menu()      //Main Menu to select option
{
    int n;
 printf("\t\tWELCOME TO PHONEBOOK");

printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.List   \t3.Delete  \n\t4.Modify \t5.Exit");


    switch(n){
    case '1': addrecord();
    break;
   case '2': listrecord();
    break;
    case '3': deleterecord();
    break;
    case '4': modifyrecord();
    break;
    case '5': exit(0);
    break;
    default:
        printf("\nError! Wrong Number is Entered\nPlease Try Again");
        break;
    }
}

void addrecord()                    //Add New  Profile
{
    int x;
    struct element profile;

    printf("\n===Add New Profile===");
    printf("\n\nPlease enter the following information.");



    printf("Name\t: ");
    fflush(stdin);
    fgets(profile.name,20,stdin);

    for(x=0 ; x<20 ; x++)
    {
    if(profile.name[x] == '\n')
        profile.name[x] = '\0';
    }


    printf("Phone\t: ");
    scanf("%s", &profile.phone);


    printf("\nSYSTEM: Added Successfully.");

}

void listrecord(){
    FILE *fRead, *fWrite;
    char *TextFile;
    char c;


    TextFile="output.txt";

    fRead = fopen(TextFile, "r");
    c = getc(fRead);

    while (c != EOF){
    printf("%c", c);
    c = getc(fRead);
    }

    rewind(fRead);


}

void modifyrecord()
{
    struct element profile;

    FILE *fPtr;
    fPtr=fopen("output.txt","w");
    FILE *fPtr1;
    fPtr1=fopen("output.txt","a+");

    if (fPtr == NULL)
    printf("Error in opening file\n");
    if (fPtr1 == NULL)
    printf("Error in opening file\n");


    fprintf(fPtr1,"\n%10s %10s", profile.name,profile.phone);

    printf("\n%10s %10s ",  "Name","Phone");
    printf("\n%10s %10s",
             profile.name,  profile.phone);

    printf("\nSYSTEM: All number have been exported to output.txt file");

    fclose(fPtr);
    fclose(fPtr1);
}
void deleterecord(){
  struct person p;
    FILE *f,*ft;
	int flag;
	char name[100];
	f=fopen("project","rb");
	if(f==NULL)
		{

			printf("\nCONTACT'S DATA NOT ADDED YET.");

		}
	else
	{
		ft=fopen("temp","wb+");
		if(ft==NULL)

            printf("\nfile opening error");
		else

        {

        system("cls");
		printf("\nEnter CONTACT'S NAME:");
		got(name);

		fflush(stdin);
		while(fread(&p,sizeof(p),1,f)==1)
		{
			if(strcmp(p.name,name)!=0)
				fwrite(&p,sizeof(p),1,ft);
			if(strcmp(p.name,name)==0)
                flag=1;
		}
	fclose(f);
	fclose(ft);
	if(flag!=1)
	{
		printf("\nNO CONACT'S RECORD TO DELETE.");
		remove("temp.txt");
	}
		else
		{
			remove("project");
			rename("temp.txt","project");
			printf("\nRECORD DELETED SUCCESSFULLY.");

		}
	}
}
 printf("\n Enter any key");

	 getch();
    system("cls");
menu();
}
