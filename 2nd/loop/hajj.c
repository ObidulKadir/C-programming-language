#include<stdio.h>
int main()
{
    char* input[50];
    int i=0;
    while(scanf("%s",input) && strcmp(input,"*"))
    { if ( strcmp (input, "Hajj" ) == 0 )

        printf("case %d :hajj-e-akbar",++i);

    else

       printf("case %d:hajj e asgar",++i);
   }return 0;
   }
